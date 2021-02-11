//https://www.hackerrank.com/challenges/mars-exploration/problem
#include <bits/stdc++.h>

using namespace std;

// Complete the marsExploration function below.
int marsExploration(string s) {
    int q = s.length() / 3;
    string message = "";
    int ans = 0;
    
    for(int i=0; i<q; ++i){
        message += "SOS";
    }
    for(int i=0; i<(int)s.length(); ++i){
        if(s[i] != message[i]){
            ans++;
        }
    }
    return ans;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
