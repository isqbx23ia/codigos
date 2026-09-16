package javamath1;

public class prova1 {
    
public static void main (String[] args){

    Scanner teste = new Scanner(System.in);
    int a,b,c;
    double delta,x1,x2;

    int a = teste.nextInt();
    int b = teste.nextInt();
    int c = teste.nextInt();

    

    delta = (b*b - 4.0*a*c);
    System.out.println("DELTA= %.2f\n", delta);
    //raizes
    if (delta < 0){
       System.out.println("Não há raizes reais");

    }
    else if (delta == 0){
        x1 = -b / (2*a);
        System.out.println("Há 1 raiz real");
        System.out.println("X1= %.2f\n", x1);

    }
    else {
    x1 = (-b + sqrt(delta)) / (2.0*a);
    x2 = (-b - sqrt(delta)) / (2.0*a);

    
    System.out.println("Há 2 raízes diferentes");
    System.out.println("X1= %.2f\n", x1);
    System.out.println("X2= %.2f\n", x2);
        

    }




    

}


