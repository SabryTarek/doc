
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