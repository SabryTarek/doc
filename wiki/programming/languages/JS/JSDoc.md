JSDoc
=====

JSDoc 3 is an API documentation generator for JavaScript
similar to 
    - Javadoc
    - phpDocumentor
You add documentation comments directly to your source code
The JSDoc tool will scan your source code and generate an HTML documentation website for you.
document things like modules, namespaces, classes, methods, method parameters, and so on



documentation types:
- code documentation
- project documentation





/**
 * @param {Number} a
 * @param {String} b
 * @param {Array} c
 *
 * @returns {String}
 */


JSDoc tags:
- @param
- @return
- @file
- @author
- @virsion


-h, --help	Display information about JSDoc's command-line options, then exit.
-v, --version	Displays JSDoc's version number, then exits.
--verbose	Log detailed information to the console as JSDoc runs. Defaults to false.
-t <value>, --template <value>	The path to the template to use for generating output. Defaults to templates/default, JSDoc's built-in default template.
-c <value>, --configure <value>	The path to a JSDoc configuration file. Defaults to conf.json or conf.json.EXAMPLE in the directory where JSDoc is installed.
-R, --readme	The README.md file to include in the generated documentation. Defaults to the first README.md file found in the source paths.
-P, --package	The package.json file that contains the project name, version, and other details. Defaults to the first package.json file found in the source paths.
-d <value>, --destination <value>	The path to the output folder for the generated documentation. For JSDoc's built-in Haruki template, use console to dump data to the console. Defaults to ./out.




command-line options with long and short forms
JSDOC Render templates

vscode
- //@ts-check