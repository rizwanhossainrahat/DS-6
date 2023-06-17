#include<bits/stdc++.h>
using namespace std;
void fun(int *& p)
{
    // p=NULL;
    cout<< &p<< endl;
}
int main()
{
    int val=10;
    int* ptr=&val;
    fun(ptr);
    cout<<&ptr<<endl;
    return 0;
}
// function a *& use korle ptr ar address r p ar address same hobe 
// funtion a * use p alada variable create hobe