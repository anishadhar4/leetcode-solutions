# Write your MySQL query statement below
SELECT 
name
FROM
Customer
WHERE
referee_id!=2 OR referee_id IS NULL
#for null-always check IS NULL or IS NOT NULL 
#A WHERE clause strictly filters for rows that evaluate to TRUE. Since UNKNOWN is not TRUE, rows containing NULL get discarded unless explicitly handled with IS NULL
#Any comparison with NULL using operators like =, !=, <, or > evaluates to UNKNOWN rather than TRUE or FALSE