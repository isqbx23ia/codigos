def main():
    #Declaração de váriaveis:
    num1 = float()

    #Entrada de dados:
    num1 = float(input())

    #Processamento e saída de dados:
    if num1 > 0:
        print(f'NUM={num1:.2f} POSITIVO')
    if num1 < 0:
        print(f'NUM={num1:.2f} NEGATIVO')
    if num1 == 0:
        print(f'NUM={num1:2f} NULO')
    
    
    
    
    
    return 0
if __name__=="__main__":
    main()