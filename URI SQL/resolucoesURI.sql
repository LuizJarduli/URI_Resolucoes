


-- comando pra dropar todas as tabelas

DROP TABLE IF EXISTS categories;
DROP TABLE IF EXISTS providers;
DROP TABLE IF EXISTS products;
DROP TABLE IF EXISTS customers;
DROP TABLE IF EXISTS orders;
-- URI 2605
SELECT products.name, providers.name 
FROM products INNER JOIN 
providers INNER JOIN 
categories ON categories.id = products.id_categories AND 
products.id_providers = providers.id 
WHERE categories.id = 6;

-- URI 2606

SELECT p.id,p.name FROM products p INNER JOIN categories c ON p.id_categories = c.id WHERE c.name LIKE 'super%';

-- URI 2607

SELECT p.city FROM providers p GROUP BY p.city ORDER BY p.city;

-- URI 2608

SELECT min(price), max(price) FROM products p;

-- URI 2609
SELECT c.name, sum(p.amount) FROM categories c INNER JOIN products p ON p.id_categories = c.id GROUP BY c.id;

-- URI 2610

SELECT CAST(AVG(products.price) as DECIMAL(10,2)) as price FROM products;

-- URI 2611

SELECT m.id,m.name FROM movies m INNER JOIN genres g ON m.id_genres = g.id WHERE g.description = 'Action';

-- URI 2613

SELECT m.id, m.name FROM movies m INNER JOIN prices p ON m.id_prices = p.id WHERE p.value < 2.00;

-- URI 2614

SELECT c.name, r.rentals_date FROM customers c INNER JOIN rentals r ON c.id = r.id_customers WHERE r.rentals_date BETWEEN '2016-09-01' AND '2016-09-30';

-- URI 2616

SELECT c.id, c.name FROM customers c LEFT JOIN locations l ON l.id_customers = c.id WHERE l.id_customers IS NULL;

-- URI 2617

SELECT p.name, pr.name FROM products p INNER JOIN providers pr ON p.id_providers = pr.id WHERE pr.name = 'Ajax SA';

-- URI 2618

SELECT p.name, pr.name, c.name FROM products p INNER JOIN providers pr INNER JOIN categories c ON p.id_providers = pr.id AND p.id_categories = c.id WHERE pr.name = 'Sansul SA' AND c.name = 'Imported';

-- URi 2619

SELECT p.name, pr.name, p.price FROM products p INNER JOIN providers pr ON p.id_providers = pr.id INNER JOIN categories c ON c.id = p.id_categories WHERE p.price > 1000 AND c.name = 'Super luxury';

-- URI 2620

SELECT c.name, o.id FROM customers as c 
JOIN orders as o ON
o.id_customers = c.id WHERE o.orders_date BETWEEN '2016-01-01' AND '2016-06-30';

-- URI 2621

SELECT products.name FROM products 
JOIN providers ON
products.id_providers = providers.id 
WHERE providers.name LIKE "P%" 
AND products.amount BETWEEN 10 AND 20;

-- forum resposta - teste

select products.name from products inner join providers on products.id_providers = providers.id where providers.name like 'P%' and (products.amount between 10 and 20);

-- URI 2622

SELECT CUSTOMERS.NAME FROM CUSTOMERS 
JOIN LEGAL_PERSON ON
LEGAL_PERSON.ID_CUSTOMERS = CUSTOMERS.ID;

 -- URI 2623
 
 SELECT PRODUCTS.NAME, CATEGORIES.NAME 
 FROM PRODUCTS 
 JOIN CATEGORIES ON
 PRODUCTS.ID_CATEGORIES = CATEGORIES.ID
 WHERE PRODUCTS.AMOUNT > 100 
 AND CATEGORIES.ID IN(1,2,3,6,9)
 ORDER BY CATEGORIES.ID;
 
-- URI 2624

SELECT COUNT(DISTINCT(customers.city)) AS count FROM customers;

-- URI 2625

SELECT CONCAT(SUBSTRING(natural_person.cpf,1,3),'.',SUBSTRING(natural_person.cpf,4,3)
, '.', SUBSTRING(natural_person.cpf,7,3)
, '-', SUBSTRING(natural_person.cpf,10,2))
 AS CPF FROM natural_person;
 
 -- URI 2737
 
SELECT name, customers_number
FROM(SELECT lawyers.name, lawyers.customers_number, 1 AS Ordem FROM lawyers WHERE
lawyers.customers_number = (SELECT MAX(lawyers.customers_number) FROM lawyers)
OR lawyers.customers_number = (SELECT MIN(lawyers.customers_number) FROM lawyers)
UNION ALL
SELECT 'Average', FLOOR(AVG(lawyers.customers_number)), 2 AS Ordem FROM lawyers ) AS Resultado
ORDER BY Ordem, customers_number DESC;
 
 -- URI 2738
 
 SELECT c.name, ROUND(((s.math * 2 + s.specific_ * 3 + s.project_plan*5)/ 10),2) AS avg 
 FROM candidate c 
 JOIN score s ON
 s.candidate_id = c.id
 ORDER BY avg DESC;
 
-- URI 2739

SELECT l.name, CAST(EXTRACT(DAY FROM l.payday)AS SIGNED) as 'day' 
FROM loan l;