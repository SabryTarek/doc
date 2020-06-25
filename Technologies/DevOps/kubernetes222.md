--------------------------------------------------------------------------------------------------------------
kubectl:
  - version
    - The client version is the kubectl version
    - the server version is the Kubernetes version installed on the master
    - You can also see details about the build

  - run -> creates a new deployment: kubectl run kubernetes-bootcamp \
            --image=gcr.io/google-samples/kubernetes-bootcamp:v1 \
            --port=8080
            --replicas 3
     We need to provide:
      - deployment name
      - app image location OR the full repository url if the images hosted outside Dockerhub
      - We want to run the app on a specific port so we add the --port parameter
        # when you create a new deployment this performed a few things for you:
          - searched for a suitable node where an instance of the application could be run (we have only 1 available node in minikube)
          - scheduled the application to run on that Node
          - configured the cluster to reschedule the instance on a new Node when needed

  - kubectl cluster-info -> Kubernetes master is running at https://172.17.0.5:8443
                            KubeDNS is running at https://172.17.0.5:8443/api/v1/namespaces/kube-system/services/kube-dns:dns/proxy
                            
  - kubectl get nodes -> shows all nodes that can be used to host our applications


- kubectl create pod <pod_name> --namespace <namespase>


------------------------------------------------------------------------------------------------------------------------------
The most common operations can be done with the following kubectl commands:
===========================================================================

* kubectl get - list resources
  - all
  - nodes
  - pods
  - deployments
  - namespaces
  - services = svc
  - secrets
  - persistentvolume

* kubectl describe - show detailed information about a resource
    - nodes
    - pods -> view what containers are inside that Pod and what images are used to build those containers
    - deployments
# The describe output is designed to be human readable, not to be scripted against.


* kubectl logs - print the logs from a container in a pod

* kubectl exec - execute a command on a container in a pod

# Those commands will help you see when applications were deployed, what their current status is, where they are running and what their configuration is.
------------------------------------------------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------------------------------





























proxy (kubectl proxy)
=====================
# Recall=remember that Pods are running in an isolated, private network - so we need to proxy access to them so we can debug and interact with them

# The kubectl command can create a proxy that will forward communications into the cluster-wide, private network. The proxy can be terminated by pressing control-C and won't show any output while its running.

- kubectl proxy

# now we have a connection between our host (the online terminal) and the Kubernetes cluster. The proxy enables direct access to the API from these terminals.

# You can see all those APIs hosted through the proxy endpoint, now available at through http://localhost:8001. For example, we can query the version directly through the API using the curl command:
- curl http://localhost:8001/version
- curl http://localhost:8001/api/v1/namespaces/default/pods/$POD_NAME/proxy/
# The API server will automatically create an endpoint for each pod, based on the pod name, that is also        accessible through the proxy.

# First we need to get the Pod name, and we'll store in the environment variable POD_NAME:
- export POD_NAME=$(kubectl get pods -o go-template --template '{{range .items}}{{.metadata.name}}{{"\n"}}{{end}}') echo Name of the Pod: $POD_NAME

# Now we can make an HTTP request to the application running in that pod:

- curl http://localhost:8001/api/v1/namespaces/default/pods/$POD_NAME/proxy/
- 
# The url is the route to the API of the Pod.

# Note: Check the top of the terminal. The proxy was run in a new tab (Terminal 2), and the recent commands were executed the original tab (Terminal 1). The proxy still runs in the second tab, and this allowed our curl command to work using localhost:8001.
------------------------------------------------------------------------------------------------
Nodes
=====
# Pods always run on Nodes.
# A Node is a worker machine in Kubernetes and may be a VM or a physical machine, depending on the cluster.
# Each Node runs Pods and is managed by the Master.
# On a Node you can have multiple pods.
# The scheduling of Pods is performed automatically by the Master and this depend on the available resources on the Nodes.

Every Kubernetes Node runs at least:
- A container runtime (like Docker, rkt): that will take care of pulling all your containers from a registry
- Kubelet: that acts as a bridge between the Kubernetes Master and the Nodes; it manages the Pods and the containers running on a machine
# Kubelet is a kubernetes doemon
------------------------------------------------------------------------------------------------
Logs (kubectl logs <pod_name> <container_name:optional>)
========================================================

# Anything that the application would normally send to STDOUT becomes logs for the container within the Pod. We can retrieve these logs using the kubectl logs command:

- kubectl logs $POD_NAME

# Note: We don’t need to specify the container name, because we only have one container inside the pod.
------------------------------------------------------------------------------------------------
exec (kubectl exec <pod_name> <commend>)
========================================

# We can execute commands directly on the container once the Pod is up and running. For this, we use the exec command and use the name of the Pod as a parameter. Let’s list the environment variables:

- kubectl exec $POD_NAME env

# Again, worth mentioning that the name of the container itself can be omitted since we only have a single container in the Pod.

# Next let’s start a bash session in the Pod’s container:

- kubectl exec -ti $POD_NAME bash

# Remember that you need to specify the container name in case you have multiple containers on the Pod

# We have now an open console on the container where we run our NodeJS application. The source code of the app is in the server.js file:

- cat server.js

``` javascript

var http = require('http');
var requests=0;
var podname= process.env.HOSTNAME;
var startTime;
var host;
var handleRequest = function(request, response) {
  response.setHeader('Content-Type', 'text/plain');
  response.writeHead(200);
  response.write("Hello Kubernetes bootcamp! | Running on: ");
  response.write(host);
  response.end(" | v=1\n");
  console.log("Running On:" ,host, "| Total Requests:", ++requests,"| App Uptime:", (new Date() - startTime)/1000 ,"seconds", "| Log Time:",new Date());
}
var www = http.createServer(handleRequest);
www.listen(8080,function () {
    startTime = new Date();;
    host = process.env.HOSTNAME;
    console.log ("Kubernetes Bootcamp App Started At:",startTime, "| Running On: " ,host, "\n" );
});
```
# You can check that the application is up by running a curl command:

- curl localhost:8080

# Note: here we used localhost because we executed the command inside the NodeJS container

# To close your container connection type exit.
------------------------------------------------------------------------------------------------










defenation file:




"createTestNamespace.yaml"
==========================
kind: pod
apiVersion: v1
metadata:
    name:mypod
    **namespace: test**
    label:
        name:mypod
spec:
    container:
        name:mypod
        image:nginx

- kubectl apply -f createMypod.yaml
------------------------------------------------------------------------------------------------


##################################################################################################################################################
[Kubernetes in Arabic by Zyaad Qasem](https://www.youtube.com/playlist?list=PLCsn73jgrZ7cfrxxA5NU65G90-v9k8otq)
===============================================================================================================
> index:
- Kubernetes / Replicasets
- Kubernetes Dashboard: minikube dashboard
- Kubernetes scaling up/down
- Kubernetes deployment
    - rolling update [rollup - rollback] => one at a time


  - install Kubernetes [single-node - multi-nodes]
    - minikube
    - minishift
    - kubedum
      - 
    - k3s
    - microkube

- Kubernetes Objects===Resources
  - Cluster
  - Node [master===manager - worker===slave]
  - Deployment
  - ReplicaSet
  - Pod
  - Container
  - 
  - Service
  - namespace
  - secret
  - configmap
  - operator
  - 



kubectl: kubectl <command> [options] <object> <object-name>
  * get - list resources
    - all
    - nodes
    - pods
    - deployments
    - namespaces
    - services
    - secrets
    - persistentvolume
  - run
  - describe
  - exec -it
  - create --filename=<file_name>.yaml --record=true
  - delete [pods]
  - replace -f <file_name>.yaml
  - aplay -f <file_name>.yaml
  - scale --replicas=6 replicaset my-replicaset
  - rollout histoy deployment/myapp-deployment
  - rollout undo deployment/myapp-deployment --to-revision 1
  - port-forward deployments/myapp-deployment 3000
  - port-forward pods/myapp-pod 3000





---
  aoiVesion: v1
  kind: Pod
  metadata:
    name: first-pod-dec
    lables:
      app: myapp
      type: restapi
  spec:
    containers:
      - name simple-api
        image: zqasem/simple-api:2.3
---
apiVesion: apps/v1

kind: ReplicaSet

metadate:
  name: myapp-replicaset

spec:
  template:
    metadata:
      name: first-pod-dec
      lables:
        app: myapp
        type: restapi
    spec:
      containers:
        - name simple-api
          image: zqasem/simple-api:2.3
  replicas: 4
  selector:
    matchLables:
      app: myapp
      type: restapi
---
apiVesion: apps/v1

kind: Deployment

metadate:
  name: myapp-replicaset

spec:
  template:
    metadata:
      name: first-pod-dec
      lables:
        app: myapp
        type: restapi
    spec:
      containers:
        - name simple-api
          image: zqasem/simple-api:2.3
  replicas: 4
  selector:
    matchLables:
      app: myapp
      type: restapi
---











---
apiVersion:
kind:
metadata:
spec:
---




devops school