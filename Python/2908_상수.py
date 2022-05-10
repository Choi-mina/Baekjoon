A, B = input().split()
#[::-1] => 역순
A = int(A[::-1])
B = int(B[::-1])

if A > B :
    print(A)
else:
    print(B)
