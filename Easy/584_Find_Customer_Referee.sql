// LeetCode Problem: 584. Find Customer Referee
// Link : https://leetcode.com/problems/find-customer-referee/description/



select name from Customer
where referee_id != 2 or referee_id is null
