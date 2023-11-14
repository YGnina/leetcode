SELECT distinct num as ConsecutiveNums FROM Logs
# check if it appears consecutively
WHERE (id+1, num) in(SELECT * FROM Logs)
AND (id+2, num) in (SELECT * FROM Logs)
