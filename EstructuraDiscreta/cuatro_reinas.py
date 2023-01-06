

def inConsistent(q,n):
    for i in range(n):
        if q[i]==q[n]:
            return False
        if q[i]- q[n]==n-i:
            return False
        if q[n]-q[i]==n-i:
            return False
    return True

def printQueens(q):
    N=len(q)
    for i in range (N):
        for j in range(N):
            if q[i]==j:
                print("Q",)
            else:
                print("*",)
        print(" ")
    print(" ")

def CuatroReinas(q,n):
    N=len(q)
    if n==N:
        printQueens(q)
        Fin = True
    else:
        for i in range(N):
            q[n]=i
            if (inConsistent(q,n)):
                CuatroReinas(q,n+1)

print('-'*70)
n=4
CuatroReinas([0 for x in range(n)],0)
print('-'*70)
