#include <iostream>
#include <string>

using namespace std;

class Calculator{
    private:
        int a = 0, b = 0;
        float a = 0.0f, b = 0.0f;
        string** history = new string*[10];

        int _factorial_calculation(int n){
            if (n == 0 || n == 1){
                return 1;
            }
            return n * _factorial_calculation(n-1);
        }

    public:
        float addition(){
            return this->a + this->b;
        }

        float subtraction(){
            return this->a - this->b;
        }

        float multiplication(){
            return this->a * this->b;
        }

        float division(){
            return this->a / this->b;
        }

        int* get_factorial_calculation(){
            int result[2];
            result[0] = this->_factorial_calculation(this->a);
            result[1] = this->_factorial_calculation(this->b);
            return result;
        }
};

int main() {
    std::cout << "hello world";
    return 0;
}