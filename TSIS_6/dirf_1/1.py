import os
#print(os.getcwd())
#print(print(os.getcwd()))
#print(os.listdir())
mypath = 'C:\\Users\\Лия\\Desktop\\Web\\fifth'
print("\nOnly directories")
print([ name for name in os.listdir(mypath) if os.path.isdir(os.path.join(mypath, name)) ])
print("\nFiles and directories")
print([ name for name in os.listdir(mypath)])
print("\nFiles:")
print([name for name in os.listdir(mypath)])