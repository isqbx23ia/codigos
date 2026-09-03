package javamath1;

import java.util.Scanner;

public class Exercicio4 {
    //todos os divisores de um número
    public static void main(String[] args) {
     Scanner divid = new Scanner(System.in);
      int num = divid.nextInt();
      int cont = 1;
      while (cont<=num){
         if (num%cont==0){
             System.out.println(cont + "eh um divisor");
         }
         cont++;
      }
      
     
                    
      
    }
       //System.out.println("Os divisores do número: " + dividendo + "são" + divisores);
    
    
    
    
    
    
    }
    
    

