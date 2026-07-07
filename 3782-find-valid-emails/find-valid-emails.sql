# Write your MySQL query statement below
select user_id,email from users
where email regexp '^[a-z0-9]+@[^@0-9]+\\.com$'
order by  user_id;