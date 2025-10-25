#include <iostream>
using namespace std;

/*
    Проанализируйте код, представленный ниже:
    На сколько я понял, суть алгоритма заключается в том, что он удаляет повторяющиеся числа сдвигом влево.
*/
int main()
{
    setlocale(LC_ALL, "Russian");
    int a[100];
    int n;
    int i, j, count = 0;
    cout << "Enter n: ";
    cin >> n;
    for (i = 0; i < n; i++) //Цикл для добавления остатка деления случайного числа на 20 в каждый элемент массива
    {
        a[i] = rand() % 20;      
        cout << '\t' << a[i];
    }
    cout << endl;

    for (i = 0; i < n; i++) //Цикл для сдвига повт. элементов массива
    {
        count = 1;

        for (j = i + 1; j < n; j++) // Цикл для поиска повторяющихся пар
        {
            if (a[j] == a[i])
                count++;
        }

        if (count >= 2)
        {
            int one = a[i];
            for (j = i; j < n; j++)
            {
                if (a[j] == one)
                {
                    for (int k = j + 1; k < n; k++)
                    {
                        a[k - 1] = a[k]; // Сдвиг влево
                    }
                    n--;
                    j--;
                }
            }
            i--;
        }
    }


    if (n == 0)
        cout << "Array is empty" << endl; // Если в массиве все повт. элементы были удалены
    else
        for (int k = 0; k < n; k++)
        {
            cout << '\t' << a[k];
        }
    cout << endl;
    return 0;
}