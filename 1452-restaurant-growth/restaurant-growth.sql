# Write your MySQL query statement below
WITH daily_sales AS
(
SELECT
visited_on,
SUM(amount) AS amount
FROM Customer
GROUP BY visited_on
)

SELECT
visited_on,
SUM(amount) OVER(
ORDER BY visited_on
ROWS BETWEEN 6 PRECEDING
AND CURRENT ROW
) AS amount,

ROUND(
AVG(amount) OVER(
ORDER BY visited_on
ROWS BETWEEN 6 PRECEDING
AND CURRENT ROW
),
2
) AS average_amount

FROM daily_sales
LIMIT 1000000 OFFSET 6;