#!/usr/bin/python

import MySQLdb
import sys

try:
    db = MySQLdb.connect("localhost",TESTID","Test!234","test")

    cursor = db.cursor()
    cursor.execute("SELECT VERSION()")

    data = cursor.fetchone()

    print ("Database version : %s " %data)

excpet MySQLdb, e:

    print "Error %d:%s"%(e.args[0],e.args[1])
    sys.exit(1)

finally:
    if con:
        db.close()


# old version
# Open database connection, user,      id,      pass,   db
#db = MySQLdb.connect("localhost","TESTID","Test!234","test" )

# prepare a cursor object using cursor() method
#cursor = db.cursor()

# execute SQL query using execute() method.
#cursor.execute("SELECT VERSION()")

# Fetch a single row using fetchone() method.
#data = cursor.fetchone()

#print "Database version : %s " % data

# disconnect from server
#db.close()
