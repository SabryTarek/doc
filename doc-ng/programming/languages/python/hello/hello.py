# /usr/bin/python3 -m pip install -U pylint --user

msg = "Hello World"
print(msg)

msg = msg.capitalize()
print(msg)
# https://github.com/rpicard/explore-flask



import matplotlib.pyplot as plt
import numpy as np

x = np.linspace(0, 20, 100)  # Create a list of evenly-spaced numbers over the range
plt.plot(x, np.sin(x))       # Plot the sine of each x point
plt.show()                   # Display the plot