using System;
using System.Globalization;

namespace Problema_Crescente
{
    internal class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int a, b;

            Console.WriteLine("Digite dois números: ");
            a = int.Parse(Console.ReadLine());
            b = int.Parse(Console.ReadLine());

            while (a != b)
            {

                if (a > b)
                {
                    Console.WriteLine("Decrescente! ");
                }

                else
                {
                    Console.WriteLine("Crescente! ");
                }

                Console.WriteLine("Digite outros dois números: ");

                a = int.Parse(Console.ReadLine());
                b = int.Parse(Console.ReadLine());

            }
        }
    }
}