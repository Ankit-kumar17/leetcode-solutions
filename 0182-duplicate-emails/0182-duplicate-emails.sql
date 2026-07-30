# Write your MySQL query statement below
select p.email from Person p group by email having count(email)>1;