#include <iostream>
#include<ctime>
using namespace std;

int main()
{
    time_t nowuptime=time(0);
    char* date=ctime(&nowuptime);

    cout << "The date and time is:   " << endl<<endl;
    cout<<date<<endl<<endl<<"================================="<<endl <<":: and| |kindly |like this code[]"<<endl;
    return 0;
}
