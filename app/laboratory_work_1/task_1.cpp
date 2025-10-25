#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

class Calculator{
    private:
        double _a = 0.0, _b = 0.0;
        string** history = new string*[10];

        int _factorial_calculation(int n){
            if (n == 0 || n == 1){
                return 1;
            }
            return n * _factorial_calculation(n-1);
        }

    public:
        Calculator(float a, float b){
            this->_a = a;
            this->_b = b;
        }

        Calculator(string a, float b){
            try
            {
                this->_a = stod(a);
            }
            catch(...)
            {
                cout << "Couldn't convert variable (a) in integer. To change the values, call the method set_args(a)" << endl;
            }
        }

        Calculator(float a, string b){
            try
            {
                this->_b = stod(b);
            }
            catch(...)
            {
                cout << "Couldn't convert variable (b) in integer. To change the values, call the method set_args(b)" << endl;
            }
        }

        Calculator(string a, string b){
            try
            {
                this->_a = stod(a);
                this->_b = stod(b);
            }
            catch(...)
            {
                cout << "Couldn't convert variables (a, b) in integers. To change the values, call the method set_args(a, b)" << endl;
            }
        }

        

        // float addition(){
        //     return this->a + this->b;
        // }

        // float subtraction(){
        //     return this->a - this->b;
        // }

        // float multiplication(){
        //     return this->a * this->b;
        // }

        // float division(){
        //     return this->a / this->b;
        // }

        // int* get_factorial_calculation(){
        //     int result[2];
        //     result[0] = this->_factorial_calculation(static_cast<unsigned int>(this->a));
        //     result[1] = this->_factorial_calculation(static_cast<unsigned int>(this->b));
        //     return result;
        // }
};

int main() {
    Calculator calc('1222', 2);
    return 0;
}