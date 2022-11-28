#include <bits/stdc++.h>
 using namespace std;  
 long largestRepackeged(vector<int> nums) 
 {     vector<long> arr; //for storing the new repackaged array     
 int carry = 0;    //for storing the carry value     
 for (int i = 0; i < nums.size(); i++)     
 {         int x = log2(nums[i] + carry);         
 long newNum = (long)pow(2, x);        
 arr.push_back(newNum);        
 carry = nums[i] + carry - newNum;     }     
 //finding the max value using a loop     
 long maxValue = INT_MIN;     
 for (int i = 0; i < arr.size(); i++)     
 {         maxValue = max(maxValue, arr[i]);     } 
 return maxValue; }  
 int main() 
 {     vector<int> nums = {13, 25, 12, 2, 8};    
 cout << largestRepackeged(nums) << endl; 
 }
