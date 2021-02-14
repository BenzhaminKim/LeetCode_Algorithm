//https://www.hackerrank.com/challenges/utopian-tree/problem?h_r=next-challenge&h_v=zen
#include <bits/stdc++.h>

using namespace std;

// Complete the utopianTree function below.
/*
0          1
1          2
2          3
3          6
4          7
5          14
*/
int utopianTree(int n) {
    int tall = 1;
    int cycle = 0;
    while(cycle++ < n){
        if(cycle % 2 == 0){
            tall += 1;
        }else{
            tall = tall*2;
        }
    }
    
    return tall;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = utopianTree(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
