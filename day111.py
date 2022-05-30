import sqlite3
conn = sqlite3.connect("data.db")
print("The database has been created successfully")

conn.execute(''' CREATE TABLE SRMIST
            (
             NAME    CHAR   PRIMARY KEY NOT NULL,
             AGE     INT,
             ADDRESS CHAR,
             GRADE   INT);''')
print("The database has been created successfully")
conn.close()
