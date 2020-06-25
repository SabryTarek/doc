Docker
=======
docker is containers manager
<!-- container can contain one Process only -->
docker download (bins & libs) only for any derstbution and share kernel with a host  
service-oriented architecture : split any application work on docker to mote than container and communicate with  each other



Service-oriented architecture: distribute the app on multi containers

# Docker-in-Docker (DinD) is used to give the effect of multiple VMs/PCs.


- Containers - Running instances of Docker images

- Docker Engine = Docker Core = Docker
-  Docker Client -> Docker CLI

docker :-
- engine
- image
- container
- volumes
- network
- registry
    - store
        - store
        - commuinty (dockerhub)
- plugins




- When you executed the command docker container run hello-world, it also did a docker image pull behind   the scenes to download the hello-world image.


docker run -> create a container
/var/lib/docker/, including images, containers, volumes, and networks, are preserved. The Docker CE package is now called docker-ce.




docker run -it -h server --name=node -u sabry -v /home/src:/home/src -p 3000:3000 node
--------------------------------------------------------------------------------------------

 Docker Container
 =================

- docker [container] run   []-> optional 
    * --interactive -> -i
    * --tty #terminal# -> -t
    * --hostname= -> -h  -> default hostmane == container_id
    * --name=<value> || --name <value> 
    *  --rm                             Automatically remove the container when it exits
    * --volume -> -v -> work like sshfs tpically -v /mnt/log:/var/log/nignx
    * --publish #port# -> -p -> work like port_forwarding tpically -p 5000:80 #host_port:container_port#
     By default, the port on the host is mapped to 0.0.0.0, which means all IP addresses. You can specify a particular IP address when you define the port mapping, for example, -p 127.0.0.1:8080:80
    * -p -> 80 == EXPOSE 80   connect a random port (to know it use: docker ps -a) on host to port                                     80 on container    
    * --detach -> -d -> still play however exit it => to connect with container should use <docker exec>
  ############# * --user -u (root | 0 | sabry)
    * --env  -e   -> environment variable
    * --restart=always 
    * --mount type=bind,source="$(pwd)",target=/usr/share/nginx/html #Bind mounts mean that any changes                                                                    made to the local file system are                                                                    immediately reflected in the                                                                         running container#
    * <excute_command_inside_the_container> ls -la

-  docker container (ls|ps)    ==   docker ps       -> run containers only
-  docker container (ls|ps) -a ==   docker ps -a    -> all containers
-  docker container start <container_ID> -ia [interactive] [attach]
-  docker container restart <container_ID>  
-  docker container pause <container_ID>
-  docker container stop <container_ID>
-  docker container exec <container_id> <command>
-  docker container diff <container_id>
-  docker container commit <container_id> -> add above base image
-  docker container commit <container_id> --author [-a] sabry <new_image_name>  
-  docker container logs -> show logs
-  docker container top -> show prosess
-  docker container stop $(docker container ls --all [-a] --quiet [-q])  --all = up + existed   --quiet = print id only
-  docker container rm --force [-f] $(docker container ls -aq)
-  Ctrl-P + Ctrl-q exit a container and still running



docker search coreos -> search in docker hub



-v /path:/path/in/container => mount /path at host machine with path in container
-v path:/path/in/container => create a volume path 



--------------------------------------------------------------------------------------------

 Docker Volume
 ==============


- docker volume 
    - create --name DataVolume1   -> free volume (not connected with any container)
    -  inspect
    -  ls
    -  prune
    -  rm

- --volumes-from Container4
- --volumes-from Container4:ro  -> ro -> read only



  create      Create a volume
  inspect     Display detailed information on one or more volumes
  ls          List volumes
  prune       Remove all unused volumes
  rm          Remove one or more volumes




* if we create a volume first then we attach it with a container --rm not remove this volume
* HOST_PATH and CONTAINER_PATH can be a folder or file. HOST_PATH must exist before running this command


--------------------------------------------------------------------------------------------

 Docker Image
 =============

 - docker image pull <image_name> ->docker pull alpine
 - docker image ls  === docker images
 - docker image inspect <image_name> -> docker inspect alpine
 - docker image rm <image_id>   || docker rmi <image_id>
 - docker image tag [-t] <image_id> ourfiglet
 - docker image build -t hello:v0.1 . || docker build -t hello:v0.1 . 
   #DockerID/application_name:version# || #username/repository:tag#
 - docker tag <image_name> <username/repository:tag>
                                        <repository>/<image>:<tag>
                                        default :
                                        library/<image>:latest
 - docker image history <image_id>
 - docker image inspect --format "{{ json .RootFS.Layers }}" <image_id>
 - docker image ls --filter [-f] reference="$DOCKERID/*"
 - docker image build --file [-f] Dockerfile-v2 -t hello:v0.2 .    as we do not use the default name for our                                                               Dockerfile, we use the -f option to point                                                               towards the one we need to use



- docker push username/repository:tag
- docker run username/repository:tag  



Notice that several lines of the output say Layer already exists. This is because Docker will leverage read-only layers that are the same as any previously uploaded image layers.






--------------------------------------------------------------------------------------------

 Docker Network
 ===============

 - create
 - connect
 - disconnect
 - inspect
 - ls
 - prune
 - rm

Usage:	docker network COMMAND

Manage networks

Options:
      --help   Print usage

Commands:
  connect     Connect a container to a network
  create      Create a network
  disconnect  Disconnect a container from a network
  inspect     Display detailed information on one or more networks
  ls          List networks
  prune       Remove all unused networks
  rm          Remove one or more networks

Run 'docker network COMMAND --help' for more information on a command.




The bridge network is the default network for new containers. This means that unless you specify a different network, all new containers will be connected to the bridge network.









--------------------------------------------------------------------------------------------

 Dockerfile            -> in development
 ===========

* commands :-
    - FROM
    - RUN
    - COPY
    - WORKDIR
    - ENTRYPOINT ["ping"]   -> main command 
    - CMD ["127.0.0.1"]     -> can use as a command and can use as a argument "parameter"

        EX : docker container run ping:v0.1 8.8.8.8  -> 8.8.8.8 is a parameter 

ex :-

    FROM alpine
    RUN apk update && apk add nodejs
    COPY . /app
    WORKDIR /app                              the directory the container should use when it starts up
    CMD ["node","index.js"]                   the commands which is run when the container starts

   >> docker image build -t hello:v0.1 .


* Lightweight Dstributions :-
- alpine -> apk -> package manager
- busybox
- coreos














.dockerignore

    # comment
    */temp*
    */*/temp*
    temp?
    *.md
    !README.md





--------------------------------------------------------------------------------------------




- when you <exit> from  a container you will shutdown it
- when you create a container from image the container have automaticly <id> && <name>







* Terminology
----------------

- Layers - A Docker image is built up from a series of layers. Each layer represents an instruction in      the image’s Dockerfile. Each layer except the last one is read-only.
- Dockerfile - A text file that contains all the commands, in order, needed to build a given image. The     Dockerfile reference page lists the various commands and format details for Dockerfiles.
- Volumes - A special Docker container layer that allows data to persist and be shared separately from      the container itself. Think of volumes as a way to abstract and manage your persistent data             separately from the application itself.



- Registry is a collection of repositories, and a repository is a collection of images—sort of like a GitHub repository, except the code is already built. An account on a registry can create many repositories. The docker CLI uses Docker’s public registry by default(hub.docker.com)



- docker :-
    - login
    - logout
    - rm -> for containers
    - rmi -> for images



- Docker Cloud
- Docker Store
- Docker Hub


* There are different ways to use containers. These include:

- To run a single task: This could be a shell script or a custom app.
- Interactively: This connects you to the container similar to the way you SSH into a remote server.
- In the background: For long-running services like websites and databases.




--------------------------------------------------
00:00
okay I was blind before but now I see
00:03
docker really does make it easy to
00:05
deploy and run our containers the
00:07
logical next step is to get doc round
00:09
all of my machines and I'm good to go so
00:11
Kelsey what is there left you to teach
00:13
me at this point oh there you go again
00:16
Carter this happens every time I tell
00:18
someone about containers and I think
00:20
that's the end of the story to be honest
00:22
packaging containers is like five
00:24
percent of the problem the real issues
00:26
have to deal with application
00:27
configuration service discovery managing
00:30
updates and monitoring well we can build
00:32
all of those things on top of docker
00:34
we're better off leverage in a platform
00:36
to manage all that complexity for us and
00:38
this is where Cooper Nettie's comes in
00:40
yep Cooper neighs provides a new set of
00:43
abstractions that go well beyond the
00:44
basis of container deployments and maybe
00:46
to focus on the big picture previously
00:49
our focus has been deploying application
00:51
to individual machines which locks you
00:53
into limited workflows cabernets allows
00:56
us abstract the way the individual
00:57
machines and treat the entire cluster
00:59
like a single logical machine the
01:02
application becomes a first class
01:03
citizen which enables us to manage them
01:06
using high-level abstractions in Coober
01:08
Nettie's we can describe a set of
01:09
applications and how they should
01:11
interact with each other and then let
01:13
crew bearnaise figure out how to make
01:14
that happen ok you're right maybe
01:19
there's still a lot I've got to learn
01:20
let's deep dive into Cooper Nettie's




تتكون من مجموعة من النظم التي تقدم العديد من المزايا لحاويات Docker مثل :
-موازنة الحِمل Load Balancing
-الاسترداد Auto-healing
-التوسع Scaling







هو كان السبب الرئيسي في توفير غوغل (كشركة صغيرة تنافس العملاق ياهوو) للكثير من الاموال. فهو يمكن الشركة من تشغيل العديد من الحاويات بالآلاف على نفس الجهاز.

الفكرة أن تويتر كتبت ميزوس وفتحت مصدره لكبديل مفتوح المصدر للبروغ. فردت غوغل بإطلاق كوبرنتيس

--------------------------------------------------------------------------------------------

 docker-compose                -> in production
 ===============

- docker-compose build
- docker-compose up -d





--------------------------------------------------------------------------------------------

 Docker Services
 ===============

About services
In a distributed application, different pieces of the app are called “services.” For example, if you imagine a video sharing site, it probably includes a service for storing application data in a database, a service for video transcoding in the background after a user uploads something, a service for the front-end, and so on.

Services are really just “containers in production.” A service only runs one image, but it codifies the way that image runs—what ports it should use, how many replicas of the container should run so the service has the capacity it needs, and so on. Scaling a service changes the number of container instances running that piece of software, assigning more computing resources to the service in the process.

Luckily it’s very easy to define, run, and scale services with the Docker platform -- just write a docker-compose.yml file.



version: "3"
services:
  web:
    # replace username/repo:tag with your name and image details
    image: username/repo:tag
    deploy:
      replicas: 5
      resources:
        limits:
          cpus: "0.1"
          memory: 50M
      restart_policy:
        condition: on-failure
    ports:
      - "4000:80"
    networks:
      - webnet
  data:
    image: mysql
    
networks:
  webnet:

  Pull the image we uploaded in step 2 from the registry.

Run 5 instances of that image as a service called web, limiting each one to use, at most, 10% of the CPU (across all cores), and 50MB of RAM.

Immediately restart containers if one fails.

Map port 4000 on the host to web’s port 80.

Instruct web’s containers to share port 80 via a load-balanced network called webnet. (Internally, the containers themselves publish to web’s port 80 at an ephemeral port.)

Define the webnet network with the default settings (which is a load-balanced overlay network).


- docker swarm init
- docker stack deploy -c docker-compose.yml getstartedlab
- Our single service stack is running 5 container instances of our deployed image on one host
- docker service ls
- docker service ps <service_name>
- A single container running in a service is called a task. Tasks are given unique IDs
- lsit the tasks for youyr service: docker service ps getstartedlab_web
- You can run curl -4 http://localhost:4000 several times in a row, or go to that URL in your browser and hit refresh a few times
-  the container ID changes, demonstrating the load-balancing; with each request, one of the 5 tasks is chosen, in a round-robin scheduling fashion algorithm, to respond.
-  Slow response times?

Depending on your environment’s networking configuration, it may take up to 30 seconds for the containers to respond to HTTP requests. This is not indicative of Docker or swarm performance, but rather an unmet Redis dependency that we address later in the tutorial. For now, the visitor counter isn’t working for the same reason; we haven’t yet added a service to persist data.


- Scale the app
You can scale the app by changing the replicas value in docker-compose.yml, saving the change, and re-running the docker stack deploy command: docker stack deploy -c docker-compose.yml getstartedlab
Docker performs an in-place update, no need to tear the stack down first or kill any containers.

- Take the app down with: docker stack rm <satck_name>
- Take down the swarm: docker swarm leave --force
- Note: Compose files like this are used to define applications with Docker, and can be uploaded to cloud providers using Docker Cloud, or on any hardware or cloud provider you choose with Docker Enterprise Edition.


--------------------------------------------------------------------------------------------
 Docker Swarm
 =============
-  swarm: is a group of machines that are running Docker and joined into a cluster. After that has happened, you continue to run the Docker commands you’re used to, but now they are executed on a cluster
- swarm mode: Enabling swarm mode instantly makes the current machine a swarm manager
- swarm managers: are the only machines in a swarm that can execute your commands, or authorize other machines to join the swarm as workers
- swarm workers: are just there to provide capacity and do not have the authority to tell any other machine what it can and cannot do
- swarm nodes: -> manager || worker called node
- The machines in a swarm can be physical or virtual machines
- <docker swarm init>: to enable <swarm mode> and make your current machine a <swarm manager>, then run <docker swarm join> on other machines to have them join the swarm as <workers>
- <hypervisor> that can create virtual machines
- docker-machine create --driver virtualbox myvm1
  docker-machine create --driver virtualbox myvm2
  docker-machine ls
  $ docker-machine ssh myvm1 "docker swarm init --advertise-addr <myvm1 ip>"
Swarm initialized: current node <node ID> is now a manager.

To add a worker to this swarm, run the following command:

  docker swarm join \
  --token <token> \
  <myvm ip>:<port>

To add a manager to this swarm, run 'docker swarm join-token manager' and follow the instructions.

- --native-ssh
- Run <docker node ls> on the manager to view the nodes in this swarm
- If you want to start over, you can run <docker swarm leave> from each node.


- docker-machine env <machine-name>

- docker-machine env myvm1
  export DOCKER_TLS_VERIFY="1"
  export DOCKER_HOST="tcp://192.168.99.100:2376"
  export DOCKER_CERT_PATH="/Users/sam/.docker/machine/machines/myvm1"
  export DOCKER_MACHINE_NAME="myvm1"
  # Run this command to configure your shell:
  # eval $(docker-machine env myvm1)

- docker stack deploy -c docker-compose.yml getstartedlab



--------------------------------------------------------------------------------------------






- First Alpine Linux Containers
- Doing More With Docker Images
- Docker for Beginners - Linux
- Docker images deeper dive



- Node.js with SQL Server on Docker

--------------------------------------------------------------------------------------------



/var/lib/docker/overlay2 folder where the image and container layers are stored






What are Moby and LinuxKit?

- Moby: An open framework to assemble specialized container systems without reinventing the wheel.

and:

- LinuxKit, a toolkit for building custom minimal, immutable Linux distributions.



docker info


docker exec --ti x1 ps ax




- docker run -l user=12345 -d redis
- echo 'user=123461' >> labels && echo 'role=cache' >> labels
- docker run --label-file=labels -d redis
- LABEL vendor=Katacoda \
com.katacoda.version=0.0.5 \
com.katacoda.build-date=2016-07-01T10:47:29Z \
com.katacoda.course=Docker

- docker inspect -f "{{json .Config.Labels }}" rd
- docker inspect -f "{{json .ContainerConfig.Labels }}" katacoda-label-example
- docker images --filter "label=vendor=Katacoda"
- docker -d \
-H unix:///var/run/docker.sock \
--label com.katacoda.environment="production" \
--label com.katacoda.storage="ssd"







container_name:
property: value
- or options


docker-compose up -d
docker-compose up redis -d

docker-compose scale web=3





docker ps --format '{{.Names}} container is using {{.Image}} image'
docker ps --format 'table {{.Names}}\t{{.Image}}'
docker ps -q | xargs docker inspect --format '{{ .Id }} - {{ .Name }} - {{ .NetworkSettings.IPAddress }}'



- Start Docker Containers on Boot with Systemd
- Floating ip















Usage:  docker COMMAND

A self-sufficient runtime for containers

Options:
      --config string      Location of client config files (default "/home/scrapbook/.docker")
  -D, --debug              Enable debug mode
  -H, --host list          Daemon socket(s) to connect to
  -l, --log-level string   Set the logging level ("debug"|"info"|"warn"|"error"|"fatal") (default "info")
      --tls                Use TLS; implied by --tlsverify
      --tlscacert string   Trust certs signed only by this CA (default "/home/scrapbook/.docker/ca.pem")
      --tlscert string     Path to TLS certificate file (default "/home/scrapbook/.docker/cert.pem")
      --tlskey string      Path to TLS key file (default "/home/scrapbook/.docker/key.pem")
      --tlsverify          Use TLS and verify the remote
  -v, --version            Print version information and quit

Management Commands:
  config      Manage Docker configs
  container   Manage containers
  image       Manage images
  network     Manage networks
  node        Manage Swarm nodes
  plugin      Manage plugins
  secret      Manage Docker secrets
  service     Manage services
  swarm       Manage Swarm
  system      Manage Docker
  trust       Manage trust on Docker images
  volume      Manage volumes

Commands:
  attach      Attach local standard input, output, and error streams to a running container
  build       Build an image from a Dockerfile
  commit      Create a new image from a container's changes
  cp          Copy files/folders between a container and the local filesystem
  create      Create a new container
  diff        Inspect changes to files or directories on a container's filesystem
  events      Get real time events from the server
  exec        Run a command in a running container
  export      Export a container's filesystem as a tar archive
  history     Show the history of an image
  images      List images
  import      Import the contents from a tarball to create a filesystem image
  info        Display system-wide information
  inspect     Return low-level information on Docker objects
  kill        Kill one or more running containers
  load        Load an image from a tar archive or STDIN
  login       Log in to a Docker registry
  logout      Log out from a Docker registry
  logs        Fetch the logs of a container
  pause       Pause all processes within one or more containers
  port        List port mappings or a specific mapping for the container
  ps          List containers
  pull        Pull an image or a repository from a registry
  push        Push an image or a repository to a registry
 - rename      Rename a container
  restart     Restart one or more containers
  rm          Remove one or more containers
  rmi         Remove one or more images
  run         Run a command in a new container
  save        Save one or more images to a tar archive (streamed to STDOUT by default)
  search      Search the Docker Hub for images
  start       Start one or more stopped containers
 - stats       Display a live stream of container(s) resource usage statistics   [--no-stream]-> one_shot
  stop        Stop one or more running containers
  tag         Create a tag TARGET_IMAGE that refers to SOURCE_IMAGE
  top         Display the running processes of a container
  unpause     Unpause all processes within one or more containers
  update      Update configuration of one or more containers
  version     Show the Docker version information
  wait        Block until one or more containers stop, then print their exit codes








Usage:  docker container COMMAND

Manage containers

Options:


Commands:
  attach      Attach local standard input, output, and error streams to a running container
  commit      Create a new image from a container's changes
  cp          Copy files/folders between a container and the local filesystem
  create      Create a new container
  diff        Inspect changes to files or directories on a container's filesystem
  exec        Run a command in a running container
  export      Export a container's filesystem as a tar archive
  inspect     Display detailed information on one or more containers
  kill        Kill one or more running containers
  logs        Fetch the logs of a container
  ls          List containers
  pause       Pause all processes within one or more containers
  port        List port mappings or a specific mapping for the container
  prune       Remove all stopped containers
  rename      Rename a container
  restart     Restart one or more containers
  rm          Remove one or more containers
  run         Run a command in a new container
  start       Start one or more stopped containers
  stats       Display a live stream of container(s) resource usage statistics
  stop        Stop one or more running containers
  top         Display the running processes of a container
  unpause     Unpause all processes within one or more containers
  update      Update configuration of one or more containers
  wait        Block until one or more containers stop, then print their exit codes

















integration with vscode
------------------------
extentions:
- Docker {Microsoft} -> IntelliSense -> ctrl+space, tab,IntelliSense images search at docker hub ,docker commands
- Docker Explorer {Jun Han} -> GUI control





Docker-Compose
==============
- Compose is a tool for defining and running multi-container Docker applications
- use a YAML file to configure your application’s services
- docker-compose.yml
- docker-compose up -d detached (in background)
- docker-compose run web env
- docker-compose run [Service] [Commands]
- docker-compose down --volumes


---------------------------------------------------------------------------------------------------------------------------------------------------

version: '3'
services:
  web:
    build: .
    ports:
    - "5000:5000"
    volumes:
    - .:/code
    - logvolume01:/var/log
    links:
    - redis
  redis:
    image: redis
volumes:
  logvolume01: {}

---------------------------------------------------------------------------------------------------------------------------------------------------


- Local Docker Engine
- Remote Docker Engine


- install bash-completion
- /etc/bash_completion.d/ || ~/.zsh/completion/
- sudo curl -L https://raw.githubusercontent.com/docker/compose/1.23.2/contrib/completion/bash/docker-compose -o /etc/bash_completion.d/docker-compose


---------------------------------------------------------------------------------------------------------------------------------------------------

Compose has commands for managing the whole lifecycle of your application:

Start, stop, and rebuild services
View the status of running services
Stream the log output of running services
Run a one-off command on a service

---------------------------------------------------------------------------------------------------------------------------------------------------





> installition
- included as part of Docker desktop for(Windows, Mac)
- pip
- as a container
- Binary 
  - sudo curl -L "https://github.com/docker/compose/releases/download/1.23.2/docker-compose-$(uname -s)-$(uname -m)" -o /usr/local/bin/docker-compose
  - sudo chmod +x /usr/local/bin/docker-compose
- sudo rm /usr/local/bin/docker-compose





version: '3'
services:
  service:
      -image:
      build:
      ports:
            -
      volumes:
            -
            -
      links
            -
      networks:
            - frontend
      deploy:
        replicas: 2
          update_config:
          parallelism: 2
          delay: 10s
        restart_policy:
          condition: on-failure
- yaml is a superset of json
docker-compose -f docker-compose.json up

Dockerfile directives:
- 

---------------------------------------------------------------------------------------------------------------------------------------------------
> Compose file format:
- 1
- 2
- 2.x
- 3.x
---------------------------------------------------------------------------------------------------------------------------------------------------
docker-compose directives:
- 
- 
- 
---------------------------------------------------------------------------------------------------------------------------------------------------
> docker-compose command-line:
- up
- down
- help
- build
- bundle
- config
- create
- events
- exec
- images
- port
- kill
- start
- stop
- rm
- logs
- ps
- pause
- unpause
- pull
- push
- restart
- run
- scale
- top

# docker-compose [SUBCOMMAND] --help

Docker runtime and cloud-init





---------------------------------------------------------------------------------------------------------------------------------------------------
> Common use cases:
- Development environments
- Automated testing environments
- Single host deployments
---------------------------------------------------------------------------------------------------------------------------------------------------


- Apple Siri
- Sumsong Pixby
- Google Assistant
  - Android
  - IOS
  - smartwatches
  - Google Home
      - Google Home Mini
      - Google Home Max
  - Android TVs
- Amazon Alexa
  - Amazon Echo Dot



docker run -it -h server --name=node -u sabry -v /home/src:/home/src -p 3000:3000 node
docker run -it -h tux --name ubuntu  -v /home/src:/home/src -p 3000:3000 ubuntu




personal voice assistant
[actions](https://developers.google.com/assistant) is the central platform for developing Google Assistant applications
work with a number of human-computer interaction suites, which simplifies conversational app development. Out of all the platforms, the most popular is Dialogflow, which uses an underlying machine learning (ML) and natural language understanding (NLU) schema to build rich Assistant applications.
https://console.actions.google.com


1 million+ actions available suit a wide range of voice command needs

[Google Assistant](https://assistant.google.com/) is offered on Android and iOS, but it can even be integrated with other devices like smartwatches, Google Homes, and Android TVs.



https://cloud.google.com/training/courses
https://cloud.google.com/certification/






[Docker Officia Site](https://docker.com/)
================================

> sub domains:
	- https://hub.docker.com/
	- https://docs.docker.com/
	- https://forums.docker.com/


#docker.io redirect to docker.com

------------------------------------------------------------------------------------------------------------------
> get started:
	- Downoad Docker
		- https://hub.docker.com/?overlay=onboarding
	- play with docker
		- docker 101-tutorial for developers
			-  Play with Docker => docker run -dp 80:80 docker/getting-started:pwd
			- Docker Desktop=> docker run -dp 80:80 docker/getting-started
		- Lab Environment => https://labs.play-with-docker.com/
		- Community Training =>https://docs.docker.com/get-started/resources/
		- Join Our Global Community => https://www.docker.com/docker-community
	- https://hub.docker.com/
------------------------------------------------------------------------------------------------------------------


https://github.com/docker/
	- https://github.com/docker/kitematic
	- https://github.com/docker/docker-py


- https://github.com/docker/whalesay












divide docker monolithic to components:
libnetwork
containerd
swarmkit


kubernates
kubeflow
kustmize


fulentd

Moby Project: 
containerd -> dontainer engine
linuxkit -> OS
infrakit -> terraform
hyperkit -> hypervisor

VPNkit -> 