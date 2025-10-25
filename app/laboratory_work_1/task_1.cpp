#include <iostream>
#include <string>

using namespace std;

class Calculator{
    private:
        double _a = 0.0, _b = 0.0;

        int _factorial_calculation(int n){
            if (n == 0 || n == 1){
                return 1;
            }
            return n * _factorial_calculation(n-1);
        }

        void _convert_to_double_a(string a){
            try{   
                this->_a = stod(a);
            }
            catch(...){
                cout << "Couldn't convert variable (a) in double. To change the values, call the method set_args(a)" << endl;
            }
        }

        void _convert_to_double_b(string b){
            try{   
                this->_b = stod(b);
            }
            catch(...){
                cout << "Couldn't convert variable (b) in double. To change the values, call the method set_args(b)" << endl;
            }
        }

    public:
        Calculator(double a, double b){
            this->_a = a;
            this->_b = b;
        }

        Calculator(string a, double b){
            this->_b = b;
            this->_convert_to_double_a(a);
        }

        Calculator(double a, string b){
            this->_a = a;
            this->_convert_to_double_b(b);
        }

        Calculator(string a, string b){
            this->_convert_to_double_a(a);
            this->_convert_to_double_b(b);
        }

        ~Calculator(){
            this->_a = 0.0;
            this->_b = 0.0;
        }

        void set_a(double a){
            this->_a = a;
        }

        void set_b(double b){
            this->_b = b;
        }

        void get_args(){
            std::cout << "Var a: " << this->_a << std::endl;
            std::cout << "Var a: " << this->_b << std::endl;
        }

        float addition(){
            return this->_a + this->_b;
        }

        float subtraction(){
            return this->_a - this->_b;
        }

        float multiplication(){
            return this->_a * this->_b;
        }

        float division(){
            return this->_a / this->_b;
        }

        int* get_factorial_calculation(){
            int* result = new int[2];
            int a = this->_a, b = this->_b;
            if (a < 0){
                cout << "For variable a, we removed the minus sign, as the factorial can only be taken from a positive number." << endl;
                a = a * -1;
            }
            if (b < 0){
                cout << "For variable b, we removed the minus sign, as the factorial can only be taken from a positive number." << endl;
                b = b * -1;
            }
            result[0] = this->_factorial_calculation(a);
            result[1] = this->_factorial_calculation(b);
            return result;
        }
};

int main() {
    Calculator calc("-4.5", "2");
    std::cout << calc.get_factorial_calculation()[0] << std::endl;
    return 0;
}