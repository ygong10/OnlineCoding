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
#include <regex>
using namespace std;
void hours(const string& line){
    regex rgx("([0-9]+)(:.*)([A|P][M])");
    smatch match;
    int new_time;
    if (regex_search(line.begin(), line.end(), match, rgx)){
        if (match[3]=="AM" && stoi(match[1])>=12){
            new_time = stoi(match[1])-12;
            cout<<"0"<<new_time<<match[2];
        }
        else if (match[3]=="PM"&& stoi(match[1])<12){
            new_time = stoi(match[1])+12;
            cout<<new_time<<match[2]; 
        }else{
            cout<<match[1]<<match[2];
        }
    }
}

int main() {
    string line;
    cin>>line;
    hours(line);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}