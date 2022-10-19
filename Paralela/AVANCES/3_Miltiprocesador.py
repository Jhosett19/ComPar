import time
import multiprocessing

from multiprocessing import Process

def increase():
    time_ini = time.time()
    print("_Inicio_")
    #Proceso
    i = 0
    for _ in range(1000000000):
        i += 1
    print(i)
    #/Proceso
    print ("_Fin_")
    time_end = time.time()
    total = time_end - time_ini
    print(total)

if __name__ == '__main__':
    multiprocessing.set_start_method('spawn')
    for _ in range(5):
        p = Process(target=increase, args=()) #Proceso
        p.start()
    # increase()