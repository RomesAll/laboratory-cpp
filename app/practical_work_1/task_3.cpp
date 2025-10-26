#include <iostream>
#include <string>

using namespace std;

bool search_enter_element(int *array, unsigned short int *n, int *element){
    for (int i = 0; i < *n; i++){
        if (array[i] == *element)
            return true;
    }
    return false;
}

void filling_array(int *array, unsigned short int *n){
    for (int i = 0; i < *n; i++){
        cout << "array[" << i << "]: ";
        cin >> array[i];
    }
    cout << endl;
}

int main() {
    unsigned short int n = 0;
    int element = 0;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << endl;
    int *array = new int[n];
    filling_array(array, &n);
    cout << "Enter the item you want to find: ";
    cin >> element;
    cout << endl;
    if (search_enter_element(array, &n, &element) == 1)
        cout << "The successfully found element" << endl;
    else
        cout << "Element not found" << endl;
    delete[] array;
    return 0;
}