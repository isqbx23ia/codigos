def main():
    aux = float();  
    n = float()
    l = float()
    m = float()

    l = float(input())
    m = float(input())
    n = float(input())

    if l > m or l > n:
        if m < n:
            aux = l
            l = m
            m = aux
        else:
            aux = l
            l = n
            m = aux

    if m > n:
        aux = m
        m = n
        n = aux

    if l > m and l > n and m > n:
        print(f'MENOR={n:.2f} INTERMEDIARIO={m:.2f} MAIOR={l:.2f}')

    if l > m and l > n and n > m:
        print(f'MENOR={m:.2f} INTERMEDIARIO={n:.2f} MAIOR={l:.2f}')

    if m > l and m > n and l > n:
        print(f'MENOR={n:.2f} INTERMEDIARIO={l:.2f} MAIOR={m:.2f}')
    
    if m > l and m > n and n > l:
        print(f'MENOR={l:.2f} INTERMEDIARIO={n:.2f} MAIOR={m:.2f}')

    if n > m and n > l and m > l:
        print(f'MENOR={l:.2f} INTERMEDIARIO={m:.2f} MAIOR={n:.2f}')

    if n > m and n > l and l > m:
        print(f'MENOR={m:.2f} INTERMEDIARIO={l:.2f} MAIOR={n:.2f}')




if __name__=="__main__":
    main()



    '''MENOR=99.99 INTERMEDIARIO=99.99 MAIOR=99.99'''