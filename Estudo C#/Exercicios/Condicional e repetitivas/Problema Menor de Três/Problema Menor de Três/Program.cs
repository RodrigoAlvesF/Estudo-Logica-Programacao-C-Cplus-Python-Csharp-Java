namespace Problema_Menor_de_Três
{
    internal class Program
    {
        static void Main(string[] args)
        {

            int a, b, c;

            Console.Write("Primeiro valor: ");
            a = int.Parse(Console.ReadLine());

            Console.Write("Segundo valor: ");
            b = int.Parse(Console.ReadLine()); 

            Console.Write("Terceiro valor: ");
            c = int.Parse(Console.ReadLine());

            if (a < b)
            {

                Console.WriteLine("Menor = " + a);

            }

            else if (b < c)
            {
                Console.WriteLine("Menor = " + b);
            }

            else
            {
                Console.WriteLine("MENOR = " + c);
            }
        }
    }
}