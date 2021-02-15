//https://www.hackerrank.com/challenges/gem-stones/problem?h_r=next-challenge&h_v=zen
#include <bits/stdc++.h>

using namespace std;

// Complete the gemstones function below.
int gemstones(vector<string> arr) {
    vector<set<char>> set_arr;
    int cache[28];
    int size = arr.size();
    int ans = 0;
    
    memset(cache,0,sizeof(cache));
    for(string s : arr){
        set<char> temp;
        for(char c : s){
            temp.insert(c);
        }
        set_arr.push_back(temp);
    }
    for(set<char> s : set_arr){
        for(char c : s){
            cache[c-'a']++;
        }
    }
    
    for(int n : cache){
        if(n == size){
            ans++;
        }
    }
    
    return ans;
    

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> arr(n);

    for (int i = 0; i < n; i++) {
        string arr_item;
        getline(cin, arr_item);

        arr[i] = arr_item;
    }

    int result = gemstones(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
