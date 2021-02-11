//https://www.hackerrank.com/challenges/camelcase/problem?h_r=next-challenge&h_v=zen
#include <bits/stdc++.h>

using namespace std;

// Complete the camelcase function below.
int camelcase(string s) {
    int ans = 0;
    for(char c : s){
        int asci = int(c);
        if(asci >=65 && asci<=90){
            ans++;
        }
    }
    return ans+1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
