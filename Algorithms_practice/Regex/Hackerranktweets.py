#@ author
#Yicheng Gong
#Summer 2015

import sys
count=0;
for line in sys.stdin:

    line_lower = line.lower();
    if "hackerrank" in line_lower:
        count+=1;

print(count);