npm :-
- init -y
- install || add || i puperteer@latest || i https://github.com/GoogleChrome/puppeteer  @ === : (in docker)
- uninistall = remove = rm = un
- search
- (list = ls) --depth=0 --pattern gulp
- outdated
- update = upgrade
- version
    - patch <^>
    - minor <~>
    - major <>
- prune
- [run] <script_name>
- bugs && home && repo
- npm git+https://github.com/sabry97/coin.git#master
- npm completion >> ~/.bashrc
- config
    - set
    - get
    - delete
    - pack
    - cache
    - clean



npm (bugs - home - repo)
npm config set init.auther.name "Sabry ALzahar"
npm config set save-exact true
npm config set save-prefix="-"


Security
Yarn uses checksums to verify the integrity of every installed package before its code is executed.



#Starting a new project
npm init === yarn init      

 #Installing all the dependencies of project
npm install === yarn or yarn install    

#Adding a dependency
npm install [package] === yarn add [package] #The  package is saved to your package.json immediately.      
npm install  [package]@[version] === yarn add [package]@[version]
npm install [package]@[tag] === yarn add [package]@[tag]

#Add a dev dependency
npm install [package] --save-dev === yarn add [package] --dev

#Upgrading a dependency
npm update [package] === yarn upgrade [package]
npm update [package]@[version] === yarn upgrade [package]@[version]
npm update [package]@[tag] === yarn upgrade [package]@[tag]

#Removing a dependency
npm uninstall [package] === yarn remove [package]

#View registry information
npm view [package] === yarn info [package]

#List installed packages
npm list === yarn list
npm list --depth === yarn list --depth=0

#Install packages globally
npm install -g [package] === yarn global add [package]

#Run a defined package script
npm run [script] === yarn run [script]



[runkit](https://npm.runkit.com)