#include <iostream> 
using namespace std;

int main(){
   char letter[6];

   cout << "Enter 6 Characters: \n" << endl;
     for(int i = 0; i < 6; i++)
      {
         cin >> letter[i];
      }
      
   cout << "Reversed Order: \n" << endl; 
      for (int i=5; i>=0; i--)
         {
            cout << " " << letter[i];
         }
         return 0;
}


