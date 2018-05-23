#include<iostream>
using namespace std;
int main()
{
    int arr[10]={10,9,8,7,6,5,4,3,2,1};
    int key;
    int j;
    for(int i=1;i<10;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {

            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }

    for(int k=0;k<10;k++)
    {

        cout<<arr[k]<<endl;
    }
}
