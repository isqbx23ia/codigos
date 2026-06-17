def main():


    y = int(input())
    x = y/2
    i = 0

    while (i <= 20):
        x = (x**2+y)/(2*x)
        i += 1
    
    print(x)
















    return 0
if __name__=="__main__":
    main()