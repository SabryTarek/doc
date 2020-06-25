[IPFS](https://ipfs.io/)
========================

(InterPlanetary File System)

go-ipfs:
- ipfs node
- CLI
- Library
- 
js-ipfs




Location-based Addressing -> Web
Content-based Addressing -> IPFS



#  every file has a unique hash which can be compared to a fingerprint



 our first implementation is
written in go it includes a fully
functioning ipfs node a unix-style
command-line interface an important
library a JSON API for controlling the
node programmatically a gateway for
exposing ipfs to regular web browsers
and the web UI for managing your node


-----------------------------------------------------------------------------------------------------------------------------
IPFS Version Manager (ipfs-update)
==================================
> ipfs-update:
    - versions
    - install latest
-----------------------------------------------------------------------------------------------------------------------------
https://ipfs.io/
    https://discuss.ipfs.io/
    https://awesome.ipfs.io/
    https://js.ipfs.io/
        https://github.com/ipfs/js-ipfs
https://explore.ipld.io/
https://proto.school/

wget https://dist.ipfs.io/go-ipfs/v0.5.1/go-ipfs_v0.5.1_linux-amd64.tar.gz && \
tar -xvzf go-ipfs_v0.5.1_linux-amd64.tar.gz && \
cd go-ipfs && \
bash install.sh && \
ipfs --version
  - ipfs init # ipfs stores all its settings and internal data in a directory called the [repository]


to use IPFS you need to Intialize IPFS Node in IPFS Repo
IPFS Repo in your home directory


your ID is basically just the
multi hash of your public key


- IPFS: distributed file system that aims to connect our peers to the same system of files kind of like one giant BitTorrent swarm using the peer-to-peer system architecture




if you've added a file to your notes you have pinned a file to local storage meaning that it's now permanently on your system unless you delete it
-----------------------------------------------------------------------------------------------------------------------------
> Commands:
ipfs
    - init
    - id
    - ls <>
    - cat <>
    - add
        - add -r
-----------------------------------------------------------------------------------------------------------------------------

ipfs init
ipfs id
echo "Hello, IPFS! ^_^" > hello.txt
ipfs add hello.txt
ipfs cat <CID>
ipfs ls <CID>
ipfs add -w hello.txt # -w => warpped
ipfs ls -v <CID> # -v => verbose
ipfs cat <Directory-CID>/hello.txt

cache locally + pin 

go online

- ipfs daemon &




-----------------------------------------------------------------------------------------------------------------------------
List of content identifiers
===========================
CID of the IPFS whitepaper:
QmV9tSDx9UiPeWExXEeH6aoDvmihvx6jD5eLb4jbTaKGps
CID of my encrypted CV:
QmRDeyHooWPD5pZQ77m2Z83rSREHakz1tRhruZ9nrDBik3

CID of my GPG public key:
QmNiSehVPpZ6bcmD3sZBiJNcHZbtoKFCgmakubPQHR8u12

CID of the large video file:
QmfWQHVazH6so9p27z27rr8TJSdBFGpH7hunDcaZ1EAQ2c

My IPNS link:
ipfs.io/ipns/QmPiM9SpSxj13CQRmf9Ztefg8aTJ9d6Hg9onTS65Ti64E4
-----------------------------------------------------------------------------------------------------------------------------

http://127.0.0.1:8080/ipfs/<CID> #
https://ipfs.io/ipfs/<CID> #
http://127.0.0.1:8080/ipns/<CID> # Name System




- WebUI -> http://127.0.0.1:5001/webui

- [pinata](https://pinata.cloud/) # first GB is free

pinning service
if you want your files to be easier to access to outsiders or something I don't know you could use a pinning service
pinning service basically like someone with a bunch of servers or computers and they take your hash I mean you have to pay them for it but they take your hash and they pin them across all of their computers

IPFS can work on top of a lot of networks


-----------------------------------------------------------------------------------------------------------------------------
how to add sensitive content to IP visit that's meant for only certain people to see so since there's not really any built-in security meaning that if someone has the hash of your file sort of continent fire they could just retrieve it no problem it's not that ideal for sensitive data maybe healthcare records or bank stuff I don't know so since asymmetric encryption plays a big part in IP this and since it's generally just a very
-----------------------------------------------------------------------------------------------------------------------------

 Cleopatra is just a graphical user interface for GPG

 gpg --list-keys
 gpg --sign <file>
 ipfs add <file>
 ipfs add <key>


 ipfs get -o <file> <CID>
 ipfs get -o <key> <CID>
 gpg --import <public-key>
 gpg --output --decrypt <public-key>



ipfs key list
ipfs key gen --type=rsa --size=2048 <key-name>
ipfs name publish --key=<> <CID-of-static-content>

`it's time to upgrade the entire Internet`
`onwards towards the permanent web`







export IPFS_PATH=/path/to/ipfsrepo








/home/go-ipfs/ $ ipfs
USAGE
  ipfs  - Global p2p merkle-dag filesystem.

  ipfs [--config=<config> | -c] [--debug | -D] [--help] [-h] [--api=<api>] [--offline] [--cid-base=<base>] [--upgrade-cidv0-in-output] [--encoding=<encoding> | --enc] [--timeout=<timeout>] <command> ...

SUBCOMMANDS
  BASIC COMMANDS
    init          Initialize ipfs local configuration
    add <path>    Add a file to IPFS
    cat <ref>     Show IPFS object data
    get <ref>     Download IPFS objects
    ls <ref>      List links from an object
    refs <ref>    List hashes of links from an object
  
  DATA STRUCTURE COMMANDS
    block         Interact with raw blocks in the datastore
    object        Interact with raw dag nodes
    files         Interact with objects as if they were a unix filesystem
    dag           Interact with IPLD documents (experimental)
  
  ADVANCED COMMANDS
    daemon        Start a long-running daemon process
    mount         Mount an IPFS read-only mountpoint
    resolve       Resolve any type of name
    name          Publish and resolve IPNS names
    key           Create and list IPNS name keypairs
    dns           Resolve DNS links
    pin           Pin objects to local storage
    repo          Manipulate the IPFS repository
    stats         Various operational stats
    p2p           Libp2p stream mounting
    filestore     Manage the filestore (experimental)
  
  NETWORK COMMANDS
    id            Show info about IPFS peers
    bootstrap     Add or remove bootstrap peers
    swarm         Manage connections to the p2p network
    dht           Query the DHT for values or peers
    ping          Measure the latency of a connection
    diag          Print diagnostics
  
  TOOL COMMANDS
    config        Manage configuration
    version       Show ipfs version information
    update        Download and apply go-ipfs updates
    commands      List all available commands
    cid           Convert and discover properties of CIDs
    log           Manage and show logs of running daemon
  
  Use 'ipfs <command> --help' to learn more about each command.
  
  ipfs uses a repository in the local file system. By default, the repo is
  located at ~/.ipfs. To change the repo location, set the $IPFS_PATH
  environment variable:
  
    export IPFS_PATH=/path/to/ipfsrepo
  
  EXIT STATUS
  
  The CLI will exit with one of the following values:
  
  0     Successful execution.
  1     Failed executions.