#include <bits/stdc++.h> 
#include <iostream>
#include <cstring>
using namespace std;

string removeAllOccurrencesOfChar(string input, char c) {
    string ans="";
    for(int i=0;i<input.length();i++){
        if(input[i]!=c){
            ans.push_back(input[i]);
        }
    }
    return ans;
}

int main() {
    string input;
    char c;
    cin >> input >> c;
    string output = removeAllOccurrencesOfChar(input, c);
    cout << output << endl;
    return 0;
}
