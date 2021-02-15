//https://www.hackerrank.com/challenges/repeated-string/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=warmup
#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    long q = n / (long)s.length();
    long r = n % s.length();
    long count = 0;
    long ans = 0;
    
    for(char c : s){
        if(c == 'a'){
            count++;
        }
    }
    ans = count * q;
    for(int i=0; i<r; ++i){
        if(s[i] == 'a'){
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

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
