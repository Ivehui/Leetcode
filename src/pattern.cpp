/*
 * pattern.cpp
 *
 *  Created on: Jun 2, 2016
 *      Author: chappie
 */

int pattern(int n) {
	printf("%d", n);
	if(n<=0) {
		return n+5;
	}else {
		int a = n-5;
		int b = pattern(a);
		printf("%d", b);
		return b+5;
	}
}


