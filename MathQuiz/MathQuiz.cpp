#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

//Variable declaration
int category, answer, counter=0, score=0;

//Calculation operation
void Calculation(int counter, int x, int y, int operant)
{
    switch (operant)
    {
    case 1:
        cout << counter << ". " << x << " + " << y << " = ?" << endl;
        cin >> answer;
        if (answer == x + y)
        {
            cout << endl << "Your answer is correct!" << endl << endl;
            score++;
        }
        else
            cout << endl << "Wrong answer. The answer is :" << x + y << endl << endl;
        break;

    case 2:
        cout << counter << ". " << x << " - " << y << " = ?" << endl;
        cin >> answer;
        if (answer == x - y)
        {
            cout << endl << "Your answer is correct!" << endl << endl;
            score++;
        }
        else
            cout << endl << "Wrong answer. The answer is :" << x - y << endl << endl;
        break;

    case 3:
        cout << counter << ". " << x << " * " << y << " = ?" << endl;
        cin >> answer;
        if (answer == x * y)
        {
            cout << endl << "Your answer is correct!" << endl << endl;
            score++;
        }
        else
            cout << endl << "Wrong answer. The answer is :" << x * y << endl << endl;
        break;
    }
}

//Decide grade based on score
void Grade(int score)
{
    if (score >= 8 && score <= 10)
        cout << "Excellent!" << endl;
    else if (score >= 5 && score <= 7)
        cout << "Not Bad!" << endl;
    else if (score >= 2 && score <= 4)
        cout << "You need more practise." << endl;
    else if (score < 2)
        cout << "You need study hard on this!" << endl;
}

//Random generate 2 numbers
void NumberGenerator()
{
    do
    {
    int x = 0, y = 0;
    srand((unsigned)time(0));
    for (int i = 0; i < 2; i++)
    {
        int random = (rand() % 10) + 1;
        if (i == 0 && x == 0)
            x = random;
        else
            y = random;
    }
    counter++;
    Calculation(counter, x, y, category);
    }while (counter < 10);

    cout << "Your Score is :" << score <<"/10"<<endl;
    Grade(score);
}


//Display Main Menu
void Menu()
{
    do
    {
    cout << "****Welcome to Math Quiz****" << endl;
    cout << "Please select a category." << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl<<endl;
    cout << "I choose :";
    cin >> category;

    system("cls");
    } while (!(category > 0 && category < 5));

    if (category > 0 && category < 4)
        NumberGenerator();
}

void main()
{
    Menu();
    system("pause>0");
}


