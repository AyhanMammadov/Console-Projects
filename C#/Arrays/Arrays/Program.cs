int[] marks = { 10, 12, 0, 5, 7, 12 };
string[] menu = { "Menu:" ,
            "1. Show student info" ,
            "2. Add Mark" ,
            "3. Edit Mark (by index)" ,
            "4. Delete Mark (by index)" ,
            "5. Exit"};

string name = "Voldemort";

void ShowStudentInfo(int[] marks, string name)
{
    Console.Clear();
    double average = default;
    for (int i = 0; i < marks.Length; i++)
    {
        Console.WriteLine($"{i + 1} - {marks[i]}");
        average += marks[i];
    }
    average /= marks.Length;
    Console.WriteLine($"Average marks of {name} is: {(int)average}");
    Console.WriteLine("\n");
}

int[] AddMark(int[] marks, in int mark)
{
    int[] newArr = new int[marks.Length + 1];
    for (int i = 0; i < marks.Length; i++)
    {
        newArr[i] = marks[i];
    }
    newArr[marks.Length] = mark;
    return newArr;
}

int[] EditMark(int[] marks, in int index, in int newMark)
{
    for (int i = 0; i < marks.Length; i++)
    {
        if (i == index)
            marks[i - 1] = newMark;
    }
    return marks;
}

int[] DeleteMarkByIndex(in int[] marks, int index)
{
    index--;
    int[] newArr = new int[marks.Length - 1];
    for (int i = 0, j = 0; i < marks.Length; i++)
    {
        if (i != index)
            newArr[j++] = marks[i];
    }
    return newArr;
}



while (true)
{
    for (int i = 0; i < menu.Length; i++)
    {
        Console.WriteLine(menu[i]);
    }

    Console.Write("Enter your choice: ");
    int choice = Convert.ToInt32(Console.ReadLine());
    Console.Clear();
    switch (choice)

    {

        case 1:
            ShowStudentInfo(marks, name);
            break;
        case 2:
            Console.Write("Enter mark: ");
            int mark = Convert.ToInt32(Console.ReadLine());
            marks = AddMark(marks, mark);
            break;
        case 3:
            ShowStudentInfo(marks, name);
            Console.Write("Enter index: ");
            int index = Convert.ToInt32(Console.ReadLine());
            Console.Write("Enter new mark: ");
            int newMark = Convert.ToInt32(Console.ReadLine());
            marks = EditMark(marks, index, newMark);
            break;
        case 4:
            ShowStudentInfo(marks, name);
            Console.Write("Enter index: ");
            int deleteIndex = Convert.ToInt32(Console.ReadLine());
            marks = DeleteMarkByIndex(marks, deleteIndex);
            break;
        case 5:
            Console.Clear();
            Console.WriteLine("Thanx for using this app!");
            return;
        default:
            Console.WriteLine("Invalid choice");
            break;
    }
}