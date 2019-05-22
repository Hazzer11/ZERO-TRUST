from picamera import PiCamera
import time
import cv2

detectionCascade= cv2.CascadeClassifier("haarcascade_frontalface_default.xml")
camera= PiCamera()
name=time.time()
camera.capture('Images_normal/${0}.jpg'.format(name))
image = cv2.imread('Images_normal/${0}.jpg'.format(name))
faces = detectionCascade.detectMultiScale(grayimage,scaleFactor=1.1,minNeighbors=4,minSize=(50,50))
for (x, y, w, h) in faces:
    cv2.rectangle(image, (x, y), (x+w, y+h), (0, 255, 0),2)
    
cv2.imwrite("Images_Faces/image.png",image)
