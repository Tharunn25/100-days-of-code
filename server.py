import socket
import sys

try:
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    print("The socket has been successfully created")
except socket.error as err:
    print("socket creation failed with the error" % (err))


port = 90

try:
    ip = socket.gethostbyname('www.google.com')
except socket.gaierror:
    print("there was an error resolving the host")
    sys.exit()

s.connect((ip, port))

print('the socket has successfull connected to google')
