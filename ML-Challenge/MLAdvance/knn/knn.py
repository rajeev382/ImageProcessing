import numpy as np
from sklearn import preprocessing,cross_validation,neighbors
import pandas as pd
df =pd.read_csv('breast-cancer-wisconsin.data')
df.replace('?',-9999,inplace=True)
#Dropout outliers
df.drop(['id'],1,inplace=True)
x=np.array(df.drop(['class'],1))
y=np.array(df['class'])
x_train,x_test,y_train,y_test=cross_validation.train_test_split(x,y,test_size=0.2)
clf=neighbors.KNeighborsClassifier()
clf.fit(x_train,y_train)
accuracy=clf.score(x_test,y_test)
#Accuracy rate on Test Data
print accuracy
#Predict class of on Random Data which is not in Dataset
sample_data=np.array([4,5,1,2,3,5,2,1,2])
sample_data=sample_data.reshape(1,-1)
conf=clf.predict(sample_data)

print conf