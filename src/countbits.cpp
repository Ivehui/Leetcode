/*
 * countbits.cpp
 *
 *  Created on: Apr 13, 2016
 *      Author: chappie
 */
#include <vector>
#include <iostream>

using namespace std;



vector<int> countBits(int num) {
	vector<int> array(num+1,0);
	int j = 0;
	int pow = 1;
	for(int i=1;i<num+1;i++)
	{
		if(i==pow)
		{
			j=0;
			pow*=2;
		}
		array[i] = array[j++]+1;
		cout <<array[i]<< ' '<<endl;
	}
	return array;
}

void runCountBits(void)
{
	vector<int> array = countBits(16);
}
