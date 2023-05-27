while (true)
{
    try
    {
        Console.Write("Enter the first number: ");
        int num1 = int.Parse(Console.ReadLine());

        Console.Write("Enter the second number: ");
        int num2 = int.Parse(Console.ReadLine());

        Console.Clear();
        Console.WriteLine(@"Press '1' for plus (+)
Press '2' for minus (-)
Press '3' for multiplication (*)
Press '4' for division (/)");
    }
    catch (Exception ex)
    {
        Console.WriteLine(ex.Message);
    }
}