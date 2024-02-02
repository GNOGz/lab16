void findColSum(const double *a,double *b,int N,int M){

	for(int i = 0 ;i < M ; i++){
		b[i] = 0;
	}

	for(int i = 0 ;i < M ; i++){
		for(int j = i*N ; j < N+(i*N) ; j += M ){
			b[i] += a[j];
		}
	}
}