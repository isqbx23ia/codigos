'''Modelo de saída de dados:
SOMATORIO=99.999999 PRECISAO=99.999999 QUANTIDADE DE TERMOS=99'''



def main():
    sinal = 1
    pi = float()
    den = int(1)
    nume = int(4)
    while (nume / den >= 0.0001):
        pi += sinal * (nume/den)
        den += 2 
        sinal = sinal * (- 1)
        
    print(pi)

    return 0
if __name__=="__main__":
    main()