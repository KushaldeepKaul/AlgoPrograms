#include<iostream>
using namespace std;
int main()
{
    int arr[10]={10,9,8,7,6,5,4,3,2,1};

    int temp;
    for(int i=0;i<9;i++)
    {

        for(int j=i+1;j<10;j++)
        {
            if(arr[i]>arr[j])
            {

                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }

        }
    }

    for(int k=0;k<10;k++)
    {

        cout<<arr[k]<<endl;
    }

}
