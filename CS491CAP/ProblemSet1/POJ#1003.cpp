/*
@author
Yicheng Gong
Fall 2015
*/
#include <iostream>

using namespace std;

int main()
{
    double sum =0.0;
    int cards = 0;
    double value;
    //cout<<"enter value = "; //cin>>value;
    //while there is an input
    while(cin>>value)
    {
        if (value==0.0){
            //ignore
        }
        else
        {
            //for loop for incrementing denominator and calculating the sum to check vs the input value
            for (double denom=2.0; sum<=value; denom++)
            {
                double frac;
                frac = 1.0/denom;
                sum += frac;
                cards++;
            }
            cout<<cards<<" card(s)"<<endl;
            //reset cards and sum for the next value
            cards = 0;
            sum =0.0;
        }
    }
   return 0;
}
