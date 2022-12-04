using System;
using System.Globalization;

namespace Primeiro {
    class Program  {   
       
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            double largura, altura, area, perimetro, diagonal;

            Console.Write("Base do retangulo: ");
            largura = Convert.ToDouble(Console.ReadLine(), CI);
            Console.Write("Altura do retangulo: ");
            altura = Convert.ToDouble(Console.ReadLine(), CI);

            area = largura * altura;
            perimetro = 2 * (largura + altura);
            diagonal = Math.Sqrt((largura*largura) + (altura*altura));

            Console.WriteLine("AREA = " + area.ToString("F4", CI));
            Console.WriteLine("PERIMETRO = " + perimetro.ToString("F4", CI));
            Console.WriteLine("DIAGONAL = " + diagonal.ToString("F4", CI));

        }
     }
}