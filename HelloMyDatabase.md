# Database

##181 Employees Earning More Than Their Managers

	The Employee table holds all employees including their managers. Every employee has an Id, and there is also a column for the manager Id.

	+----+-------+--------+-----------+
	| Id | Name  | Salary | ManagerId |
	+----+-------+--------+-----------+
	| 1  | Joe   | 70000  | 3         |
	| 2  | Henry | 80000  | 4         |
	| 3  | Sam   | 60000  | NULL      |
	| 4  | Max   | 90000  | NULL      |
	+----+-------+--------+-----------+
	Given the Employee table, write a SQL query that finds out employees who earn more than their managers. For the above table, Joe is the only employee who earns more than his manager.

	+----------+
	| Employee |
	+----------+
	| Joe      |
	+----------+

HINT: Rename, inner join.

## 182 Duplicate Emails

	Write a SQL query to find all duplicate emails in a table named Person.

	+----+---------+
	| Id | Email   |
	+----+---------+
	| 1  | a@b.com |
	| 2  | c@d.com |
	| 3  | a@b.com |
	+----+---------+
	For example, your query should return the following for the above table:

	+---------+
	| Email   |
	+---------+
	| a@b.com |
	+---------+
	Note: All emails are in lowercase.
	
HINT: Aggregate fountion, Having clause.
## 175 Combine Two Tables

	Table: Person

	+-------------+---------+
	| Column Name | Type    |
	+-------------+---------+
	| PersonId    | int     |
	| FirstName   | varchar |
	| LastName    | varchar |
	+-------------+---------+
	PersonId is the primary key column for this table.
	Table: Address

	+-------------+---------+
	| Column Name | Type    |
	+-------------+---------+
	| AddressId   | int     |
	| PersonId    | int     |
	| City        | varchar |
	| State       | varchar |
	+-------------+---------+
	AddressId is the primary key column for this table.

	Write a SQL query for a report that provides the following information for each person in the Person table, regardless if there is an address for each of those people:

	FirstName, LastName, City, State

HINT: Left outer join
##183 Customers Who Never Order

	Suppose that a website contains two tables, the Customers table and the Orders table. Write a SQL query to find all customers who never order anything.

	Table: Customers.

	+----+-------+
	| Id | Name  |
	+----+-------+
	| 1  | Joe   |
	| 2  | Henry |
	| 3  | Sam   |
	| 4  | Max   |
	+----+-------+
	Table: Orders.

	+----+------------+
	| Id | CustomerId |
	+----+------------+
	| 1  | 3          |
	| 2  | 1          |
	+----+------------+
	Using the above tables as example, return the following:

	+-----------+
	| Customers |
	+-----------+
	| Henry     |
	| Max       |
	+-----------+