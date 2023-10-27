# select ans employee
Select e1.name as Employee
From employee e1 inner join employee e2
# make sure earns more than the manager
On e1.managerId = e2.id
Where e1.salary > e2.salary
