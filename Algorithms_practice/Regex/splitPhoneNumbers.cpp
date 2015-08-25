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

void print_number(const string& line){
    regex reg("([0-9]{1,3})[- ]([0-9]{1,3})[- ]([0-9]{4,10})");
    smatch match;
    if (regex_search(line.begin(), line.end(), match, reg)){
        cout<<"CountryCode="<<match[1]<<",";
        cout<<"LocalAreaCode="<<match[2]<<",";
        cout<<"Number="<<match[3]<<endl;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string first_line;
    getline(cin, first_line);
    int loop = stoi(first_line);
    for (int i=0; i<loop; i++){
        string line;
        getline(cin, line);
        print_number(line);
    }
    return 0;
}
