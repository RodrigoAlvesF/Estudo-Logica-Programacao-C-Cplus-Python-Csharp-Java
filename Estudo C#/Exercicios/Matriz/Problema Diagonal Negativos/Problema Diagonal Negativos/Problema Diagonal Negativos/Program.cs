using System;
using System.Globalization;

namespace Problema_Diagonal_Negativos
{
    internal class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int n, cont;

            Console.Write("Qual a ordem da matriz? ");
            n = int.Parse(Console.ReadLine());

            int[,] mat = new int[n, n];

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {

                    Console.Write("Elemento [" + i + "," + j + "]: ");
                    mat[i, j] = int.Parse(Console.ReadLine());

                }
            }

            Console.WriteLine("Diagonal principal: ");

            for (int i = 0; i < n; i++)
            {
                Console.Write(mat[i, i] + " ");
            }


            cont = 0;

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {

                    if (mat[i,j] < 0)
                    {

                        cont = cont + 1;

                    }

                }

            }

            Console.WriteLine();
            Console.Write("Quantidade de negativos = " + cont);

        }
    }
}