import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n, i, j, quantidadenegativos;

	    System.out.print("Qual a ordem da matriz? ");
	    n = sc.nextInt();

	    int[][] mat = new int[n][n];

	    for ( i = 0; i < n; i++) {
	        for ( j=0; j<n; j++) {
	        	System.out.printf("Elemento [%d,%d]: ", i, j);
	            mat[i][j] = sc.nextInt();
	        }
	    }
	    
	    System.out.println("DIAGONAL PRINCIPAL: ");
	    
	    for ( i = 0; i < n; i++) {
	    	
	        	System.out.print(mat[i][i] + " ");
	      
	    }
	    
	    
	    quantidadenegativos = 0;
	    
	    for ( i = 0; i < n; i++) {
	        for ( j=0; j<n; j++) {
	        	
	        	if (mat[i][j] < 0) {
	        		
	        		quantidadenegativos = quantidadenegativos + 1;
					
				}
	        }
	    }
	    
	    System.out.println();
	    System.out.print("Quantidade de negativos = " + quantidadenegativos);
	    
	    
	    sc.close();
	}
}
	    