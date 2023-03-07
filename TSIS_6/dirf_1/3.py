import os
print("Test a path exists or not:")
path = r'C:\\Users\Лия\Desktop\PP2\tsis_6\1.py'
print(os.path.exists(path))
if os.path.exists(path)==True:
    print("\nFile name of the path:")
    print(os.path.basename(path))
    print("\nDir name of the path:")
    print(os.path.dirname(path))
else:
    print("There's no such path")
