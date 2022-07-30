#include<stack>
int findMinimumCost(string str) {	
    //odd condition
    if(str.length()%2 == 1) 
        return -1;

    stack<char> s;
    for(int i=0; i<str.length(); i++) {
        char ch = str[i];
        
        if(ch == '{') 
            s.push(ch);
		else
        {
            //ch is closed brace
            if(!s.empty() && s.top() == '{') {
                s.pop();
            }
            else
            {
                s.push(ch);
            }
        }
    }
        //stack contains invalid expression
        int a = 0, b = 0;
        while(!s.empty()) {
            if(s.top() == '{') 
                b++;
            else
                a++;

            s.pop();
        }
        
		int ans = (a+1)/2 + (b+1)/2;
        return ans;
}

//TODO - Other approach so pass every test case
//! If(a==0 && b!=0) => return b/2
//! If(a!=0 && b==0) => return a/2
//! If (a==b==0) => return 0
//! Else calculate and return using the formula