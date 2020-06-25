Kubernetes -> learn how to deploy, scale, update and debug containerized applications on a Kubernetes cluster
==========
Kubernetes is an open source container orchestration engine for automating deployment, scaling, and management of containerized applications. The open source project is hosted by the Cloud Native Computing Foundation (CNCF).
-----------------------------------------------------------------------------------------------------------------
- Why Kubernetes ?
Today users expect applications to be available 24/7, while developers expect to deploy new versions of those applications several times a day. The way we build software is moving in this direction, enabling applications to be released and updated in an easy and fast way without downtime. We also need to be able to scale application in line with the user demand and we expect them to make intelligent use of the available resources. Kubernetes is a platform designed to meet those requirements, using the experience accumulated by Google in this area, combined with best-of-breed ideas from the community.

- Kubernetes is designed as a highly available cluster of computers that are connected to work as a single unit This abstraction allows us to deploy applications without thinking about which specific machines they need to run on. To make use of this new model of deployment, applications need to be packaged in a way that decouples them from individual hosts: they need to be containerized. This is different compared to how applications were deployed in the past, when they were directly installed on specific machines as packages deeply integrated into the host

- Kubernetes role is to automate the distribution (scheduling) of application containers across a cluster in an efficient way
-----------------------------------------------------------------------------------------------------------------
- What you need to know first ?
Kubernetes supported container formats:
- Docker
- rkt -> CoreOS
- containerd
- runC -> OCI (Open Container Initiative)
- CRI-O -> Open Container Initiative (OCI) compliant
-----------------------------------------------------------------------------------------------------------------

- Applications need to be packaged into one of the supported container formats in order to be deployed on Kubernetes
- Kubernetes supports Docker, rkt and other types (format) of containers

- When we deploy applications on Kubernetes we tell the master to start our containers and it will schedule them to run on some node agents. Communications between the master and the nodes is done via an API exposed by the master. The same API is exposed towards the users in order to facilitate interaction with the cluster.
-----------------------------------------------------------------------------------------------------------------
- A Kubernetes cluster is formed out of 2 types of resources:
    - Master: is responsible for managing coordinating the cluster and the nodes are used to host the running applications,
      the master nodes will coordinate all the activity happening in your cluster like:
      - scheduling applications
      - maintaining their desired state
      - scaling applications and rolling new updates
    - Nodes: are where we run applications 
-----------------------------------------------------------------------------------------------------------------
- cluster nodes: are the place where we’re going to deploy our applications
-----------------------------------------------------------------------------------------------------------------
> Node: a VM or a physical computer that is used as a worker machine in a Kubernetes
- Every node from the cluster is managed by the master
- On a typical node you will have tools for handling container operations (like Docker, rkt)
- Kubelet an agent for managing the node (node processes)
- A Kubernetes cluster that handles production traffic should have a minimum of <three_nodes>.
- A Kubernetes cluster can be deployed on either physical or virtual machines
-----------------------------------------------------------------------------------------------------------------

-----------------------------------------------------------------------------------------------------------------
The name Kubernetes originates from Greek, meaning “helmsman” or “pilot”, and is the root of the words “governor” and “cybernetic”- K8s is an abbreviation obtained by replacing the 8 letters “ubernete” with 8
-----------------------------------------------------------------------------------------------------------------
- Kubernetes dashboard: allows you to view your applications in a UI
- KubeDNS 
- system processes: sshd, httpd

deployments and pods === class and object
cluster -> nodes -> pods -> containers
kubectl tend with deployments only create it create a service for it 
kubectl don't tend with pods except get and describe
--------------------------------------------------------------------------------------------------------------
Cluster Diagram
===============

- cluster 7
- master 7 in the center of the cluster
- node 6 around master
--------------------------------------------------------------------------------------------------------------
Kubernetes workflow
===================

- have a running Kubernetes cluster
- deploy your containerized applications on top of Kubernetes
--------------------------------------------------------------------------------------------------------------
minikube
========
- The recommended way to start a Kubernetes cluster for development purposes is by using minikube
- Minikube creates a VM on your local machine and deploys a simple cluster containing only one node
- Minikube is available for Linux, Mac OS and Windows systems
- The minikube CLI provides basic bootstrapping operations such as: start, stop, status and delete

- minikube version
- minikube ip
- minikube start ===
    - Starting local Kubernetes v1.10.0 cluster...
    - Starting VM...
    - Getting VM IP address...
    - Moving files into cluster...
    - Setting up certs...
    - Connecting to cluster...
    - Setting up kubeconfig...
    - Starting cluster components...
    - Kubectl is now configured to use the cluster.
    - Loading cached images from config file.

o   minikube v0.34.1 on linux (amd64)
>   Configuring local host environment ...
>   Creating none VM (CPUs=2, Memory=2048MB, Disk=20000MB) ...
-   "minikube" IP address is 172.17.0.37
-   Configuring Docker as the container runtime ...
-   Preparing Kubernetes environment ...
@   Downloading kubeadm v1.13.3
@   Downloading kubelet v1.13.3
-   Pulling images required by Kubernetes v1.13.3 ...
-   Launching Kubernetes v1.13.3 using kubeadm ...
-   Configuring cluster permissions ...
-   Verifying component health .....
+   kubectl is now configured to use "minikube"
=   Done! Thank you for using minikube!

--------------------------------------------------------------------------------------------------------------
##############################################################################################################
--------------------------------------------------------------------------------------------------------------
kubeadm
=======

- kubeadm init --apiserver-advertise-address $(hostname -i)
--------------------------------------------------------------------------------------------------------------
##############################################################################################################
--------------------------------------------------------------------------------------------------------------

kubectl ->Kubectl interacts with the cluster via the API
=======
- Setup kubectl locally to manage a remote cluster
- Create pods, replication controllers and services by creating definition files and send them to the master using kubectl create
- Manage the cluster using kubectl get, kubectl describe and kubectl delete
--------------------------------------------------------------------------------------------------------------
> Download

# OS X $ curl -O https://storage.googleapis.com/kubernetes-release/release/v1.2.2/bin/darwin/amd64/kubectl
# Linux $ curl -O https://storage.googleapis.com/kubernetes-release/release/v1.2.2/bin/linux/amd64/kubectl
# Move kubectl to /usr/local/bin $ chmod +x kubectl $ mv kubectl /usr/local/bin/kubectl
--------------------------------------------------------------------------------------------------------------

> Configuration
In your cluster detail page, you can find the master ip address and authentication certificates. kubectl needs these settings to talk to your cluster.

$ kubectl config set-cluster default-cluster \
--server=https://${MASTER_HOST} \
--certificate-authority=${CA_CERT}

$ kubectl config set-credentials default-admin \
--certificate-authority=${CA_CERT} \
--client-key=${ADMIN_KEY} \
--client-certificate=${ADMIN_CERT}

$ kubectl config set-context default-system \
--cluster=default-cluster \
--user=default-admin

$ kubectl config use-context default-system
--------------------------------------------------------------------------------------------------------------


# The common format of a kubectl command is: kubectl [action] [resource]
 This performs the specified action (like create, describe) on the specified resource (like node, container). You can use --help after the command to get additional info about possible parameters (kubectl get nodes --help)

- kubectl version The client version is the kubectl version; the server version is the Kubernetes version installed on the master.

--------------------------------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------------------------------
KataCoda:


- kubectl run first-deployment --image=katacoda/docker-http-server --port=80  || - kubectl run webserver --image=alpine --port=8000 --replicas=1
- kubectl run http --image=katacoda/docker-http-server:latest --replicas=1
# Kubectl run_ is similar to docker run but at a cluster level

- kubectl describe deployment http
- kubectl describe pod webserver | grep IP

- kubectl expose deployment first-deployment --port=80 --type=NodePort
- kubectl expose deployment http --external-ip="172.17.0.48" --port=8000 --target-port=80
# curl http://172.17.0.36:8000

# With the deployment created, we can use kubectl to create a service which exposes the Pods on a particular port. The command expose allows you to define the different parameters of the service and how to expose the deployment.

# With kubectl run it's possible to create the deployment and expose it as a single command. ex:
- kubectl run http exposed --image=katacoda/docker-http-server:latest --replicas=1 --port=80        --hostport=8001

- kubectl scale --replicas=3 deployment http

--------------------------------------------------------------------------------------------------------------

namespace
==========
built-in namespaces:
- default -> default active namespace
- kube-system
- kube-public

- kubectl get namespaces
- kubectl create namespace <name>
------------------------------------------------------------------------------------------------
pods
=====
**pod** is a collection of containers sharing a network and mount namespace and is the basic unit of deployment in Kubernetes
All containers in a pod are scheduled on the same node

Pods that are running inside Kubernetes are running on a private, isolated network
By default they are visible to other pods and services within the same kubernetes cluster, but not outside
When we use kubectl, we're interacting through an API endpoint to communicate with our application

# the Deployment created a Pod which hosted your application instance
# A Pod is a group of one or more application containers (such as Docker or rkt) that includes:
- shared storage (volumes)
- a unique cluster IP address
- information about how to run them (like container image version or specific ports)

# Containers within a Pod share an IP Address and port space. Containers of the same Pod are always co-located and co-scheduled, and run in a shared context on the same node

# A Pod models an application-specific “logical host” and contains one or more application containers which are relatively tightly coupled
# An example of container that would fit on the same Pod with our the NodeJS app, would be a side container that feeds the data published by the webserver. In a pre-container world, they would have run on the same physical or virtual machine

# Pods are tied to the Node where they are deployed and remain there until termination (according to restart policy --restart=always) or deletion
# In case of a Node failure, new identical Pods will be deployed on other available Nodes
# The Pod is the atomic deployment unit on the Kubernetes platform
# When we trigger a Deployment on Kubernetes, it will create Pods with containers inside them, not containers directly.



# Containers should only be scheduled together in a single Pod if they are tightly coupled and need to share resources such as disk.

# to view what containers are inside that Pod and what images are used to build those containers we run the describe pods command: kubectl describe pods

# Pods that are running inside Kubernetes are running on a private isolated network. By default they are visible from other pods and services within the same kubernetes cluster, but not outside that network, you can expose your application outside the kubernetes cluster to be access for users


------------------------------------------------------------------------------------------------
Services (kubectl expose)
=========================

# # Expose is the command you’ll use to expose your __Deployments__ to the outside world

# Pods do have their own unique IP across one cluster, those IP’s are not exposed outside Kubernetes.

#  we need a way to let other Pods and applications automatically discover each other. Kubernetes solving this by grouping Pods in Services.

# A Kubernetes Service is an abstraction layer which defines a logical set of Pods and enables external traffic exposure, load balancing and service discovery for those Pods. 

#You can use Services to group your Pods

# This abstraction will allow us to expose Pods to traffic from outside the cluster.

# sevice exposes a Deployment to external network traffic

# Services have their own unique cluster-private IP address and expose a port to receive traffic. If you choose to expose the service outside the cluster, there are tow options:

- LoadBalancer - provides a public IP address (what you would typically use when you run Kubernetes on GKE or AWS)
- 
- NodePort - exposes the Service on the same port on each Node of the cluster using NAT (available on all Kubernetes clusters, and in Minikube)

# to expose pod outside of cluster you have two options:
- proxy
- service -> 
    - LoadBalancer
    - NodePort (NAT)

# You can create a Service when you start a Deployment by adding --expose as a parameter for the kubectl run command

# A Service provides load balancing of traffic across the contained set of Pods. This is useful when a service is created to group all Pods from a specific Deployment (our application will make use of this when we’ll have multiple instances running.

# Services are also responsible for service-discovery within the cluster. This will for example allow a frontend service (like a webserver) to receive traffic from a backend service (like a database) without worrying about Pods.

# Services match a set of Pods using Label Selectors, a grouping primitive that allows logical operation on Labels.

- kubectl get services

# We have a Service called kubernetes that is created by default when minikube starts the cluster. To create a new service and expose it to external traffic we’ll use the expose command with NodePort as parameter (minikube does not support the LoadBalancer option yet).

- kubectl expose deployment/kubernetes-bootcamp --type="NodePort" --port 8080

# Let’s run again the get services command:

- kubectl get services

# We have now a running Service called kubernetes-bootcamp. Here we see that the Service received a unique cluster-IP, an internal port and an external-IP (the IP of the Node).

# To find out what port was opened externally (by the NodePort option) we’ll run the describe service command:

- kubectl describe services/kubernetes-bootcamp

# Create an environment variable called NODE_PORT that has the value of the Node port assigned:

- export NODE_PORT=$(kubectl get services/kubernetes-bootcamp -o go-template='{{(index .spec.ports 0).nodePort}}') echo NODE_PORT=$NODE_PORT

# Now we can test that the app is exposed outside of the cluster using curl, the IP of the Node and the externally exposed port:

- curl $(minikube ip):$NODE_PORT

# And we get a response from the server. The Service is exposed.

# To delete Services you can use the delete service command. Labels can be used also here:

- kubectl delete service -l run=kubernetes-bootcamp

# Confirm that the service is gone:

- kubectl get services

# This confirms that our Service was removed. To confirm that route is not exposed anymore you can curl the previously exposed IP and port:

- curl $(minikube ip):$NODE_PORT

# This proves that the app is not reachable anymore from outside of the cluster. You can confirm that the app is still running with a curl inside the pod:

- kubectl exec -ti $POD_NAME curl localhost:8080

# We see here that the application is up.
_______________________________________________________________________________________
> Load Balancing
# Let’s check that the Service is load-balancing the traffic. To find out the exposed IP and Port we can use the describe service as we learned in the previously Module:

- kubectl describe services/kubernetes-bootcamp

# Create an environment variable called NODE_PORT that has a value as the Node port:

- export NODE_PORT=$(kubectl get services/kubernetes-bootcamp -o go-template='{{(index .spec.ports 0).nodePort}}') echo NODE_PORT=$NODE_PORT

# Next, we’ll do a curl to the exposed IP and port. Execute the command multiple times:

- curl $(minikube ip):$NODE_PORT

# We hit a different Pod with every request. This demonstrates that the load-balancing is working.
_______________________________________________________________________________________
------------------------------------------------------------------------------------------------
Labels
======

# Labels are key/value pairs that are attached to objects, such as Pods and you can think of them as hashtags from social media. They are used to organize related objects in a way meaningful to the users like:

- Production environment (production, test, dev)
- Application version (beta, v1.3)
- Type of service/server (frontend, backend, database)

# A way to group related things using key/value pairs, You can use labels to group resources that are related (like: web servers, databases)

# Labels can be attached to objects at the creation time or later and can be modified at any time.

# The kubectl run command sets some default Labels/Label Selectors on the new Pods/ Deployment.

# The link between Labels and Label Selectors defines the relationship between the Deployment and the Pods it creates.

# The Deployment created automatically a label for our Pod. With describe deployment command you can see the name of the label:

- kubectl describe deployment

# Let’s use this label to query our list of Pods. We’ll use the kubectl get pods command with -l as a parameter, followed by the label values:

- kubectl get pods -l run=kubernetes-bootcamp

# You can do the same to list the existing services:

- kubectl get services -l run=kubernetes-bootcamp

# Get the name of the Pod and store it in the POD_NAME environment variable:

- export POD_NAME=$(kubectl get pods -o go-template --template '{{range .items}}{{.metadata.name}}{{"\n"}}{{end}}') echo Name of the Pod: $POD_NAME

# To apply a new label we use the label command followed by the object type, object name and the new label:

- kubectl label pod $POD_NAME app=v1

# This will apply a new label to our Pod (we pinned the application version to the Pod), and we can check it with the describe pod command:

- kubectl describe pods $POD_NAME

# We see here that the label is attached now to our Pod. And we can query now the list of pods using the new label:

- kubectl get pods -l app=v1

# And we see the Pod.


------------------------------------------------------------------------------------------------
Scaling (kubectl scale)
=======================

# we created a Deployment, and then exposed it publicly via a Service .
# The Deployment created only one Pod for running our application.
# When traffic increases, we will need to scale the application to keep up with user demand.

# Scaling changes the number of replicas in a Deployment
# Scaling is accomplished by changing the number of replicas in a Deployment.

#Scaling up a Deployment will ensure new Pods are created and scheduled to Nodes with available resources.
# Scaling down will reduce the number of Pods to the new desired state.
# Kubernetes also supports autoscaling of Pods, but it is outside of the scope of this tutorial.
#Scaling to zero is also possible, and it will terminate all Pods of the specified Deployment.

# Running multiple instances of an application will require a way to distribute the traffic to all of them.
# Services have an integrated load-balancer that will distribute network traffic to all Pods of an exposed Deployment.
# Services will monitor continuously the running Pods using endpoints, to ensure the traffic is sent only to available Pods.

# Once you have multiple instances of an Application running, you would be able to do Rolling updates without downtime




 # let’s scale the Deployment to 4 replicas. We’ll use the kubectl scale command, followed by the deployment type, name and desired number of instances:

- kubectl scale deployments/kubernetes-bootcamp --replicas=4

# To list your Deployments once again, use get deployments:

- kubectl get deployments

# The change was applied, and we have 4 instances of the application available. Next, let’s check if the number of Pods changed:

- kubectl get pods -o wide

# There are 4 Pods now, with different IP addresses. The change was registered in the Deployment events log. To check that, use the describe command:

- kubectl describe deployments/kubernetes-bootcamp

# You can also view in the output of this command that there are 4 replicas now.

________________________________________________________________________________________
> Scale Down
# To scale down the Service to 2 replicas, run again the scale command:

- kubectl scale deployments/kubernetes-bootcamp --replicas=2

# List the Deployments to check if the change was applied with the get deployments command:

- kubectl get deployments

# The number of replicas decreased to 2. List the number of Pods, with get pods:

- kubectl get pods -o wide

# This confirms that 2 Pods were terminated.
________________________________________________________________________________________
------------------------------------------------------------------------------------------------
Rolling updates (kubectl set image) (kubctl rollout status || undo)
===================================================================

# Users expect applications to be available all the time and developers are expected to deploy new versions of them several times a day. In Kubernetes this is done with rolling updates.

# Rolling updates allows Deployments to update with zero downtime by incrementally updating Pods instances with new ones. The new Pods will be scheduled on Nodes with available resources.

# If a Deployment is exposed publicly, what happens with the network traffic during an update? Is load-balanced only to available instances (old or new)

# we scaled our application to run multiple instances. This is a requirement for performing updates without affecting application availability.

# By default, the maximum number of Pods that can be unavailable during the update and the maximum number of new Pods that can be created, is one. Both options can be configured to either numbers or percentages (of Pods). In Kubernetes, updates are versioned and any Deployment update can be reverted to a previously (stable) version.


# Similar to application Scaling, If a Deployment is exposed publicly, the Service will load-balance the traffic only to available Pods during the update. An available Pod is an instance that is available to the users of the application.

# Rolling updates allow the following actions:

# Promote an application from one environment to another (via container image updates)
# Rollback to previous versions
# Continuous Integration and Continuous Delivery of applications with zero downtime

_____________________________________________________________________________________
> Update the version of the app

# To view the current image version of the app, run a describe command against the Pods (look at the Image field):

- kubectl describe pods

# To update the image of the application to version 2, use the set image command, followed by the deployment name and the new image version:

- kubectl set image deployments/kubernetes-bootcamp kubernetes-bootcamp=jocatalin/kubernetes-bootcamp:v2

# The command notified the Deployment to use a different image for your app and initiated a rolling update. Check the status of the new Pods, and view the old one terminating with the get pods command:

- kubectl get pods


> Verify an update
# The update can be confirmed also by running a rollout status command:

- kubectl rollout status deployments/kubernetes-bootcamp

# To view the current image version of the app, run a describe command against the Pods:

- kubectl describe pods

# We run now version 2 of the app (look at the Image field)

> Rollback an update

- kubectl set image deployments/kubernetes-bootcamp kubernetes-bootcamp=gcr.io/google-samples/kubernetes-bootcamp:v10

Use get deployments to see the status of the deployment:

- kubectl get deployments

# And something is wrong… We do not have the desired number of Pods available. List the Pods again:

- kubectl get pods

# A describe command on the Pods should give more insights:

- kubectl describe pods

# There is no image called v10 in the repository. Let’s roll back to our previously working version. We’ll use the rollout undo command:

- kubectl rollout undo deployments/kubernetes-bootcamp

# The rollout command reverted the deployment to the previous known state (v2 of the image). Updates are versioned and you can revert to any previously know state of a Deployment. List again the Pods:

- kubectl get pods

# Four Pods are running. Check again the image deployed on the them:

- kubectl describe pods

# We see that the deployment is using a stable version of the app (v2). The Rollback was successful.
_____________________________________________________________________________________
Secrets
=======

# Secrets are mounted to a pod via environment variables or as a volume

secrets types:
- database credentials
- SSL certificates

echo -n "admin" | base64 && echo -n "a62fjbd37942dcs" | base64 >> encoding.md

secrets collection 

- name: SECRET_USERNAME
valueFrom:
 secretKeyRef:
   name: test-secret
   key: username

# secrets encoded as Base64 strings

# The use of environment variables for storing secrets in memory can result in them accidentally leaking. The recommend approach is to use mount them as a Volume.  

# To mount the secrets as volumes we first define a volume with a well-known name, in this case, secret-volume, and provide it with our stored secret
volumes:
 - name: secret-volume
   secret:
     secretName: test-secret
# When we define the container we mount our created volume to a particular directory. Applications will read the secrets as files from this path.

volumeMounts:
 - name: secret-volume
   mountPath: /etc/secret-volume

# These can be exposed to a pod as an environment variable or mounted as a file, like configmaps, while obfuscating its contents within the cluster

Secrets are a Kubernetes resource where you can store sensitive key value pairs. These can be exposed to a pod as an environment variable or mounted as a file, like configmaps, while obfuscating its contents within the cluster.

Secrets are resources containing keys with base64 encoded values.


echo -n "yourvalue" > ./secret.txt
kubectl create secret generic secretname --from-file=./secret.txt

=== echo -n "yourvalue" |base64


# This creates a generic secret named secretname and automatically encodes the value as base64


API keys, passwords, or certificates.



When a Vault server is started, it starts in a sealed state. In this state, Vault is configured to know where and how to access the physical storage, but doesn't know how to decrypt any of it.

When the Vault is initialized it generates an encryption key which is used to protect all the data. That key is protected by a master key.

By default Vault splits the master key into 5 shares, and sets a threshold of any 3 of those that are required to reconstruct the master key and unseal the Vault.



Vault operates as a client/server application. The Vault server is the only piece of the Vault architecture that interacts with the data storage and backends. All operations done via the Vault CLI interact with the server over a TLS connection.


First, we're going to start a Vault dev server. The dev server is a built-in, pre-configured server that is not very secure but useful for playing with Vault locally. Later in this guide we'll configure and start a real server.

To start the Vault dev server, run:
$ vault server -dev

Usage: vault <command> [args]
Common commands:
    read        Read data and retrieves secrets
    write       Write data, configuration, and secrets
    delete      Delete secrets and configuration
    list        List data or secrets
    login       Authenticate locally
    server      Start a Vault server
    status      Print seal and HA status
    unwrap      Unwrap a wrapped secret

Other commands:
    audit          Interact with audit devices
    auth           Interact with auth methods
    kv             Interact with Vault's Key-Value storage
    lease          Interact with leases
    operator       Perform operator-specific tasks
    path-help      Retrieve API help for paths
    policy         Interact with policies
    secrets        Interact with secrets engines
    ssh            Initiate an SSH session
    token          Interact with tokens




kubectl create secret


Create a secret using specified subcommand.

Available subcommands:
  docker-registry Create a secret for use with a Docker registry
  generic         Create a secret from a local file, directory or literal value
  tls             Create a TLS secret


Like other resources, secrets can be defined using YAML or JSON files.
------------------------------------------------------------------------------------------------
- kubectl: the main approach used for managing Kubernetes and the applications running on top of the cluster
- kubes: switch among namespaces
- kubectx: switch among clusters
- kube-ps1: showactive cluster & namespace at bash||zsh prompt and switch among them
- Kube-shell
Kube-shell is an integrated shell for working with the Kubernetes CLI. It has some really nifty features such as

auto-completion of commands, auto-suggestions, in-line documentation
access to the history of commands executed by using up/down arrow keys
current context from kubeconfig, easy switch between the clusters/namespaces

------------------------------------------------------------------------------------------------
- minikube: runs a single-node Kubernetes cluster inside a VM on your laptop for users looking to try out Kubernetes or develop with it day-to-day. is ideal for development environments and testing Kubernetes locally
Minikube started a virtual machine for you, and a Kubernetes cluster is now running in that VM.

To start we need to launch a Kubernetes cluster.
Execute the command below to start the cluster components and download the Kubectl CLI

Kubeadm: solves the problem of handling TLS encryption configuration, deploying the core Kubernetes components and ensuring that additional nodes can easily join the cluster. The resulting cluster is secured out of the box via mechanisms such as RBAC.

------------------------------------------------------------------------------------------------


deployment (kubectl run <name of deployment> <properties>) (kubectl create)
===========================================================================

# Deployment is responsible for creating and updating instances (The instance is running inside a Docker container on your node) and managing the desired state of your application

# The master will schedule application instances created by the deployment onto Nodes.

# After creating application instances, a Deployment Controller continuously watches them, and replaces an instance if the Node hosting it goes down or it is deleted, This provides a self-healing mechanism to address machine failure and machine maintenance

# In a pre-orchestration world, installation scripts would often be used to start applications, but they did not allow recovery from machine failure. By both creating your application instances and keeping them running across Nodes, Deployments provide a fundamentally different approach to application management.

# The Deployment container image and replica count are defined at creation time but can be changed after creation.

# Kubernetes will choose where to deploy our application based on Node available resources. you can't choose a spacific node to deploy your containerized app

___________________________________________________________________________________
- kubectl get deployments

# the valid statuses for a replica are 4:

# The __DESIRED__ state is showing the configured number of replicas
# The __CURRENT__ state show how many replicas are running now
# The __UP-TO-DATE__ is the number of replicas that were updated to match the desired (configured) state
# The __AVAILABLE__ state shows how many replicas are actually AVAILABLE to the users

# The run command creates a new deployment based on the parameters specified, such as the image and replicas
___________________________________________________________________________________


This deployment is issued to the Kubernetes master which launches the Pods and containers required. Kubectl run_ is similar to docker run but at a cluster level





kubectl create -f deployment.yaml === kubectl apply -f deployment.yaml


Under the covers, this exposes the Pod via Docker Port Mapping. As a result, you will not see the service listed using
kubectl get svc

To find the details you can use
docker ps | grep httpexposed

Pause Containers
Running the above command you'll notice the ports are exposed on the Pod, not the http container itself. The Pause container is responsible for defining the network for the Pod. Other containers in the pod share the same network namespace. This improves network performance and allow multiple containers to communicate over the same network interface..



Step 5 - Scale Containers
With our deployment running we can now use kubectl to scale the number of replicas.

Scaling the deployment will request Kubernetes to launch additional Pods. These Pods will then automatically be load balanced using the exposed Service.







# Scaling the deployment will request Kubernetes to launch additional Pods. These Pods will then automatically be load balanced using the exposed Service.

Task
The command kubectl scale allows us to adjust the number of Pods running for a particular deployment or replication controller.


Listing all the pods, you should see three running for the http deployment kubectl get pods

Once each Pod starts it will be added to the load balancer service. By describing the service you can view the endpoint and the associated Pods which are included.

kubectl describe svc http

Making requests to the service will request in different nodes processing the request.

curl http://172.17.0.17:8000


As multiple replicas, or instances, are deployed, they will be automatically load balanced based on this common label

As all the Pods have the same label prameter, they'll be load balanced behind the Service NodePort deployed.








------------------------------------------------------------------------------------------------------------------------------
This scenario explains how to launch a simple, multi-tier web application using Kubernetes and Docker. The Guestbook example application stores notes from guests in Redis via JavaScript API calls. Redis contains a master (for storage), and a replicated set of redis 'slaves'

Core Concepts = Kubernetes primitives
The following core concepts will be covered during this scenario. These are the foundations of understanding Kubernetes.

- Kubernetes
- Cluster
- Node
- Master vs Worker
- Containerized app
- Deployment
- Pods
- Replication Controllers
- ingress controllers
- Services
- NodePorts

To create an object in Kubernetes, you must provide an object spec that describes its desired state

# All Kubernetes objects have 4 mandatory fields, apiVersion, kind, metadata and spec
- apiVersion: defines the API version of k8s used to create this object
  Kubernetes uses several layers of apis to push new objects from concepts/testing (alpha) to tested, but not completely standardised (beta) to stable versions
- kind:  defines what kind of object you want to create, such as
  - Pod
  - Deployment
  - Service
  - etc
- metadata: defines data that uniquely identifies the object, like a name
  - name
  - namespace
  - labels
    :
- spec: The spec specifies the details of each object you create. The precise format of the spec field is different for every k8s object.

# For details you can always have a look at the k8s API Reference


kubectl apply -f test_service.yaml

Another thing we’d like to point out is the ability to put several objects inside the same yaml file
Using the --- separator will make kubectl treat the file like several files
You can use this mechanism to package things you often create together, like a Pod and a Service exposing it









A Deployment manages multiple pods Pods through controllers called ReplicaSets.

You describe a desired state in a Deployment object, and the Deployment controller changes the actual state to the desired state at a controlled rate.










































kubernetes best practise (Sandeep Dinesh)
=========================================

- Using Multi-stage Builds == Builder pattern
- distroless -> 

> Sandeep Dinesh:
I think you can use Gitlab's push feature to mirror to a Cloud Source Repository
https://docs.gitlab.com/ee/workflow/repository_mirroring.html


cache-layers on Docker
google container Registry
google container Builder
google container Registry vunlibilty scanning

Really cool, enjoying this series so far! I just hope that Gitlab support is added to Container Builder, at the moment I have to build on Gitlab CI and push to Google Container Registry because only Github and BitBucket are supported. There are workarounds but it introduces possible bottlenecks



-----------------------------------------------------------------------------------------------------------------
In this scenario, you'll learn how to use Kubectl to create and launch Deployments, Replication Controllers and expose them via Services without writing yaml definitions. This allows you to quickly launch containers onto the cluster.
-----------------------------------------------------------------------------------------------------------------









ال بود فيه أكتر من كونتينر موجدين فى نفس النود و بيشاركوا المساحة النتورك
minion -> تابع
backspace












اداة 
Minikube
و
Minishift

هي ادوات توفر بيئة تجريبية
من جهاة واحد داخل 
Virtual box 
مثلا

تناسب المطورين او مستخدمي mac

للعمل الحقيقي هناك ادوات اخرى

use vagrant:
- minikube
- minishift
- Docker machine

-----------------------------------------------------------------------------------------------------------------
- minikube
- kubeadm
- Kubespray -> depend on ansible and vagrant
-----------------------------------------------------------------------------------------------------------------
ما هي أفضل طريقة تراها لإدارة البيانات عند استخدام الحاويات؟ flocker?

من وجهة نظري

kubernetes مع glusterfs
او ceph/rbd
هناك رأي له وجاهة وهو أن البيانات يجب أن تكون bare metal
لأنها scale up
وليس scale out
-----------------------------------------------------------------------------------------------------------------
http://kubernetes.io/docs/user-guide/volumes/#rbd

$ kubectl describe pod sise-3210265840-k705b | grep IP
$ curl 172.17.0.3:9876/info || /version
$ kubectl delete deployment <deployment_name>
-----------------------------------------------------------------------------------------------------------------
dns among pods in cluster
authentcation among pods
-----------------------------------------------------------------------------------------------------------------
- kubeless: serverless on kubernates
- Kubeflow: making Machine Learning on Kubernetes easy
-----------------------------------------------------------------------------------------------------------------
- kompose: convert docker compose to kubernates
> Download: curl -L https://github.com/kubernetes/kompose/releases/download/v1.9.0/kompose-linux-amd64 -o /usr/bin/kompose && chmod +x /usr/bin/kompose
Kompose is a tool to help users who are familiar with docker-compose move to Kubernetes.

Usage:
  kompose [command]

Available Commands:
  completion  Output shell completion code
  convert     Convert a Docker Compose file
  down        Delete instantiated services/deployments from kubernetes
  help        Help about any command
  up          Deploy your Dockerized application to a container orchestrator.
  version     Print the version of Kompose

Flags:
      --error-on-warning    Treat any warning as an error
  -f, --file stringArray    Specify an alternative compose file
  -h, --help                help for kompose
      --provider string     Specify a provider. Kubernetes or OpenShift. (default "kubernetes")
      --suppress-warnings   Suppress all warnings
  -v, --verbose             verbose output

Use "kompose [command] --help" for more information about a command.
- kompose convert
- kompose convert -j
- kompose --provider convert -j
-
-----------------------------------------------------------------------------------------------------------------

- Kubeapps: web-based UI for deploying and managing applications in Kubernetes clusters
- Prometheus: monitoring tool for Kubernetes
------------------------------------------------------------------------------------------------
Helm package manager
====================

Charts <-> package



- Helm: package manager for Kubernetes
- Helm is the best way to find, share, and use software built for Kubernetes.
- chart is a packaged unit of kubernetes
# to install helm 
    $curl -LO https://storage.googleapis.com/kubernetes-helm/helm-v2.8.2-linux-amd64.tar.gz
        tar -xvf helm-v2.8.2-linux-amd64.tar.gz
        mv linux-amd64/helm /usr/local/bin/
# Once installed, initialise update the local cache to sync the latest available packages with the environment.

- helm init
- hem repo update
- helm search redis  -> find a Redis chart
- helm inspect stable/redis  ->  identify more information
- helm install --name=redis stable/redis   -> to deploy the chart to your cluster, Helm will launch the required pods
- helm ls  -> view all packages
- helm repo add monocular https://helm.github.io/monocular
- helm install monocular/monocular

# Redis: open source advanced key-value store. It is often referred to as a data structure server since keys can contain strings, hashes, lists, sets and sorted sets.


# The pod will be in a pending state while the Docker Image is downloaded and until a Persistent Volume is available.
# Once complete it will move into a running state. 

- Monocular is a web UI for managing Kubernetes applications packaged as Helm Charts, it looks promising.
------------------------------------------------------------------------------------------------

kubernetes hosts
types of containers

This is your text editor. It’s connected to the filesystem on your server.

You will use it to create and edit files and and access them through the console.




possible states of a Pod replica:
- DESIRED
- CURRENT
- UP-TO-DATE
- AVAILABLE


https://cert-manager.io/

----------------------------------------------------------------------------------------------------------------------------------------------------------------------
 You can bootstrap a cluster as follows:

 1. Initializes cluster master node:

 kubeadm init --apiserver-advertise-address $(hostname -i)


 2. Initialize cluster networking:

 kubectl apply -n kube-system -f \
    "https://cloud.weave.works/k8s/net?k8s-version=$(kubectl version | base64 | tr -d '\n')"


 3. (Optional) Create an nginx deployment:

 kubectl apply -f https://raw.githubusercontent.com/kubernetes/website/master/content/en/examples/application/nginx-app.yaml


----------------------------------------------------------------------------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------------------------------------------------------------------------
kubernates objects:
- pod: smallest obect in k8s
- ReplicaSet
- Deployment
- namespaces
- services

http://www.collabnix.com
-----------------------------------------------------------------------------------------------------------------------------------------------------------------

git clone https://github.com/ajeetraina/kubernetes101/ && \
cd kubernetes101/install && \
sh bootstrap.sh


kubectl get nodes

kubectl get all

kubectl run nginx --image=nginx:latest --replicas=4 && \
kubectl get pods -w && \
kubectl expose deploy/nginx --port 80
