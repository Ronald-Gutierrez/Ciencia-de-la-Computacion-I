


def breadth(G,r):
    T={r:[]}
    L=[r]
    while L:
        v=L.pop(0)
        for w in G[v]:
            if w not in T and w not in L:
                L.append(w)
                T[w]=[v]
                T[v].append(w)
    return T

G2 = {
    'a':list('bd'),
    'b':list('ace'),
    'c':list('bf'),
    'd':list('aeh'),
    'e':list('bdfi'),
    'f':list('cegj'),
    'g':list('fjl'),
    'h':list('dik'),
    'i':list('ehjk'),
    'j':list('fgi'),
    'k':list('him'),
    'l':list('g'),
    'm':list('k'),
}
G1 ={
    'v':list('abc'),
    'a':list('vdfb'),
    'b':list('vacdeg'),
    'c':list('vbg'),
    'd':list('abe'),
    'e':list('abfkg'),
    'f':list('aek'),
    'g':list('ceh'),
    'h':list('gk'),
    'k':list('hef'),

}

print("-"*70)
print("Breath first de G2=\\")
print(G1)
T2=breadth(G1,"e")
print("es T2=\\")
print(T2)
