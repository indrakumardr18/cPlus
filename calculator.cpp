#include<iostream>
using namespace std;

class calculator {
   private:
     int num1, num2;

     //method to set numbers
public:
     void setNumbers( double a, double b){
        num1 = a;
        num2 = b;

     }

     //method for addition

    double add(){
        return num1 + num2;
    }

    //method for substration

    double substraction(){
        return num1 - num2;
    }
//method for multiplication
    double multiplication(){
        return num1 * num2;
    }
//method for division
    double division(){
        if (num2 ==0){
            cout<<"Error: division by zero"<<endl;
            return 0;
        }
        return num1 / num2;
    }


};

int main(){
    calculator calc;
    double a, b;
    int choice;

    cout<<"Enter  two numbers: ";
    cin>> a >> b;
    calc.setNumbers(a, b);

    cout<<"Select operation:\n";
    cout<<"1. Add\n2. Substract\n3. Multiply\n4. Divide\n";
    cout<<"Enter the choice: ";
    cin>> choice;
    switch(choice){
        case 1:
        cout<<"Result: "<<calc.add()<<endl;
        break;
        case 2:
        cout<<"Result: "<<calc.substraction()<<endl;
        break;
        case 3:
        cout<<"Result: "<<calc.multiplication()<<endl;
        break;
        case 4:
        cout<<"Result: "<<calc.division()<<endl;
        break;
        default:
        cout<<"Invalid choice"<<endl;
    }
return 0;
}