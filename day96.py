import sqlite3

connection = sqlite3.connect('school_dbms.db')

connection.execute(''' CREATE TABLE SCHOOL 
(  FIND INT PRIMARY KEY   NOT NULL,
   STUDENT NAME     TEXT  NOT NULL,
   SECTION          INT   NOT NULL,
   ID NUMBER        INT   NOT NULL);
''')

connection.execute("INSERT INTO school VALUES(1,'Tharunn',c2,859)")
connection.execute("INSERT INTO school VALUES(2,'kong',v2,856)")
connection.execute("INSERT INTO school VALUES(1,'jeyaashri',a2,830)")

print("Every student data is feeded successfully")

cursor = connection.execute("SELECT * from school")

for row in cursor:
    print(row)
