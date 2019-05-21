#include <iostream>

using namespace std;

int main()
{
    double  a;   
    char b;
    double  c;
    double  z;
   cin>>a;
   cin >> b;
   cin >> c;
   if (b == '+'){
   z = a + c;
   }
   if (b == '-'){
   z = a - c;
   }
   if (b == '/'){
   z = a / c;
   }
   if (b == '*'){
   z = a*c;
   }
 
   cout << z << endl;
}
