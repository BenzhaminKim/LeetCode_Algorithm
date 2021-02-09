//https://www.hackerrank.com/challenges/drawing-book/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the pageCount function below.
 */
int pageCount(int n, int p) {
    /*
     * Write your code here.
     */
     int start = 0;
     int end = n;
     int minNumber1 = 0;
     int minNumber2 = 0;
     int ans = 0;
     
     if(end % 2 == 0){
         end++;
     }
     while(start <=p ){
         if(p == start || p == start+1){
             break;
         }
         minNumber1++;
         start += 2;
     }
     while(end >= 0){
         if(p == end || p == end-1){
             break;
         }
         minNumber2++;
         end -= 2;
     }
     return min(minNumber1,minNumber2);

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}
