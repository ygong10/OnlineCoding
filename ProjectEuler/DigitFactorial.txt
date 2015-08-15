/*
@author
Yicheng Gong
Summer 2015
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int n){
    int temp;
    if (n<=1){
        return 1;
    }
   
    temp  = n*factorial(n-1);
    return temp;
}

int sum(int n){

    int total=0;
    for (int i=10; i<n; i++){
        //holds temporary value of i, so i doesn't get modified
        int temp = i;

        //since constraint max is 10^5, only need to calculate up to 6 digits, technically 5 since 100000 itself is not divisible by its digit factorials
        
        int n1;
        int n2;
        int n3;
        int n4;
        int n5;
        
        n1 = temp%10;
        temp /= 10;
        n2 = temp%10;
        temp /= 10;
        n3 = temp%10;
        temp /= 10;
        n4 = temp%10;
        temp /=10;
        n5 = temp%10;
        
        /*cout << n1 << endl;
        cout << n2 << endl;
        cout << n3 << endl;
        cout << n4 << endl;
        cout << n5 << endl;*/
        
        if (i==100000){
            total +=0;
        }
        //5 digit
        else if (i>=10000 && i<100000){
            if ((factorial(n1)+factorial(n2)+factorial(n3)+factorial(n4)+factorial(n5))%i==0){
                total += i;
            }
        }
        //4 digits
        else if (i>=1000 && i<10000){
            if ((factorial(n1)+factorial(n2)+factorial(n3)+factorial(n4))%i==0){
                total += i;
            }
        }
        //3 digits
       else if (i>=100 && i<1000){
            if ((factorial(n1)+factorial(n2)+factorial(n3))%i==0){
                total += i;
            }
        }
        //2 digits
        else if (i>=10 && i<100){
            if ((factorial(n1)+factorial(n2))%i==0){
                total += i;
            }
        }
    }
    return total;
}       

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string input ="";
    getline(cin, input);
    cout<<sum(stoi(input));
    return 0;
}