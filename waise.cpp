#include<iostream>
using namespace std;
main()
{
    int arr[15];
    int sum=0;
    int product = 1;
    int sum1 = 0;
    for(int i=0; i<15; i++)
    {
        cout<<"Enter the number "<<i+1<<": ";
        cin>>arr[i];
    }
    for(int i=0; i<5; i++)
    {
        sum=sum+arr[i];
    }
    for(int i=5; i<10; i++)
    {
        product=product*arr[i];
    }
    for(int i=10; i<15; i++)
    {
        sum1 = sum1 + arr[i];
    }
    cout<<"The answer is: "<<product+sum+sum1;
}