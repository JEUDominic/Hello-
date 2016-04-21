#LeetCode


##292 Nim Game

	You are playing the following Nim Game with your friend: There is a heap of stones on the table, each time one of you take turns to remove 1 to 3 stones. The one who removes the last stone will be the winner. You will take the first turn to remove the stones.

	Both of you are very clever and have optimal strategies for the game. Write a function to determine whether you can win the game given the number of stones in the heap.

	For example, if there are 4 stones in the heap, then you will never win the game: no matter 1, 2, or 3 stones you remove, the last stone will always be removed by your friend.
	
HINT: The mutiple of 4


##136 Single Number

	Given an array of integers, every element appears twice except for one. Find that single one.

**Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?**

HINT: Using XOR


##258 Add Digits

	Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.

	For example:
	
	Given num = 38, the process is like: 3 + 8 = 11, 1 + 1 = 2. Since 2 has only one digit, return it.

**Could you do it without any loop/recursion in O(1) runtime?**

HINT: the remainder of 9


##104 Maximum Depth of Binary Tree

	Given a binary tree, find its maximum depth.
	The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

HINT: Recursion


##226 Invert Binary Tree

	Invert a binary tree.

	    4
	   /   \
	  2     7
	 / \   / \
	1   3 6   9
	to
	     4
	   /   \
	  7     2
	 / \   / \
	9   6 3   1
	
**Google: 90% of our engineers use the software you wrote (Homebrew), but you can’t invert a binary tree on a whiteboard so fuck off.**

HINT: Recursion


##283 Move Zeroes

	Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

	For example, given nums = [0, 1, 0, 3, 12], after calling your function, nums should be [1, 3, 12, 0, 0].
	
**You must do this in-place without making a copy of the array.**
**Minimize the total number of operations.**


##237 Delete Node in a Linked List

	Write a function to delete a node (except the tail) in a singly linked list, given only access to that node.

	Supposed the linked list is 1 -> 2 -> 3 -> 4 and you are given the third node with value 3, the linked list should become 1 -> 2 -> 4 after calling your function.

HINT: Copy value from next node


##100 Same Tree
	
	Given two binary trees, write a function to check if they are equal or not. 

	Two binary trees are considered equal if they are structurally identical and the nodes have the same value.

HINT: Recursion


##242 Valid Anagram

	Given two strings s and t, write a function to determine if t is an anagram of s.

	For example,
	s = "anagram", t = "nagaram", return true.
	s = "rat", t = "car", return false.
	
**You may assume the string contains only lowercase alphabets.**

HINT: Sort and compare,
      Count the times of each character and compare
      
      
##171 Excel Sheet Column Number

	Related to question Excel Sheet Column Title

	Given a column title as appear in an Excel sheet, return its corresponding column number.

	For example:

	    A -> 1
	    B -> 2
	    C -> 3
	    ...
	    Z -> 26
	    AA -> 27
	    AB -> 28 
	    
HINT: 26 binary system


##217 Contains Duplicate 
	
	Given an array of integers, find if the array contains any duplicates. Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.
	
HINT: Hash table,
      Sort and compare
      
      
##1 Two Sum

	Given an array of integers, return indices of the two numbers such that they add up to a specific target.

	You may assume that each input would have exactly one solution.

	Example:
	Given nums = [2, 7, 11, 15], target = 9,

	Because nums[0] + nums[1] = 2 + 7 = 9,
	return [0, 1].

HINT: Hash map


##2 Add Two Numbers 
	
	You are given two linked lists representing two non-negative numbers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

	Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
	Output: 7 -> 0 -> 8
	
##169 Majority Element

	Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.

	You may assume that the array is non-empty and the majority element always exist in the array.
