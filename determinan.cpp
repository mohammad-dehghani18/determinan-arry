//my name is mohammad dehghani
//برنامه ای که دترمینان یک آرایه 3 در 3 را محاسبه کند

#include <iostream>
using namespace std;

int main()
{
    int matrix[3][3];
    int determinant;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix[i][j];
        }
    }

    determinant = (matrix[0][0] * ((matrix[1][1] * matrix[2][2]) - (matrix[1][2] * matrix[2][1]))) - (matrix[0][1] * ((matrix[1][0] * matrix[2][2]) - (matrix[1][2] * matrix[2][0]))) + (matrix[0][2] * ((matrix[1][0] * matrix[2][1]) - (matrix[1][1] * matrix[2][0])));

Cout<<determinant << endl;

    return 0;
}