# Write your MySQL query statement below
select user_id,count(prompt)prompt_count,round(avg(tokens),2) avg_tokens
from prompts
group by user_id
having prompt_count>2 and max(tokens)>avg_tokens
order by avg_tokens desc,user_id;