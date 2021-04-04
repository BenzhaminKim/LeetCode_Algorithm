#include <iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	int arr[N][N];
	int number; 
	int startX,startY,endX,endY;
	int result = 0;
	
	for(int i=0; i<N; ++i){
		for(int j=0; j<N; ++j){
			cin >> number;
			arr[i][j] = number;
		}
	}
	
	cin >> startX >> startY >> endX >> endY;
	
	for(int i=startX; i<=endX; ++i){
		for(int j=startY; j<=endY; ++j){
			result = result + (int)arr[i][j];
		}
	}
	cout << result << endl;
	
	return 0;
}