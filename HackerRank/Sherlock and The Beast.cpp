//https://www.hackerrank.com/challenges/sherlock-and-the-beast/problem
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// Complete the decentNumber function below.
void decentNumber(int n) {
    int threeMax = 5 * (int)(n/5);
    int three = 0;
    int five = n;
    bool chk = false;
    
    while(three <= threeMax){
        five = n - three;
        if(five%3 == 0 && three%5 == 0){
            chk = true;
            break;
        }
        three += 5;
    }
    if(chk){
        while(five--){
            cout << '5';
        }
        while(three--){
            cout << '3';
        }
        cout<<endl;
    }else{
        cout << "-1"<<endl;
    }

}

int main()
{
    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        decentNumber(n);
    }

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
