[Zsh](http://www.zsh.org/)
==========================

The Z shell (zsh) is a Unix shell that can be used as an interactive login shell and as a powerful command interpreter for shell scripting. Zsh can be thought of as an extended Bourne shell with a large number of improvements, including some features of bash, ksh, and tcsh.



Oh-My-Zsh is an open source, community-driven framework for managing your ZSH configuration. It comes bundled with a ton of helpful functions, helpers, plugins and lots of themes to make your command line look fancy!

# install zsh then run oh-my-zsh script (sh -c "$(curl -fsSL https://raw.githubusercontent.com/robbyrussell/oh-my-zsh/master/tools/install.sh)")

- upgrade_oh_my_zsh
- uninstall_oh_my_zsh

------------------------------------------------------------------------------------------------------------------------
> ~/
- .zshrc
- .zshenv
- .zprofile
- .zlogin
------------------------------------------------------------------------------------------------------------------------
Default: ZSH_THEME="robbyrussell"
faveourite: ZSH_THEME="agnoster"
------------------------------------------------------------------------------------------------------------------------
ZSH_THEME="random"

ZSH_THEME_RANDOM_CANDIDATES=(
  "robbyrussell"
  "agnoster"
)
------------------------------------------------------------------------------------------------------------------------
> plugins (https://github.com/robbyrussell/oh-my-zsh/tree/master/plugins)
plugins=(
  git
  bundler
  dotenv
  osx
  rake
  rbenv
  ruby
)
------------------------------------------------------------------------------------------------------------------------

This is the Z Shell configuration function for new users,
zsh-newuser-install.
You are seeing this message because you have no zsh startup files
(the files .zshenv, .zprofile, .zshrc, .zlogin in the directory
~).  This function can help you with a few settings that should
make your use of the shell easier.

You can:

(q)  Quit and do nothing.  The function will be run again next time.

(0)  Exit, creating the file ~/.zshrc containing just a comment.
     That will prevent this function being run again.

(1)  Continue to the main menu.

(2)  Populate your ~/.zshrc with the configuration recommended
     by the system administrator and exit (you will need to edit
     the file by hand, if so desired).

--- Type one of the keys in parentheses --- 





Looking for an existing zsh config...
Using the Oh My Zsh template file and adding it to ~/.zshrc
Time to change your default shell to zsh!
Password: 


------------------------------------------------------------------------------------------------------------------------
export ZSH="~/oh-my-zsh"
ZSH_THEME="agnoster"

plugins=(
  git
  vscode
)

source $ZSH/oh-my-zsh.sh
------------------------------------------------------------------------------------------------------------------------
.plugin.zsh
.theme.zsh
~/oh-my-zsh/
- cache/
- CONTRIBUTING.md
- custom/
- lib/
- LICENSE.txt
- log/
- oh-my-zsh.sh
- plugins/
- README.md
- templates/
- themes/
- tools/






/home/sabry/.oh-my-zsh/
├── cache
│   ├── SYS_ALL_UNITS
│   └── SYS_REALLY_ALL_UNITS
├── CONTRIBUTING.md
├── custom
│   ├── example.zsh
│   ├── plugins
│   │   └── example
│   │       └── example.plugin.zsh
│   └── themes
├── lib
│   ├── bzr.zsh
│   ├── clipboard.zsh
│   ├── compfix.zsh
│   ├── completion.zsh
│   ├── correction.zsh
│   ├── diagnostics.zsh
│   ├── directories.zsh
│   ├── functions.zsh
│   ├── git.zsh
│   ├── grep.zsh
│   ├── history.zsh
│   ├── key-bindings.zsh
│   ├── misc.zsh
│   ├── prompt_info_functions.zsh
│   ├── spectrum.zsh
│   ├── termsupport.zsh
│   └── theme-and-appearance.zsh
├── LICENSE.txt
├── log
│   └── update.lock
├── oh-my-zsh.sh
├── plugins
│   ├── adb
│   │   ├── _adb
│   │   └── README.md
│   ├── ant
│   │   └── ant.plugin.zsh
│   ├── apache2-macports
│   │   ├── apache2-macports.plugin.zsh
│   │   └── README.md
│   ├── arcanist
│   │   ├── arcanist.plugin.zsh
│   │   └── README.md
│   ├── archlinux
│   │   ├── archlinux.plugin.zsh
│   │   └── README.md
│   ├── asdf
│   │   ├── asdf.plugin.zsh
│   │   └── README.md
│   ├── autoenv
│   │   └── autoenv.plugin.zsh
│   ├── autojump
│   │   └── autojump.plugin.zsh
│   ├── autopep8
│   │   ├── _autopep8
│   │   └── autopep8.plugin.zsh
│   ├── aws
│   │   └── aws.plugin.zsh
│   ├── battery
│   │   └── battery.plugin.zsh
│   ├── bbedit
│   │   ├── bbedit.plugin.zsh
│   │   └── README.md
│   ├── bgnotify
│   │   ├── bgnotify.plugin.zsh
│   │   └── README.md
│   ├── boot2docker
│   │   ├── _boot2docker
│   │   └── README.md
│   ├── bower
│   │   ├── _bower
│   │   └── bower.plugin.zsh
│   ├── branch
│   │   ├── branch.plugin.zsh
│   │   └── README.md
│   ├── brew
│   │   └── brew.plugin.zsh
│   ├── bundler
│   │   ├── _bundler
│   │   ├── bundler.plugin.zsh
│   │   └── README.md
│   ├── bwana
│   │   └── bwana.plugin.zsh
│   ├── cabal
│   │   └── cabal.plugin.zsh
│   ├── cake
│   │   └── cake.plugin.zsh
│   ├── cakephp3
│   │   └── cakephp3.plugin.zsh
│   ├── capistrano
│   │   ├── _capistrano
│   │   └── capistrano.plugin.zsh
│   ├── cargo
│   │   ├── _cargo
│   │   └── README.md
│   ├── cask
│   │   ├── cask.plugin.zsh
│   │   └── README.md
│   ├── catimg
│   │   ├── catimg.plugin.zsh
│   │   ├── catimg.sh
│   │   └── colors.png
│   ├── celery
│   │   └── _celery
│   ├── chruby
│   │   └── chruby.plugin.zsh
│   ├── chucknorris
│   │   ├── chucknorris.plugin.zsh
│   │   ├── fortunes
│   │   │   └── chucknorris
│   │   └── LICENSE
│   ├── cloudapp
│   │   ├── cloudapp.plugin.zsh
│   │   └── cloudapp.rb
│   ├── codeclimate
│   │   └── _codeclimate
│   ├── coffee
│   │   ├── _coffee
│   │   ├── coffee.plugin.zsh
│   │   └── README.md
│   ├── colemak
│   │   ├── colemak-less
│   │   └── colemak.plugin.zsh
│   ├── colored-man-pages
│   │   └── colored-man-pages.plugin.zsh
│   ├── colorize
│   │   └── colorize.plugin.zsh
│   ├── command-not-found
│   │   └── command-not-found.plugin.zsh
│   ├── common-aliases
│   │   └── common-aliases.plugin.zsh
│   ├── compleat
│   │   └── compleat.plugin.zsh
│   ├── composer
│   │   └── composer.plugin.zsh
│   ├── copybuffer
│   │   ├── copybuffer.plugin.zsh
│   │   └── README.md
│   ├── copydir
│   │   └── copydir.plugin.zsh
│   ├── copyfile
│   │   └── copyfile.plugin.zsh
│   ├── cp
│   │   ├── cp.plugin.zsh
│   │   └── README.md
│   ├── cpanm
│   │   └── _cpanm
│   ├── debian
│   │   └── debian.plugin.zsh
│   ├── dircycle
│   │   └── dircycle.plugin.zsh
│   ├── dirhistory
│   │   └── dirhistory.plugin.zsh
│   ├── dirpersist
│   │   └── dirpersist.plugin.zsh
│   ├── django
│   │   └── django.plugin.zsh
│   ├── dnf
│   │   ├── dnf.plugin.zsh
│   │   └── README.md
│   ├── docker
│   │   ├── _docker
│   │   └── README.md
│   ├── docker-compose
│   │   ├── _docker-compose
│   │   ├── docker-compose.plugin.zsh
│   │   └── README.md
│   ├── docker-machine
│   │   ├── docker-machine.plugin.zsh
│   │   └── README.md
│   ├── dotenv
│   │   ├── dotenv.plugin.zsh
│   │   └── README.md
│   ├── droplr
│   │   ├── droplr.plugin.zsh
│   │   └── README.md
│   ├── eecms
│   │   └── eecms.plugin.zsh
│   ├── emacs
│   │   ├── emacsclient.sh
│   │   └── emacs.plugin.zsh
│   ├── ember-cli
│   │   ├── ember-cli.plugin.zsh
│   │   └── README.md
│   ├── emoji
│   │   ├── emoji-char-definitions.zsh
│   │   ├── emoji-data.txt
│   │   ├── emoji.plugin.zsh
│   │   ├── README.md
│   │   └── update_emoji.pl
│   ├── emoji-clock
│   │   └── emoji-clock.plugin.zsh
│   ├── emotty
│   │   ├── emotty_emoji_set.zsh
│   │   ├── emotty_floral_set.zsh
│   │   ├── emotty_love_set.zsh
│   │   ├── emotty_nature_set.zsh
│   │   ├── emotty.plugin.zsh
│   │   ├── emotty_stellar_set.zsh
│   │   └── emotty_zodiac_set.zsh
│   ├── encode64
│   │   └── encode64.plugin.zsh
│   ├── extract
│   │   ├── _extract
│   │   ├── extract.plugin.zsh
│   │   └── README.md
│   ├── fabric
│   │   ├── _fab
│   │   └── fabric.plugin.zsh
│   ├── fancy-ctrl-z
│   │   ├── fancy-ctrl-z.plugin.zsh
│   │   └── README.md
│   ├── fasd
│   │   └── fasd.plugin.zsh
│   ├── fastfile
│   │   └── fastfile.plugin.zsh
│   ├── fbterm
│   │   └── fbterm.plugin.zsh
│   ├── fedora
│   │   ├── fedora.plugin.zsh
│   │   └── README.md
│   ├── firewalld
│   │   ├── firewalld.plugin.zsh
│   │   └── readme.md
│   ├── forklift
│   │   ├── forklift.plugin.zsh
│   │   └── README.md
│   ├── fossil
│   │   ├── fossil.plugin.zsh
│   │   └── README.md
│   ├── frontend-search
│   │   ├── frontend-search.plugin.zsh
│   │   ├── _frontend-search.sh
│   │   └── README.md
│   ├── gas
│   │   └── _gas
│   ├── gb
│   │   ├── _gb
│   │   └── README.md
│   ├── geeknote
│   │   ├── _geeknote
│   │   ├── geeknote.plugin.zsh
│   │   └── README.md
│   ├── gem
│   │   ├── _gem
│   │   └── gem.plugin.zsh
│   ├── git
│   │   ├── git.plugin.zsh
│   │   └── README.md
│   ├── git-extras
│   │   ├── git-extras.plugin.zsh
│   │   └── README.md
│   ├── gitfast
│   │   ├── _git
│   │   ├── git-completion.bash
│   │   ├── gitfast.plugin.zsh
│   │   └── git-prompt.sh
│   ├── git-flow
│   │   ├── git-flow.plugin.zsh
│   │   └── README.md
│   ├── git-flow-avh
│   │   └── git-flow-avh.plugin.zsh
│   ├── github
│   │   ├── github.plugin.zsh
│   │   ├── _hub
│   │   └── README.md
│   ├── git-hubflow
│   │   └── git-hubflow.plugin.zsh
│   ├── gitignore
│   │   └── gitignore.plugin.zsh
│   ├── git-prompt
│   │   ├── git-prompt.plugin.zsh
│   │   └── gitstatus.py
│   ├── git-remote-branch
│   │   └── git-remote-branch.plugin.zsh
│   ├── glassfish
│   │   ├── _asadmin
│   │   └── glassfish.plugin.zsh
│   ├── globalias
│   │   ├── globalias.plugin.zsh
│   │   └── README.md
│   ├── gnu-utils
│   │   └── gnu-utils.plugin.zsh
│   ├── go
│   │   └── go.plugin.zsh -> ../golang/golang.plugin.zsh
│   ├── golang
│   │   ├── golang.plugin.zsh
│   │   └── templates
│   │       ├── package.txt
│   │       └── search.txt
│   ├── gpg-agent
│   │   └── gpg-agent.plugin.zsh
│   ├── gradle
│   │   ├── _gradle -> gradle.plugin.zsh
│   │   ├── gradle.plugin.zsh
│   │   └── _gradlew -> gradle.plugin.zsh
│   ├── grails
│   │   └── grails.plugin.zsh
│   ├── grunt
│   │   └── grunt.plugin.zsh
│   ├── gulp
│   │   └── gulp.plugin.zsh
│   ├── helm
│   │   └── helm.plugin.zsh
│   ├── heroku
│   │   └── _heroku
│   ├── history
│   │   ├── history.plugin.zsh
│   │   └── README.md
│   ├── history-substring-search
│   │   ├── history-substring-search.plugin.zsh
│   │   ├── history-substring-search.zsh
│   │   ├── README.md
│   │   └── update-from-upstream.zsh
│   ├── httpie
│   │   ├── httpie.plugin.zsh
│   │   └── README.md
│   ├── iterm2
│   │   └── iterm2.plugin.zsh
│   ├── iwhois
│   │   └── iwhois.plugin.zsh
│   ├── jake-node
│   │   └── jake-node.plugin.zsh
│   ├── jhbuild
│   │   ├── jhbuild.plugin.zsh
│   │   └── README.md
│   ├── jira
│   │   ├── _jira
│   │   ├── jira.plugin.zsh
│   │   └── README.md
│   ├── jruby
│   │   └── jruby.plugin.zsh
│   ├── jsontools
│   │   ├── jsontools.plugin.zsh
│   │   └── README.md
│   ├── jump
│   │   └── jump.plugin.zsh
│   ├── kate
│   │   └── kate.plugin.zsh
│   ├── kitchen
│   │   └── _kitchen
│   ├── knife
│   │   └── _knife
│   ├── knife_ssh
│   │   └── knife_ssh.plugin.zsh
│   ├── kops
│   │   └── kops.plugin.zsh
│   ├── kubectl
│   │   └── kubectl.plugin.zsh
│   ├── kube-ps1
│   │   ├── kube-ps1.zsh
│   │   └── README.md
│   ├── laravel
│   │   ├── _artisan
│   │   └── laravel.plugin.zsh
│   ├── laravel4
│   │   └── laravel4.plugin.zsh
│   ├── laravel5
│   │   └── laravel5.plugin.zsh
│   ├── last-working-dir
│   │   ├── last-working-dir.plugin.zsh
│   │   └── README.md
│   ├── lein
│   │   └── lein.plugin.zsh
│   ├── lighthouse
│   │   └── lighthouse.plugin.zsh
│   ├── lol
│   │   └── lol.plugin.zsh
│   ├── macports
│   │   ├── macports.plugin.zsh
│   │   └── _port
│   ├── man
│   │   └── man.zsh
│   ├── marked2
│   │   ├── marked2.plugin.zsh
│   │   └── README.md
│   ├── mercurial
│   │   ├── mercurial.plugin.zsh
│   │   └── README.md
│   ├── meteor
│   │   ├── _meteor
│   │   ├── meteor.plugin.zsh
│   │   └── README.md
│   ├── mix
│   │   └── _mix
│   ├── mix-fast
│   │   ├── mix-fast.plugin.zsh
│   │   └── README.md
│   ├── mosh
│   │   └── mosh.plugin.zsh
│   ├── mvn
│   │   ├── mvn.plugin.zsh
│   │   └── README.md
│   ├── mysql-macports
│   │   └── mysql-macports.plugin.zsh
│   ├── n98-magerun
│   │   └── n98-magerun.plugin.zsh
│   ├── nanoc
│   │   ├── _nanoc
│   │   └── nanoc.plugin.zsh
│   ├── ng
│   │   ├── ng.plugin.zsh
│   │   └── README.md
│   ├── nmap
│   │   ├── nmap.plugin.zsh
│   │   └── README.md
│   ├── node
│   │   └── node.plugin.zsh
│   ├── nomad
│   │   ├── _nomad
│   │   └── README.md
│   ├── npm
│   │   └── npm.plugin.zsh
│   ├── npx
│   │   ├── npx.plugin.zsh
│   │   └── README.md
│   ├── nyan
│   │   └── nyan.plugin.zsh
│   ├── oc
│   │   └── oc.plugin.zsh
│   ├── osx
│   │   ├── osx.plugin.zsh
│   │   ├── README.md
│   │   └── spotify
│   ├── pass
│   │   └── _pass
│   ├── paver
│   │   └── paver.plugin.zsh
│   ├── pep8
│   │   └── _pep8
│   ├── per-directory-history
│   │   ├── per-directory-history.plugin.zsh -> per-directory-history.zsh
│   │   ├── per-directory-history.zsh
│   │   └── README.md
│   ├── perl
│   │   └── perl.plugin.zsh
│   ├── perms
│   │   ├── perms.plugin.zsh
│   │   └── README.md
│   ├── phing
│   │   └── phing.plugin.zsh
│   ├── pip
│   │   ├── _pip
│   │   └── pip.plugin.zsh
│   ├── pj
│   │   ├── pj.plugin.zsh
│   │   └── README.md
│   ├── pod
│   │   └── _pod
│   ├── postgres
│   │   └── postgres.plugin.zsh
│   ├── pow
│   │   └── pow.plugin.zsh
│   ├── powder
│   │   └── _powder
│   ├── powify
│   │   └── _powify
│   ├── profiles
│   │   └── profiles.plugin.zsh
│   ├── pyenv
│   │   └── pyenv.plugin.zsh
│   ├── pylint
│   │   ├── _pylint
│   │   └── pylint.plugin.zsh
│   ├── python
│   │   ├── _python
│   │   └── python.plugin.zsh
│   ├── rails
│   │   ├── _rails
│   │   └── rails.plugin.zsh
│   ├── rake
│   │   └── rake.plugin.zsh
│   ├── rake-fast
│   │   ├── rake-fast.plugin.zsh
│   │   └── README.md
│   ├── rand-quote
│   │   └── rand-quote.plugin.zsh
│   ├── rbenv
│   │   └── rbenv.plugin.zsh
│   ├── rbfu
│   │   └── rbfu.plugin.zsh
│   ├── react-native
│   │   ├── _react-native
│   │   ├── react-native.plugin.zsh
│   │   └── README.md
│   ├── rebar
│   │   └── _rebar
│   ├── redis-cli
│   │   └── _redis-cli
│   ├── repo
│   │   ├── README.md
│   │   ├── _repo
│   │   └── repo.plugin.zsh
│   ├── rsync
│   │   └── rsync.plugin.zsh
│   ├── ruby
│   │   └── ruby.plugin.zsh
│   ├── rust
│   │   └── _rust
│   ├── rvm
│   │   └── rvm.plugin.zsh
│   ├── safe-paste
│   │   └── safe-paste.plugin.zsh
│   ├── sbt
│   │   ├── _sbt
│   │   └── sbt.plugin.zsh
│   ├── scala
│   │   └── _scala
│   ├── scd
│   │   ├── README.md
│   │   ├── scd
│   │   └── scd.plugin.zsh
│   ├── screen
│   │   └── screen.plugin.zsh
│   ├── scw
│   │   ├── README.md
│   │   └── _scw
│   ├── sfffe
│   │   └── sfffe.plugin.zsh
│   ├── shrink-path
│   │   ├── README.md
│   │   └── shrink-path.plugin.zsh
│   ├── singlechar
│   │   └── singlechar.plugin.zsh
│   ├── spring
│   │   ├── README.md
│   │   └── _spring
│   ├── sprunge
│   │   └── sprunge.plugin.zsh
│   ├── ssh-agent
│   │   ├── README.md
│   │   └── ssh-agent.plugin.zsh
│   ├── stack
│   │   └── stack.plugin.zsh
│   ├── sublime
│   │   ├── README.md
│   │   └── sublime.plugin.zsh
│   ├── sudo
│   │   └── sudo.plugin.zsh
│   ├── supervisor
│   │   ├── _supervisorctl
│   │   ├── _supervisord
│   │   └── supervisor.plugin.zsh
│   ├── suse
│   │   └── suse.plugin.zsh
│   ├── svn
│   │   ├── README.md
│   │   └── svn.plugin.zsh
│   ├── svn-fast-info
│   │   └── svn-fast-info.plugin.zsh
│   ├── swiftpm
│   │   ├── README.md
│   │   └── swiftpm.plugin.zsh
│   ├── symfony
│   │   └── symfony.plugin.zsh
│   ├── symfony2
│   │   └── symfony2.plugin.zsh
│   ├── systemadmin
│   │   └── systemadmin.plugin.zsh
│   ├── systemd
│   │   └── systemd.plugin.zsh
│   ├── taskwarrior
│   │   ├── README.md
│   │   ├── _task
│   │   └── taskwarrior.plugin.zsh
│   ├── terminalapp
│   │   └── terminalapp.plugin.zsh
│   ├── terminitor
│   │   └── _terminitor
│   ├── terraform
│   │   ├── README.md
│   │   ├── _terraform
│   │   └── terraform.plugin.zsh
│   ├── textastic
│   │   ├── README.md
│   │   └── textastic.plugin.zsh
│   ├── textmate
│   │   └── textmate.plugin.zsh
│   ├── thefuck
│   │   ├── README.md
│   │   └── thefuck.plugin.zsh
│   ├── themes
│   │   ├── _theme
│   │   └── themes.plugin.zsh
│   ├── thor
│   │   └── _thor
│   ├── tig
│   │   ├── README.md
│   │   └── tig.plugin.zsh
│   ├── tmux
│   │   ├── tmux.extra.conf
│   │   ├── tmux.only.conf
│   │   └── tmux.plugin.zsh
│   ├── tmux-cssh
│   │   └── _tmux-cssh
│   ├── tmuxinator
│   │   └── _tmuxinator
│   ├── torrent
│   │   └── torrent.plugin.zsh
│   ├── tugboat
│   │   └── _tugboat
│   ├── ubuntu
│   │   ├── readme.md
│   │   └── ubuntu.plugin.zsh
│   ├── urltools
│   │   └── urltools.plugin.zsh
│   ├── vagrant
│   │   └── _vagrant
│   ├── vault
│   │   ├── README.md
│   │   └── _vault
│   ├── vim-interaction
│   │   ├── README.md
│   │   └── vim-interaction.plugin.zsh
│   ├── vi-mode
│   │   ├── README.md
│   │   └── vi-mode.plugin.zsh
│   ├── virtualenv
│   │   └── virtualenv.plugin.zsh
│   ├── virtualenvwrapper
│   │   └── virtualenvwrapper.plugin.zsh
│   ├── vundle
│   │   └── vundle.plugin.zsh
│   ├── wakeonlan
│   │   ├── README
│   │   ├── _wake
│   │   └── wakeonlan.plugin.zsh
│   ├── wd
│   │   ├── LICENSE
│   │   ├── README.md
│   │   ├── wd.plugin.zsh
│   │   ├── _wd.sh
│   │   └── wd.sh
│   ├── web-search
│   │   └── web-search.plugin.zsh
│   ├── wp-cli
│   │   ├── README.md
│   │   └── wp-cli.plugin.zsh
│   ├── xcode
│   │   ├── README.md
│   │   ├── xcode.plugin.zsh
│   │   └── _xcselv
│   ├── yarn
│   │   └── yarn.plugin.zsh
│   ├── yii
│   │   └── yii.plugin.zsh
│   ├── yii2
│   │   ├── README.md
│   │   └── yii2.plugin.zsh
│   ├── yum
│   │   └── yum.plugin.zsh
│   ├── z
│   │   ├── Makefile
│   │   ├── README
│   │   ├── z.1
│   │   ├── z.plugin.zsh
│   │   └── z.sh
│   ├── zeus
│   │   ├── README.md
│   │   ├── _zeus
│   │   └── zeus.plugin.zsh
│   ├── zsh-navigation-tools
│   │   ├── LICENSE
│   │   ├── n-aliases
│   │   ├── n-cd
│   │   ├── n-env
│   │   ├── NEWS
│   │   ├── n-functions
│   │   ├── n-help
│   │   ├── n-history
│   │   ├── _n-kill
│   │   ├── n-kill
│   │   ├── n-list
│   │   ├── n-list-draw
│   │   ├── n-list-input
│   │   ├── n-options
│   │   ├── n-panelize
│   │   ├── README.md
│   │   ├── znt-cd-widget
│   │   ├── znt-history-widget
│   │   ├── znt-kill-widget
│   │   ├── znt-tmux.zsh
│   │   ├── znt-usetty-wrapper
│   │   └── zsh-navigation-tools.plugin.zsh
│   └── zsh_reload
│       └── zsh_reload.plugin.zsh
├── README.md
├── templates
│   └── zshrc.zsh-template
├── themes
│   ├── 3den.zsh-theme
│   ├── adben.zsh-theme
│   ├── af-magic.zsh-theme
│   ├── afowler.zsh-theme
│   ├── agnoster.zsh-theme
│   ├── alanpeabody.zsh-theme
│   ├── amuse.zsh-theme
│   ├── apple.zsh-theme
│   ├── arrow.zsh-theme
│   ├── aussiegeek.zsh-theme
│   ├── avit.zsh-theme
│   ├── awesomepanda.zsh-theme
│   ├── bira.zsh-theme
│   ├── blinks.zsh-theme
│   ├── bureau.zsh-theme
│   ├── candy-kingdom.zsh-theme
│   ├── candy.zsh-theme
│   ├── clean.zsh-theme
│   ├── cloud.zsh-theme
│   ├── crcandy.zsh-theme
│   ├── crunch.zsh-theme
│   ├── cypher.zsh-theme
│   ├── dallas.zsh-theme
│   ├── darkblood.zsh-theme
│   ├── daveverwer.zsh-theme
│   ├── dieter.zsh-theme
│   ├── dogenpunk.zsh-theme
│   ├── dpoggi.zsh-theme
│   ├── dstufft.zsh-theme
│   ├── dst.zsh-theme
│   ├── duellj.zsh-theme
│   ├── eastwood.zsh-theme
│   ├── edvardm.zsh-theme
│   ├── emotty.zsh-theme
│   ├── essembeh.zsh-theme
│   ├── evan.zsh-theme
│   ├── example.zsh-theme
│   ├── fino-time.zsh-theme
│   ├── fino.zsh-theme
│   ├── fishy.zsh-theme
│   ├── flazz.zsh-theme
│   ├── fletcherm.zsh-theme
│   ├── fox.zsh-theme
│   ├── frisk.zsh-theme
│   ├── frontcube.zsh-theme
│   ├── funky.zsh-theme
│   ├── fwalch.zsh-theme
│   ├── gallifrey.zsh-theme
│   ├── gallois.zsh-theme
│   ├── garyblessington.zsh-theme
│   ├── gentoo.zsh-theme
│   ├── geoffgarside.zsh-theme
│   ├── gianu.zsh-theme
│   ├── gnzh.zsh-theme
│   ├── gozilla.zsh-theme
│   ├── half-life.zsh-theme
│   ├── humza.zsh-theme
│   ├── imajes.zsh-theme
│   ├── intheloop.zsh-theme
│   ├── itchy.zsh-theme
│   ├── jaischeema.zsh-theme
│   ├── jbergantine.zsh-theme
│   ├── jispwoso.zsh-theme
│   ├── jnrowe.zsh-theme
│   ├── jonathan.zsh-theme
│   ├── josh.zsh-theme
│   ├── jreese.zsh-theme
│   ├── jtriley.zsh-theme
│   ├── juanghurtado.zsh-theme
│   ├── junkfood.zsh-theme
│   ├── kafeitu.zsh-theme
│   ├── kardan.zsh-theme
│   ├── kennethreitz.zsh-theme
│   ├── kiwi.zsh-theme
│   ├── kolo.zsh-theme
│   ├── kphoen.zsh-theme
│   ├── lambda.zsh-theme
│   ├── linuxonly.zsh-theme
│   ├── lukerandall.zsh-theme
│   ├── macovsky-ruby.zsh-theme
│   ├── macovsky.zsh-theme
│   ├── maran.zsh-theme
│   ├── mgutz.zsh-theme
│   ├── mh.zsh-theme
│   ├── michelebologna.zsh-theme
│   ├── mikeh.zsh-theme
│   ├── miloshadzic.zsh-theme
│   ├── minimal.zsh-theme
│   ├── mira.zsh-theme
│   ├── mortalscumbag.zsh-theme
│   ├── mrtazz.zsh-theme
│   ├── murilasso.zsh-theme
│   ├── muse.zsh-theme
│   ├── nanotech.zsh-theme
│   ├── nebirhos.zsh-theme
│   ├── nicoulaj.zsh-theme
│   ├── norm.zsh-theme
│   ├── obraun.zsh-theme
│   ├── peepcode.zsh-theme
│   ├── philips.zsh-theme
│   ├── pmcgee.zsh-theme
│   ├── powerlevel9k
│   │   ├── CHANGELOG.md
│   │   ├── CODE_OF_CONDUCT.md
│   │   ├── debug
│   │   │   ├── font-issues.zsh
│   │   │   └── iterm.zsh
│   │   ├── docker
│   │   │   ├── antibody
│   │   │   │   ├── Dockerfile
│   │   │   │   ├── install.zsh
│   │   │   │   └── zshrc
│   │   │   ├── antigen
│   │   │   │   ├── Dockerfile
│   │   │   │   ├── install.zsh
│   │   │   │   └── zshrc
│   │   │   ├── base-4.3.11
│   │   │   │   └── Dockerfile
│   │   │   ├── base-5.0.3
│   │   │   │   └── Dockerfile
│   │   │   ├── base-5.1.1
│   │   │   │   └── Dockerfile
│   │   │   ├── base-5.2
│   │   │   │   └── Dockerfile
│   │   │   ├── base-5.3.1
│   │   │   │   └── Dockerfile
│   │   │   ├── base-5.4.2
│   │   │   │   └── Dockerfile
│   │   │   ├── base-5.5.1
│   │   │   │   └── Dockerfile
│   │   │   ├── dotfile
│   │   │   │   ├── Dockerfile
│   │   │   │   └── zshrc
│   │   │   ├── fred-sudoers
│   │   │   ├── omz
│   │   │   │   ├── Dockerfile
│   │   │   │   ├── install.zsh
│   │   │   │   └── zshrc
│   │   │   ├── prezto
│   │   │   │   ├── Dockerfile
│   │   │   │   └── install.zsh
│   │   │   ├── zgen
│   │   │   │   ├── Dockerfile
│   │   │   │   ├── install.zsh
│   │   │   │   └── zshrc
│   │   │   ├── zim
│   │   │   │   ├── Dockerfile
│   │   │   │   └── install.zsh
│   │   │   ├── zplug
│   │   │   │   ├── Dockerfile
│   │   │   │   ├── install.zsh
│   │   │   │   └── zshrc
│   │   │   ├── zplugin
│   │   │   │   ├── Dockerfile
│   │   │   │   ├── install.zsh
│   │   │   │   └── zshrc.plugins
│   │   │   ├── zpm
│   │   │   │   ├── Dockerfile
│   │   │   │   ├── install.zsh
│   │   │   │   └── zshrc
│   │   │   ├── zshing
│   │   │   │   ├── Dockerfile
│   │   │   │   └── install.zsh
│   │   │   └── zulu
│   │   │       ├── Dockerfile
│   │   │       └── install.zsh
│   │   ├── functions
│   │   │   ├── colors.zsh
│   │   │   ├── icons.zsh
│   │   │   ├── utilities.zsh
│   │   │   └── vcs.zsh
│   │   ├── LICENSE
│   │   ├── powerlevel9k.zsh-theme
│   │   ├── prompt_powerlevel9k_setup -> powerlevel9k.zsh-theme
│   │   ├── README.md
│   │   ├── shunit2
│   │   ├── test
│   │   │   ├── core
│   │   │   │   ├── color_overriding.spec
│   │   │   │   ├── joining_segments.spec
│   │   │   │   ├── prompt.spec
│   │   │   │   └── visual_identifier.spec
│   │   │   ├── functions
│   │   │   │   ├── colors.spec
│   │   │   │   ├── icons.spec
│   │   │   │   └── utilities.spec
│   │   │   ├── powerlevel9k.spec
│   │   │   ├── segments
│   │   │   │   ├── anaconda.spec
│   │   │   │   ├── aws_eb_env.spec
│   │   │   │   ├── background_jobs.spec
│   │   │   │   ├── battery.spec
│   │   │   │   ├── command_execution_time.spec
│   │   │   │   ├── context.spec
│   │   │   │   ├── custom.spec
│   │   │   │   ├── detect_virt.spec
│   │   │   │   ├── dir.spec
│   │   │   │   ├── disk_usage.spec
│   │   │   │   ├── go_version.spec
│   │   │   │   ├── ip.spec
│   │   │   │   ├── kubecontext.spec
│   │   │   │   ├── laravel_version.spec
│   │   │   │   ├── load.spec
│   │   │   │   ├── newline.spec
│   │   │   │   ├── nodeenv.spec
│   │   │   │   ├── node_version.spec
│   │   │   │   ├── nvm.spec
│   │   │   │   ├── php_version.spec
│   │   │   │   ├── public_ip.spec
│   │   │   │   ├── ram.spec
│   │   │   │   ├── rust_version.spec
│   │   │   │   ├── ssh.spec
│   │   │   │   ├── status.spec
│   │   │   │   ├── swap.spec
│   │   │   │   ├── swift_version.spec
│   │   │   │   ├── symfony_version.spec
│   │   │   │   ├── todo.spec
│   │   │   │   ├── vcs-git.spec
│   │   │   │   ├── vcs-hg.spec
│   │   │   │   ├── vi_mode.spec
│   │   │   │   └── vpn_ip.spec
│   │   │   └── suite.spec
│   │   ├── test-bsd-vm
│   │   │   ├── bootstrap.sh
│   │   │   ├── bootstrap-zero.sh
│   │   │   └── Vagrantfile
│   │   ├── test-in-docker
│   │   ├── TESTS.md
│   │   ├── test-vm
│   │   │   ├── antigen.sh
│   │   │   ├── bootstrap.sh
│   │   │   ├── omz.sh
│   │   │   ├── prezto.sh
│   │   │   ├── README.md
│   │   │   └── Vagrantfile
│   │   └── test-vm-providers
│   │       ├── plain.sh
│   │       └── setup-environment.sh
│   ├── pure.zsh-theme
│   ├── pygmalion.zsh-theme
│   ├── re5et.zsh-theme
│   ├── refined.zsh-theme
│   ├── rgm.zsh-theme
│   ├── risto.zsh-theme
│   ├── rixius.zsh-theme
│   ├── rkj-repos.zsh-theme
│   ├── rkj.zsh-theme
│   ├── robbyrussell.zsh-theme
│   ├── sammy.zsh-theme
│   ├── simonoff.zsh-theme
│   ├── simple.zsh-theme
│   ├── skaro.zsh-theme
│   ├── smt.zsh-theme
│   ├── Soliah.zsh-theme
│   ├── sonicradish.zsh-theme
│   ├── sorin.zsh-theme
│   ├── sporty_256.zsh-theme
│   ├── steeef.zsh-theme
│   ├── strug.zsh-theme
│   ├── sunaku.zsh-theme
│   ├── sunrise.zsh-theme
│   ├── superjarin.zsh-theme
│   ├── suvash.zsh-theme
│   ├── takashiyoshida.zsh-theme
│   ├── terminalparty.zsh-theme
│   ├── theunraveler.zsh-theme
│   ├── tjkirch_mod.zsh-theme
│   ├── tjkirch.zsh-theme
│   ├── tonotdo.zsh-theme
│   ├── trapd00r.zsh-theme
│   ├── wedisagree.zsh-theme
│   ├── wezm.zsh-theme
│   ├── wezm+.zsh-theme
│   ├── wuffers.zsh-theme
│   ├── xiong-chiamiov-plus.zsh-theme
│   ├── xiong-chiamiov.zsh-theme
│   ├── ys.zsh-theme
│   └── zhann.zsh-theme
└── tools
    ├── check_for_upgrade.sh
    ├── install.sh
    ├── require_tool.sh
    ├── theme_chooser.sh
    ├── uninstall.sh
    └── upgrade.sh

283 directories, 693 files



alias -s jpg="sxiv" # suffix alias
alias -g jpg="sxiv" # global alias