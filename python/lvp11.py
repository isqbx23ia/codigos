'''1.12.6. Um determinado material radioativo perde metade de sua massa a cada 50 segundos. Dada a
massa inicial. em gramas,
 fazer um algoritmo que determine o tempo necessário para que essa massa se
tome menor do que 0.5 grama.
 Escreva a massa inicial, a massa final e o tempo calculado em horas, minutos
e segundos.

MASSA INICIAL=99.99 MASSA FINAL=99.99 TEMPO DECORRIDO=99:99:99
'''
def main():
    
    #Declaração de váriaveis:
    massaini = float()
    massa2 = float()
    massaf = float()
    horas = int()
    minutos = int()
    segundos = int()
    tempo = int(0)

    #Entrada de dados
    massaini = float(input())
    massa2 = massaini

    #Processamento
    while (massaini >= 0.5): 
        massaini = massaini/2
        tempo = tempo + 50.0

       

        horas = tempo // 3600
        minutos = (tempo%3600)//60
        segundos = tempo%60

    print(f"MASSA INICIAL={massa2:.2f} MASSA FINAL={massaini:.2f} TEMPO DECORRIDO={int(horas):02d}:{int(minutos):02d}:{int(segundos):02d}")
   
    return 0
if __name__=="__main__":
    main()


