
namespace Calculator_App
{
    static class Calculator
    {
        public static void Plus(double a, double b)
        {
            Console.WriteLine($"{a} + {b} = {a + b}");
        }
        public static void Minus(double a, double b)
        {
            Console.WriteLine($"{a} - {b} = {a - b}");
        }
        public static void Multiply(double a, double b)
        {
            Console.WriteLine($"{a} * {b} = {a * b}");
        }
        public static void Divide(double a, double b)
        {
            if (b != 0)
                Console.WriteLine($"{a} / {b} = {(decimal)(a / b)}");
            else
                throw new DivideByZeroException("Cannot divide by zero.");
        }
    }
}

