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

//Task = distinguish between iPv4, iPv6 and neither

bool is_only_digits(const string& line){
    return line.find_first_not_of("0123456789")==string::npos;
}
bool neither(const string& line){
    string test = "0123456789.:abcdef";
    bool result = false;
    for (int i=0; i<line.length(); i++){
        //if line doesn't contain anything in the test string, it must be neither as it contains other characters
        if (test.find(line[i])==string::npos){
            result = true;
            break;
        }
    }
    return result;
}
bool isIPV4(const string& line){
    //vector<char> input;

    //int num_to_int =0;
    string test = "0123456789.";
    bool iPV4 = false;
    //if neither is false
    if (!neither(line)){
        //fill the vector with characters from lines
        for (int i=0; i<line.length(); i++){
            //3 consecutive numbers
            if (i>=2){
                if ((int)(line[i-2])>=48 && (int)(line[i-2])<=57
                   && (int)(line[i-1])>=48 && (int)(line[i-1])<=57
                   && (int)(line[i])>=48 && (int)(line[i])<=57){
                    string num ="";
                    num.push_back(line[i-2]);
                    num.push_back(line[i-1]);
                    num.push_back(line[i]);
                    int sum =0;
                    //converts string to number
                    sum = stoi(num);
                    if (sum>255){
                        return false;
                    }
                }
            }

            //if test string can't find the character in input line, then it must not be a IPV4
            if (test.find(line[i])==string::npos){
                return false;
            }else{
                iPV4 = true;
            }
        }

    }
    return iPV4;
}
    
bool isIPV6(const string& line){
    string test = "0123456789abcdef:";
    bool iPV6 = false;
    if (!neither(line)){
        for (int i =0; i<line.length(); i++){
            if (test.find(line[i])==string::npos){
                return false;
            }else{
                iPV6 = true;
            }
        }
    }
        return iPV6;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    for (string line; getline(cin, line);){
        if (is_only_digits(line)){
            //
        }
        else if(isIPV4(line)){
            cout<<"IPv4"<<endl;
        }
        else if (isIPV6(line)){
            cout<<"IPv6"<<endl;
        }
        else{
            cout<<"Neither"<<endl;
        }
    }
    return 0;
}