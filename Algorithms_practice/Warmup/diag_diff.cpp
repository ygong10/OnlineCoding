/* 
@author
Yicheng Gong
Fall 2015
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int sum1=0;
    int sum2=0;
    int value;
    int loop;
    vector<int> storage;
    cin>>loop;
    for (int i=0; i<loop*loop; i++){
        cin>>value;
        storage.push_back(value);
    }
    //first diagonal
    for (int j=0; j<storage.size(); j=j+loop+1){
        //cout<<storage[j]<<endl;
        sum1+= storage[j];
        //cout<<sum1<<"sum1"<<endl;
    }
    //first diagonal
    for (int k=storage.size()-loop; k>0; k=k-loop+1){
        //cout<<storage[k]<<endl;
        sum2+=storage[k];
        //cout<<sum2<<"sum2"<<endl;
    }
    
    cout<<abs(sum1-sum2);
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
