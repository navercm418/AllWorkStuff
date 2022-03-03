#!/usr/bin/python3

# Server: USMAMAMDFVSQL05
# Database: Smadden
# Table: tbl_Andy_Test
# Field Name: Data


import pyodbc 
conn = pyodbc.connect('Driver={SQL Server};'
                      'Server=USMAMAMDFVSQL05;'
                      'Database=Smadden;'
                      'Trusted_Connection=yes;')

cursor = conn.cursor()
cursor.execute('SELECT * FROM tbl_Andy_Test.dbo.table')

for row in cursor:
    print(row)

