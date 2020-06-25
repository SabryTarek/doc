[Rancher](https://rancher.com/)
================================

Products:
RancherOS is a simplified Linux distribution built from containers, for containers. You can use it with Kubernetes or any other Container (Docker) Orchestration tool.

k3OS is built for the k3s Kubernetes distribution of Rancher designed for the edge (IoT etc). It is bound to Rancher's k3s Kubernetes distribution.


----------------------------------------------------------------------------------------------------------------------------------------------------------------------
[k3s]()
============
- Download
    - curl sFL https://get.k3s.io | sh -

- commands
    - k3s server
----------------------------------------------------------------------------------------------------------------------------------------------------------------------

until k3s kubectl get node 2>/dev/null | grep master | grep -q ' Ready'; do sleep 1; done; k3s kubectl get node



master:
- kube-apierver
- etcd
- kube-scheduler
- kube-controller-manager
- cloud-controller-manager

node:
- kubelet
- kube-proxy
- container runtime [docker]

server:
- apiserver
- SQLite
- scheduler
- controller-manager
- tunnel proxy

agent:
- 
- container runtime [containerd]




Arm7 -> Arm v7
Arm8 -> Arm v8


curl -sfL https://get.k3s.io | K3S_CLUSTER_SECRET=thisisverysecret sh -




k3s
kubectl
crictl
k3s-killall.sh
k3s-uninstall.sh