# SQL - Introduction

# Database Basics

## What's a database?
A database is a structured collection of data that is organized and stored for efficient retrieval, management, and manipulation. It serves as a repository for information that can be accessed and manipulated using database management systems (DBMS).

## What's a relational database?
A relational database is a type of database that organizes data into structured tables with rows and columns. It relies on the principles of relational algebra and stores data in a way that establishes relationships between different tables using keys. Popular relational database management systems include MySQL, PostgreSQL, and Oracle.

## What does SQL stand for?
SQL stands for Structured Query Language. It is a domain-specific language used for managing and querying relational databases. SQL allows users to interact with a database by defining, manipulating, and retrieving data from it.

## What's MySQL?
MySQL is an open-source relational database management system (RDBMS) that is commonly used for web applications. It is known for its speed, reliability, and ease of use. MySQL uses SQL for database operations and is widely used in web development.

## How to create a database in MySQL?
To create a database in MySQL, you can use the SQL command `CREATE DATABASE`. For example:
```sql
CREATE DATABASE mydatabase;
```
## What does DDL and DML stand for?
- DDL stands for Data Definition Language. It includes SQL statements used to define, modify, and manage the structure of a database, such as creating and altering tables, indexes, and schemas.
- DML stands for Data Manipulation Language. It includes SQL statements used to manipulate data stored in a database, such as inserting, updating, and deleting records.

## How to CREATE or ALTER a table?
To create a table in MySQL, you can use the CREATE TABLE statement. For example:

```sql
CREATE TABLE mytable (
  id INT PRIMARY KEY,
  name VARCHAR(255)
);
```
#### To alter a table, you can use the ALTER TABLE statement. For example:

```sql
ALTER TABLE mytable
ADD COLUMN age INT;
```
#### How to SELECT data from a table?
To select data from a table in MySQL, you can use the SELECT statement. For example:

```sql
SELECT * FROM mytable;
```
#### How to INSERT, UPDATE, or DELETE data?
To insert data into a table, you can use the `INSERT INTO` statement.
To update data in a table, you can use the `UPDATE` statement.
To delete data from a table, you can use the `DELETE FROM` statement.

## What are subqueries?
A subquery is a query nested within another query. It allows you to retrieve data from one or more tables and use that result as a condition or value in the outer query. Subqueries are often used for more complex and specific data retrieval.

## How to use MySQL functions?
MySQL provides a wide range of built-in functions that can be used to manipulate and process data in queries. These functions include mathematical, string, date, and aggregate functions. You can use them in your SQL statements to perform various operations on the data.