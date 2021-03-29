
int get_minimum_trashes(int **waste, int N, int K) {
	int answer = K * K;
	int size = N-K;
	
	for(int n=0; n<=size; ++n){
		for(int m=0; m<=size; ++m){	
			int trash = 0;
			for(int i=0; i<K; ++i){
				for(int j=0; j<K; ++j){		
					if(waste[i+n][j+m] == 1){
						trash += 1;
					}
				}
			}
			answer = min(trash,answer);
		}

	}
	return answer;
}