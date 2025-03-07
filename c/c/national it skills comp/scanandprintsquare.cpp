#include <iostream>
using namespace std;

int main(){

    int arr[5];
    

    cout << "Enter 5 integers: \n" << endl;
        for(int i=0; i < 5; i++)
        {
            cin >> arr[i];
        }

        cout << "Square of all elements:\n" << endl;
                for(int i = 0; i < 5; i++)
                {
                    cout << arr[i] * arr[i] << " ";
                }

}