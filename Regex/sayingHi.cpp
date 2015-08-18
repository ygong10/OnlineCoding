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

bool is_valid(string line){
    //change whole line to lowercase since everything is not case-sensitive
    string new_line ="";
    for (int i=0; i<line.length(); i++){
        new_line.push_back(tolower(line[i]));
    }
    regex rgx("(^hi\\s)[^d].*");
    return regex_match(new_line.begin(), new_line.end(), rgx);
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
            cout<<line<<endl;
        }
    }
    return 0;
}
