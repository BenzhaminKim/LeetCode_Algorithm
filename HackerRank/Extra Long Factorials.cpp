//https://www.hackerrank.com/challenges/extra-long-factorials/problem
#include <bits/stdc++.h>

using namespace std;

// Complete the extraLongFactorials function below.
void extraLongFactorials(int n) {
    
    
    vector<int> arr;
    arr.push_back(1);
    
    for(int i=1; i<=n; ++i){
        
        for(int k=0; k<arr.size(); ++k){
           arr[k] = arr[k] * i;
        }
        
        int index = arr.size()-1;
        while(index){
            int q = arr[index]/10;
            int r = arr[index]%10;
            
            arr[index-1] += q;
            arr[index] = r;
            index--;
        }
        while(arr[0]>10){
            int num = arr[0];
            arr[0] = arr[0]%10;
            arr.insert(arr.begin(), num/10);
        }
        
    } for(int e:arr){
            cout << e;
        }

}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    extraLongFactorials(n);

    return 0;
}
