#include<iostream>
using namespace std;
int main(){
    int choice;
    do{
        cout<<"CHOOSE THE OPERATION THAT HAS TO BE PERFORMED:\n";
        cout<<"1.ARITHMETIC"<<endl<<"2.RELATIONAL/COMPARISON"<<endl<<"3.LOGICAL"<<endl<<"4.BITWISE"<<endl<<"5.EXIT"<<endl<<"Enter the option";
        cin>>choice;
        switch(choice){
            case 1:
            int a, b;
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Addition: " << a + b << endl;
            cout << "Subtraction: " << a - b << endl;
            cout << "Multiplication: " << a * b << endl;
            if (b != 0) {
                cout << "Division: " << a / b << endl;
                cout << "Modulus: " << a % b << endl;
            } else {
                cout << "Division and Modulus not possible (division by zero)" << endl;
            }
            break;
            case 2:
            int a, b;
            cout << "Enter two numbers: ";
            cin >> a >> b;
            if(a==b) cout<<"both are equal";
            if(a!=b) cout<<"a and b are not equal";
            case 3:
            int a, b;
            cout << "Enter two numbers: ";
            cin >> a >> b;
            if(a>10 && b<5) cout<<"The value of a is greater than 10 and the value of b is less than 5";
            else cout<<"The value of a is not greater than 10 and the value of b is not less than 5";
            if(a==10||b==19) cout<<"Either the value of a is equal to 10 or the value of b is equal to 19";
            else cout<<"Either the value of a is not equal to 10 or the value of b is not equal to 19";
            cout<<"the not of a is:"<<!a;
            case 4:
            int a, b;
            cout << "Enter two integers: ";
            cin >> a >> b;
            cout << "Bitwise OR (a | b): " << (a | b) << endl;
            cout << "Bitwise XOR (a ^ b): " << (a ^ b) << endl;
            cout << "Left Shift (a << b): " << (a << b) << endl;
            cout << "Right Shift (a >> b): " << (a >> b) << endl;
            cout<<"Even or odd using Bitwise AND:"<<endl;
            int e=a&1;
            cout<<e==0?"EVEN":"ODD";

            case 5:
            default:
            cout<<"INVALID OPERATION";
        }
    }while(choice!=4);
    return 0;
}