a = raw_input("enter a number :")
count=0
while(a>=1):
    print "in loop"
    a= int(a)/10
    count = count+1
print "no. of digits = ",count
