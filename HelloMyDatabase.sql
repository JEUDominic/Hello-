＃ 181 Employees Earning More Than Their Managers
SELECT a.Name as Employee
FROM ( Employee as a inner join Employee as b on a.ManagerID = b.Id) 
WHERE a.Salary > b.Salary