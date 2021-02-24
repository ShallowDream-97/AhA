#include<iostream>
using namespace std;
int a[7]={-2,-1,-3,0,2,1,3};
void exchange(int i,int j){
    int tmp = a[i];
    a[i] = a[j];
    a[j] = tmp;
}
int main()
{
    
    for(int i = 0 ;i <6;i++)
    {
        int tmp1 = a[i];
        int tmp2 = i;

        for(int j = i+1; j<7;j++)
            if(a[j]<tmp1){
                    tmp1=a[j];
                    tmp2=j;
                }
        exchange(i,tmp2);
    }
    for(int i = 0 ;i <7;i++)
        cout<<a[i]<<"  ";
}