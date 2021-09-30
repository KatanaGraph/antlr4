
import sys
import re

for line in sys.stdin:
    print(line.rstrip())
    match = re.search('(OC_\w+?Context) \*ctx', line)
    if match:
        print('    printf("' + match.group(1) + '\\n");');
