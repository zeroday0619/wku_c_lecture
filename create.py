import os
import typer
from datetime import datetime

# 과제 및 예제 C언어 소스코드 파일 생성
def create_c_file(num: int):
    # ex) 20220928-0.c
    now = datetime.now()
    date = now.strftime("%Y%m%d")

    # 파일 이름 생성
    if os.path.exists(f"2st/{date}-{num}.c"):
        print(f"{date}-{num}.c 파일이 이미 존재합니다.")
        return
    
    file_name = date + f"-{num}.c"
    print(f"{file_name} 파일을 생성합니다.")
    with open("2st/"+file_name, "w") as f:
        f.write(f"/* Path: 2st/{file_name} */\n\n")
        f.write("#include <stdio.h>\n\n")
        f.write("int main(void)\n")
        f.write("{\n")
        f.write("\treturn 0;\n")
        f.write("}\n")
    f.close()
    print(f"2st/{file_name} 파일이 생성되었습니다.")

if __name__ == "__main__":
    typer.run(create_c_file)