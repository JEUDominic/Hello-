#include <stdio.h>




//  Nim Game...
bool canWinNim(int n) {
    if (n%4 == 0) return false;
    return true;
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
        
        return a > b ? a+1 : b+1;
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
struct TreeNode* invertTree(struct TreeNode* root{
    if(root == NULL) return root;
    struct TreeNode* temp = root->left;
    root->left = invertTree(root->right);
    root->right = invertTree(temp);
    
    return root;
}





// Move Zeroes...
void moveZeroes(int* nums, int numsSize) {
    for(int i = 0; i < numsSize - 1; i++){
        if(nums[i] == 0) {
            for(int j=i+1;j<numsSize;j++) {
                if(nums[j] == 0) continue;
                nums[i] = nums[j];
                nums[j] = 0;
                break;
            }  
        }
    }
}





// Delete Node in a Linked List...
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
	struct ListNode *del = node->next;
        node->val = del->val;
        node->next = del->next;
}





// Same Tree...
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if(p==NULL&&q==NULL) return true;
    if(p==NULL&&q!=NULL||q==NULL&&p!=NULL||p->val!=q->val) return false;
    
    return isSameTree(p->left,q->left)&&isSameTree(p->right,q->right);
}





// Valid Anagram...
public class Solution {
    public boolean isAnagram(String s, String t) {
        char[] sArr = s.toCharArray();
        char[] tArr = t.toCharArray();
        
        Arrays.sort(sArr);
        Arrays.sort(tArr);
        
        return String.valueOf(sArr).equals(String.valueOf(tArr));
    }
}
