Yeoman
=======
utilty -> yo
template -> generator


EX: 
    - $ yarn global add yeoman 
    - $ yarn global add generator-webapp

yo angular:controller MyNewController
npm run test:auto
npm run serve:dist



> WRITING YOUR OWN YEOMAN GENERATOR


npm install -g yo generator-generator


create a folder
generator-<name_of_your_generator>






packages.json
{
  "name": "generator-name",
  "version": "0.1.0",
  "description": "",
  "files": [
    "generators"
  ],
  "keywords": ["yeoman-generator"],
  "dependencies": {
    "yeoman-generator": "^1.0.0"
  }
}

# The name property must be prefixed by generator-. The keywords property must contain "yeoman-generator" and the repo must have a description to be indexed by our generators page.

# You should make sure you set the latest version of yeoman-generator as a dependency. You can do this by running: npm install --save yeoman-generator.

# The files property must be an array of files and directories that is used by your generator.








mkdir sabry && cd $_





