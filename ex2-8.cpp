#include<iostream>
using namespace std;
double calculateBMI(double weight, double height){
    return (weight)/(height*height);
}
inline double square(double x){
    return x*x;
}
long factorial(int n){
    if(n==0||n==1) return 1;
    return n*factorial(n-1);
}
void increment(int* nu){
    (*nu)+=5;
}
void incrementAll(int* arr, int size, int val){
    for(int i=0;i<size;i++){
        *(arr+i)+=val;
    }
}
int main(){
        int choice;
        do {
            cout << "\n--- MENU ---\n";
            cout << "1. Calculate BMI\n";
            cout << "2. Factorial (Recursive)\n";
            cout << "3. Increment a number\n";
            cout << "4. Increment all array elements\n";
            cout << "5. Square (Inline function)\n";
            cout << "0. Exit\n";
            cout << "Enter choice: ";
            cin >> choice;

            switch (choice) {

            case 1: {
                double w, h;
                cout << "Enter weight (kg): ";
                cin >> w;
                cout << "Enter height (m): ";
                cin >> h;
                cout << "BMI = " << calculateBMI(w, h) << endl;
                break;
            }

            case 2: {
                int n;
                cout << "Enter a number: ";
                cin >> n;
                cout << "Factorial = " << factorial(n) << endl;
                break;
            }

            case 3: {
                int num;
                cout << "Enter a number: ";
                cin >> num;
                increment(&num);   
                cout << "After increment: " << num << endl;
                break;
            }

            case 4: {
                int n, val;
                cout << "Enter array size: ";
                cin >> n;
                int arr[n];
                cout << "Enter array elements: ";
                for (int i = 0; i < n; i++)
                    cin >> arr[i];

                cout << "Enter increment value: ";
                cin >> val;

                incrementAll(arr, n, val);

                cout << "Array after increment: ";
                for (int i = 0; i < n; i++)
                    cout << arr[i] << " ";
                cout << endl;
                break;
            }

            case 5: {
                double x;
                cout << "Enter value: ";
                cin >> x;
                cout << "Square = " << square(x) << endl;
                break;
            }

            case 0:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice!\n";
            }

        } while (choice != 0);

        return 0;
}