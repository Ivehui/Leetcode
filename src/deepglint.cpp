/*
 * deepglint.cpp
 *
 *  Created on: Apr 26, 2016
 *      Author: chappie
 */
#include "include.h"

int solution(vector<vector<int> >Matrix){
	// write your code in C++11 (g++ 4.8.2)
	int i,j,a,b;
	int num = 0;
	int N = Matrix.size();
	int M = Matrix[0].size();
	vector<vector<bool> > used(N,vector<bool>(M,false));
	queue<vector<int> > myqueue;
	vector<int> q(2,0);
	for(i=0; i<N; i++){
		for(j=0; j<M; j++){
			if(used[i][j] != true){
				num++;
				q[0] = i; q[1] = j;
				myqueue.push(q);
				used[i][j] = true;
				while(myqueue.size()>0){
					vector<int> v = myqueue.front();
					myqueue.pop();
					a = v[0]; b = v[1];
					if(a>0){
						if(used[a-1][b] == false &&
								Matrix[a-1][b] == Matrix[a][b]){
							q[0] = a-1; q[1] = b;
							myqueue.push(q);
							used[a-1][b] = true;
						}
					}
					if(a<N-1){
						if(used[a+1][b] == false &&
								Matrix[a+1][b] == Matrix[a][b]){
							q[0] = a+1; q[1] = b;
							myqueue.push(q);
							used[a+1][b] = true;
						}
					}
					if(b>0){
						if(used[a][b-1] == false &&
								Matrix[a][b-1] == Matrix[a][b]){
							q[0] = a; q[1] = b-1;
							myqueue.push(q);
							used[a][b-1] = true;
						}
					}
					if(b<M-1){
						if(used[a][b+1] == false &&
								Matrix[a][b+1] == Matrix[a][b]){
							q[0] = a; q[1] = b+1;
							myqueue.push(q);
							used[a][b+1] = true;
						}
					}
				}
			}
		}
	}
	return num;
}

void RunMap(void){
	int N=7;
	int M=4;
	vector<int> q({3,2});
	cout << q.size() << endl;
	vector<vector<int> > Matrix(N, vector<int>(M,0));
	Matrix[0][0] = 1; Matrix[0][1] = 7; Matrix[0][2] = 7; Matrix[0][3] = 4;
	Matrix[1][0] = 7; Matrix[1][1] = 1; Matrix[1][2] = 7; Matrix[1][3] = 7;
	Matrix[2][0] = 7; Matrix[2][1] = 7; Matrix[2][2] = 7; Matrix[2][3] = 4;
	Matrix[3][0] = 7; Matrix[3][1] = 1; Matrix[3][2] = 7; Matrix[3][3] = 4;
	Matrix[4][0] = 7; Matrix[4][1] = 1; Matrix[4][2] = 7; Matrix[4][3] = 4;
	Matrix[5][0] = 7; Matrix[5][1] = 1; Matrix[5][2] = 7; Matrix[5][3] = 4;
	Matrix[6][0] = 7; Matrix[6][1] = 7; Matrix[6][2] = 7; Matrix[6][3] = 4;




	int num = solution(Matrix);
	cout<<"char:"<<sizeof(char)<<endl;
	cout<<"bool:"<<sizeof(bool)<<endl;
	cout<<"int :"<<sizeof(int)<<endl;
	cout<<"long int:"<<sizeof(long int)<<endl;
	cout<<"long long int:"<<sizeof(long long int)<<endl;
	cout<<"short int:"<<sizeof(short int)<<endl;
	cout<<"float:"<<sizeof(float)<<endl;
	cout<<"double:"<<sizeof(double)<<endl;
	cout<< num<<endl;
}

int solution1(vector<int> &A) {
    // write your code in C++11 (g++ 4.8.2)
    int i;
	int N=A.size();
    int sum=0;
    int l = 0;
    for(i=1; i<N; i++){
    	sum += A[i];
    }
    for(i=0; i<N-1; i++){
    	if(l == sum)
    		break;
    	l += A[i];
    	sum -= A[i+1];
    }
    if((i==N-1)&&(l != sum))
    	return -1;
    else
    	return i;
}

void RunEquil(void){
	vector<int> A;

	int num = solution1(A);
	cout<<sizeof(int)<< ','<< num<<endl;

}

int solution2(vector<int> & A) {
    int n = A.size();
    int result = 0;
    for (int i = 0; i < n - 1; i++) {
        if (A[i] == A[i + 1])
            result = result + 1;
    }
    int r = -1;
    for (int i = 0; i < n; i++) {
        int count = 0;
        if (i > 0) {
            if (A[i - 1] != A[i])
                count = count + 1;
            else
                count = count - 1;
        }
        if (i < n - 1) {
            if (A[i + 1] != A[i])
                count = count + 1;
            else
                count = count - 1;
        }
        r = max(r, count);
    }
    return result + r;
}

void RunTest(void){
	vector<int> A(3,0);
	int num = solution2(A);
	cout << num << endl;
}


// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int **A, int N, int M) {
    // write your code in C99 (gcc 4.8.2)
    int count = 0;
    for(int i = 1; i<N-1; i++)
    	for(int j = 1; j<M-1; j++){
    		if((A[i][j-1] > A[i][j] && A[i][j+1] > A[i][j] &&
    			A[i-1][j] < A[i][j] && A[i-1][j] < A[i][j]) ||
    			(A[i][j-1] < A[i][j] && A[i][j+1] < A[i][j] &&
    			A[i-1][j] > A[i][j] && A[i+1][j] > A[i][j]))
    			count++;
    	}
    return count;
}


