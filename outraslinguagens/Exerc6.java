package javaapplication1;
import java.util.Scanner;
public class Exerc6 {
    public static void main(String[] args) {    
    Scanner in = new Scanner(System.in);
    double [] vet = {4,7,1,10,3,5,12};
    
    
    double maior = vet[0];
    double menor = vet[0];
    double total = 0;
    for(indice = 0;indice < vet.length;indice++){
        if(maior<vet[indice]){
            maior=vet[indice];
        }//if
        if (menor>vet[indice]) {
            menor=vet[indice];
        }
        System.out.println("O número de " + "indice" + indice + "" + "eh" + vet[indice]);
        total = total + vet[indice];
        
    } //for
    double media = total/5;
    System.out.println("a media eh" + media);
    System.out.println("o maior eh" + maior);
    System.out.println("o menor eh" + menor);
    


    }//static
    



}