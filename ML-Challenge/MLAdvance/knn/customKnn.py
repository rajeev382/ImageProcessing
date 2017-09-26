import numpy as np
from math import sqrt
import matplotlib.pyplot as plt
import warnings
from matplotlib import style
from collections import Counter
import pandas as pd
import random
#style.use('fivethirtyeight')
#dataset={'k':[[1,2],[2,3],[3,1]],'r':[[6,5],[7,7],[8,6]]}
#new_feature=[5,7]
#for i in dataset:
#    for ii in dataset[i]:
#        [plt.scatter(ii[0],ii[1],s=100,)]
def k_nearest_neighors(data,predict,k=3):
    if len(data)>=k:
         warnings.warn("k is srt to a value less than total voting group!!!")
    distance=[]
    for group in data:
        for features in data[group]:
            euclidean_distance=np.linalg.norm(np.array(features)-np.array(predict))
            distance.append([euclidean_distance,group])
    votes =[i[1]for i in sorted(distance)[:k]]
    vote_result=Counter(votes).most_common(1)[0][0]
    return vote_result
df =pd.read_csv('breast-cancer-wisconsin.data')
df.replace('?',-99999,inplace=True)
df.drop(['id'],1,inplace=True)
#x=np.array(df.drop(['class'],1))
#y=np.array(df['class'])
full_data=df.astype(float).values.tolist()
random.shuffle(full_data)
test_size=0.2
train_set={2:[],4:[]}
test_set={2:[],4:[]}
train_data=full_data[:-int(test_size*len(full_data))]
test_data=full_data[-int(test_size*len(full_data)):]
#result=k_nearest_neighors(dataset,new_feature,k=3)
#print result
for i in train_data:
    train_set[i[-1]].append(i[:-1])
for i in test_data:
    test_set[i[-1]].append(i[:-1])

correct =0
total=0
actual=0
falses=0
for group in test_set:
    for data in test_set[group]:
        if data[8]=="2":
            actual+=1
        else:
            falses+=1
        vote =k_nearest_neighors(train_set,data,k=5)
        if group == vote:
            correct =correct+ 1

        total+=1
print correct
print total
print actual
print falses
print "Accuracy %.2f" % (correct/total)
