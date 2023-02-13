#include<iostream>

using namespace std;

template <typename T>

T average(T elements[],int s)
{
    T sum=0;
    for(int i=0;i<s;i++){sum+=elements[i];}return sum/s;}

int main()

{
int integers[]={1,2,4,5};

double doubles[]={5.8,9.6,9.9,5.5};

long longs[]={2222,4334,7777,9898};

char chars[]={'a','b','c','d'};


cout<<"average of integers is:"<<average<int>(integers,4)<<endl;

cout<<"average of doubless is:"<<average<double>(doubles,4)<<endl;

cout<<"average of longs is:"<<average<long>(longs,4)<<endl;

cout<<"average of chars is:"<<average<char>(chars,4)<<endl;

return 0;
}
