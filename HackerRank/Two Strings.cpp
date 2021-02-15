//https://www.hackerrank.com/challenges/two-strings/problem?h_r=next-challenge&h_v=zen
#include <bits/stdc++.h>

using namespace std;

// Complete the twoStrings function below.
string twoStrings(string s1, string s2) {
    int c1[28];
    int c2[28];
    int n = sizeof(c1)/sizeof(c1[0]);
    memset(c1,0,sizeof(c1));
    memset(c2,0,sizeof(c2));
    
    for(char c : s1){
        c1[c-'a']++;
    }
    for(char c : s2){
        c2[c-'a']++;
    }
    for(int i=0; i<n; ++i){
        if(c1[i]>0 && c2[i]>0){
            return "YES";
        }
    }
    return "NO";
    

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        string result = twoStrings(s1, s2);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
