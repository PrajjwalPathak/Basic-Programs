#Author: cherishedball
#Date Modified: 4th October 2021

import cv2
path = input("Enter the path and name of the image==")
print("YOU ENTERED ==",path)

#now read the image
img1 = cv2.imread(path,0)#convert image into greyscale
img1 = cv2.resize(img1,(500,500))
print(img1)
#imgfin=255-img1
#img1 = cv2.flip(img1,0)#it accepts 3 parameters 0,-1,1
cv2.imshow("converted image",img1)

k = cv2.waitKey()
if k==ord("s"):
    cv2.imwrite("output.jpg",img1)
else:
    cv2.destroyAllWindows()          
