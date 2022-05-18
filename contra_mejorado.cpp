#include<iostream>
#include <string>
#include<stdlib.h>

using namespace std;

int main()
{
    cout<<"ingrese el usuario"<<endl;
    string user = "";
    cin >> user;
    if(user=="pablo")
{
    cout<<endl<<"Es un papi"<<endl;

}
else
{
    cout<<endl<<"Usted es un farsante"<<endl;
}
    cout<<"ingrese la contraseña"<<endl;
    string password = "";
    cin >> password;
    if(password=="argueta")
{
    cout<<endl<<"Es un host"<<endl;

}
else
{
    cout<<endl<<"Usted es un farsante"<<endl;
}
return 0;
}
