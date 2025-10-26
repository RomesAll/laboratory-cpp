#include <iostream>
#include <string>

using namespace std;

double search_max_element(double *array, unsigned short int *n){
    double max = *array;
    for (int i = 0; i < *n; i++)
    {
        if (max < array[i]){
            max = array[i];
        }
    }
    return max;
}

void filling_array(double *array, unsigned short int *n){
    for (int i = 0; i < *n; i++)
    {
        cout << "array[" << i << "]: ";
        cin >> array[i];
    }
    cout << endl;
}

int main() {
    unsigned short int n = 0;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << endl;
    double *array = new double[n];
    filling_array(array, &n);
    cout << "Max element: " << search_max_element(array, &n) << endl;
    delete[] array;
    return 0;
}