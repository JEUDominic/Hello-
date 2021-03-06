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
**/

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
**/
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
**/
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
int cmp( const void *a , const void *b){
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
        for(int i = 0; i < nums.length; i++){  
            if(map.get(target - nums[i]) != null){  
                result[0] = map.get(target - nums[i]);  
                result[1] = i;  
                break;  
            }else{  
                map.put(nums[i], i);  
            }  
        }  
        return result;  
    }  
}





// 2 Add Two Numbers...
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
**/

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* r = head;
    struct ListNode* prev;
    r->val = 0;
    r->next = NULL;
    while(l1&&l2){
         r->val = r->val + l1->val + l2->val;
         if(r->val >= 10) {
             r->val -= 10;
             r->next = (struct ListNode*)malloc(sizeof(struct ListNode));
             prev = r;
             r = r->next;
             r->val = 1;
             r->next = NULL;
        }else{
            r->next = (struct ListNode*)malloc(sizeof(struct ListNode));
            prev = r;
            r = r->next;
            r->val = 0;
            r->next = NULL;
        }
        l1 = l1->next;
        l2 = l2->next;
    }
    
    while(l1){
        r->val += l1->val;
        if(r->val >= 10) {
             r->val -= 10;
             r->next = (struct ListNode*)malloc(sizeof(struct ListNode));
             prev = r;
             r = r->next;
             r->val = 1;
             r->next = NULL;
        }else{
            r->next = (struct ListNode*)malloc(sizeof(struct ListNode));
            prev = r;
            r = r->next;
            r->val = 0;
            r->next = NULL;
        }
        l1 = l1->next;
    }
    while(l2){
        r->val += l2->val;
        if(r->val >= 10) {
             r->val -= 10;
             r->next = (struct ListNode*)malloc(sizeof(struct ListNode));
             prev = r;
             r = r->next;
             r->val = 1;
             r->next = NULL;
        }else{
            r->next = (struct ListNode*)malloc(sizeof(struct ListNode));
            prev = r;
            r = r->next;
            r->val = 0;
            r->next = NULL;
        }
        l2 = l2->next;
    }
    
    if(r->val == 0){ prev->next = NULL;}
    
    return head;
}





// 169 Majority Elements...
// C++...
class Solution {
public:
    int majorityElement(vector<int> &num) {

        int elem = 0;
        int count = 0;
        
        for(int i = 0; i < num.size(); i++)  {
            
            if(count == 0)  {
                elem = num[i];
                count = 1;
            }else{
                if(elem == num[i])
                    count++;
                else
                    count--;
            }
            
        }
        return elem;
    }
}





// 344 Reverse String...
char* reverseString(char* s) {
    int i; 
    char temp;
    for(i = 0; s[i] != '\0' ; i++);
    for(int j = 0; j < i/2; j++){
        temp = s[j];
        s[j] = s[i-j-1];
        s[i-j-1] = temp;
        if(j == i-1) break;
    }
    
    return s;
}




// 206 Reverse Linked Likst
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
	
	if(head == NULL) return NULL;
	if(head->next == NULL) return head;
        
	struct ListNode* p = head->next;
	struct ListNode* n = reverseList(p);
        
	// head is the tail of linklist..
	head->next = NULL;
	// p is the second last element in the linklist...
	p->next = head;
        
	return n;
}





// 13 Roman to Integer
// C++
class Solution {
public:
    int romanToInt(string s) {
        int ret = toNumber(s[0]);
        for (int i = 1; i < s.length(); i++) {
            if (toNumber(s[i - 1]) < toNumber(s[i])) {
                ret += toNumber(s[i]) - 2 * toNumber(s[i - 1]);
            } else {
                ret += toNumber(s[i]);
            }
        }
        return ret;
    }
    
    int toNumber(char ch) {
        switch (ch) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
        }
        return 0;
    }
};





// 235 Lowest Common Ancestor of a Binary Search Tree 
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
**/
struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    
  if (!root || !p || !q) return NULL;
  if (p->val < root->val && q->val <root ->val)
    return lowestCommonAncestor(root->left, p, q);
  else if (p->val > root->val && q->val > root->val)
    return lowestCommonAncestor(root->right, p, q);
  else
    return root;

}





// 83 Remove Duplicates from Sorted List...
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
**/
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* curr = head;
    while(curr&&curr->next) {
        if (curr->val == curr->next->val){
            curr->next = curr->next->next;
            continue;
        }
        curr = curr->next;
    }
    
    return head;
}





// 110 Balance Binary Tree
/**
 * Definition for binary tree
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
**/
// JAVA
public class Solution {
    public boolean isBalanced(TreeNode root) {
        height(root);
        return run(root);
    }
    
    public boolean run(TreeNode root) {
        if (root == null) return true;
        
        int l = 0, r = 0;
        if (root.left != null) l = root.left.val;
        if (root.right != null) r = root.right.val;
        if (Math.abs(l - r) <= 1 && isBalanced(root.left) && isBalanced(root.right)) return true;
        
        return false;
    }
    
    public int height(TreeNode root) {
        if (root == null) return 0;
        root.val = Math.max( height(root.left), height(root.right) ) + 1; 
        return root.val;
    }
}
// C++
// This solution is more efficent than the above solution...
#include <cmath>;
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        if(!root->left && !root->right) return true;
        if(root->left && !root->right){
            if(root->left->left || root->left->right )
                return false;
        }else if(!root->left && root->right){
             if(root->right->left || root->right->right )
                return false;
        }
        height(root);
        return checkBalanced(root);
    }
    
    bool checkBalanced(TreeNode* root){
        if(!root) return true;
        if(!root->left && !root->right) return true;
        if(root->left && !root->right){
            if(root->left->left || root->left->left )
                return false;
        }else if(!root->left && root->right){
             if(root->right->left || root->right->left )
                return false;
        }
        int l = 0;
        int r = 0;
        if(root->left) l = root->left->val;
        if(root->right) r = root->right->val;
        if( abs(l-r) <=1 && isBalanced(root->left) && isBalanced(root->right)) return true;
        return false;
    }
    
    int height(TreeNode* root){
        if(!root) return 0;
        root->val = height(root->left) > height(root->right)  ? height(root->left)+1 : height(root->right)+1;
        return root->val;
    }
};





// 19 Remove Nth Node From End of List
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* curr = head;
    int a = 0;
    while(curr){
        curr = curr->next;
        a++;
    }
    curr = head;
    if(a == n){
        head = head->next;
        return head;
    }
    for(int i = 1; i < a-n;i++){
        curr = curr->next;
    }

    curr->next = curr->next->next;
    
    return head;
}





// 231 Power of Two
bool isPowerOfTwo(int n) {
    return n>0 && !(n&(n-1));
}





// 191 Number of 1 Bits
int hammingWeight(uint32_t n) {
    int cnt = 0;
    while (n > 0) {
        cnt += (n & 1);
        n >>= 1;
    }
    return cnt;
}





// 6 Reverse Integer
int reverse(int x) {
    if((x < 1534236469 && x > -1563847412)|| x == -2147483412){
    int res = 0;  
        while(x)  
        {  
            res = res*10 + x%10;  
            x /= 10;  
        }  
        return res;  
    }
    else return 0;
}





// 8 String to Integer (atoi)
int myAtoi(char* str) {
    if(str == NULL) return 0;
    while (*str == ' ')
      str++;
    int sign = 1;
    if(*str == '-')
    {
      sign = -1;
      str++;
    }
    else if(*str == '+')
      str++;
    long long ans = 0;
    while (*str >= '0' && *str <= '9')
    {
      ans = ans*10+*str-'0';
      if(ans > 2147483647)//out of range
        return sign < 0 ? -2147483648 : 2147483647;
      str++;
    }
    ans *= sign;
    return (int)ans;
}