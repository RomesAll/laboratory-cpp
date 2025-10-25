#include <iostream>
using namespace std;


void executing_algorithm(unsigned int& len_res, int *result){
    //int result[100];
    int i, j, count = 0;
    

    for (i = 0; i < len_res; i++)
    {
        count = 1;
        for (j = i + 1; j < len_res; j++)
        {
            if (result[j] == result[i])
                count++;
        }
        if (count >= 2)
        {
            int one = result[i];
            for (j = i; j < len_res; j++)
            {
                if (result[j] == one)
                {
                    for (int k = j + 1; k < len_res; k++)
                    {
                        result[k - 1] = result[k];
                    }
                    len_res--;
                    j--;
                }
            }
            i--;
        }
    }
}

void get_array(unsigned int& n, int *a){
    if (n == 0) {
        cout << "Array is empty" << endl;
    }
    else {
        for (int k = 0; k < n; k++)
        {
            cout << '\t' << a[k];
        }
    }
}

void filling_array(unsigned int& n, int *a){
    for (int i = 0; i < n; i++){
        a[i] = rand() % 20;      
        cout << '\t' << a[i];
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int original[100], result[100];
    unsigned int len_orig=0, len_res=0;
    char control_character;
    
    while (true)
    {
        cout << "Press '1' to create a new array" << endl;
        cout << "Press '2' to display the result array" << endl;
        cout << "Press '3' to display the original array" << endl;
        cout << "Press 'Q' to exit" << endl;

        cout << "Input value: ";
        cin >> control_character;

        switch (control_character)
        {
            case '1': {
                cout << "Enter n: ";
                cin >> len_orig;
                if (len_orig < 0){
                    cout << "Enter a positive number!" << endl;
                    break;
                }
                len_res = len_orig;
                filling_array(len_orig, original);
                for (int i = 0; i < len_orig; i++){
                    result[i] = original[i];
                }
                executing_algorithm(len_res, result); 
                break;
            }
            case '2': get_array(len_res, result); break;
            case '3': get_array(len_orig, original); break;
            case 'Q': cout << "Press Q" << endl; return 0;
        }
    }
    return 0;
}