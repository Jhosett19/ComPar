import time #pip install time
import math
from threading import Thread
import multiprocessing
from multiprocessing import Process

def distancia():
    time_ini = time.time()
    x1=1
    y1=1
    x2=3
    y2=3
    d=math.sqrt(((x2-x1)**2)+((y2-y1)**2))
    x=(x2-x1)
    y=(y2-y1)
    print ("Distancia entre 2 puntos: ", d)
    time_end = time.time()
    total = time_end - time_ini
    print("TIEMPO: ", total)

#procesos
if __name__ == '__main__':
    multiprocessing.set_start_method('spawn')
    p = Process(target=distancia, args=())
    p.start()