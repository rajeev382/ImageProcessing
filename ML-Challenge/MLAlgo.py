import pandas as pd
import numpy as np
import pdb
from catboost import CatBoostClassifier
from sklearn.model_selection import train_test_split
#pdb.set_trace()
train = pd.read_csv("train1628.csv")
test = pd.read_csv("test1628.csv")
train.head()
test.head()
train.isnull().sum(axis=0)/train.shape[0]
train['siteid'].fillna(-999, inplace=True)
test['siteid'].fillna(-999, inplace=True)

train['browserid'].fillna("None", inplace=True)
test['browserid'].fillna("None", inplace=True)

train['devid'].fillna("None", inplace=True)
test['devid'].fillna("None", inplace=True)
train['datetime'] = pd.to_datetime(train['datetime'])
test['datetime'] = pd.to_datetime(test['datetime'])
train['tweekday'] = train['datetime'].dt.weekday
train['thour'] = train['datetime'].dt.hour
train['tminute'] = train['datetime'].dt.minute

test['tweekday'] = test['datetime'].dt.weekday
test['thour'] = test['datetime'].dt.hour
test['tminute'] = test['datetime'].dt.minute
cols = ['siteid','offerid','category','merchant']

for x in cols:
    train[x] = train[x].astype('object')
    test[x] = test[x].astype('object')

cols_to_use = list(set(train.columns) - set(['ID','datetime','click']))

# catboost accepts categorical variables as indexes
cat_cols = [0,1,2,4,6,7,8]
rows = np.random.choice(train.index.values, 9000)
sampled_train = train.loc[rows]
trainX = sampled_train[cols_to_use]
trainY = sampled_train['click']
X_train, X_test, y_train, y_test = train_test_split(trainX, trainY, test_size = 0.5)
model = CatBoostClassifier(depth=10, iterations=10, learning_rate=0.1, eval_metric='AUC', random_seed=1)
model.fit(X_train
          ,y_train
          ,cat_features=cat_cols
          ,eval_set = (X_test, y_test)
          ,use_best_model = True
         )
pred = model.predict_proba(test[cols_to_use])[:,1]
sub = pd.DataFrame({'ID':test['ID'],'click':pred})
sub.to_csv('cb_sub1.csv',index=False)
