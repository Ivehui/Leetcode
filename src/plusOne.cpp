/*
 * plusOne.cpp
 *
 *  Created on: Apr 7, 2016
 *      Author: chappie
 */
#include <vector>
#include <iostream>

using namespace std;

vector<int> plusOne(vector<int>& digits) {
	int dec=1;
	vector<int> dPone(digits);
	int i=dPone.size()-1;
	while(dec)
	{
		if(i==-1)
		{
			dPone.insert(dPone.begin(),dec);
			dec = 0;
		}else
		{
			dPone[i]+=dec;
			dec = dPone[i]/10;;
			dPone[i] = dPone[i]%10;
		}
		i--;
	}
	return dPone;
}

void runPlus(void){
	vector<int> digits(1,9);
	vector<int> result = plusOne(digits);
	vector<int>::iterator it;
	for(it=digits.begin();it<digits.end();it++)
		cout<<' '<<*it;
	cout<<endl;
	for(it=result.begin();it<result.end();it++)
		cout<<' '<<*it;
	cout<<endl;
}
