#include <string>
#include <vector>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    int arr[n][n];
    memset(arr, 0, sizeof arr);
    int num = 1;
    int size = n;
        
        for(int i=0; i<size; ++i){
            arr[i][n-size] = num++;
        }
        for(int j=1; j<size; ++j){
            arr[size-1][j] = num++;
            
        }
        for(int k=size-1; k>0; k--){
                arr[k][k] = num++;
        }
        
        for(int i=0; i<n; ++i){
            for(int j=0; j<n; ++j){
                cout << arr[i][j] << " ";
            }
        cout<<endl;
        }
        
    return answer;
}