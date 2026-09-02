/** 
 * @author 20262tpmi0321
 */
package javamath1;
import java.util.Scanner;
public class Divisao {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
       Scanner divid = new Scanner(System.in);
       int dividendo = divid.nextInt();
       int divisor = divid.nextInt();
      int resultado = 0;
      while (dividendo >= divisor) {
          dividendo = dividendo - divisor;
          resultado++;
    }
    System.out.println("resultado " + resultado + "e sobra" + dividendo);
    
    }
    
}
