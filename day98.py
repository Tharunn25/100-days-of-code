import sqlite3

conn = sqlite3.connect('yrm.db')
print("The database has been created successfully")

# conn.execute(''' CREATE TABLE SRM
#             (
#              ID       INT    PRIMARY KEY NOT NULL,
#              NAME     TEXT,
#              AGE      INT,
#              ADDRESS  CHAR,
#              SALARY   REAL);''')

# print("The table has been created sucessfully")


conn.execute(
    "INSERT INTO SRM(ID,NAME,AGE,ADDRESS,SALARY) VALUES (1,'Tharunn','19','california','20k')")
conn.execute(
    "INSERT INTO SRM(ID,NAME,AGE,ADDRESS,SALARY) VALUES (2,'maron','18','palo alto','50k')")
conn.execute(
    "INSERT INTO SRM(ID,NAME,AGE,ADDRESS,SALARY) VALUES (3,'nick','20','michigan','70k')")
conn.execute(
    "INSERT INTO SRM(ID,NAME,AGE,ADDRESS,SALARY) VALUES (4,'varun','22','chicago','40k')")

conn.comiit()

print("The records has been inserted successfully into the table ")
conn.close()

cursor = conn.execute(''' SELECT * FROM SRM''')
for row in cursor:
    print(row)
    conn.commit()


conn.close()
