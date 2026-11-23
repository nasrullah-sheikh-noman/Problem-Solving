# Write your MySQL query statement below
SELECT DATE_FORMAT(trans_date, '%Y-%m') month, 
    country, 
    COUNT(*) trans_count, 
    SUM(state="approved") approved_count, 
    SUM(amount) trans_total_amount, 
    SUM(IF(state="approved", amount, 0)) approved_total_amount
FROM Transactions
GROUP BY DATE_FORMAT(trans_date, '%Y-%m'), country