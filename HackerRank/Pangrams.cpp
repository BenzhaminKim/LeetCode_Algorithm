//https://www.hackerrank.com/challenges/pangrams/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
#include <bits/stdc++.h>
using namespace std;

// Complete the pangrams function below.
string pangrams(string s) {
    int alp[26];
    memset(alp,0,sizeof(alp));
    transform(s.begin(),s.end(),s.begin(),::tolower);
    for(char c : s){
        if(int(c) != 0){
            int index = int(c) - int('a');
            alp[index]++;
        }
    }
    for(int num:alp){
        if(num == 0){
            return "not pangram";
        }
    }
    return "pangram";

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
