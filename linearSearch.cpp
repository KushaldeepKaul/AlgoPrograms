#include<iostream>
using namespace std;
int main()
{

    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int searchValue=6;
    int index=0;
    int i;
    for(i=0;i<10;i++)
    {

        if(arr[i]==searchValue)
        {

            index=1;
            break;

        }
    }
    if(index== 1)
    {

        cout<<"Value is find at index="<<i;
    }
    else
    {
        cout<<"Value is not find";
    }
}

