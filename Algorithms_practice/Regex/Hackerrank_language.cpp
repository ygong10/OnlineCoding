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

bool is_valid_language(const string& line){
    regex rgx("^([1-9][0-9]{4}) (C|CPP|JAVA|PYTHON|PERL|PHP|RUBY|CSHARP|HASKELL|CLOJURE|BASH|SCALA|ERLANG|CLISP|LUA|BRAINFUCK|JAVASCRIPT|GO|D|OCAML|R|PASCAL|SBCL|DART|GROOVY|OBJECTIVEC)");
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
        if (is_valid_language(line)){
            cout<<"VALID"<<endl;
        }else{
            cout<<"INVALID"<<endl;
        }
    }
    return 0;
}