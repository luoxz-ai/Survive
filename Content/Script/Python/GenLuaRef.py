from utils import *
import os
output_List = []
output_List_BpClass = []
def parseBPFile(file_dir, file_name):
    if "BP_" in file_name and ".uasset" in file_name:
        file_name = file_name.replace(".uasset" , "")
        output_List.append("\t{0} = '{1}/{0}_C' ,".format(file_name , file_dir ))
        output_List_BpClass.append("\t{0} = BpType.{0} ,".format(file_name ))
        pass  
def parseFiles(root_dir , rel_dir  , callback = None):
    if not callback:
        return
    for parent,dir_names,file_names in os.walk(root_dir):
        rel_parent = parent.replace(rel_dir,"/Game")
        rel_parent = rel_parent.replace("\\","/")
        for file_name in file_names:
            callback(rel_parent, file_name)
def AutoGenBlueprintTypeRefForLua(root_dir):
    UPrint("excute ", root_dir, "AutoGenBlueprintTypeRefForLua")
    out_file = root_dir + "/Script/GamePlay/Gen/BlueprintTypeGen.lua";
    out_file2 = root_dir + "/Script/GamePlay/Gen/BpClass.lua";
    output_List.append("local BpType = {")
    parse_bp_files = ["/Blueprints"]
    for bp in parse_bp_files:
        parseFiles(root_dir + bp , root_dir, parseBPFile)
    output_List.append("}")
    output_List.append("GA.BpType = BpType")
    with open(out_file, 'wb') as f:
        f.write("\n".join(output_List).encode())
    context = None
    with open(out_file2, 'rb') as f:
        context = RePlaceRegions(f.read() , b"-- bpmap reg auto-gen" ,"\n".join(output_List_BpClass).encode() )
    with open(out_file2, 'wb') as f:
        f.write(context)