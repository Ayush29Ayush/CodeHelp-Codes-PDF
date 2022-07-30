// My approach => Time Complexity = O(N^2) => Time exceeded

// int findDuplicate(vector<int> &arr) 
// {
//     int count = 0;
//     int countarr[20] = {0};
//     for(int i = 0; i<arr.size(); i++)
//     {
//         countarr[arr[i]]+=1;
//     }
//     for(int i = 0; i<sizeof(countarr)/sizeof(countarr[0]); i++)
//     {
//         if(countarr[i]>1)
//         {
//             return i;
//         }
//     }
// }

//! Bhaiya's answer
//! NOTE - bass XOR ke steps likho and simplify acc to property but do not solve, solve karne se samajh nahi ayega
int findDuplicate(vector<int> &arr)  
{
 // Time Complexity: O(n) Space Complexity: O(1)

   // I/O : {1,2,2,3,4}
   int ans = 0;
   // 1^1 == 0
   // XOR Array : 1^2^2^3^4 ==1^3^4  
   for(int i=0; i<arr.size(); i++) {
       ans = ans ^ arr[i];
   } 
    
   // XOR Till N-1
   // 1^3^4 ^ 1^2^3^4 == 2
   for(int i=1; i<arr.size(); i++) {
       ans = ans ^ i;
   } 
   return ans;
}