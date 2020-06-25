consul
======

- service registration and discovery
- health check
- key-value store


- Consul is a static binary written in Go

consul cluster:
- servers nodes
- agent nodes

- consul agent -dev -client=0.0.0.0
- In the development mode, the ui option is provided
- consul members
- Consul provides a rich HTTP API. The /catalog endpoint allows to register/deregister/list nodes and services. It listens on port 8500 by default
- curl localhost:8500/v1/catalog/nodes