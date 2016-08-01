import MySQLdb

ser = serial.Serial('/dev/ttyS0',9600)
db = MySQLdb.connect(host='localhost',user="root",passwd="1",db="test")
curs=db.cursor()

while 1:
	sonic = ser.readline()
	print sonic
	try:
		print "hi"
		curs.execute("""INSERT INTO sensor value(default,"""+sonic+")")
		db.commit()
		print "End db commit"
	except:
		print "Error:db commit"
		db.rollback()
