using System;
using System.Globalization;

namespace Problema_Soma_Impares
{
    internal class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int i, x, y, troca, soma;

            Console.WriteLine("Digite dois números: ");
            x = int.Parse(Console.ReadLine());
            y = int.Parse(Console.ReadLine());

            if (x > y)

            {
                troca = x;
                x = y;
                y = troca;
            }

            soma = 0;

            for (i = x+1; i < y; i++)
            {

                if (i % 2 != 0)
                {
                    soma = soma + i;
                }

            }

            Console.WriteLine("SOMA DOS IMPARES = " + soma);
        }
    }
}