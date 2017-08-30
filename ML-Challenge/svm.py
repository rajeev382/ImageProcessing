import matplotlib.pyplot as plt
from sklearn import datasets,svm

digits =datasets.load_digits()

clf=svm.SVC(gamma=0.0001)
#n_samples = len(digits.images)
#data = digits.images.reshape((n_samples, -1))
#plt.imshow(digits.data[1])
#plt.show()
#n_samples = len(digits.images)
#data = digits.images.reshape((n_samples, -1))
#classifier = svm.SVC(gamma=0.001)

# We learn the digits on the first half of the digits
#clf.fit(data[:n_samples], digits.target[:n_samples])

# Now predict the value of the digit on the second half:
#expected = digits.target[2:]
#predicted = clf.predict(data[:2])

x,y=digits.data[:-10], digits.target[:-10]
clf.fit(x,y)

for i in x[2:4]:
    print i
    print("dad \n")
print ("Prediction:",clf.predict(digits.data[2:4]))
plt.imshow(digits.images[-6],cmap=plt.cm.gray_r,interpolation="nearest")
plt.show()