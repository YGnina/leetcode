Select customer_id
From Customer
Group by customer_id
Having SUM(distinct product_key) = (
    Select SUM(product_key) From Product
)
