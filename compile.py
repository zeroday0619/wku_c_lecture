import os
import typer
from datetime import datetime

def compile_c_file(num: int):
    # ex) 20220928-0.c
    now = datetime.now()
    date = now.strftime("%Y%m%d")
    
    file_name = date + f"-{num}"
    if os.path.exists(f"2st/{file_name}.c"):
        print(f"{file_name}.c 파일이 이미 존재합니다.")
        os.system(f"gcc 2st/{file_name}.c")
        print(f"2st/{file_name} 파일이 생성되었습니다.")

if __name__ == "__main__":
    typer.run(compile_c_file)