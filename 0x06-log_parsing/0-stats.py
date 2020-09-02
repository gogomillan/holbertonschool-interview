#!/usr/bin/python3
"""
Script that reads stdin line by line and computes metrics:
- Input format: <IP Address> - [<date>] "GET /projects/260 HTTP/1.1" <status
                code> <file size>
- After every 10 lines and/or a keyboard interruption (CTRL + C), print these
    statistics from the beginning:
Example:
    File size: 5213
    200: 2
    401: 1
    403: 2
    404: 1
    405: 1
    500: 3
"""
import sys
import traceback
stcd = {}
summ = 0


if __name__ == "__main__":
    cnt = 0
    try:
        for data in sys.stdin:
            fact = data.split(' ')
            if len(fact) > 7:
                if stcd.get(fact[7]):
                    stcd[fact[7]] = stcd.get(fact[7]) + 1
                else:
                    stcd[fact[7]] = 1
            if len(fact) > 8:
                summ += int(fact[8])
            cnt += 1
            if cnt == 10:
                stcdor = sorted(stcd.items())
                print('File size: {}'.format(summ))
                for each in stcdor:
                    print('{}: {}'.format(each[0], each[1]))
                cnt = 0
    except KeyboardInterrupt:
        stcdor = sorted(stcd.items())
        print('File size: {}'.format(summ))
        for each in stcdor:
            print('{}: {}'.format(each[0], each[1]))
        #traceback.print_exc()
        raise
    else:
        stcdor = sorted(stcd.items())
        print('File size: {}'.format(summ))
        for each in stcdor:
            print('{}: {}'.format(each[0], each[1]))
