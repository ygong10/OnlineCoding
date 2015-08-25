/*
@author 
Yicheng Gong
Summer @2015
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isUppLetter(char n){
    return (isupper((int)n)!=0);
}
bool isLength(string line){
    return (line.length()==10);
}
bool isDigit(char n){
    return (isdigit((int)n)!=0);
}
bool is_valid_pan(string line){
    bool result = false;
    if (isLength(line)){
        for (int i=0; i<line.length(); i++){
            if (i>=0 && i<5 && isUppLetter(line[i])){
                result = true;
            }           
            else if (i>=5 && i<9 && isDigit(line[i])){
                result = true;
            }
            else if (i==9 && isUppLetter(line[i])){
                result = true;
            }else{
                //cout<<"reached3"<<endl;
                return false;
            }
        }
    }
    return result;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string first_line ="";
    getline(cin, first_line);
    int count = stoi(first_line);
    //for (string line; getline(cin, line);){
    for (int i=0; i<count; i++){
        string line = "";
        getline(cin, line);
        if (is_valid_pan(line)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
