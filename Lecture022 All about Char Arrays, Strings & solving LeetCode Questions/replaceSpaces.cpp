#include<string>
#include<iostream>
using namespace std;
string replaceSpaces(string &str){
	string temp = "";
    
    for(int i=0; i<str.length(); i++) {
        if(str[i] == ' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(str[i]);
        }
    }
    return temp;
}

//! Replace string question without making a new string
string replaceSpaces(string &str){
	
    string temp = "@40";
    for(int i = 0; i < str.size();i++){
        if(str[i] == ' '){
            str.replace(i,1,temp);
        }
    }
    return str;
}