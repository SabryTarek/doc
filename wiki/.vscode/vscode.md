vs code
========
## shortcuts:
- Command Palette: Access all available commands based on your current context: Ctrl+Shift+P
    - cit : create integrated terminal
- Quick Open: Quickly open files: Ctrl+P
- Toggle Sidebar: Ctrl+B
- Zen Mode: Ctrl+K-Z
- Side by side editing: Ctrl+\
- Switch between editors: Ctrl+1, Ctrl+2, Ctrl+3, ...
- integration terminal : Ctrl+`
- reveal file in explorer: ctrl+k-r
- shift + ctrl + l === f2
------------------------------------------------------------------------------------------------------------------------------

Command line
-------------
# open code with current directory
code .

# open the current directory in the most recently used code window
code -r .

# create a new window
code -n

# change the language
code --locale=es

# open diff editor
code --diff <file1> <file2>

# open file at specific line and column <file:line[:character]>
code --goto package.json:10:5

# see help options
code --help

# disable all extensions
code --disable-extensions .
------------------------------------------------------------------------------------------------------------------------------


configrations files
--------------------
- settings.json
- keybindings.json
- snippits.json


.vscode/
---------
- tasks.json -> for the Task Runner
- launch.json -> for the debugger
- local.json -> for the lunguage there is 12 lunguage





places
-------
- extentions -> ~/.vscode/extentions
- .vscode/ -> ~/.vscode/ || <project_directory>/.vscode/

VS Code stores settings that are specific to that workspace in .vscode/settings.json, which are separate from user settings that are stored globally.

settings.json
--------------





markdown
---------
- **ketboard shortcuts:**

    - ctrl+v
    - ctrl+k v
    - crtl+b -> bold
    - ctrl+i -> italic








snippets
---------
- types :
    - global filename -> <name>.code-snippets
    - for a specific language filename -> <languageId>.json
    - own













view :-
        - wordwarp -> break a line 
        Help > Interactive Playground.



> Extensions Categories:
Azure
Debuggers
Extension Packs
Formatters
Keymaps
Language Packs
Linters
Programming Languages
SCM Providers
Snippets
Themes
Other







extentions
-----------
categories:
- themes
- icons
- keymaps


- Auto Rename Tag
- Bracket Pair Colorizer
- vs live share 
- paste json copy
- vscode-npm-import-package-version
- Import Cost


- advanced-new-file
- Auto Import
- Better PHPUnit
- Class Helper
- DotENV
- File Utils
- Import Cost
- PHP Intelephense
- PHP Extension Pack
- PHP Namespace Resolver
- Prettier - Code formatter
- GitLens -- Git supercharged


- GitLens (VSCode default GIT is good and handy and GitLens gives him a lot (like... A LOT) more features)
- Bracket Pair Colorizer
- vscode-spotify
- One Dark Pro (Atom's default color scheme... the best in the world in my opinion)
- Color Highlight
- Debugger for Chrome
- Live Server
- Intellisense (for languages or technologies you want.)
- QUOKKA (It's so extremely cool when you want to learn something with just outputing some data to console. Quokka gives you the opportunity to show the output in CODE LIVE)
- Trailing spaces (to remove unnesecary white characters)


- themes
- icons
- settings
- key binding