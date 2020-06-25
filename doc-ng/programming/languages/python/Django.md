Add to Django
==========
- DTL : Django Template Language
    - tags {% %}
    - variables {{}}

My first name is {{ first_name }}. My last name is {{ last_name }}.
{'first_name: 'Mohammed', 'last_name': 'Taher'}
My first name is Mohammed. My last name is Taher.
-----------------------------------------------------------------------------
- you can use Django Templates or any template engine like Jinja2
- any view take HttpRequest object as a prameter its convintion name is request

```Django
from django.http import HttpResponse
from .models import Question

def index(request):
    latest_question_list = Question.objects.order_by('-pub_date')[:5]
    output = ', '.join([q.question_text for q in latest_question_list])
    return HttpResponse(output)
```
```Django
{% if latest_question_list %}
    <ul>
    {% for question in latest_question_list %}
    <li><a href="/polls/{{ question.id }}/">{{ question.question_text }}</a></li>
    {% endfor %}
</ul>
{% else %}
    <p>الاقتراعات غير متوفرة حالياً.</p>
{% endif %}
```



from django.http import HttpResponse
from django.template import loader

from .models import Question

```Django
def index(request):
    latest_question_list = Question.objects.order_by('-pub_date')[:5]
    template = loader.get_template('polls/index.html')
    context = {
       'latest_question_list': latest_question_list,
    }
    return HttpResponse(template.render(context, request))
```

===

```Django
from django.shortcuts import render

from .models import Question


def index(request):
    latest_question_list = Question.objects.order_by('-pub_date')[:5]
    context = {'latest_question_list': latest_question_list}
    return render(request, 'polls/index.html', context)
```


```Django
from django.http import Http404
from django.shortcuts import render

def detail(request, question_id):
    try:
        question = Question.objects.get(pk=question_id)
    except Question.DoesNotExist:
        raise Http404("السؤال المطلوب غير موجود.")
    return render(request, 'polls/detail.html', {'question': question})






















- model -> model
- view -> template
- controller -> view


- admin -> to crud at models
- stuff group


- controller take data from model only
- form give data to model only

- python2 ->2020
- python3 2008 ->

python 3.4.3 most stable



- every virtual env install python pip easyinstall setuptool
- source bin/activate


django | python manage.py runserver
anconda : download automaticly more than 300 compatable liberary in data science filed 



- pip install djangorestframework


django-admin startproject tutor #main configraion directory
python3 manage.py startapp blog #app every app has its own migration file
python3 manage.py
python3 manage.py runserver
python3 manage.py migrate
python3 manage.py makemigration
python3 manage.py createsuperuser

https://localhost/8000
https://localhost/8000/admin

django adminstration defeult app in django to manage users and authentcation autherithation

settings.py
===========
SECRET_KEY=""
INSTALLED_APPS=[]
MIDDELWARE=[]
ROOT_URLCONF=""
TEMPLATE=[]
WSGI_APPLCATION=""
DATABASES=""
AUTH_PASSWORED_VALIDATION=[]

LANGUAGE_CODE="en-us"
TIME_ZONE="UTC"

STATIC_URL="/static/"





python manage.py dbshell


route = url
controller = view = logic layer
view = template = presentation layer
model = data access layer


project url

urlpatterns = [
    (r'^home/', include(home.url, namespace='home'),

]



admin.py
from .model import Note
admin.site.register(<model_name>)

DRY Don't Repeat Yourself
makemigration
migrate

migration --fake

apt-get install python3-<package_name> === pip install <package_name>
pip search <package_name>
pip freeze
Django template lunguage vs jinja
pull --all

pillow
kenneth love treehouse django tack

- function-based views (fbv)
- class-based views (cbv)



__init__.py -> to define that this directory ia a module so you can import from it


pip & easyinstall get by defulte with python3

in installed app 'rest_framework'