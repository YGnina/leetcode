select person_name from
    (select person_name, weight, turn, sum(weight) over(order by turn) as weight_sum
    from queue) x
where weight_sum <= 1000
order by turn desc limit 1
