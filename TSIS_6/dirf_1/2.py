import os
print('Exist:', os.access('C:\\Users\Лия\Desktop\PP2\tsis_6\1.py>', os.F_OK))
print('Readable:', os.access('C:\\Users\Лия\Desktop\PP2\tsis_6\1.py>', os.R_OK))
print('Writable:', os.access('C:\\Users\Лия\Desktop\PP2\tsis_6\1.py>', os.W_OK))
print('Executable:', os.access('C:\\Users\Лия\Desktop\PP2\tsis_6\1.py>', os.X_OK))