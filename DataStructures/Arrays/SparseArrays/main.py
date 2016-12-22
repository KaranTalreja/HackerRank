# Enter your code here. Read input from STDIN. Print output to STDOUT
import sys
strings = {}
N = int(sys.stdin.readline())
for i in range(0,N):
    string = sys.stdin.readline().strip()
    if True == strings.has_key(string):
        strings[string] += 1
    else:
        strings[string] = 1
        
Q = int(sys.stdin.readline())
for i in range(0,Q):
    query = sys.stdin.readline().strip()
    if True == strings.has_key(query):
        print strings[query]
    else:
        print 0
