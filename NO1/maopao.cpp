#include<iostream>
using namespace std;

int main()
{
    int a[7]={-2,-1,-3,0,2,1,3};
    bool flag = 1;
    while (flag)
    {
        flag = 0;
        for(int i =0 ; i<6;i++)
        {
            if(a[i]>a[i+1])
            {
                int tmp = a[i];
                a[i]=a[i+1];
                a[i+1] = tmp;
                flag = 1;
            }
        }
    }
    for(int i = 0 ;i <7;i++)
        cout<<a[i]<<"  ";
}
