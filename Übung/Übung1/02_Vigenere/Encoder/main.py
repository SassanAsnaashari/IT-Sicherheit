# This is a sample Python script.

# Press ⌃R to execute it or replace it with your code.
# Press Double ⇧ to search everywhere for classes, files, tool windows, actions, and settings.

import re


def print_hi(name):
    # Use a breakpoint in the code line below to debug your script.
    print(f'Hi, {name}')  # Press ⌘F8 to toggle the breakpoint.


def init(array):
    for i in range(500):
        array.append(0)


# Press the green button in the gutter to run the script.
if __name__ == '__main__':
    print_hi('PyCharm')
with open('interessantesDokument.txt.enc', "r") as infile:
    content = infile.read()

    newContent = str(content)
newContent = re.sub("\s", "", newContent)
print(str(newContent))
blockContent = ""
for i in range(0, len(newContent) -5 , 5):
   for j in range(0, 5):
       blockContent = blockContent + newContent[i + j]
   blockContent = blockContent + "\n"

with open("BlockEnode.txt","w") as outfile:
    outfile.write(blockContent)

klasse1 = []
klasse2 = []
klasse3 = []
klasse4 = []
klasse5 = []
init(klasse1)
init(klasse2)
init(klasse3)
init(klasse4)
init(klasse5)
print(str(len(newContent)))
print(newContent[106])

for i in range(0, len(newContent) - 100, 5):
        for j in range(5):
            if j == 0:
                if ord(newContent[i+j]) < 1990 :
                    klasse1[ord(newContent[i + j])] += 1
            if j == 1:
                if ord(newContent[i+j]) < 1990 :
                     klasse2[ord(newContent[i+j])] += 1
            if j == 2:
                if ord(newContent[i+j]) < 1990 :
                    klasse3[ord(newContent[i + j])] += 1
            if j == 3:
                if ord(newContent[i+j]) < 1990 :
                    klasse4[ord(newContent[i + j])] += 1
            if j == 4:
                if ord(newContent[i+j]) < 1990 :
                    klasse5[ord(newContent[i + j])] += 1
print("Klasse 1")
for i in range(256):
    if klasse1[i] != 0:
        print(chr(i) + " : " + str(klasse1[i]) )
print('')
print("Klasse 2")
for i in range(256):
    if klasse2[i] != 0:
        print(chr(i) + " : " + str(klasse2[i]) )
print('')
print("Klasse 3")
for i in range(256):
    if klasse3[i] != 0:
        print(chr(i) + " : " + str(klasse3[i]) )
print('')
print("Klasse 4")
for i in range(256):
    if klasse4[i] != 0:
        print(chr(i) + " : " + str(klasse4[i]) )
print('')
print("Klasse 5")
for i in range(256):
    if klasse5[i] != 0 and i != 0:
        print(chr(i) + " : " + str(klasse5[i]) )
print(str(ord('R') - ord('E') + 1))
# See PyCharm help at https://www.jetbrains.com/help/pycharm/
