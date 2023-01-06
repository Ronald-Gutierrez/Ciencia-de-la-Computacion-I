
#Arboles binarios
#Arbol = ["a",["b",["d",[],[]],["e",[],[]] ],["c",["f",[],[]],[]]] #Raiz y dos subarboles
#Arbol2=["a",["b",["d",["g",["h",[],[]],["i",[],[]]],[]],[]],["c",["e",[],[]],["f",[],[]]]]

Arbol1=["a",["b",["d",[],["h",[],[]]],["e",[],[]]],["c",["f",[],[]],["g",["i",[],[]], ["j",["k",[],[]] ,[]]]]]
Arbol2=[8,[3,[1,[],[]],[6,[4,[],[]] ,[7, [],[]]] ] ,[10,[],[14,[13,[],[]],[]] ]]
Arbol3=["a",["b",["d",["g",[],[]] ,[]] ,["e",["h",[],[]] ,["i",[],[]] ]] ,["c",[],["f",["j",[],["k",[],[]]],[] ]]]

def raizArbin(a):
    return a[0]
def izqArbin(a):
    return a[1]
def derArbin(a):
    return a[2]
def vacioArbin(a):
    return a==[]

def preOrden(arbin):
    if not vacioArbin(arbin):
        print (raizArbin(arbin))
        preOrden(izqArbin(arbin))
        preOrden(derArbin(arbin))

def inOrden(arbin):
    if not vacioArbin(arbin):
        inOrden(izqArbin(arbin))
        print (raizArbin(arbin))
        inOrden(derArbin(arbin))

def postOrden(arbin):
    if not vacioArbin(arbin):
        postOrden(izqArbin(arbin))
        postOrden(derArbin(arbin))
        print (raizArbin(arbin))

def alturaArbin(a):
    if vacioArbin(a):
        return 0
    elif vacioArbin(izqArbin(a)) and vacioArbin(derArbin(a)):
        return 1
    else:
        izq = alturaArbin(izqArbin(a))
        der = alturaArbin(derArbin(a))
        if izq<der:
            return der +1
        else: 
            return izq +1

def pesoArbin(a):
    if vacioArbin(a):
        return 0
    else:
        return 1+pesoArbin(izqArbin(a))+pesoArbin(derArbin(a))
def inicArbinOr():
    return []
def insArbinOr(arbinOr,elem):
    if arbinOr==[]:
        return [elem,[],[]]
    else:
        if elem > arbinOr[0]:
            arbinOr[2] = insArbinOr(arbinOr[2],elem)
        else:
            arbinOr[1] = insArbinOr(arbinOr[1],elem)
        return arbinOr
def elimArbinOr(arbinOr, elem):
    p = inicArbinOr()
    if arbinOr[0]==elem:
        if arbinOr[1]==[] and arbinOr[2]==[]:
            return []
        elif arbinOr[1]==[]:
            p = arbinOr[2]
            return p
        else:
            mayor = mayorElem(arbinOr[1])
            arbinOr[0] = mayor
            arbinOr[1] = elimArbinOr(arbinOr[1], mayor)
        
def estaArbinOr(arbinOr, elem):
    if arbinOr==[]:
        return False
    else:
        if arbinOr[0]==elem:
            return True
        else:
            if arbinOr[0] > elem:
                return estaArbinOr(arbinOr[1], elem)
            else:
                return estaArbinOr(arbinOr[2], elem) 

def mayorElem(arbinOr):
    if arbinOr[2]==[] :
        return arbinOr[0]
    else:
        return mayorElem(arbinOr[2])

def unirArbinOr(a1,a2):
    if a2[1]==[] and a2[2]==[]:
        insArbinOr(a1,a2[0])
    else:
        if not (a2[1]==[]):
            unirArbinOr(a1,a2[1])
        if not (a2[2]==[]):
            unirArbinOr(a1,a2[2])
        insArbinOr(a1,a2[0])

def interArbinOr(a1,a2):
    if a1[1]==[] and a1[2]==[]:
        if not estaArbinOr(a2,a1[0]):
            elimArbinOr(a1,a1[0])
        else :
            if not (a1[1]==[]):
                interArbinOr(a1[1],a2)
            if not (a1[2]==[]):
                interArbinOr(a1[2],a2)
            if not estaArbinOr(a2,a1[0]):
                elimArbinOr(a1,a1[0])

def subArbinOr(a1,a2):
    if (a2[1]==[] and a2 ==[]):
        return estaArbinOr(a1,a2[0])
    else:
        if not (a2[1]==[]):
            x=subArbinOr(a1,a2[1])
        if not (a2[2]==[]):
            y=subArbinOr(a1,a2[1])
        return estaArbinOr(a1,a2[0]) and x and y

def casillenoArbin(a):
    if vacioArbin(arbin):
        return False
    elif alturaArbin(izqArbin(a))==alturaArbin(derArbin(a)):
        return False
    else: 
        return True

def llenoArbin(a):
    if vacioArbin(a):
        return False
    elif vacioArbin(izqArbin(a)) and vacioArbin(derArbin(a)):
        return True
    else:
        return llenoArbin(izqArbin(a))and llenoArbin(derArbin(a))

def completoArbin(a):
    if vacioArbin(a):
        return False
    elif vacioArbin(izqArbin(a)) and not vacioArbin(derArbin(a)):
        return False
    else :
        return vacioArbin(izqArbin(a)) or (completoArbin(izqArbin(a)) and completoArbin(derArbin(a)))

def numHojas(a):
    if vacioArbin(a):
        return 0
    elif vacioArbin(izqArbin(a)) and vacioArbin(derArbin(a)):
        return 1
    else:
         return numHojas(izqArbin(a))+numHojas(derArbin(a))
def camino(a,e1,e2):
    if vacioArbin(a):
        return False
    else:
        return estaArbinOr(a,e1) and estaArbinOr(a,e2)


def contNivel(a,num):
    if vacioArbin(a):
        return 0
    else:
        if num=0
            return 1
        else:
            return contNivel(izqArbin(a),(num-1))+contNivel(derArbin(a),(num-1))

def semejantes(a1,a2):
    if semejantes(a1,a2) and numElemen(a1)==numElemen(a2):
        return True
    else:
        return False
def isomorfosArbin(a1,a2):
    if (vacioArbin(a1)and not vacioArbin(a2))or (vacioArbin(a2) and not vacioArbin(a1)):
        return False
    elif vacioArbin(a1) and vacioArbin(a2):
        return True 
    else:
        return isomorfosArbin(izqArbin(a1),izqArbin(a2)) and isomorfosArbin(derArbin(a1),derArbin(a2))


def semejantesArbin(a1,a2):
    if estaArbinOr(a2,raizArbin(a1)):
        if not vacioArbin(izqArbin(a1)):
            return estaArbinOr(a2,raizArbin(a1))or semejantes(izqArbin(a1),a2)
        elif not vacioArbin(derArbin(a1)):
            return estaArbinOr(a2,raizArbin(a1)) or semejantes(derArbin(a1),a2)
        else:
            return False
    else:
        return False

    print("El peso del arbol es: ",pesoArbin(Arbol1))
