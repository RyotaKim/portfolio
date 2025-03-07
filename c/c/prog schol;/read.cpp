#include <iostream>
using namespace std;

    int main(){
    int n1,n2;
    int results;
    char oper;

    cout << "Enter 1st number: ";
    cin >> n1;

    cout << "Enter 2nd number: ";
    cin  >> n2;

   
    cout << "Type '+' for addition, '-' for subtraction, '/' for division, and '*' for multiplication:  ";
    cin >> oper;
    
    switch(oper){

        case('+'): results = n1 + n2;
        break;
        case('_'): results = n1 - n2;
        break;
        case('*'): results = n1/n2;
        break;
        case('/'): if(n2 != 0) {
            results = n1 / n2;
        }
            else{  
                cout << "Error! Division by zero is not allowed.";
                return 1;
                }
        
        break;
        

                }
        cout << "Result: " << results;
        

    return 0;
}