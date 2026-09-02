package javaapplication1;
import java.util.Scanner;


public class JavaApplication1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
   
    Scanner entrada = new Scanner(System.in);   
    Scanner quanti = new Scanner(System.in);
    int a = entrada.nextInt();
    int qtd = quanti.nextInt();
    int b = 1;
    int soma;
    int aux;
    aux = 0;
    while(b > qtd){
        soma = soma + a;
        aux = soma;
    }   
    System.out.println("Teste: " + aux);
    
    
    
}
