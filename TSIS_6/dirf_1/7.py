with open('file_name.txt','r') as firstfile, open('new.txt','a') as secondfile:
    for line in firstfile:
             secondfile.write(line)