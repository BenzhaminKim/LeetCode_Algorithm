//https://www.hackerrank.com/challenges/staircase/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    int count = n-2;
    
    for(int i=0; i<n; ++i){
        
        for(int j=0; j<n; ++j){
            if(count >= j){
                cout <<" ";
            }else{
                cout << "#";
            }
        }
        count--;
        cout << "\n";
    }

}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
