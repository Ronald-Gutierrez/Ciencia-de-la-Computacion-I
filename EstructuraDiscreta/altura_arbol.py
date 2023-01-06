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