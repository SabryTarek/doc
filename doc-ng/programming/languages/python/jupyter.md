Jupyter
=======

- ipython > Jupyter Notebook

- kernel = programming language compiler
- command mode
- edit mode
- jupyter notebook
- !<bash_command>
- pip list



---------------------------------------------------------------------------------------------------------------------
Magics: Specieal commands buit-in Notebook
magic -> %lsmagic
- line magic % at all cell
- cell magic %% in this cell only

%matplotlib inline -> to show the chart in the same cell
%%html
%%javascript
%%timit -> cell excution time


 begin with either 1 % or 2% signs so the single % that means that the commands arguments will all come from that same line and those are called line magics and the two percent signs these mean that the entire cell will be used as that commands arguments and those are called cell magics so we can actually use one of these magic commands to list all of the other available commands and the command to list all those is called LS magic so if I put a percent sign and do LS magic and then run that cell so now you can see that lists out all of these magic commands that we can use and it splits these up into line magics here and cell magics here so let's go ahead and take a look at a couple of these so I'm going to go ahead and insert a cell below here so that we can still see all of these magics as we're working with these so now if I wanted to print out my current working directory then I could just use a single % here and do a PWD for print working directory if I run that then you can see that it shows the directory that we're currently in and you can see in this list of available line magics they also have an LS here so I can list the files and folders within that directory by doing an LS and if I run that you can see that currently we just have our single ipython notebook file now I can also pass normal commands to these just like I would within a terminal so if I do an LS - la then it'll do the long-form of those and you can see that there are more files and it lists out the users and permissions and things like that okay so those two commands that I just showed you are just similar to just being able to run bash

---------------------------------------------------------------------------------------------------------------------


save as:
- .ipynb
- .html
- .md
- .pdf



.ipynb is a json file
esc then dd to delete a cell.﻿



- ipynb: is a configard json file

- nbviewer: does not host notebooks, it only renders notebooks available on other websites.

Here's a non-interactive preview on nbviewer while we start a server for you. Your binder will open automatically when it is ready.

https://mybinder.org/






anounce at in SciPy at 2014
Fernando Pérez -> IPython


 get a temporary Jupyter server just for you, running on mybinder.org


Jupyter
    JupyterLab -> myblinder.org
    JupyterHub
    [Jupyter Kernels](https://github.com/jupyter/jupyter/wiki/Jupyter-kernels)


jupyter notebook






-----------------------------------------------------------------------------------------------------------------------------------------
TensorFlow
==========



the most popular machine learning library in the world right now is Google's tensorflow
we're going to use it to build a classifier that can look at an image of a handwritten digit and classify what digit it is in under 40 lines of code

every single Google product uses machine learning in some way whether it's
- image search
- image captioning
- translation
- recommendations
Google needs machine learning to take advantage of their godlike data sets to give users the dopest experience
there are three different crowds that use machine learning
- researchers
- data scientists
- wizards "Developers"





Training Model Pipeline: Data -> Learning -> Model1


Google doesn't just have a lot of data they have the world's largest computer
the library was built to scale it was made to run on multiple CPUs or GPUs and even mobile operating systems
it has several wrappers=front-end in several languages
- Python
- Javascript
- Objective-c





nohup -> [no] [h]ung [up]
hohup <Command> &




l -> line numbers
b -> insert below
a -> insert above

modes:
- Command -> ESC
- MarkDown ->
- Insert -> Enter
- S-Enter -> Excute




nbconvert




https://magnet2torrent.me/
[magnet2torrent](http://magnet2torrent.com/)
[torrent2magnet](http://torrent2magnet.com/)

40 course
year = 5 terms
2 mnth + 3-4
week-2week
ilets || tofil
intro to (uop)

2-3

gpa >= 2
gpa >= 3

2.5

tpu : tensor



شهر free على Google Cloud Plateform
1s-cairo-9876
https://sites.google.com/qwiklabs.com/cloudheronext19/qwiklabs/cloud-study-jams-2019



- ArchLinux
- Gentoo
- LFS

- VoidLinux

- NixOS + GuixSD

- Debian

- Clear Linux

- QubesOS

- Alpine
- TinyCore

- Plane9 + 9Front

- OpenBSD

- Slackware

- Fedora
- Centos

https://cmder.net




Notebook Extensions
While Jupyter Notebooks have lots of functionality built in, you can add new functionality through extensions. Jupyter actually supports four types of extensions:

Kernel
IPython kernel
Notebook
Notebook server



---------------------------------------------------------------------------------------------------------------------
jupyter lab


lab to tree

What kind of data-sets you need to develop you ML model ?
- Train
- Dev
- Test

- Over fit -> Baias

How to use KFold to split your dataset ?



import numpy as np
import pandas as pd
np.random.seed(12345)
import matplotlib.pyplot as plt






jupyter:
    - Notebook
    - Lab
    - Hub
    - NBViewer
    - [binder](https://mybinder.org/)
        - hub

- NBConvert
- Extensions
- Themes
- Kernels
- Widgets

---------------------------------------------------------------------------------------------------------------------------------------------
References:
- [Stanford Lecture Collection | Convolutional Neural Networks for Visual Recognition (Spring 2017)](https://www.youtube.com/playlist?list=PL3FW7Lu3i5JvHM8ljYj-zLfQRF3EO8sYv)
- [DaTaCamp]
- [Data School](https://www.datacamp.com)
- Raje
- [Cloud AI Adventure](https://www.youtube.com/playlist?list=PLIivdWyY5sqJxnwJhe3etaK7utrBiPBQ2)
- 

> [Datasets](https://www.facebook.com/groups/big.data.egypt/permalink/1787907181468475/):


> Arabic Resources:
- [CAT Live | Deep Learning and Neural Nets | in Arabic](https://www.youtube.com/watch?v=QWrWDNN2_RQ&t=564s)
- [ask Developer]()
- [abu bakr]
- [Ali Hamdi]
- [Hesham Amin]
- [Ahmed Gad](https://www.youtube.com/channel/UCuewOYbBXH5gwhfOrQOZOdw)
- [
Farisology](https://www.youtube.com/channel/UCe2_Z7UrjYngN110gDyttiQ)

- [mlcourse.ai](https://mlcourse.ai/)
- [fast.ai](https://fast.ai/)
- HDF5
- 

- ScikitLearn
- TensorFlow
- Keras
- PyTourch




- NLP
    - Python:
        - NLTK
- Web_Scrapping
    - Python:
        - Beautiful_Soup
        - Scrapy
    - JavaScript:
        - Puputeer
- Visualization
    - Python:
        - Matplotlib
    - JavaScript:
        - D3.js
        - Charts.js