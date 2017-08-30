import cv2
import cPickle

im1 = cv2.imread("/home/rajeev/Pictures/dest.jpeg")

im2 = cv2.imread("/home/rajeev/Pictures/images3.jpeg")
gray1 = cv2.cvtColor(im1, cv2.COLOR_BGR2GRAY)
gray2 = cv2.cvtColor(im2, cv2.COLOR_BGR2GRAY)
hog = cv2.HOGDescriptor()
#im = cv2.imread(sample)
print (hog)
h = hog.compute(im1)
for j in h:
    print (j)
    print("---- \n")
# initialize the AKAZE descriptor, then detect keypoints and extract
# local invariant descriptors from the image
detector = cv2.ORB_create()
(kps1, descs1) = detector.detectAndCompute(gray1, None)

(kps2, descs2) = detector.detectAndCompute(gray2, None)
print("keypoints: {}, descriptors: {}".format(len(kps1), descs1.shape))
print("keypoints: {}, descriptors: {}".format(len(kps2), descs2.shape))

# Match the features
bf = cv2.BFMatcher(cv2.NORM_HAMMING)
matches = bf.knnMatch(descs1,descs1, k=2)

# Apply ratio test
good = []
for m,n in matches:

    if m.distance < 0.9*n.distance:
           good.append([m])

    # cv2.drawMatchesKnn expects list of lists as matches.
im3 = cv2.drawMatchesKnn(im1, kps1, im2, kps2, good[1:20], None, flags=2)
cv2.imshow("AKAZE matching", im3)
cv2.waitKey(0)

index = []
for point in kps1:
  temp = (point.pt, point.size, point.angle, point.response, point.class_id)
  index.append(temp)

# Dump the keypoints
f = open("keypoints.txt", "w")
f.write(cPickle.dumps(index))
f.close()
