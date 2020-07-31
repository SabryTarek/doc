Usage:
  rclone [flags]
  rclone [command]

Available Commands:
  


  backend         Run a backend specific command.







  settier         Changes storage class/tier of objects in remote.


  

  



--------------------------------------------------------------------------------------------------------------------------------
  ncdu            Explore a remote with a text based user interface. # TUI like ncdu linux utulity [nc]ursus [du] like du command but TUI

 │rclone ncdu                     │
                                                              │ ↑,↓ or k,j to Move             │
                                                              │ →,l to enter                   │
                                                              │ ←,h to return                  │
                                                              │ c toggle counts                │
                                                              │ g toggle graph                 │
                                                              │ n,s,C sort by name,size,count  │
                                                              │ d delete file/directory        │
                                                              │ y copy current path to clipbard│
                                                              │ Y display current path         │
                                                              │ ^L refresh screen              │
                                                              │ ? to toggle help on and off    │
                                                              │ q/ESC/c-C to quit
--------------------------------------------------------------------------------------------------------------------------------
  genautocomplete Output completion script for a given shell.

Usage:
  rclone genautocomplete [command]

Available Commands:
  bash        Output bash completion script for rclone.
  fish        Output fish completion script for rclone.
  zsh         Output zsh completion script for rclone.

--------------------------------------------------------------------------------------------------------------------------------
  gendocs         Output markdown docs for rclone to the directory supplied.
--------------------------------------------------------------------------------------------------------------------------------
  cryptcheck      Cryptcheck checks the integrity of a crypted remote.
  cryptdecode     Cryptdecode returns unencrypted file names.
--------------------------------------------------------------------------------------------------------------------------------
  serve           Serve a remote over a protocol.

Each subcommand has its own options which you can see in their help.

Usage:
  rclone serve <protocol> [opts] <remote> [flags]
  rclone serve [command]

Available Commands:
  dlna        Serve remote:path over DLNA
  ftp         Serve remote:path over FTP.
  http        Serve the remote over HTTP.
  restic      Serve the remote for restic's REST API.
  sftp        Serve the remote over SFTP.
  webdav      Serve remote:path over webdav.
--------------------------------------------------------------------------------------------------------------------------------
  copyurl         Copy url content to dest.

Flags:
  -a, --auto-filename   Get the file name from the URL and use it for destination file path
  -h, --help            help for copyurl
      --no-clobber      Prevent overwriting file with same name
      --stdout          Write the output to stdout rather than a file
--------------------------------------------------------------------------------------------------------------------------------
  cat             Concatenates any files and sends them to stdout.

  rcat            Copies standard input to file on remote.
--------------------------------------------------------------------------------------------------------------------------------
  rc              Run a command against a running rclone.
  rcd             Run rclone listening to remote control commands only.
--------------------------------------------------------------------------------------------------------------------------------
  obscure         Obscure password for use in the rclone.conf
  rclone obsecure <password>
  EX: rclone obsecure 42205657
--------------------------------------------------------------------------------------------------------------------------------
  dedupe          Interactively find duplicate files and delete/rename them.
--------------------------------------------------------------------------------------------------------------------------------
about           Get quota information from the remote.
size            Prints the total size and number of objects in remote:path.
--------------------------------------------------------------------------------------------------------------------------------
Use "rclone [command] --help" for more information about a command.
Use "rclone help flags" for to see the global flags.
Use "rclone help backends" for a list of supported services.


version         Show the version number.
#  help            Show help for rclone commands, flags and backends.
rclone help
rclone [command] --help===-h
rclone help flags


rclone help backends
rclone help backend <name>
--------------------------------------------------------------------------------------------------------------------------------
  cleanup         Clean up the remote if possible

  purge           Remove the path and all of its contents.

  delete          Remove the contents of path.
  deletefile      Remove a single file from remote.

  rmdir           Remove the path if empty.
  rmdirs          Remove empty directories under the path.
--------------------------------------------------------------------------------------------------------------------------------
  listremotes     List all the remotes in the config file.

  authorize       Remote authorization.

  config          Enter an interactive configuration session.


Available Commands:
  create      Create a new remote with name, type and options.
  delete      Delete an existing remote `name`.
  disconnect  Disconnects user from remote
*  dump        Dump the config file as JSON.
  edit        Enter an interactive configuration session.
*  file        Show path of configuration file in use.
  password    Update password in an existing remote.
  providers   List in JSON format all the providers and options.
  reconnect   Re-authenticates user with remote.
*  show        Print (decrypted) config file, or the config for a single remote.
  update      Update options in an existing remote.
  userinfo    Prints info about logged in user of remote.
--------------------------------------------------------------------------------------------------------------------------------
  copy            Copy files from source to dest, skipping already copied
  copyto          Copy files from source to dest, skipping already copied

  move            Move files from source to dest.
  moveto          Move file or directory from source to dest.

  mount           Mount the remote as file system on a mountpoint.
  sync            Make source and dest identical, modifying destination only.
--------------------------------------------------------------------------------------------------------------------------------
2 / Alias for an existing remote
  \ "alias"
7 / Cache a remote
  \ "cache"
10 / Encrypt/Decrypt a remote
   \ "crypt"
16 / In memory object storage system.
   \ "memory"
19 / Local Disk
   \ "local"
29 / SSH/SFTP Connection
   \ "sftp"
32 / Transparently chunk/split large files
   \ "chunker"
33 / Union merges the contents of several upstream fs
   \ "union"
34 / Webdav
   \ "webdav"
35 / Yandex Disk
   \ "yandex"
36 / http Connection
   \ "http"


--------------------------------------------------------------------------------------------------------------------------------
standard protocols

S3
WebDAV
--------------------------------------------------------------------------------------------------------------------------------
https://github.com/rclone/rclone/wiki/Third-Party-Integrations-with-rclone
--------------------------------------------------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------------------------------------------------
## fourm

Are uploaded files spread throughout all drives in the union or every drive is filled sequentially?

If I have 20 free google drive account can I use them as one 300GB encrypted drive without problems of uploading/limits etc?

If a file doesn't fill a drive (or remaining space in a drive), is it divided into several drives?


can I then copy a file over using rclone copy? where does the file go?
similarly, if each remote holds 1 GB, can I say my union remote holds 4 GB?
https://beta.rclone.org/
rclone about does not work with Box quotas, and that rclone check does not work with MEGA hashes.
then what happens to the union remote? I'm confused.

unionFS or mergerFS

UnionFS policies


I don't care where files go, as long as they're backed up.
hopefully, rclone will avoid hitting hard disk quotas on each service.
--------------------------------------------------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------------------------------------------------
.config/rclone/rclone.conf


there is 2 type of auth [pass - token]

--------------------------
[<remote_name>]
type = <remote_type>
user = <mail>
pass = <obscure_pass>

    EX:
    [mega]
    type = mega
    user = ss.tarek97@gmail.com
    pass = D7_IkpnK_YqUTiyIUfrmdK07evLZEfYSrJwLZQ
--------------------------
[yandex-disk]
type = yandex
token = {"access_token":"

    EX:
    [yandex-disk]
    type = yandex
    token = {"access_token":"
--------------------------

--------------------------------------------------------------------------------------------------------------------------------
  hashsum         Produces a hashsum file for all the objects in the path.
  md5sum          Produces an md5sum file for all the objects in the path.
  sha1sum         Produces an sha1sum file for all the objects in the path.

  check           Checks the files in the source and destination match.
--------------------------------------------------------------------------------------------------------------------------------

  touch           Create new file or change file modification time.
  mkdir           Make the path if it doesn't already exist.
--------------------------------------------------------------------------------------------------------------------------------

  link            Generate public link to file/folder.

--------------------------------------------------------------------------------------------------------------------------------

  ls              List the objects in the path with size and path.
  lsd             List all directories/containers/buckets in the path.
      -R, --recursive   Recurse into the listing.
  lsf             List directories and objects in remote:path formatted for parsing
  lsjson          List directories and objects in the path in JSON format.
  lsl             List the objects in path with modification time, size and path.
  tree            List the contents of the remote in a tree like fashion.
     -C, --color           Turn colorization on always.
     --human           Print the size in a more human readable way.
--------------------------------------------------------------------------------------------------------------------------------


λ rclone genautocomplete

Generates a shell completion script for rclone.
Run with --help to list the supported shells.

Usage:
  rclone genautocomplete [command]

Available Commands:
  bash        Output bash completion script for rclone.
  fish        Output fish completion script for rclone.
  zsh         Output zsh completion script for rclone.

Flags:
  -h, --help   help for genautocomplete

Use "rclone [command] --help" for more information about a command.
Use "rclone help flags" for to see the global flags.
Use "rclone help backends" for a list of supported services.