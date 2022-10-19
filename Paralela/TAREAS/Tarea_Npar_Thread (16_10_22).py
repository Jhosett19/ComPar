import time #pip install time
import math
from threading import Thread

# prueba
def holamundo():
    time_ini = time.time()
    print("Inicio_")
    print("Paralelos")
    print ("Fin_")
    time_end = time.time()
    total = time_end - time_ini
    print(total)
    print("\n")
    
# numPar   
def numPar(n):
    time_ini = time.time()
    i = 2
    while(i < (n+1)):
        print(i)
        i = i + 2
    print ("Total: ", math.floor((n/2)))
    time_end = time.time()
    total = time_end - time_ini
    print("Tiempo: ", total)
    
#hilos
t = Thread(target=numPar(10))
t.start()



