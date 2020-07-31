
Git
====
git doesn't store file changes but store Snapshots for all dierctory and save every file changes and it time, auther
SHA-1 - hexadecimal - 20 character





- changes
- changes reasons
- erorres that changes fix it




> .git directory

where git save snapshots from your directory













Git Workflow
- Working Directory (working_dir)
- Staging Area (index)
- ocal Repository (head)
- git Repository 


- <working_dir> -> add -> <index> -> commit -> head


--------------------------------------------------------------------------------------------------------
tracked vs Untracked

- Modified (M)
- Staged 
- Committed
--------------------------------------------------------------------------------------------------------
- git init

--------------------------------------------------------------------------------------------------------
- git status
--------------------------------------------------------------------------------------------------------
- git add <FileName>
- git add . === git add * === git add --all -> move all files in this directory from working directory to staging area
- git add -i -> interactive 

--------------------------------------------------------------------------------------------------------
> move your changes from idex to head
- git commit -m "<description>"
- git commit -a -m "" => add + commit
- commit --amend -m "new massage" -> rewrire last commit massage


commit massage best practice:
- commit header
- empty ine after

--------------------------------------------------------------------------------------------------------
- git log
- git log --pretty=oneline ->  see a very compressed log where each commit is one line
- git log --author=<sabry> -> see only the commits of a certain author
- git log --graph --oneline --decorate --all -> see an ASCII art tree of all the branches, decorated with the names of tags and branches
- git log --name-status -> See only which files have changed

ASCII art
--------------------------------------------------------------------------------------------------------
git show <commitID> -> git log but in more details
--------------------------------------------------------------------------------------------------------
- git clean 
  	-f === git reset --hard -> remove all updates from staging area and working directory
	-n
	-d
	-x
	-i
--------------------------------------------------------------------------------------------------------

- git tag <tagValue> <commitID>

--------------------------------------------------------------------------------------------------------
- git diff #differance between working directory and satging area#
- git diff head #differance between working directory and last commit#
- git diff --staged #differance between satging area and last commit#
- git diff <commitNum> #differance between working directory and spacific commit#
- git diff <commitNum1> <commitNum2> #differance between two deffirent commits#
--------------------------------------------------------------------------------------------------------

- git rest <file_name> -> remove file from staging area === don't watch it
- git reset -> remove all updates from staging area only but still in working directory
- git reset --hard === git clean -f -> remove all updates from staging area and working directory
- git reset --hard head~1 -> remove (last commit) move the head to the before commit
--------------------------------------------------------------------------------------------------------

- git branch | git branch <newBranch>
- git branch -m <oldBranchName> <newBranchName>
- git branch -m <newBranchName> -> edit the name of current branch
- git branch -d <yourLocalBranchName> -> remove local branch
	 # git push origin --delete <yourRemoteBranchName> -> delete remote branch #

--------------------------------------------------------------------------------------------------------

- git checkout <branchName>
- git checkout -b <newBranchName>
	- git push origin <newBranchName> -> to push the new branch to the server
- git checkout <commitID> # must create new branch after this command to avoid the DETACHED HEAD #
- git checkout <commitID> # your local changes would be overwritten by checkout please commit your changes or stash 		them before you switch branches or run "checkout -f" to overwritten #
- git checkout <commitID> -f===--force
--------------------------------------------------------------------------------------------------------
move updates from working directory to stach buffer
- git satch <stach = cut for work directory>
- git stach list
- git satch apply [<stachName>] #if you don't write stachID Git will use last stach
- git stach drop [<stachID>]
- git stach pop <pop = apply + drop> [<stachID>]
- git stach save "<description>"like git commit -m "<description>"
- git stach branch <newBranchName> -> apply last stach at new branch and move the head at it
- git stach <satchID> branch <newBranchName> -> apply pacifice stach at new branch and move the head at it
 
#stach doen't linked with any branch so you can stach from a branch and apply at another one#
--------------------------------------------------------------------------------------------------------
- git merge

--------------------------------------------------------------------------------------------------------
- git remote -v
- git remote add <serverName>=origin <serverLink> -> linke your local repository with remote one
- git remote remove===rm <serverName>
- git remote set-url <oldServerName> <newServerLink>  -> change remote-server-url


- git push # shortcut for "git push origin master" #
- git push -u <serverName> <branchName>
- git push origin <branchName> -> move your local branch to remote
- git push origin --delete <yourRemoteBranchName> -> delete remote branch
	# git branch -d <yourLocalBranchName> -> remove local branch #


- git pull
- git pull <serverName> <branchName>

#pull = fetch + merge#
--------------------------------------------------------------------------------------------------------
- git clone <serverLink>
- git clone <serverLink> .
- git clone <localRepositoryPath> #copy local repo to anthor directory at the same machine #


--------------------------------------------------------------------------------------------------------
https: https://<hostServerURL>:<userName>/<repoName>.git https://github.com/sabry97/doc.git

ssh: git@<hostServerURL>:<userName>/<repoName>.git -> git@github.com:sabry97/doc.git
--------------------------------------------------------------------------------------------------------
- gitk -> built-in GUI for git
--------------------------------------------------------------------------------------------------------
> configration
- git config alice.st status => var st = status ;
git config --global alias.st status
git st

- git config color.ui true
- git config format.pretty oneline -> show logs in eline
> .gitconfig file

[user]
	name = sabry97
	email = sabry.tarek@cis.asu.edu.eg


--------------------------------------------------------------------------------------------------------
.git __Files__

# .gitignore
# .gitattributes
# .gitkeeper
# .gitkeep
# .gitconfig
# Detached Head

# .gitmodules

[submodule "solarized"]
	path = solarized
	url = git://github.com/altercation/solarized.git
[submodule "xfce4-terminal-colors-solarized"]
	path = xfce4-terminal-colors-solarized
	url = git://github.com/sgerrand/xfce4-terminal-colors-solarized.git
[submodule "laptop"]
	path = laptop
	url = git@github.com:lucisferre/laptop.git
[submodule "powerline-fonts"]
	path = powerline-fonts
	url = https://github.com/powerline/fonts.git
[submodule "antigen"]
	path = antigen
	url = https://github.com/zsh-users/antigen.git

--------------------------------------------------------------------------------------------------------





> git lfs -> Git Large File Storage




| command | inverse |
| ------- | ------- |
| add     |












Git Object Types :-
	- Blob Object
	- Tree Object
	- Commit Object
	- Tag Object









Glob Patterns

git rm myFile.py
git rm --cached myFile.py










# master branch in git === trunk in svn



Remote Repository
---------------------

- clone :
	- git clone https://github.com/sabry97/simple-guide.git [projectNewName]
- git fetch https://github.com/sabry97/simple-guide.git

	
git remote show origin
git remote rm devrepo






- self-hosted

- cloud (pass)
github
gitlab
bitbucket
gitea 
gotta

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------

https://github.com/cirosantilli/linux-cheat.git
https://<site_name>/<user_name>/<repo_name>.git
git@github.com:<user_name>/<repo_name>.git
git@github.com:cirosantilli/linux-cheat.git

https://.github.com/<user_name>
https://gist.github.com/<user_name>

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Refrences:
- https://try.github.io/
- https://www.atlassian.com/git/tutorials
- https://git-scm.com/book/en/v2
- https://nvie.com/posts/ => gitflow
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Helper Tools:
- hub
- gitflow cli tool
- github cli






version controll system
- Git -> Linuos travolds
- bazzar -> GNU
- mirical
- 



config files:
- Repository level
- global level -> ~/.gitconfig




-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------

>> git
usage: git [--version] [--help] [-C <path>] [-c <name>=<value>]
           [--exec-path[=<path>]] [--html-path] [--man-path] [--info-path]
           [-p | --paginate | -P | --no-pager] [--no-replace-objects] [--bare]
           [--git-dir=<path>] [--work-tree=<path>] [--namespace=<name>]
           <command> [<args>]

These are common Git commands used in various situations:

start a working area (see also: git help tutorial)
   clone      Clone a repository into a new directory
   init       Create an empty Git repository or reinitialize an existing one

work on the current change (see also: git help everyday)
   add        Add file contents to the index
   mv         Move or rename a file, a directory, or a symlink
   reset      Reset current HEAD to the specified state
   rm         Remove files from the working tree and from the index

examine the history and state (see also: git help revisions)
   bisect     Use binary search to find the commit that introduced a bug
   grep       Print lines matching a pattern
   log        Show commit logs
   show       Show various types of objects
   status     Show the working tree status

grow, mark and tweak your common history
   branch     List, create, or delete branches
   checkout   Switch branches or restore working tree files
   commit     Record changes to the repository
   diff       Show changes between commits, commit and working tree, etc
   merge      Join two or more development histories together
   rebase     Reapply commits on top of another base tip
   tag        Create, list, delete or verify a tag object signed with GPG

collaborate (see also: git help workflows)
   fetch      Download objects and refs from another repository
   pull       Fetch from and integrate with another repository or a local branch
   push       Update remote refs along with associated objects

'git help -a' and 'git help -g' list available subcommands and some
concept guides. See 'git help <command>' or 'git help <concept>'
to read about a specific subcommand or concept.

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------

>> git help -a

usage: git [--version] [--help] [-C <path>] [-c <name>=<value>]
           [--exec-path[=<path>]] [--html-path] [--man-path] [--info-path]
           [-p | --paginate | -P | --no-pager] [--no-replace-objects] [--bare]
           [--git-dir=<path>] [--work-tree=<path>] [--namespace=<name>]
           <command> [<args>]

These are common Git commands used in various situations:

start a working area (see also: git help tutorial)
   clone      Clone a repository into a new directory
   init       Create an empty Git repository or reinitialize an existing one

work on the current change (see also: git help everyday)
   add        Add file contents to the index
   mv         Move or rename a file, a directory, or a symlink
   reset      Reset current HEAD to the specified state
   rm         Remove files from the working tree and from the index

examine the history and state (see also: git help revisions)
   bisect     Use binary search to find the commit that introduced a bug
   grep       Print lines matching a pattern
   log        Show commit logs
   show       Show various types of objects
   status     Show the working tree status

grow, mark and tweak your common history
   branch     List, create, or delete branches
   checkout   Switch branches or restore working tree files
   commit     Record changes to the repository
   diff       Show changes between commits, commit and working tree, etc
   merge      Join two or more development histories together
   rebase     Reapply commits on top of another base tip
   tag        Create, list, delete or verify a tag object signed with GPG

collaborate (see also: git help workflows)
   fetch     			Download objects and refs from another repository
   unpack-objects       Unpack objects from a packed archive
   update-index         Register file contents in the working tree to the index
   update-ref           Update the object name stored in a ref safely
   write-tree           Create a tree object from the current index

Low-level Commands / Interrogators
   cat-file             Provide content or type and size information for repository objects
   cherry               Find commits yet to be applied to upstream
   diff-files           Compares files in the working tree and the index
   diff-index           Compare a tree to the working tree or index
   diff-tree            Compares the content and mode of blobs found via two tree objects
   for-each-ref         Output information on each ref
   get-tar-commit-id    Extract commit ID from an archive created using git-archive
   ls-files             Show information about files in the index and the working tree
   ls-remote            List references in a remote repository
   ls-tree              List the contents of a tree object
   merge-base           Find as good common ancestors as possible for a merge
   name-rev             Find symbolic names for given revs
   pack-redundant       Find redundant pack files
   rev-list             Lists commit objects in reverse chronological order
   rev-parse            Pick out and massage parameters
   show-index           Show packed archive index
   show-ref             List references in a local repository
   unpack-file          Creates a temporary file with a blob's contents
   var                  Show a Git logical variable
   verify-pack          Validate packed Git archive files

Low-level Commands / Synching Repositories
   daemon               A really simple server for Git repositories
   fetch-pack           Receive missing objects from another repository
   http-backend         Server side implementation of Git over HTTP
   send-pack            Push objects over Git protocol to another repository
   update-server-info   Update auxiliary info file to help dumb servers

Low-level Commands / Internal Helpers
   check-attr           Display gitattributes information
   check-ignore         Debug gitignore / exclude files
   check-mailmap        Show canonical names and email addresses of contacts
   check-ref-format     Ensures that a reference name is well formed
   column               Display data in columns
   credential           Retrieve and store user credentials
   credential-cache     Helper to temporarily store passwords in memory
   credential-store     Helper to store credentials on disk
   fmt-merge-msg        Produce a merge commit message
   interpret-trailers   add or parse structured information in commit messages
   mailinfo             Extracts patch and authorship from a single e-mail message
   mailsplit            Simple UNIX mbox splitter program
   merge-one-file       The standard helper program to use with git-merge-index
   patch-id             Compute unique ID for a patch
   sh-i18n              Git's i18n setup code for shell scripts
   sh-setup             Common Git shell script setup code
   stripspace           Remove unnecessary whitespace
