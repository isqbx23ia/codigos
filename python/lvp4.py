def main():

    #Declaração de váriaveis:
    a = int()
    b = int()
    c = int()

    #Entrada de dados:
    a = int(input())
    b = int(input())
    c = int(input())

    #Processamento e saída de dados:
    if a < b and a < c:
        print(f'MENOR:{a}')
    elif b < c:
        print(f'MENOR:{b}') 
    else:
        print(f'MENOR:{c}')

    return 0
if __name__=="__main__":
    main()