import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		try (Scanner sc = new Scanner(System.in)) {
			int n, i;
			double soma, media;
			
			System.out.print("Quantos números você vai digitar? ");
			n = sc.nextInt();
			
			double[] vet = new double[n]; 
			
			for (i = 0; i < n; i++) {
				
				System.out.print("Digite um número: ");
				vet[i] = sc.nextDouble();
				
			}
			
			System.out.println();
			System.out.print("VALORES = ");
			
			for (i = 0; i < n; i++) {
				
				System.out.print(String.format("%.1f ", vet[i]));
				
			}
			
			System.out.println();	
			
			soma = 0;
			
			for (i = 0; i < n; i++) {
				
				soma = soma + vet[i];			
			}
			
			System.out.print("SOMA = ");
			System.out.println(String.format("%.2f", soma));
			
			media = soma / n;
			
			System.out.print("MÉDIA = ");
			System.out.println(String.format("%.2f", media));
			
			
			sc.close();
		}	
	}
	
	

}
