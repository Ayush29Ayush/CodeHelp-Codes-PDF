
//! Ans - 1
// void solve(vector<string>& ans, string str, string output, int i) {
//     //base case
//     if(i>=str.length()) {
//         if(output.length()>0)
//         ans.push_back(output);
//         return ;
//         }
    
//     //exclude
//     solve(ans, str, output, i+1);
//     //include
//     output.push_back(str[i]);
//     solve(ans, str, output, i+1);
// }

// vector<string> subsequences(string str){
	
// 	vector<string> ans;
//     string output = "";
//     solve(ans,str,output,0);
//     return ans;
	
// }

//! Ans - 2
/*
void solve(string &str, int n,vector<string> &ans, string s)
{
    if(n>=str.size())
    {
        if(s!="")
            ans.push_back(s);
        return;
    }
    
    //exclude
    solve(str, n+1, ans,s);
    
    //include
    s= s+str[n];
    solve(str, n+1, ans,s);   
}

vector<string> subsequences(string str){
    
    vector<string> ans;
    string s;
    int n = 0;
    
    solve(str, n, ans,s);
    
    return ans;
}
*/

//! Ans - 3 (Bhaiya ka answer)
#include<bits/stdc++.h>
using namespace std;

void solve(string str, string output, int index, vector<string>& ans){
    //! base case
    if(index>=str.length()){
        if(output.length()>0){
            //no need to insert "" => empty string
            ans.push_back(output);
        }
        return;
    }
    
    //! excluded element call
    solve(str, output, index+1, ans);
    
    //! included element call
    char element = str[index];
    output.push_back(element);
    solve(str, output, index+1, ans);
}
vector<string> subsequences(string str){
	
	vector <string> ans;
    string output = "";
    int index = 0;
    solve(str, output, index, ans);
    return ans;
	
}