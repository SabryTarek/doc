React
=====
- build Web Components react, react-dom
- scafloding tool: react-create-app
- Router: Vue-Router
- State Managment: Redux
- SSR (server-side-rendering): Next.js (provide also Routing system without code by sub directories)
    - cli:create-next-app
--------------------------------------------------------------------------------------------------------------------------
packages:
    - react => React, React.Component , Fregmant
    - react-dom => ReactDOM, ReactDOM.render
    - react-router-dom => BrowserRouter, Route
                          Link, NavLink
  
    - babel-core
    - babel-preset-env
    - babel-preset-react
    - webpack
    - react-create-app
--------------------------------------------------------------------------------------------------------------------------
File Strucure:
    - index.js // entry point
    - index.html
    - index.css
    - App.js // components collector
    - App.css
    - components/ //=> components directory
        - nav.js
        - nav.css
  
        - main.js
        - main.css
  
        - footer.js
        - footer.css
--------------------------------------------------------------------------------------------------------------------------
> component:

- function-based component
    - functional component
    - stateless component
    - UI component
- class-based component
    - class component
    - stateful component
    - view component
--------------------------------------------------------------------------------------------------------------------------
> React component lifecycle Hooks:
    - constractor()
    - render()
    - componentDidMount()
    - componentDidUpdate() 
# class component only
# work with functional component at next version
--------------------------------------------------------------------------------------------------------------------------
> state:
    - holds informition about component
    - changable = mutable by using setStatue({})
    - similar to variables declared in a function
    - managed & limited to current component


> prop:
    - properties
    - ket=value like HTML attributes
    - passed from component to another
    - immutable
    - similar to function parameters



# you can pass the **state** of the current component as a **prop** to other components
--------------------------------------------------------------------------------------------------------------------------
> App.js

import React from "react"
import Home from "./components/Home"
import About from "./components/about"

class App extends React.Component {
    state: {

    }

    setstate: ({

    })
    render() {
        return(
            <BrowserRouter>
                <Route exact path="/" component={} />
                <Route path="/home" component={Home} />
                <Route path="/about" component={About} />
            </BrowserRouter>
        )
    }
}

export defult App
--------------------------------------------------------------------------------------------------------------------------
> index.js

import React from "react"
import ReactDOM from "react-dom"

ReactDOM.render(<App />, document.getElementById("root"))
--------------------------------------------------------------------------------------------------------------------------
events
--------------------------------------------------------------------------------------------------------------------------


HTML5 = New HTML Tages + New Javascript APIs







Resource:
- https://scotch.io/starters/react/getting-started-with-react-2019-edition?utm_content=in-content