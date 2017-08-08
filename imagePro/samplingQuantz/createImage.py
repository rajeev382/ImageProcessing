from PIL import Image
data = ""
for i in range( 128**2 ):
    data += chr(255) + chr(0) + chr(0)
im = Image.fromstring("RGB", (128,128), data)
im.save("test.png", "PNG")
##
from PIL import Image

##im = Image.new("RGB", (128, 128))
##pix = im.load()
##for x in range(128):
##    for y in range(128):
##        pix[x,y] = (255,0,0)

##im.save("test.png", "PNG")
##