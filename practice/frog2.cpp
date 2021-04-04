#include <iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	N = N+1;
	int arr[N];
	int result = 0;
	arr[0] = 0;
	
	for(int i=1; i<N; i++){
		cin >> arr[i];
	}
	
	
	for(int i=0; i<N-1; i++){
		 result = max(result,(arr[i+1] - arr[i]) + i);
	}
	cout << result;
	return 0;
}