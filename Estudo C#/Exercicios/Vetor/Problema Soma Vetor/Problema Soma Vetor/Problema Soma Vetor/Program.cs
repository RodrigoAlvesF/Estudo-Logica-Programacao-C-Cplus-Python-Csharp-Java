using System;
using System.Globalization;

namespace Problema_Soma_Vetor
{
    internal class Program
    {
        static void Main(string[] args)
        {

            CultureInfo CI = CultureInfo.InvariantCulture;

            double soma, media;
            int n;

            Console.Write("Quantos números você vai digitar? ");
            n = int.Parse(Console.ReadLine());

            double[] vet = new double [n];

            for (int i = 0; i < n; i++)
            {

                Console.Write("Digite um número: ");
                vet[i] = double.Parse(Console.ReadLine(), CI);

            }

            Console.Write("Valores = ");

            for (int i = 0; i < n; i++)
            {

                Console.Write(vet[i].ToString("F1", CI) + " ");

            }
                      
            soma = 0;

            for (int i = 0; i < n; i++)
            {

                soma = soma + vet[i];

            }

            Console.WriteLine();
            Console.Write("Soma = " + soma.ToString("F2", CI));

            media = soma / n;

            Console.WriteLine();
            Console.Write("Média = " + media.ToString("F2", CI));
           


        }
    }
}