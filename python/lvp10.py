def main():
    #Declaração de váriaveis:
    idade = int()
    media = int()
    cont = int(0)
    soma = int(0)

    #Entrada de dados:
    idade = int(input())
    while idade > 0:
        soma = soma + idade
        cont = cont + 1
        

        idade = int(input())
    if cont > 0:
        media = soma / cont
        print(f'MEDIA DAS IDADES={media:.2f}')
    
    




    return 0


if __name__=="__main__":
    main()