anaconda - miniconda
python -> python 2 -> python -v
python3 -> python 3 -> python3 -v


pip -> pip 2 -> pip install django==2.1.1
pip3 -> pip 3 -> pip3 install django==1.11

pip install <package_name>
conda install <package_name>




conda create -n <envirinment_name> python=""

source activate <envirinment_name>
source deactivate <envirinment_name>


dynamic language -> slow -> to fast it -> pypi

python -m venv <env_name>

str

-------------------------------------------------------------------------------------------------------------------------------------
Python Data Structures
======================
- list [] -> array
- tuple () -> immutable
- dictionary {} -> map
- set [] ->  associative array


**<dectionary_name> dectionary unpacking

str()
Map
- set(,)
- get
- has
- delete
- clear

Set.
- add
- get
- has
- delete
- clear


-------------------------------------------------------------------------------------------------------------------------------------
if <condition>:
elif
else


and - or - not

if in -> if Ahmed in Name_List:
-------------------------------------------------------------------------------------------------------------------------------------
anonyms function === lambda function


python interpreter
==================
- python || python3
- exit()
- help
- pydoc 
- pypi -> python package index


open("path", mode)
constructor === __init__(self)






-----------------------------------------------------------











---------------------------------------------------------------------------------------------------------------------------------------
rather than pipenv install --ignore-pipfile, better to use pipenv install --deploy command because that one checks if your Pipfile.lock is in sync with the Pipfile; if they are out of sync, it errors.﻿








Hey Corey, I'm having some issues. I know I installed pipenv globally on my mac by doing 

sudo pip install pipenv 
sudo pip3 install pipenv 

as well as 

sudo -H pip install -U pipenv
sudo -H pip3 install -U pipenv

they successfully install pipenv globally, but when I create a project, cd into it and then run

pipenv install requests 

it simply says the command is not found. Here is the stackoverflow linked I checked out to help me with this issue, but these suggestions are not working as well. 

https://stackoverflow.com/questions/46391721/pipenv-command-not-found

Any ideas or am I just gonna miss out on pipenv :/
 


That looks like it might be an issue with your PATH. I have two videos on that topic (One for Mac/Linux, one for Windows). If you watch the one for your operating system then it should give you a good idea of how to fix your problem. You can find those here...

Mac/Linux: https://youtu.be/PUIE7CPANfo
Windows: https://youtu.be/OdIHeg4jj2c


If you are on Windows then it should be installing pipenv in your Scripts directory where pip is located as well. You just need to determine which pip is doing the installation, and that should let you know where it's being installed and what directory you need to add to your PATH. I hope that helps!


-------------------------------------------------------------------------------------------------------------------------------------
pythonic code

(Python Standerd Libraries) standerd python distribution like STL in c++


<method>.__doc__

-------------------------------------------------------------------------------------------------------------------------------------
https://www.pyinstaller.org/


أنت عملت لعبة تمام فيها كذا ملف python واستدعاء لمكاتب وغيرة
لما بتفتح اللعبة بتفتح من ملف رئيسي بيستعدي المكتبات والمفات كلها

إلى بيبقي فيه
__name__ = "main"

ده هتدخل في المتغير بتاع pyinstaller وهو هيدمج المكتبات ملفات ال python 
بس في برنامج 
-------------------------------------------------------------------------------------------------------------------------------------
Python:
	- jupyter Notebook
	- Panda
	- Numpy
	- Matpltlib
	- NLTK
	- Beautful Soap







AI(Artificial Intelligence)
	ML(Machine Learning)
		DL(Deep Learning)


- Big Data
- Data Sciences
- Blockchain


- AR
- VR
- MR


IoT


Cloud Computing

Repository
    Datasets
--------------------------------------------------------------------------------------------------------------------------------------------

py3clean      py3versions   pyclean       pydoc         pydoc3        pygettext     pygettext3    python        python2.7     python3.5     python3m
py3compile    pybuild       pycompile     pydoc2.7      pydoc3.5      pygettext2.7  pygettext3.5  python2       python3       python3.5m    pyversions

--------------------------------------------------------------------------------------------------------------------------------------------
Dropbox
