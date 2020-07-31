Vim -> created by: Bram Moolenaar
====
- vi -> [vi]sual interface || [vi]sual editor
- vim -> [v]isual [i]nterface [m]odified || [vi]sual editor [m]odified || [v]isual editor [im]proved || enhanced vi || programer editor
- Gvim -> GUI vim
- vim-gtk
- neovim


ed (standard unix text editor) -> sed/awk -> vi -> vim -> neovim
- Emacs
- nano
- pico
- 

# the author of the game of throne books a lot of people don't realize he actually wrote the entire book series in vim
--------------------------------------------------------------------------------------------------------------------------------------------------
> insert mode (i - a - o - s - insert keyboard button):

# the only difference is where the characters are inserted.
  1. Type  o  to open a line BELOW the cursor and start Insert mode.
     Type  O  to open a line ABOVE the cursor.

  2. Type  a  to insert text AFTER the cursor.
     Type  A  to insert text after the end of the line.


- i -> insert before curser
- I -> insert before start of line

- a -> insert after curser
- A -> insert after end  of line

- o -> Open up a line below current line
- O -> Open up a line above current line

- s -> 
- S -> 
--------------------------------------------------------------------------------------------------------------------------------------------------
> Normal mode "Esc"
- y -> yank
- yy -> copy this line
- p -> paste
- 
- dd -> delete this line
- 
- c -> change = delete and go to insert mode
- cc -> change = delete this line and go to insert mode
- daw -> delete a word 
- x -> delete character on curser
- X -> delete character before curser
--------------------------------------------------------------------------------------------------------------------------------------------------
> command mode ":"
- w -> write
  - w <file_name> # save this text in this file

v  motion  :w <file_name>  saves the Visually selected lines in file <file_name>.

- q -> quit
- x = wq -> write & quit
- !q ->
- e <file_path> -> open file


:! <bash_command> -> execute bash command 
# :!gcc main.c && ./a.out


:r !<bash_command> || <external_file> # :r === :read
# :read ! ls ~/doc === :r ! ls ~/doc
--------------------------------------------------------------------------------------------------------------------------------------------------
> vim commands:

# You can either use the long or the short option name :set ic === :set ignorecase


#########################################################################################################################
> set <option> || set no<option>
  - :set number -> show lines number
  - :set ruler ->  Show the line and column number of the cursor position, separated by a comma.
  - :set relativenumber
  - :set smartindent
  - :set mouse=a
  - :set tapstop=2
  - :set hlsearch -> highlight search
  - :set incsearch  in current search (search in runtime)
  - :set ic -> ingnore case # 

  - :set shiftwidth=4
  - :set showcmd› › " Show (partial) command in status line.
  - :set showmatch› › " Show matching brackets.
  - :set ignorecase›› " Do case insensitive matching
  - :set smartcase› › " Do smart case matching
  - :set incsearch› › " Incremental search
  - :set autowrite› › " Automatically save before commands like :next and :make
  - :set hidden›› " Hide buffers when they are abandoned
  - :set mouse=a› › " Enable mouse usage (all modes)
#########################################################################################################################
- :help: # ex :help ruler || :help 'ruler'

:help w
:help c_CTRL-D
:help insert-index
:help user-manual
:help vimrc-intro
#########################################################################################################################
:<e>C-d -> show a list of commands that start with "e" command
# It is especially useful for  :help


CTRL-D to see list of all possible completions.
Press <TAB> to use one completion
--------------------------------------------------------------------------------------------------------------------------------------------------
> themes:

<theme_name>.vim 

~/.vim/colors
- :colorscheme <theme_name> -> set theme from command mode
--------------------------------------------------------------------------------------------------------------------------------------------------
> visual mode "C - v"
- --VISUAL-- "v"
- --VISUAL LINE-- "ctrl + v"
- --VISUAL BLOCK-- "shift + v"
--------------------------------------------------------------------------------------------------------------------------------------------------
> Replace mode R

# Replace mode is like Insert mode, but every typed character deletes an existing character
--------------------------------------------------------------------------------------------------------------------------------------------------
> plugins:

- plugins manager:
  - Vundle
  - NeoBundle
  - VimPlug
  - Pathogen

--------------------------------------------------------------------------------------------------------------------------------------------------
# InstantMarkdownPreview

> PluginInstall:
  - PluginInstall <plugin_name>
  - PluginSearch
  - PluginUpdate
  - PluginList -> set PluginInstal from comand mode
  - Plugin
  - Plugin

--------------------------------------------------------------------------------------------------------------------------------------------------
touch ~/.vimrc.plug
mkdir ~/vimplug-plugins


> in ~/.vimrc file:

. . .
 " Call the .vimrc.plug file
 if filereadable(expand("~/.vimrc.plug"))
     source ~/.vimrc.plug
 endif

> in ~/.vimrc.plug file:
 call plug#begin('~/.vim/plugged')

"Fugitive Vim Github Wrapper
Plug 'tpope/vim-fugitive'

call plug#end()



# after this step if you receive an error similar to E117 Unknown Function: plug#end check the user permissions over ~/.vim/ you may need to `chmod -R 0755







--------------------------------------------------------------------------------------------------------------------------------------------------
> <leader> key:

- <leader>=/ -> by default
- in .vimrc file:
      let mapleader = "," -> <leader> = ,
--------------------------------------------------------------------------------------------------------------------------------------------------
vimscript language
==================

let name=sabry
put=name
put=strftime("%d-%m-%y")
put=strlen("sabry")
echo name
--------------------------------------------------------------------------------------------------------------------------------------------------
> configration file:

- .vimrc
  - /etc/vim/vimrc or etc/vimrc -> global (for all users)
  - ~/.vimrc -> local (for specific user)

# neovim use vim.init file instead of .vimrc
--------------------------------------------------------------------------------------------------------------------------------------------------
> sample of ~/.vimrc file:
> 
" Set compatibility to Vim only.
set nocompatible

" Helps force plug-ins to load correctly when it is turned back on below.
filetype off

" Turn on syntax highlighting.
syntax on

" For plug-ins to load correctly.
filetype plug-in indent on

" Turn off modelines
set modelines=0

" Automatically wrap text that extends beyond the screen length.
set wrap
" Vim's auto indentation feature does not work properly with text copied from outisde of Vim. Press the <F2> key to toggle paste mode on/off.
nnoremap <F2> :set invpaste paste?<CR>
imap <F2> <C-O>:set invpaste paste?<CR>
set pastetoggle=<F2>

" Uncomment below to set the max textwidth. Use a value corresponding to the width of your screen.
" set textwidth=79
set formatoptions=tcqrn1
set tabstop=2
set shiftwidth=2
set softtabstop=2
set expandtab
set noshiftround

" Display 5 lines above/below the cursor when scrolling with a mouse.
set scrolloff=5
" Fixes common backspace problems
set backspace=indent,eol,start

" Speed up scrolling in Vim
set ttyfast

" Status bar
set laststatus=2

" Display options
set showmode
set showcmd

" Highlight matching pairs of brackets. Use the '%' character to jump between them.
set matchpairs+=<:>

" Display different types of white spaces.
set list
set listchars=tab:›\ ,trail:•,extends:#,nbsp:.

" Show line numbers
set number

" Set status line display
set statusline=%F%m%r%h%w\ [FORMAT=%{&ff}]\ [TYPE=%Y]\ [POS=%l,%v][%p%%]\ [BUFFER=%n]\ %{strftime('%c')}

" Encoding
set encoding=utf-8

" Highlight matching search patterns
set hlsearch
" Enable incremental search
set incsearch
" Include matching uppercase words with lowercase search term
set ignorecase
" Include only uppercase words with uppercase search term
set smartcase

" Store info from no more than 100 files at a time, 9999 lines of text, 100kb of data. Useful for copying large amounts of data between files.
set viminfo='100,<9999,s100

" Map the <Space> key to toggle a selected fold opened/closed.
nnoremap <silent> <Space> @=(foldlevel('.')?'za':"\<Space>")<CR>
vnoremap <Space> zf

" Automatically save and load folds
autocmd BufWinLeave *.* mkview
autocmd BufWinEnter *.* silent loadview"
--------------------------------------------------------------------------------------------------------------------------------------------------





--------------------------------------------------------------------------------------------------------------------------------------------------
> map Keystroke:
- :map -> displays the maps that work in normal, visual and select and operator pending mode
- :map! -> displays maps that work in insert and command-line mode


display the mode specific maps, prefix the ':map' command with the letter representing the mode.

- n) :nmap ||:nnoremap -> Display normal mode maps
- i) :imap ||:inoremap -> Display insert mode maps
- v) :vmap ||:vnoremap -> Display visual and select mode maps
- s) :smap ||:snoremap -> Display select mode maps
- x) :xmap ||:xnoremap -> Display visual mode maps
- c) :cmap ||:cnoremap -> Display command-line mode maps
- o) :omap ||:onoremap -> Display operator pending mode maps


# : normal dd -> press d then d at keyboard in normalmode
--------------------------------------------------------------------------------------------------------------------------------------------------
> vim registers:


- register name [0-9] | [a-z]
- ["] [<register_name>] [<operation>]

- :reg <register_name> -> show register with this name
- :let 0a = '' -> -> create register from command mode
- :registers -> show all registers
--------------------------------------------------------------------------------------------------------------------------------------------------
> vim features:

- Navigation
- Text Manipulation
- Macros
- KeyStrokes
- Registers === Buffers
  - q<character> recording... q
  - @<character>
- modes
  - Normal
    - ESC
  - Visual
    - v
    - V -> highlight this line
  - Insert
    - i
    - o
    - a
  - Plugins
    - plugins Manager
  - .virmrc (Configration File)
  - vim script

--------------------------------------------------------------------------------------------------------------------------------------------------
> motion:
- 0 -> begin of current line
- $ -> end of current line

- w -> begin of next word
- b -> begin of previous word

- e -> end of next word
- moves to the end of current word

- {,} -> previous, next paragraph
- (,) -> previous, next statement
- gg -> first letter at first line
- G -> last letter at last line


# Typing a number before a motion repeats it that many times

# [operator] [#number] [motion]
# NOTE: Remember that you should be learning by doing, not memorization.

capital  U  to return the line to its original state.
--------------------------------------------------------------------------------------------------------------------------------------------------
> operator:
- d -> delete
- c -> change
- y -> yank
- p -> paste





- i -> inner
- a -> around

- t -> html tag
- <>
- ''
- ""
- ``
- {}
- ()
- []

- w word
--------------------------------------------------------------------------------------------------------------------------------------------------





- <CR> === <Enter> -> Carrige Return -> 
- <NOP> -> No OPeration

--------------------------------------------------------------------------------------------------------------------------------------------------
> screen split:

- vs -> vertical split
- sp -> ho split

- C-w-w ->  jump from one window to another
--------------------------------------------------------------------------------------------------------------------------------------------------

- %
  - %:p -> fill path
  - %:h -> get the folder of the current file
  - %:e -> extention
  - %:r -> to get the filename without the extension
--------------------------------------------------------------------------------------------------------------------------------------------------

- D/C for d$ and c$ -> delete to the end of paragraph
- ciw & diw -> change/delete inner word
- caw & daw -> change/delete around word = delete inner word and whitespace around it
- . (Period/full stop) to repeat last command
- setlocal spell! spelllang=en_us


- logical line
- visual line



--------------------------------------------------------------------------------------------------------------------------------------------------
> undo & redo:

- u -> undo
- C-r -> redo
- U -> 

- :undo <number_of_steps>
- :undolist
- :earlier 2m 25s
- :later 5m


--------------------------------------------------------------------------------------------------------------------------------------------------
> goto:
- gg
- G
- [number] gg = [number] G

# C-g -> <file_absolute_path> [<file_status>] line <current_line> of <last_line> --<persentage=current_line/last_line>-- col <colomn_number>
--------------------------------------------------------------------------------------------------------------------------------------------------
# gg=G - > auto indentation
# g - crtl + a => auto increment arrat index
# shift + i -> comment
--------------------------------------------------------------------------------------------------------------------------------------------------
> search:
- / -> search for a phrase in the forward direction
- ? -> search for a phrase in the backward direction

- n -> next
- N -> previous


  1. To go back to where you came from press  CTRL-O  (Keep Ctrl down while
     pressing the letter o).  Repeat to go back further.  CTRL-I goes forward.
NOTE: When the search reaches the end of the file it will continue at the
      start, unless the 'wrapscan' option has been reset.


--------------------------------------------------------------------------------------------------------------------------------------------------
The cursor will move to the matching parenthesis or bracket
# NOTE: This is very useful in debugging a program with unmatched parentheses!

--------------------------------------------------------------------------------------------------------------------------------------------------
> substitution:
- :s/old/new
- :s/old/new/g
- :#,#s/old/new/g
- :%s/<word_find>/<repace_with>/g -> substitute +> n -> next word , p -> previous word 


- To substitute new for the first old in current line    :s/old/new
- To substitute new for all 'old's on current line       :s/old/new/g
- To substitute phrases between two line #'s             :#,#s/old/new/g
- To substitute all occurrences in the file              :%s/old/new/g
- To ask for confirmation each time add 'c'              :%s/old/new/gc

--------------------------------------------------------------------------------------------------------------------------------------------------


:norm I"<a href=""
:norm A"">++<a>"



# If you want to ignore case for just one search command, use  \c in the phrase:  /ignore\c <ENTER>


https://www.youtube.com/user/ThoughtbotVideo/playlists?view=1&sort=dd&shelf_id=0



--------------------------------------------------------------------------------------------------------------------------------------------------
> References:

- https://vimawesome.com/
- https://vim-bootstrap.com/
- https://vimconfig.com/

- https://vimconf.org/

- https://github.com/SirVer/ultisnips

- :help user-manual

- vimtutor
  - Vim - Vi Improved - by Steve Oualline
  - Learning the Vi Editor - by Linda Lamb


--------------------------------------------------------------------------------------------------------------------------------------------------



NeoVIM has all VIM features plus it has terminal in itself
neovim-remote plugin you can do the following: run first instance of NeoVIM as a server, edit your files. And when needed, open terminal (":terminal" command) and using neovim-remote open files in buffers of the NeoVIM in which you run terminal session. :)

--------------------------------------------------------------------------------------------------------------------------------------------------

processors


- intel families:
  - atom
  - selion

- AMD families:

- ARM families:



archtictures:
- 32bit
- 64bit



ncurses-based


Despite what the above comic suggests, Vim can be configured to work in a very simple (Notepad-like) way, called evim or Easy Vim.


Vim folding commands
zf#j creates a fold from the cursor down # lines.
zf/string creates a fold from the cursor to string .
za When on a closed fold: open it.and vice-versa.
zA When on a closed fold: open it recursively.and vice-versa.
zj moves the cursor to the next fold.
zk moves the cursor to the previous fold.
zo opens a fold at the cursor.
zO opens all folds at the cursor.
zm increases the foldlevel by one.
zM closes all open folds.
zr decreases the foldlevel by one.
zR decreases the foldlevel to zero -- all folds will be open.
zd deletes the fold at the cursor.
zE deletes all folds.
[z move to start of open fold.
]z move to end of open fold.

paste in ~/.vimrc to save folds automatically

au BufWinLeave * mkview
au BufWinEnter * silent loadview

helppage on vim
:help folding

https://www.linux.com/learn/tutorials...
http://nerd-hacking.blogspot.com/2006...

open vim as root or normal code
http://paste2.org/p/2015003






- file encryption :X
- change password vim +x <file_name>
- Remove password set passwd= ""



good plugins:
- vim-pandoc