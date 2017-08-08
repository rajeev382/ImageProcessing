from collections import defaultdict
import pdb
nodes=int(raw_input(""))
##k=int(raw_input(""))
tree={}
for i in range(1,nodes+1):
    tree[i]=[]
for key,value in tree.items():
     key=int(raw_input(""))
     cur_value = int(raw_input(""))
     tree[key].append(cur_value)

def node_count(tree,value_c):
    count=0
    pdb.set_trace()
    for i in value_c:
      count=count+len(tree[i])
    return count

list=["1"]
list2=[]
values=[]

#count=len(tree[1])

list3=[]
while(1):
    count = 0
    for k in list:
        k=int(k)
        values=tree[k]
        count=count+node_count(tree, values)
        list3.extend(values)
    if(count==0):
        break;
    pdb.set_trace()
    list = list3
    list2.append(count)

print(tree)
print(list2)