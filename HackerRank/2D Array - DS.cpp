https://www.hackerrank.com/challenges/2d-array/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays
#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    int sum = INT_MIN;
    for(int i=0; i<arr.size()-2; ++i){
        for(int j=0; j<arr[i].size()-2; j++){
            int total = arr[i][j]+arr[i][j+1]+arr[i][j+2]+
                        arr[i+1][j+1]+
                        arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            sum = max(sum,total);
        }
    }
    return sum;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
