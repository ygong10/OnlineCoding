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

void print_hackerrank(const string& line){
    //if hackerrank = begin and end
    regex rgx1("^hackerrank.*hackerrank$");
    //if hackerrank = begin
    regex rgx2("^hackerrank.*");
    //if hackerrank = end
    regex rgx3(".*hackerrank$");
    if (line =="hackerrank" || regex_search(line.begin(), line.end(), rgx1)){
        cout<<0<<endl;
    }
    else if (regex_search(line.begin(), line.end(), rgx2)){
        cout<<1<<endl;
    }
    else if (regex_search(line.begin(), line.end(), rgx3)){
        cout<<2<<endl;
    }
    else{
        cout<<-1<<endl;
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
        print_hackerrank(line);
    }
    return 0;
}