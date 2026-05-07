// Variant 14

namespace lab
{
    class Program()
    {
        static void Main()
        {
            Figure p = new Figure(0, 0, 1, 2);
            Figure q = new Figure(1, 2, 4, 5);

            Rhombus r = new Rhombus(p, q);

            Console.WriteLine("Area: " + r.Area());
            Console.WriteLine("Perimeter: " + r.Perimeter());
        }
    }
}
