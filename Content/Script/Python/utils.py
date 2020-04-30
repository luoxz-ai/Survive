def UPrint(*params):
    params = map(str,params)
    result = " ".join(params)
    print(result)
    with open("python.log", "ab+") as f:
        result = result + "\n"
        f.write(result.encode())