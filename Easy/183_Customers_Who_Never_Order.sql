// LeetCode Problem : 183. Customers Who Never Order
// Link : https://leetcode.com/problems/customers-who-never-order/description/

# Write your MySQL query statement below
SELECT name AS Customers from Customers
LEFT JOIN Orders ON Customers.id = Orders.customerId
WHERE Orders.customerId IS NULL;
