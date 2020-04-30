from utils import *
import os
output_List = []
def parseBPFile(file_dir, file_name):
    if "BP_" in file_name and ".uasset" in file_name:
        file_name = file_name.replace(".uasset" , "")
        output_List.append("\t{0} = {1}/{0}_C".format(file_name , file_dir ))
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
    output_List.append("BPType = {")
    parse_bp_files = ["/Blueprints"]
    for bp in parse_bp_files:
        parseFiles(root_dir + bp , root_dir, parseBPFile)
    output_List.append("};")
    with open(out_file, 'wb') as f:
        f.write("\n".join(output_List).encode())