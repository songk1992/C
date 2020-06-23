import http.client, urllib.parse

# HTTP GET
conn = http.client.HTTPSConnection("www.python.org")
conn.request("GET", "/")
r1 = conn.getresponse()
print(r1.status, r1.reason)

data1 = r1.read()  # This will return entire content.
print (data1)

#conn.request("GET", "/")
#r1 = conn.getresponse()
#while not r1.closed:
#    print(r1.read(200)) # 200 bytes

conn.close()

# HTTP POST
params = urllib.parse.urlencode({'@number': 12524, '@type': 'issue', '@action': 'show'})
headers = {"Content-type": "application/x-www-form-urlencoded",
            "Accept": "text/plain"}

conn = http.client.HTTPConnection("bugs.python.org")
conn.request("POST", "", params, headers)
response = conn.getresponse()
print(response.status, response.reason)

data = response.read()
print (data)

conn.close()
