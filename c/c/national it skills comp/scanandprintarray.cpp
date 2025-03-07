#include <iostream> 
using namespace std;

int main(){
   char letter[8];

   cout << "Enter 8 Characters: \n" << endl;
     for(int i = 0; i < 8; i++)
      {
         cin >> letter[i];
      }
      
   cout << "Array elements: \n" << endl; 
      for (int i=0; i<7; i++)
         {
            cout << letter[i] << "-";
         }
        
        cout << letter[7] << endl;
         return 0;
}
