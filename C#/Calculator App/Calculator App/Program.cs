using Calculator_App;

bool isover = true;
while (isover)
{
    try
    {
        Console.Write("Enter the first number: ");
        double num1 = double.Parse(Console.ReadLine());

        Console.Write("Enter the second number: ");
        double num2 = double.Parse(Console.ReadLine());
        Console.Clear();


        Console.WriteLine(@"Press '1' for plus (+)
Press '2' for minus (-)
Press '3' for multiplication (*)
Press '4' for division (/)
Press 'e' for Exit (Close App)");


        string userinput = Console.ReadLine();
        Console.Clear();
        switch (userinput)
        {
            case "1":
                Calculator.Plus(num1, num2);
                break;
            case "2":
                Calculator.Minus(num1, num2);
                break;
            case "3":
                Calculator.Multiply(num1, num2);
                break;
            case "4":
                Calculator.Divide(num1, num2);
                break;
            case "e":
                Console.WriteLine("Thanx for using this app!");
                isover = false;  
                break;
            default:
                Console.WriteLine("Wrong input!");
                break;
        }
    }
    catch (Exception ex)
    {
        Console.WriteLine(ex.Message);
    }
}