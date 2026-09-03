package javamath1;

import java.util.Scanner;
public class Exercicio5 {
    
public static void main (String[] args){

    Scanner teste = new Scanner(System.in);
    int num = teste.nextInt();
    int aux = 1;
    int total = 0;
    while(aux<=num) {
        if (num%aux==0){
            total++; }
        aux++;
    }
    
    if(total == 2){
        System.out.println(num + "eh um primo");
    }
    else{
        System.out.println(num + "NAO EH PRIMO");
     }
    
    }
    
    
}




