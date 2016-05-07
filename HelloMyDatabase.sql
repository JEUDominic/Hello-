# 181 Employees Earning More Than Their Managers
SELECT a.Name as Employee
FROM (Employee as a inner join Employee as b 
		on a.ManagerID = b.Id) 
WHERE a.Salary > b.Salary
# 182 Duplicate Emails
SELECT b.Email
FROM (SELECT Email, count(Email)  
		FROM Person as a 
		GROUP BY Email 
		HAVING count(Email) >=2 ) as b
# 175 Combine Two Table
SELECT a.FirstName, a.LastName, b.City, b.State
FROM (Person as a left outer join Address as b on a.PersonId = b.PersonId)
# 183 Customers Who Never Order
SELECT Name as Customers
FROM Customers
WHERE Id not in(
    SELECT CustomerId
    FROM Orders)