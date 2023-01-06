


def intercambio(x,y):
    aux=x
    x=y
    y=aux
    return x,y

def ordenar(a1,a2,a3,a4):
    # para a1
    if(a1<=a2):
       return intercambio(a1,a2)
    elif (a1<=a3):
        return intercambio(a1,a3)
    elif (a1<=a4):
        return intercambio(a1,a4)

    # para a2

    elif(a2<=a1):
        return intercambio(a2,a1)
    elif (a2<=a3):
        return intercambio(a2,a3)
    elif (a2<=a4):
        return intercambio(a2,a4)
    
    # para a3

    elif(a3<=a1):
        return intercambio(a3,a1)
    elif (a3<=a2):
        return intercambio(a3,a2)
    elif (a3<=a4):
        return intercambio(a3,a4)
    
    # para a4

    elif(a4<=a1):
        return intercambio(a4,a1)
    elif (a4<=a2):
        return intercambio(a4,a2)
    elif (a4<=a3):
        return intercambio(a4,a3)


print(ordenar(6,8,3,2))
