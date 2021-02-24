#include<iostream>
using namespace std;
int a[7]={-3,-2,-1,0,1,2,3};

void exchange(int i,int j){
    int tmp = a[i];
    a[i] = a[j];
    a[j] = tmp;
}


void quicksort(int left,int right)
{
    

    if(left>=right)
        return;

    int i=left;
    int j=right;

    while(i<j){
        
        while(a[i]<=a[left]&&i<j)
            i++;

        while(a[j]>=a[left]&&i<j)
            j--;
    
        exchange(i,j);
    }
    quicksort(left,j-1);
    quicksort(j,right);
}

int main()
{
    quicksort(0,6);
    
    for(int i = 0 ;i <7;i++)
        cout<<a[i]<<"  ";  

    return 0;  
}