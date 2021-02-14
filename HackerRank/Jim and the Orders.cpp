https://www.hackerrank.com/challenges/jim-and-the-orders/problem
#include <bits/stdc++.h>

using namespace std;

// Complete the jimOrders function below.
vector<int> jimOrders(vector<vector<int>> orders) {
    vector<pair<int,int>> deli;
    vector<int> ans;
    
    for(int i=0; i<orders.size(); ++i){
        int time = orders[i][0] + orders[i][1];
        deli.push_back(make_pair(time,i+1));
    }
    sort(deli.begin(), deli.end());
    
    for(auto & it : deli){
        ans.push_back(it.second);
    }
    
    return ans;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int>> orders(n);
    for (int i = 0; i < n; i++) {
        orders[i].resize(2);

        for (int j = 0; j < 2; j++) {
            cin >> orders[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    vector<int> result = jimOrders(orders);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << " ";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
