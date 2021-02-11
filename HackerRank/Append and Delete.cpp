//https://www.hackerrank.com/challenges/append-and-delete/problem
#include <bits/stdc++.h>
#include<string.h>
#include<iostream>
using namespace std;

// Complete the appendAndDelete function below.
string appendAndDelete(string s, string t, int k) {
    int sl = s.length();
    int tl = t.length();
    
    if( sl+tl < k){
        return "Yes";
    }
    int len = max(sl,tl);
    int same = 0;
    for(int i=0; i<len; ++i){
        if(s[i] != t[i]){
            break;
        }
        same++;
    }
    if(sl+tl <= 2*same+k && (tl+sl)%2 == k%2){
        return "Yes";
    }
    return "No";
     
    

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = appendAndDelete(s, t, k);

    fout << result << "\n";

    fout.close();

    return 0;
}
