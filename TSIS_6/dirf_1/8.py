import os
while True:
    command = input()
    if command == 'del':
        what = input()
        if os.path.exists(what):
            print("There were such file")
            os.remove(what)
            print('And now not')
        else:
            print('There is no such file')