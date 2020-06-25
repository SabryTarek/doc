Vue
====
- build Web Components
- scafloding tool: vue-cli + vue ui
- Router: Vue-Router
- State Managment: Vuex
- SSR (server-side-rendering): Nuxt.js (provide also Routing system without code by sub directories)-> cli: create-nuxt-app
- Material Design Component Framework: Vuetify





- npm i @vue/cli -> vue create my-project-name
- vue ui

Vue concepts:
- template -> view
- data -> model
- method -> control

- event
prevent
- directive
- component
- binding

mount vue with
data flow === data binding




<div id="app">
    <p>{{ message }}</p>
    <button v-on:click="changeMessage">Click me!</button>
</div>

var app = new Vue({
    el: '#app',
    data: {
        message: 'Start message'
    },
    methods: {
        changeMessage: function () {
            this.message = 'The message has changed!'
        }
    }
})
# the data and the DOM are now linked, and everything is now reactive


directives:
# Directives are prefixed with v-
v-text
v-html
 v-if if -> false not render element at DOM
v-show -> toggle element by css display property

v-else-if=""
v-else
v-for

 v-on  -> alias @  directive to attach event listeners that invoke methods on our Vue instances:
v-bind:<attribute="value"> one-way data binding
    alias :<attribute="value">
 v-model  two-way binding between form input and app state

{
el:
data: {}
method: {}
template:

watch:
computed:

hooks
}


- if you select an element from DOM by Vue you can control it and it childs
- Vue instance life cycle


- text interpolation
- bind element attributes













Vue.component('todo-item', {
  template: '<li>This is a todo</li>'
})



<ol>
  <!-- Create an instance of the todo-item component -->
  <todo-item></todo-item>
</ol>




<ol>
  <!-- Create an instance of the todo-item component -->
  <todo-item></todo-item>
</ol>

polyfills


webpack: vue-loader -> for Vue (SFC) Single File Components





hooks:
    - mounted()
    - computed()







Resources
=========

- https://bootstrap-vue.js.org
---------------------------------------------------------------------------------------------------------

















 JavaScript Fatigue
self-contained
almost any type of application interface can be abstracted into a tree of components




























directives:
- v-show
- v-if
- v-else-if
- v-else
- v-text === {{}} == v-once
- v-html
- v-bind:<html_attr> === :<html_attr>
- v-model



:class ="{red: email.length < 2}"
:class ="[email.length < 2 ? 'red' : 'green']"




app = new Vue ({
    el: "#root",
    data: {
        greeting: 'Hello, Vue! ^_^'
    }
})


Shorthands

<template>
</template>

<script>
    export defalt (

    )
</script>

<style scoped>
</style>


npm i @vue/cli -g
vue create my-project-name



Vetur vscode extension








Vue.component('<component_name>', {
    template: `
    `,
    prpos: [
        'cats'
    ],
})






components: ['<component_name>'],


<component_name : cats="cats" />









vue lifecicle methods:

created
mounted
updated
destroyed app.$destroy