#include<iostream>
using namespace std;
void evenorodd(int a)
{
    if(a%2==0)
    {
        cout<<"number is even"<<endl;
    }
    else{
        cout<<"number is odd"<<endl;
    }

}
int main()
{
    int a;
    cout<<"enter the number a:";
    cin>>a;
evenorodd(a);
return 0;
}
   

