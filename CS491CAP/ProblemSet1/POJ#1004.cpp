/*
@author
Yicheng Gong
*/
#include <iostream>

using namespace std;
int main()
{
    double value;
    int count = 0;
    double sum  = 0;
    while(cin>>value){
        sum+=value;
        count++;
    }
    cout<<"$"<<sum/count<<endl;
    return 0;
        
}