#include <iostream>
using namespace std;
int tot(int arr[3])
{
    int sum=0;
    for(int i=0;i<3;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
float tot(float a[3])
{
    float sum=0.0;
    for(int i=0;i<3;i++)
    {
        sum+=a[i];
    }
    return sum;
}
int main()
{
    int set[3]={37,85,14};
    float group[3]={23.45,67.87,81.29};
    cout<<"The total of numbers in array set is "<<tot(set)<<endl;
    cout<<"The total of numbers in array group is "<<tot(group)<<endl;
    return 0;
}