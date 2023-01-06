
def depth_first(G,r):
    def visit(G,V,E):
        print("Ya estoy en visit")
        padre=dict([])
        Vp={V}
        w=V
        while True:
            if G[w]!=None:
                V=G[w][0]
                n=0
                while V in Vp and n<len(G[w]):
                    V=G[w][n]
                    n=n+1
                if n==len(G[w]) and V in Vp:
                    V=padre[w]
                else: 
                    padre[V]=w
                    Vp=Vp | {V}
                    T[V]= [w]
                    T[w]=T[w] + [V]
                    if len(Vp)==len(G):
                        return
                w=V
    T= {r:[]}
    visit(G,r,T)
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
T2=depth_first(G1,'e')
print(T2)
print('-'*70)
