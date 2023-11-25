SELECT total_requests AS id, count(*) num
FROM (
    SELECT requester_id AS total_requests FROM RequestAccepted
    UNION ALL
    SELECT accepter_id AS total_requests FROM RequestAccepted
) AS subquery
group by id
order by num desc 
limit 1
