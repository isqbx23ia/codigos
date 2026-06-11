'''Fazer um algoritmo que calcule o volume de uma esfera em função do raio R. O raio deverá variar de 0 a 20cm de 0,5 em 0,5cm.
V = 4/3*pi*r³
'''



import math
def main():
    raio = float()
    esfera = float()
    volume = float()
    
    raio = 0.0
    pi = 3.14

    while raio <= 20:
        vol = (4.0/3.0) * pi * (raio**3)
        print(f"RAIO={raio:.2f} VOLUME={volume:.2f}")
        raio = raio + 0.5

    return 0


if __name__=="__main__":
    main()

 
