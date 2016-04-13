#include <stdio.h>
// Add Digits...
int addDigits(int num) {
    if(num == 0){
		return 0;
	}
    num = num%9;
	if(num == 0){
		num = 9;
	}
	return num;
}




// Single Number...
int singleNumber(int* nums, int numsSize) {
    int result = 0;
    int i = 0;
    for(i = 0;i < numsSize;i++){
        result ^= nums[i];
    }
    
    return result;
}





// Invert Binary Tree...
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* invertTree(struct TreeNode* root) {
    if(root == NULL) return root;
    struct TreeNode* temp = root->left;
    root->left = invertTree(root->right);
    root->right = invertTree(temp);
    
    
    return root;
}





// Maximum Depth of Binary Tree...
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int maxDepth(struct TreeNode* root) {
        if(root == NULL) return 0;
        int a = maxDepth(root->left);
        int b = maxDepth(root->right);
        if(a>b) return a+1;
        return b+1;
}
