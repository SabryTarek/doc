zero configuration 

./src/index.js -> ./dist/main.js



- webpack-cli -> full
- webpack-command -> lightweight


Webpack "4"
===========


by default web pack without any loaders doesn't allow you importing of non javascript files however all you have to do is add few simple loaders to your config file webpack then takes all of your modules
and creates a single bundle.js file




Another question you might have is why shouldn't I use another module bundler for example Browserify in combination with Gulp or Grunt.
In fact Webpack does almost the same thing as Browserify with some automation tool, but it has a few pros. There are three main factors you should consider:
1) The speed of creating bundle file
2) The bundle size and
3) Difficulty of configuring everything.
Webpack easily wins in two of those - the speed and config.
By default, those tools have something like two modes - one that creates development
version of your application and other that creates file used for production







- Hot module replacement (HMR)




- ./public/
	- index.html
	- style.css
	- bundle.js
- ./src/
	- app.js

const add = (x, y) => x+y;





webpack.config.js  // => written in nodejs syntax


module.exports = {
	entery: "./src/app.js",  // this means that we have everything we want to be in our application we have to import it in this file By default its value is "./src/index.js"
	output: {
		path: "__dirname + "/public/",  //take abslute path note relative  // === path.resolve(__dirname, 'public'),
		filename: "bundle.js"
	},
	devserver: {
		contentbase: "__dirname + "/public/",
		watchcontentbase: true, // refrsh html and css files also
		port: 3000
	},
    module: {
        rules: [
            {
                loader: "bable-loader", // loader property is just a shortcut to an item in the use array
                test: /\.js/
            },
            {
                test: /\.s?css/,
                use: [
                    "style-loader",
                    "css loader",
                    "sass-loader"
                ]
            },
            {
                test: /\.(gif|png|jpe?g|svg)$/i,
                "file-loader",  // solve image relative path problem
                {
                    loader: "image-webpack-loader",
                    options: {
                        
                    }
                }
            }
        ]
    }

};


- babel-core  // bable kernal
- bable-loader // bable webpack loader
- bable-preset-env //preset contain es6 preset and es7 preset 
- bable-plugin-transform-object-rest // new javascript feature called plugin
    preset is a collection of plugins
    plugins go through 4 stages to add at new preset


.bablerc

{
    presets: [
        "env"
    ],
    plugins: [
        "transform-object-rest"
    ]
}


- style loader:  handle the importing of the files not the compiling
- css loader: compiling css
- sass loader: compiling sass
- node-sass



- react // core lib
- react-dom
-react-cli

<div id="app" ></div>
const React = require('react'),
      ReactDOM = require('react-dom')

import React from 'react'
import ReactDOM from 'react-dom'

const custemelemet = React.createElement("h1", null, "Hello, World!")
const anther_custemelemet = <h1>Hello, World!</h1>

ReactDOM.render(custemElement, document.getElementById(app))
ReactDOM.render(anther_custemelemet, document.getElementById(app))



arr = [5, 50, 500]
arr.find(number => number > 10) //=> like .filter but return first one accept the condition only
arr = [5, 50, 500] //output: 50
arr = [5, 500, 50] //output: 500









webpack --mode development
	       production -> smaller size

	--inline 'false'
		 'true'




uglify.js

















any idea when browsers will support "import"?﻿


I don't think this will happen soon because it is still not standardized. 

The largest problem here is to make needed files of the modules publicly available for the clients. Each module may contain thousands of files and all of them must be available for the clients. And imagine how long clients may wait until all dependent file chains will be loaded from the server (even if using HTTP2)﻿

Browsers do support modules. It is enabled with type="module"  in script tag﻿


will take time for all browsers to understand that.﻿




webpack-dev-server   -> you don't need to refresh webpack after each change
			bundle file save in memory




default export and named
export the main difference is that one
file can have only one default export so
in this file if we want to export those






> Loaders
Out of the box, webpack only understands JavaScript and JSON files. Loaders allow webpack to process other types of files and convert them into valid modules that can be consumed by your application and added to the dependency graph.