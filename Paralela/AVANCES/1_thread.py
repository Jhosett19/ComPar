import time #pip install time
from threading import Thread

def holamundo():
    time_ini = time.time()
    print("Inicio_")
    #Proceso
    i = 0
    for _ in range(1000000000):
        i += 1
    print(i)
    #Proceso
    print ("Fin_")
    time_end = time.time()
    total = time_end - time_ini
    print(total)


for i in range(5):
    t = Thread(target=holamundo, args=())
    t.start()