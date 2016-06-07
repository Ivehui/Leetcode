/*
 * include.h
 *
 *  Created on: Apr 6, 2016
 *      Author: chappie
 */

#ifndef INCLUDE_H_
#define INCLUDE_H_

#include <algorithm>
#include <vector>
#include <iostream>
#include "stdio.h"
#include <queue>

using namespace std;

#define NULL 0

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

extern bool isNumber();
void runPlus(void);
void runAdd(void);
void runCountBits(void);
void runRob(void);
void runPalindromePairs(void);
void runAli(void);
void RunMap(void);
void RunTest(void);

#endif /* INCLUDE_H_ */
