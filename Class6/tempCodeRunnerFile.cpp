int main()
{
    int choice;

    do{
        cout << endl;
        cout << "Calculate area" << endl;
        cout << "1. Oval" << endl;
        cout << "2. Parallelogram" << endl;
        cout << "3. Trapezium" << endl;
        cout << "4. Kite" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice != 5)
        {
            Operations(choice);
        }
    } while (choice != 5);

    cout << "Program ended" << endl;
    return 0;
}