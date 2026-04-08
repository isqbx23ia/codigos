'''Faça um programa em Python3 que:

Leia três números reais quaisquer que representam os coeficientes (a,b e c) de uma equação do segundo grau no formato:

ax2 + bx + c = 0 

Resolver (no domínio dos números reais) a equação do 2o. grau se possível.


Se os três números informados não formarem uma equação do 2o. grau imprima uma msg NAO EH EQ 2G.
Se os três números informados formarem uma equação do 2o. grau com raízes reais e se existirem raízes reais, imprima uma msg com os valores das raízes em ordem crescente, tal qual o formato a seguir:
x1=99.99
x2=99.99


Se os três números informados formarem uma equação do 2o. grau e não existirem raízes reais imprima uma mensagem, tal qual:

NAO TEM SOLUCAO NO DOMINIO DO NUMEROS REAIS'''


def main(): 

    a = float()
    b = float()
    c = float()
    delta = float()
    x1 = float()
    x2 = float()



    a = float(input())
    a = float(input())
    c = float(input())

    delta = (b**2) - (4*a*c)
    if a != 0:
        if delta > 0 or delta < 0:
            x1 = (-b + (delta**0.5)) / (2*a)
            x2 = (-b - (delta**0.5)) / (2*a)
            if x2 > x1:
                print(f'x1={x1:.2f}')           
                print(f'x2={x2:.2f}')
            else:
                print(f'x1={x2:.2f}')
                print(f'x1={x1:.2f}')
        if delta == 0:
            print('NAO TEM SOLUCAO NO DOMINIO DO NUMEROS REAIS')
    print('NAO EH EQ 2G')    






if __name__=="__main__":
    main()
