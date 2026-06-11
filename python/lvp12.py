import math
def main():
    a = float()
    b = float()
    area = float()

    a = float(input())
    b = float(input())


    while (a!=0 or b!=0):
        if (a == 0 or b == 0):
            area = 0.0
        else:
            area = abs((b*b) / (2*a))

    print(f"A={a:.2f} B={b:.2f} Area={area:.2f}")

    a = float(input())
    b = float(input())
    

   