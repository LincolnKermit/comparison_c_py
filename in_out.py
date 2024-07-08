import os

res = input("Ready ? : (y/n)")

if res == "y":
    os.system("clear")
    print("Disk usage powered by disk utility manager. \n \n")
    os.system("df -h")
else:
    print("Exiting...")