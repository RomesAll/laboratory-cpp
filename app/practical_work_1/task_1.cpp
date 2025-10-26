#include <iostream>
#include <string>

using namespace std;

int search_min_element(int *array, unsigned short int *n){
    int min = *array;
    for (int i = 0; i < *n; i++)
    {
        if (min > array[i]){
            min = array[i];
        }
    }
    return min;
}

void filling_array(int *array, unsigned short int *n){
    for (int i = 0; i < *n; i++)
    {
        cout << "array[" << i << "]: ";
        cin >> array[i];
    }
}

int main() {
    unsigned short int n = 3;
    int *array = new int[n];
    filling_array(array, &n);
    cout << "Min element: " << search_min_element(array, &n) << endl;
    delete[] array;
    return 0;
}