def main():
    #declaração de variáveis
    vh = float(0.0)
    horas = int(0)
    ir = float(0.0)
    inss = float(0.0)
    sindicado = float(0.0)
    salario = float(0.0)
    liquido = float(0.0)

    #entrada de dados
    vh = float(input())
    horas = int(input())

    #processamento
    salario = vh * horas
    ir = salario * 11/100
    inss = salario * 8/100
    sindicato = salario * 5/100
    liquido = salario - (ir + inss + sindicato)
    

    #saída de dados
    print(f'+ Salário Bruto : R$ {salario:.2f}')
    print(f'- IR (11%) : R$ {ir:.2f}')
    print(f'- INSS (8%) : R$ {inss:.2f}')
    print(f'- Sindicato ( 5%) : R$ {sindicato:.2f}')
    print(f'= Salário Líquido : R$ {liquido:.2f}')    
    return 0

if __name__ == "__main__":
    main()