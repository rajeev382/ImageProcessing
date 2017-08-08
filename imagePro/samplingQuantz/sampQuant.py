import cv2
import numpy as np
import matplotlib.pyplot as plt
image = cv2.imread('/home/rajeev/Pictures/ImageProcessing/p1.jpg')
image1 = cv2.imread('/home/rajeev/Pictures/ImageProcessing/images2.jpeg')

def weightedAverage(pixel):
    return 0.299*pixel[0] + 0.587*pixel[1] + 0.114*pixel[2]
image=weightedAverage(image)
from scipy.misc import toimage
#image1=weightedAverage(image1)
#cv2.imshow("nj",image1)

print "yyyyyyyyyyyyyyyyyyyyyyyyyyyy"
#cv2.pyrUp(image, image)
#I_red = image.copy()  # Duplicate image
#I_red[:, :, 1] = 0    # Zero out contribution from green
#I_red[:, :, ] = 0
#cv2.imshow("gh",I_red)
#p=[[[1,2,4],[3,6,9]],[[1,2,4],[3,6,9]]]
#p=np.asarray(p,'uint8')/8
#np.divide(p,8)
#image=image/pow(2,3)

cv2.imshow("fsf",image)
cv2.waitKey(180000)

plt.hist(image.ravel(),256,[0,256]); plt.show()


for i in image:
    print i
