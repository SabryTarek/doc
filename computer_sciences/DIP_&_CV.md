- C
- C++
- Python
- Java
- Javascript


Python Wrappers


- Object Recognition
- Object Detection
    - Haar Clasification
- Edge Detection
- Background Subtraction
- Color Filtering

step1: convert colord image to grayscal


opencv [1, 2, 3]

import cv2

img = cv2.imread('watch.png’)
cv2..imshow('image explorer', img)
cv2.imwrite(‘watchgray.png’,img)


0 -> grayscale
1 -> colored
-1 -> unchanged


img = cvtColor(img, cv.COLOR_BGR2RGB)


-------------------------------------------------------------------------------------------------------------------

import cv2
import numpy as np
from matplotlib import pyplot as plt 

img = cv2.imread(‘watch.jpg’,cv2.IMREAD_GRAYSCALE)

cv2.imshow(‘image’,img)
cv2.waitKey(0)
cv2.destroyAllWindows()
-------------------------------------------------------------------------------------------------------------------

import cv2
import numpy as np
from matplotlib import pyplot as plt 

img = cv2.imread(‘watch.jpg’,cv2.IMREAD_GRAYSCALE) 

plt.imshow(img, cmap = ‘gray’, interpolation = ‘bicubic’)
plt.xticks([]), plt.yticks([])  # to hide tick values on X and Y axis
plt.plot([200,300,400],[100,200,300],’c’, linewidth=5)
plt.show()





-------------------------------------------------------------------------------------------------------------------
النجاح ليس نتيجة لعدم ارتكاب أي أخطاء، ولكنه نتيجة لعدم تكرار نفس الخطأ مرتين
جورج برنارد شو، مؤلف أيرلندي شهير
-------------------------------------------------------------------------------------------------------------------


- cv.line()
- cv.circle()
- cv.rectangle()
- cv.ellipse()
- cv.putText()





change colorspace
cv.cvtColor(img, <flag>)

flag:
- cv.COLOR_BGR2GRAY
- cv.COLOR_BGR2HSV


‫‪import‬‬ ‫‪cv2‬‬
‫‪flags‬‬ ‫=‬ ‫‪[i‬‬ ‫‪for‬‬ ‫‪i‬‬ ‫‪in‬‬ ‫)‪dir(cv2‬‬ ‫‪if‬‬ ‫])'_‪i.startswith('COLOR‬‬
‫‪for‬‬ ‫‪x‬‬ ‫‪in‬‬ ‫‪flags:‬‬



Image Processing Operations:
- Point Operations
- Group Operations



Morphological
Analysis of binary images

- Edge Detection
- Noise Removal
- Image Segmentation
- Image Inhancement


Microchip PIC 16F877A
MicroC