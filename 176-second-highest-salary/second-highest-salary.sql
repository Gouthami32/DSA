# Write your MySQL query statement below
select max(salary) AS secondhighestsalary from employee
where salary<(select max(salary) from employee);