/*
 * rob.cpp
 *
 *  Created on: Apr 13, 2016
 *      Author: chappie
 */

#include "include.h"


struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void robNode(TreeNode* root, int re_rob[2])
{
	int left_rob[2];
	int right_rob[2];
	if(root==NULL)
	{
		re_rob[0]=0;
		re_rob[1]=0;
		return;
	}
	robNode(root->left,left_rob);
	robNode(root->right,right_rob);
	//= (root->left == NULL) ? 0:rob(root->left);
	re_rob[0] = root->val+left_rob[1]+right_rob[1];
	re_rob[1] = max(left_rob[0],left_rob[1])+max(right_rob[0],right_rob[1]);
	return;
}

int rob(TreeNode* root) {
	if(root == NULL) return 0;
	int left_rob[2];
	int right_rob[2];
	robNode(root->left,left_rob);
	robNode(root->right,right_rob);
	//= (root->left == NULL) ? 0:rob(root->left);
	int a=root->val+left_rob[1]+right_rob[1];
	int b=max(left_rob[0],left_rob[1])+max(right_rob[0],right_rob[1]);
	return max(a,b);

}

void runRob(void)
{
	TreeNode root(3);
	TreeNode l11(2);
	TreeNode l12(2);
	TreeNode l21(2);
	TreeNode l22(2);
	TreeNode l23(2);

	root.left = &l11;
	root.right= &l12;
	l11.right = &l21;
	l12.right = &l22;

	int r = rob(&root);
	cout << r << endl;
}




