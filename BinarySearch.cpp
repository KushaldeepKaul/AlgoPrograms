#include<iostream>
using namespace std;
int main()
{

    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int searchValue=8;
    int n=10;
    int index=0;
    int mid,left=0,right=n-1;



    while(left<=right)
    {
        mid =(left+right)/2;
        if(arr[mid]==searchValue)
        {


            index=1;
            break;

        }
        else if(arr[mid]<searchValue)
        {
            left=mid+1;

        }
        else if(arr[mid]>searchValue)
        {

            right=mid-1;
        }
    }
if(index==1)
{

    cout<<"Value is find at index "<<mid;
}
else
{
    cout<<"Why I am change the file name";

}
}
