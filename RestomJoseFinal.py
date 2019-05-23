#!/usr/bin/env python
# coding: utf-8

# In[1]:


import matplotlib.pyplot as plt
import numpy as np


# In[2]:


datos=np.genfromtxt("datos.txt",delimiter=";")
t=datos[:,0]
x=datos[:,1]
y=datos[:,2]


# In[3]:


plt.figure()
plt.plot(x,y)
plt.title("X vs Y")
plt.ylabel('Posicion en Y')
plt.xlabel('Posicion en X')
plt.savefig('RestomJose_final_15.png')


plt.show()
plt.close()


# In[ ]:




