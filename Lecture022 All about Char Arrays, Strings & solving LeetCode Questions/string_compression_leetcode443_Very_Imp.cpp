#include <bits/stdc++.h>
using namespace std;

int compress(vector<char> &chars)
{
    int i = 0;
    int ansIndex = 0, n = chars.size();
    while (i < n)
    {
        int j = i + 1;
        while (j < n && chars[i] == chars[j])
        {
            j++;
        }
        //yahan kab aaoge - 
        //1. ya toh vector poora traverse kar dia
        //2. ya phir new/different character encounter kia hai

        // oldChar store karlo
        chars[ansIndex++] = chars[i];
        int count = j - i;
        if (count > 1)
        {
            // converting counting into single digit and saving in answer
            string cnt = to_string(count);
            for (char ch : cnt)
            {
                chars[ansIndex++] = ch;
            }
        }
        // moving to new/different character
        i = j;
    }
    return ansIndex;
}