#include <iostream>

using namespace std;

int main()
{
    int score{0};

    cout << "Enter the score of the exam from 0 - 100 :";
    cin >> score;
    char letterGrade{};
    if (score >= 0 && score <= 100)
    {
        if (score >= 90)
            letterGrade = 'A';
        else if (score >= 80)
            letterGrade = 'B';
        else if (score >= 70)
            letterGrade = 'C';
        else if (score >= 60)
            letterGrade = 'D';
        else
            letterGrade = 'F';
        cout << "The grade is " << letterGrade << endl;

        if (letterGrade == 'F')
            cout << "Sorry, you must take the cource again";
    }
    else
    {
        cout << " Sorry," << score << " The Number is not in range " << endl;
    }

    return 0;
}