import matplotlib.pyplot as plt
import numpy as np



#plt.figure()
#fig,ax = plt.subplots()
#ax.bar(1,20)
#plt.show()

# y = np.random.radiant(1,20,7)
# x = np.arange(7)
# fig,ax = plt.subplots()
# ax.bar(5,7,width=0.5)
# plt.show()

comp = []
movi = []
itera = []
i = 0
j = 0

fileI = open("Itera.txt", "r")
fileM = open("Movi.txt", "r")
fileC = open("Comp.txt", "r")

datosI = fileI.read()
datosM = fileM.read()
datosC = fileC.read()


datosI = datosI.split("\n")
datosM = datosM.split("\n")
datosC = datosC.split("\n")


for d in datosI:
    itera.append(d)

for da in datosM:
    movi.append(da)

for dat in datosC:
    comp.append(dat)

n = len(itera)
itera.pop(n-1)
m = len(movi)
movi.pop(m-1)
c = len(comp)
comp.pop(c-1)



itera = [int(x) for x in itera]
movi = [int(y) for y in movi]
comp = [int(z) for z in comp]

fileI.close()
fileM.close()
fileC.close()


plt.figure()

plt.subplot(1,2,1)
plt.plot(movi)
plt.title("Movimientos")
plt.xticks(range(0,n-1),itera)
plt.xlabel("Iteraciones")
plt.ylabel("Num Movimientos")

plt.subplot(1,2,2)
plt.plot(comp)
plt.title("Comparaciones")
plt.xticks(range(0,n-1),itera)

plt.show()





#list(map(int,itera))
    

#print("Itera: ",itera)
#print("Comp",datos)
#print("Movi",file)





# if i == 0 + j:
#         itera.append(line)
#     if i == 1 + j:
#         comp.append(line)
#     if i == 2 + j:
#         movi.append(line)
#     i += 1
#     j += 2

