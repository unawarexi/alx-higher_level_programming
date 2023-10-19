# SQL - More queries

## How to create a new MySQL user
To create a new MySQL user, you can use the `CREATE USER` command followed by `GRANT` to specify the user's privileges and permissions.

```sql
CREATE USER 'username'@'hostname' IDENTIFIED BY 'password';
GRANT privileges ON database.table TO 'username'@'hostname';
```
## How to manage privileges for a user to a database or table
You can use the `GRANT` and `REVOKE` statements to manage privileges for a user. For example, to grant SELECT access to a user:

```sql
GRANT SELECT ON database.table TO 'username'@'hostname';
```
To revoke the same privilege:

```sql
REVOKE SELECT ON database.table FROM 'username'@'hostname';
```
## What’s a PRIMARY KEY
A `PRIMARY KEY` is a column or a set of columns in a table that uniquely identifies each row in that table. It enforces the uniqueness and ensures that no two rows can have the same values in the primary key columns. Typically, primary keys are used for data integrity and to establish relationships between tables.

## What’s a FOREIGN KEY
A `FOREIGN KEY` is a column or a set of columns in a table that establishes a link between the data in two tables. It ensures that the values in the foreign key column(s) of one table match the values in the primary key column(s) of another table, creating referential integrity between the tables.

## How to use `NOT NULL` and `UNIQUE` constraints
`NOT NULL` ensures that a column cannot have NULL values.
`UNIQUE` ensures that all values in a column are unique (no duplicates).

```sql
CREATE TABLE mytable (
  id INT NOT NULL,
  username VARCHAR(50) UNIQUE
);
```
## How to retrieve data from multiple tables in one request
You can use SQL JOINs to retrieve data from multiple tables in a single query. For example, to retrieve data from two tables, you can use an INNER JOIN:

```sql
SELECT *
FROM table1
INNER JOIN table2 ON table1.column = table2.column;
```
## What are subqueries
Subqueries are queries nested within another SQL query. They allow you to perform operations on data retrieved by the outer query, making it possible to retrieve more complex and specific data or conditions from the database.

## What are JOIN and UNION
`JOIN` is used to combine rows from two or more tables based on a related column between them. Common types of JOINs include INNER, LEFT (OUTER), RIGHT (OUTER), and FULL (OUTER) JOINs.
`UNION` is used to combine the result sets of two or more SELECT queries into a single result set, eliminating duplicate rows from the result.
