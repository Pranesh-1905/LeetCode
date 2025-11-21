# Write your MySQL query statement below
select f.firstName,f.lastName ,s.city,s.state from Person f left join  Address s on s.personId=f.personId;