//https://www.hackerrank.com/challenges/the-love-letter-mystery/problem?h_r=next-challenge&h_v=zen
#include <bits/stdc++.h>

using namespace std;

// Complete the theLoveLetterMystery function below.
//abcba
//abcd
int theLoveLetterMystery(string s) {
    int l = 0;
    int h = s.length()-1;
    int ans = 0;
    while(l<h){
        ans += abs(s[l] - s[h]);
        l++;
        h--;
    }
    return ans;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = theLoveLetterMystery(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
