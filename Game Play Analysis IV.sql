# Write your MySQL query statement below
WITH first_logins AS (
  SELECT player_id, MIN(event_date) AS first_login
  FROM Activity
  GROUP BY player_id
)
SELECT ROUND(COUNT(a.player_id)/COUNT(f.player_id),2) fraction
FROM first_logins f
LEFT JOIN Activity a
    ON f.player_id = a.player_id
    AND DATEDIFF(a.event_date, f.first_login) = 1