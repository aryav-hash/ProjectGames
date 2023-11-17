#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while (t--){
	    int N, K;
	    cin>>N>>K;
	    
	    int W[N];
	    for (int i = 0; i < N; i++){
	        cin >> W[i];
	    }
	    
	    for (int i = 0; i < N-1; i++){
	        int minIndex = i;
	        for (int j = i+1; j < N; j++){
	            if (W[j] < W[minIndex]){
	                minIndex = j;
	            }
	        }
	        swap(W[minIndex], W[i]);
	    }
	    
	    int a = 0;
	    int b = 0;
	    int F = N/K;
	    
	    if (F >= 2){
	        for (int i = 0; i < K; i++){
	            a += W[i];
	        }
	        
	        for (int i = K; i < N; i++){
	            b += W[i];
	        }
	    }
	    else{
	        for (int i = 0; i < K; i++){
	            b += W[(N-1)-i]; 
	        }
	        for (int i = 0; i < (N-K); i++){
	            a += W[i];
	        }
	    }
	    cout << b - a << endl;
	}
	return 0;
}

