import time
import math
from threading import Thread
import multiprocessing
from multiprocessing import Process

def velocidad():
    time_ini = time.time()
    NV = [2.86, 3.58, 3.14, 3.81]
    for i in NV:
        if i > 3.2:
            M = i * 1.2
            print(M)
        else:
            print(i)
    time_end = time.time()
    total = time_end - time_ini
    print("TIEMPO: ", total)

#procesos
if __name__ == '__main__':
    multiprocessing.set_start_method('spawn')
    p = Process(target=velocidad, args=())
    p.start()

#NOTA DE RESULTADO:
# 2.86
# 3.58*1.2=4.296
# 3.14
# 3.81*1.2=4.572
