#include <iostream>
using namespace std;

int main(){
    int array[12], ev = 0;
    

    cout << "Enter 12 integers\n" << endl;
        for (int i=0; i<12; i++)
            {
                cin >> array[i];
                if(array[i] % 2 == 0)
                    {ev += 1;}
            }
            cout << "Number of even elements " << ev;
}