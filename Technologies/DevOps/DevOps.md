DevOps
=======
- DevOps = Develop + Operation + QA

--------------------------------------------------------------------------------------------------------
* provisioning
    - configuration management ->it can install configuration in a group of machines in series or parallel ?? 
        - ansible
        - puppet
        - chef
        - sultstack


* packaging software in containers === containerized
    - docker


* Runing and scheduing dontainer applications on a cluster (orchestrate and manage containers on distributed systems)
    - kubernetes
--------------------------------------------------------------------------------------------------------

- docker compose 
    - connections
    - ports
    - env variable
    -  dependacies
    - health checks fo docker containers

- docker-compose file parameters:
    - depend on: container don't work unless the depend one work
    - links: link between 2 containers by name , if you ping for backend container when you at a frontend container     will ping normaly
    - container_name: put 


* how to mount a container to a host not a host to a container ??

- docker commit: convert docker container with some changes to image
- docker export + docker import : move container from server to anther one


docker clustering solutions:
- swarm & swarm GUI
- Rancher more advanced Portainer
- Portainer
how Rancher work?
if a service down anther one up instead it




- monitoring
    - infrastructure -> sys engineer = sys admin
    - application -> DevOps


monitoring apps with elk

load balancer with  auto scaling group THREESHOLD 'if used RAM = 70% || there are 1000 request in my website' TREGER  create new instance of a cluster
main consept of cloud : "pay as you go"

docker is flushed == if you work at a container and stop it all work will remove so we mount to volume to avoid this

gitlab advantage
================
- subversion tool
- CI/CD
- docker registry
- act like Jenkins totally
- self hosted -> you can make docker container of gitlab and mount it with a volume
gitlab-ci.yml -> configuration file to write your steps for CI/CD 
ex: build app > create docker image contain this app and share it at local gitlab docker registry > stp this image at AWS machine and build docker container from it 

>scenario
with every commit at gitlab will execute commands at gitlab-ci.yaml fie :
- CI/CD = lint -> build -> test 
- create docker image from Dockerfile & copy your code at this image
- put it at your private gitlab registry
- move this image to your server (local || cloud) by scp or other tool 
- create a container with this image at your cloud server
-----------------------------------------------------------------------------------------------------------------------

IAAC (infrastructure as a code) write the resources which you want to create a new machine or container at cloud or (vm like vmware) 
- terraform -> write one file work on many platforms

- SAAS (stack as a service)
    scenario
    your application divided into three service front-end, back-end, database
    each one of them have a repo at github
    in SAAS you can select a branch of each one and put them at a cloud machine or vm for testing reasons (QA) when the machine is created you receive a massage at slack with machine link 

- continuous integration
    - travis
    - circle CI
    - codeship
    - Jenkins

- contentious delivery

- contentious deployment




testing
- UI testing -> show your website at more webbrowser with diffrent versions
    - selenuim
- load testing -> how much user can use your website at the same time or what change at 
    - 
- stress testing ??


# blue green deployent -> use load balancer to avoid downtime


plan
analzys
agile
coding




mon


serverless -> upload your code at AWS they ask you to pay per requests not infrastructure

