/*
 * palindromePairs.cpp
 *
 *  Created on: Apr 14, 2016
 *      Author: chappie
 */
#include "include.h"




vector<vector<int> > palindromePairs(vector<string>& words){
	vector<vector<int> > pairs;
	int i,j,k,l;
	int len;
	int size = words.size();
	int w_size;
	int delta;
	vector<vector<int> > palindLeft(size);
	vector<vector<int> > palindRight(size);

	for(i=0;i<size;i++){
		palindRight[i].push_back(1);
		palindLeft[i].push_back(1);
		//left
		for(len=1;len<words[i].size();len++)
		{
			for(j=0;j*2<len+1;j++)
			{
				if(words[i][j] != words[i][len-j])
					break;
			}
			if(j*2>len)
				palindLeft[i].push_back(len+1);
		}
		//right
		w_size = words[i].size()-1;
		for(len=1;len<w_size+1;len++)
		{
			for(j=0; j*2<len+1; j++)
			{
				if(words[i][w_size-j] != words[i][w_size-len+j])
					break;
			}
			if(j*2>len)
				palindRight[i].push_back(len+1);
		}
	}

	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			if(i==j)
				continue;
			delta = words[j].size() - words[i].size();
			if(delta == 0){
				len = words[i].size();
			}else if(delta < 0){
				for(k=0;k<palindRight[i].size();k++){
					if(palindRight[i][k] == -delta)
						break;
				}
				if(k == palindRight[i].size())
					continue;
				len = words[j].size();
			}else{
				for(k=0;k<palindLeft[j].size();k++){
					if(palindLeft[j][k] == delta)
						break;
				}
				if(k == palindLeft[j].size())
					continue;
				len = words[i].size();
			}
			for(l=0;l<len;l++){
				if(words[i][l] != words[j][words[j].size()-l-1])
					break;
			}
			if(l==len){
				vector<int> pair;
				pair.push_back(i);
				pair.push_back(j);
				pairs.push_back(pair);
			}
		}
	}
	return pairs;
}


void runPalindromePairs(void){
	vector<string> words;
	words.push_back("abcd");
	words.push_back("dcba");
	words.push_back("lls");
	words.push_back("s");
	words.push_back("sssll");
	vector<vector<int> > pairs = palindromePairs(words);

	for(int i=0; i<pairs.size(); i++)
	{
		cout << pairs[i][0] << ',' << pairs[i][1] << endl;
	}
}
