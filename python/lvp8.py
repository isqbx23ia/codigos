def main():
    
    #Declaração de variáveis
    a = float()
    b = float()
    c = float()
    sp = float()
    area = float()
    
    #Entrada de dados
    a = float(input())
    b = float(input())
    c = float(input())
    
    sp =  (a + b + c ) / 2
    
    area = (sp* (sp - a) * (sp-b) * (sp-c))**0.5

    if (a + b > c) or (b + c > a) or (c + a > b):
        print(f"AREA={area:.2f}")
    
    else:
        print('NAO TRIANGULO')
    
    
    


if __name__=="__main__":
    main()
    
'''Leia três números reais quaisquer verifique se estes valores formam um triângulo, se formarem calcule e imprima a área do triângulo usando a fórmula de Heron, caso contrário imprima a msg "NAO TRIANGULO".

MODELO DE SAÍDA:

AREA=99.99

ou

NAO TRIANGULO'''