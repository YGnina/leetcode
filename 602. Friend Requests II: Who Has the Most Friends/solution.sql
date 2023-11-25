SELECT total_requests AS id, count(*) num
FROM (
    SELECT requester_id AS total_requests FROM RequestAccepted
    UNION ALL
    SELECT accepter_id AS total_requests FROM RequestAccepted
) AS subquery
group by 1
order by 2 desc limit 1
