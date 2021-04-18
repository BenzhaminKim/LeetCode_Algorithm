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
using namespace std;
/*
6 2                                                                                                                                                           
436436  
*/
int main()
{
    int N,K;
    string s;
    cin >> N >>  K;
    cin >> s;
    int size = N-K;
    string answer = "";
    deque<char> container;
    
    for(int i=0; i<s.length(); ++i){
            
        while(!container.empty() &&container.back() < s[i] && K>0){
            container.pop_back();
            K--;
        }
        container.push_back(s[i]);
    }
    
    for(int i=0; i<size; ++i){
        answer += container[i];
    }
    cout << answer <<endl;
    return 0;
 }