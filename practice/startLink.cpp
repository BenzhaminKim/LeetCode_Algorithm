/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>  
#include <vector>
#include <deque>
#include <bits/stdc++.h>
#include<string>  
#include <algorithm> 
#include <cstdlib>
using namespace std;
/*
4
0 1 2 3
4 0 5 6
7 1 0 2
3 4 5 0
*/
int main()
{
    int N;
    cin >> N;
    
    int nums[N][N];
    vector<int> totals;
    vector<int> container;
    int min_num = INT_MAX;
    for(int i=0; i<N; ++i){
        for(int j=0; j<N; ++j){
            cin >> nums[i][j];
        }
    }
    for(int i=0; i<N/2; ++i){
        totals.push_back(0);
    }
    for(int i=0; i<N/2; ++i){
        totals.push_back(1);
    }
    do {
         int start=0;
         int link = 0;
         
         for(int i=0; i<N-1; ++i){
             for(int j=i+1; j<N; ++j){
                 if(totals[i] == 0 && totals[j] == 0){
                     start += (nums[i][j] + nums[j][i]);
                 }
                 if(totals[i] == 1 && totals[j] == 1){
                     link += (nums[i][j] + nums[j][i]);
                 }
             }
         }
         
         min_num = min(min_num, abs(start-link));
  } while ( next_permutation(totals.begin(),totals.end()) );
  
    cout << min_num<<endl;
    return 0;
 }