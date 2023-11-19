Select customer_id
From Customer
Group by customer_id
Having count(distinct product_key) = (
    Select count(product_key) From Product
)
