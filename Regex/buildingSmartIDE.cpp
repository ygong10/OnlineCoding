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

bool is_single(const string& line){
    regex rgx(".*([/][/].*)");
    smatch match;
    return regex_match(line.begin(), line.end(), rgx);
}
void single_comment(const string& line){
    regex rgx(".*([/][/].*)");
    smatch match;
    if (regex_search(line.begin(), line.end(), match, rgx)){
        cout<<match[1]<<endl;
    }
}


bool is_multi_begin(const string& line){
    regex begin(".*([/][*].*)");
    return regex_match(line.begin(), line.end(), begin);  
}

bool is_multi_end(const string& line){
    regex end("(.*[*][/].*)");
    return regex_match(line.begin(), line.end(), end); 
}
//is_multi_begin must be true
void multi_comment(const string& line, int begin){
    regex start(".*([/][*].*)");
    //regex last("(.*[*][/]).*");
    smatch match;
    if (regex_search(line.begin(), line.end(), match, start)){
        cout<<match[1]<<endl;
    }
}

string remove_leading_whitespace(string input){
    string new_line;
    if (input.find_first_not_of(" ")!=string::npos){
        for (int i=input.find_first_not_of(" "); i<input.size(); i++){
            new_line.push_back(input[i]);
        }   
    }
     return new_line;
}

int comment_index(const vector<string>& lines, int begin){
    regex last("(.*[*][/]).*");

    smatch match;
    int result = begin;
    for (int i=begin+1; i<lines.size(); i++){
        if (regex_search(lines[i].begin(), lines[i].end(), match, last)){
            cout<<remove_leading_whitespace(match[1])<<endl;
            result = i; 
            break;
        }
        else
        {
                cout<<remove_leading_whitespace(lines[i])<<endl;    
        }
    }
    return result;
}

bool if_on_same_line(const string& line){
    regex check (".*([/][*].*[*][/]).*");
    return regex_match(line.begin(), line.end(), check);
}

void same_line(const string& line){
    regex check (".*([/][*].*[*][/]).*");
    smatch match;
    
    if (regex_search(line.begin(), line.end(), match, check)){
        cout<<match[1]<<endl;
    }
}



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    //lines contain all the line inputs 
    vector<string> lines;
    for(string line; getline(cin, line);){
        lines.push_back(line);
    }
    for (int i=0; i<lines.size(); i++){
        //if the line at lines[i] is a single comment line
        if (is_single(lines[i]))
        {
           single_comment(lines[i]);
        }
        //if the line at lines[i] contains /*
        else if(is_multi_begin(lines[i]))
        {
            if (if_on_same_line(lines[i])){
                same_line(lines[i]);
            }
            else
            {
                multi_comment(lines[i], i);
                i=comment_index(lines, i);
            }

        }
    }
    
    
    return 0;
}