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
#include <regex>
using namespace std;

bool is_valid(const string& line){
    regex rgx("[a-z]{0,3}[\\d]{2,8}[A-Z]{3}[A-Z]*");
    return regex_match(line.begin(), line.end(), rgx);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string first_line;
    getline(cin, first_line);
    int loop = stoi(first_line);
    for (int i=0; i<loop; i++){
        string line;
        getline(cin, line);
        if (is_valid(line)){
            cout<<"VALID"<<endl;
        }else{
            cout<<"INVALID"<<endl;
        }
    }
    return 0;
}