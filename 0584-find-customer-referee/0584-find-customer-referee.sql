# Write your MySQL query statement below
SELECT 
name
FROM
Customer
WHERE
referee_id!=2 OR referee_id IS NULL
#for null-always check IS NULL or IS NOT NULL 
