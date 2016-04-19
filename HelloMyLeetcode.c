#include <stdio.h>




// 292 Nim Game...
bool canWinNim(int n) {
    if (n%4 == 0) return false;
    return true;
}





// 136 Single Number...
int singleNumber(int* nums, int numsSize) {
    int result = 0;
    int i = 0;
    for(i = 0;i < numsSize;i++){
        result ^= nums[i];
    }
    
    return result;
}





// 258 Add Digits...
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





// 104 Maximum Depth of Binary Tree...
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





// 226 Invert Binary Tree...
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





// 283 Move Zeroes...
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





// 237 Delete Node in a Linked List...
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





// 100 Same Tree...
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





// 242 Valid Anagram...
// JAVA...
public class Solution {
    public boolean isAnagram(String s, String t) {
        char[] sArr = s.toCharArray();
        char[] tArr = t.toCharArray();
        
        Arrays.sort(sArr);
        Arrays.sort(tArr);
        
        return String.valueOf(sArr).equals(String.valueOf(tArr));
    }
}
// C++...
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        int bit[26] = {0}, len = s.length();
    
        for(int i=0; i<len; i++)
            bit[s[i]-'a']++;
    
        for(int i=0; i<len; i++)
            if(--bit[t[i]-'a'] < 0)
                return false;
        return true;
    }
}; 





// 171 Excel Sheet Column Number...
int titleToNumber(char* s) {
    
    int returnNumber = 0;
    for(int i = 0;s[i]!='\0';i++){
        returnNumber = returnNumber*26 + (int)(s[i]-'A'+1)/26*26 + (int)(s[i]-'A'+1)%26;
    }
    
    return returnNumber;
}





// 217 Contains Duplicate...
// C++..
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); ++i) {
            if (m.find(nums[i]) != m.end()) return true;
            ++m[nums[i]];
        }
        return false;
    }
};
// C...
#include <stdlib.h>
int cmp( const void *a , const void *b)
{
        return *(char *)a - *(char *)b;
}
bool containsDuplicate(int* nums, int numsSize) {
    qsort(nums,numsSize,sizeof(nums[0]),cmp);
    for(int i = 0;i < numsSize-1; i++){
        if(nums[i] == nums[i+1]) return true;
    }
    return false;
}





// 1 Two sum
// JAVA...
public class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> map = new HashMap<Integer, Integer>();  
        int[] result = new int[2];  
        for (int i = 0; i < nums.length; i++) {  
            if (map.get(target - nums[i]) != null) {  
                result[0] = map.get(target - nums[i]);  
                result[1] = i;  
                break;  
            } else {  
                map.put(nums[i], i);  
            }  
        }  
        return result;  
    }  
}
