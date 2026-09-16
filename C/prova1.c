#include <stdio.h>
#include <math.h>

//incompleto
double metodobabilonico(double num){
    double aprox = num;
    doublo erro;
    if (num == 0)

}


int main(){


    int a,b,c;
    double delta,x1,x2;
    scanf("%d%d%d", &a,&b,&c);
    
    //delta
    delta = (b*b - 4.0*a*c);
    printf("DELTA= %.2f\n", delta);
    //raizes
    if (delta < 0){
        printf("Não há raizes reais");

    }
    else if (delta == 0){
        x1 = -b / (2*a);
        printf("Há 1 raiz real");
        printf("X1= %.2f\n", x1);

    }
    else {
    x1 = (-b + sqrt(delta)) / (2.0*a);
    x2 = (-b - sqrt(delta)) / (2.0*a);

    
    printf("Há 2 raízes diferentes");
    printf("X1= %.2f\n", x1);
    printf("X2= %.2f\n", x2);
        

    }




    return 0;
}
