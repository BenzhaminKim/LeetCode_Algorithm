/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm> 

using namespace std;

int main(void)
{
    int arr[] = {1,-2,4,-3,8,-2,5,-7,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0; i<n; i++){
       for(int j=0; j<n-1; j++){
           if(arr[j+1] < arr[j]){
               swap(arr[j],arr[j+1]);
           }
       }
        
    }
    string ans = "";
    for(int e : arr){
        cout <<e << " ";
    }
    
    
    return 0;
}
