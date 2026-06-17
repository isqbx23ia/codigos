
def main():

    
    blm = float()
    qtdtrans = int()
    txserv = float()
    numcont = str()
    valor = float()
    codig = str()
    saldo = float()
    
    
    ######################

    blm = float(input())
    qtdtrans = int(input())
    txserv = float(input())
    numcont = str(input())
    #valor = float(input())
    saldo = float(input("saldo "))
    #codig = str(input())
    ####################
    print(saldo - valor)
    while (qtdtrans != 0):
        valor = float(input())
        codig = str(input())
        if (codig == "R"):
            saldo = saldo - valor
        elif (codig == "D"):
            saldo = saldo + valor
        qtdtrans -= 1
        
    if (saldo/txserv) < blm:
        print(f"CONTA={numcont} SALDO FINAL={saldo} NAO HA FUNDOS")
    if (saldo/txserv) > blm:
        print(f"CONTA={numcont} SALDO FINAL={saldo}")
    saldo = 0
    numcont = str(input("numcont"))
    blm = float(input())
    txserv = float(input())
    qtdtrans = int(input())
    saldo = float(input())

    return 0

if __name__=="__main__":
    main()