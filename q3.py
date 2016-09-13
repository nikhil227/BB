import urllib2
from HTMLParser import HTMLParser
import json

form_aya_kya = False
start = list()

class MyHTMLParser(HTMLParser):
    def handle_starttag(self, tag, attrs):
        if tag == 'form':
            start.append(tag)
            start.append(attrs)
    def handle_data(self, data):
        start.append(data)
    def handle_endtag(self, tag):
        start.append(tag)


response = urllib2.urlopen('https://accounts.google.com/SignUp?service=mail&continue=https%3A%2F%2Fmail.google.com%2Fmail&hl=en')
html = response.read()
a = MyHTMLParser()
a.feed(html)
s =  json.dumps(start)
print "json =" ,s