import numpy as np
from math import sqrt
import matplotlib.pyplot as plt
import warnings
from matplotlib import style
from collections import Counter
import pandas as pd
import random
style.use('fivethirtyeight')
dataset={'k':[[1,2,4],[2,3,1],[3,1,2],[4,3,2],[3,5,2]],'r':[[6,5,4],[7,7,6],[8,6,5],[6,5,7],[7,6,4]]}
new_feature=[5,7,3]
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
            #np.sqrt(np.array(features)-np.array(predict)**2)
            distance.append([euclidean_distance,group])
    votes =[i[1]for i in sorted(distance)[:k]]
    print votes
    vote_result=Counter(votes).most_common(1)[0][0]
    return vote_result
df =pd.read_csv('breast-cancer-wisconsin.data')
df.replace('?',-9999,inplace=True)
df.drop(['id'],1,inplace=True)
x=np.array(df.drop(['class'],1))
y=np.array(df['class'])

result=k_nearest_neighors(dataset,new_feature,k=3)
print result

