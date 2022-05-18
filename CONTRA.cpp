#include<iostream>
using namespace std;
int main()
{
    int array[5] = {40,55,63,17,22};
    for(int a=0; a<5;a++)
    {
        cout<<array[a]<<" ";
    }
    {
        cout<<endl;
    }
    {
        cout<<"el resultado es: "<<array[1]+array[3];
    }
    return 0;
}
