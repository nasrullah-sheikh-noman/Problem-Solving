# Write your MySQL query statement below
WITH first_orders AS (
  SELECT customer_id, MIN(order_date) AS first_order
  FROM Delivery
  GROUP BY customer_id
)
SELECT ROUND(AVG(d.order_date=d.customer_pref_delivery_date)*100,2) immediate_percentage
FROM Delivery d
JOIN first_orders f
    ON d.customer_id = f.customer_id
    AND d.order_date = f.first_order