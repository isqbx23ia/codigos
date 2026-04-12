    import java.util.Scanner;
    import java.util.Locale;
    public class lvp9 {
    
    public static void main(String[] args ) {
    
    Scanner scanner = new Scanner(System.in);
    
    
    scanner.useLocale(Locale.US);
    
    
    double num = scanner.nextDouble();
    scanner.close();
    
    
    
    
    
    if (num > 0) {
        System.out.printf("NUM=%2.2f POSITIVO", num);
    }
    else if (num == 0) {
        System.out.printf("NUM=%2.2f NULO", num);

    }
    else {
        System.out.printf("NUM=%2.2f NEGATIVO", num);
    }
        
        
        
        
        
        
        
        
        
        
        
        
    }
}



//Leia um número real quaisquer verifique se este número é positivo, negativo ou nulo. 

//MODELO DE SAÍDA DEVERÁ SER UMA DAS OPÇÕES ABAIXO:

//NUM=99.99 POSITIVO

//NUM=99.99 NEGATIVO

//NUM=99.99 NULO