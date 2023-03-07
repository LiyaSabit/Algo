import os
f = open('file_name.txt', "r")
print(f.read())
lines = []
while True:
    line = input()
    if line:
        lines.append(line)
    else:
        break
with open('file_name.txt', 'a') as f:
        f.write('\n'.join(lines))