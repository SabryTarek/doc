envoy
=====

Lyft
written in C++

config file: .yaml

front proxy topology




front proxy topology

$ git clone https://github.com/envoyproxy/envoy
$ cd envoy/examples/front-proxy

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Envoy is an open source edge and service proxy, designed for cloud-native applications
allowing you to forward traffic to different destinations

You will learn how to:

Configure Envoy Proxy to forward traffic to external websites.

Configure Envoy Proxy to forward traffic to Docker Containers.

Perform path-based routing for controlling traffic destination.

Once the Envoy proxy is in place, it can be extended to support load balancing, health checking and metrics. These are discussed in more advanced scenarios.
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


Static Configuration API (yaml): all the settings are pre-defined within the configuration. -> static_resources:
Dynamic Configuration: allows the settings to be discovered via an external source.


Each Listener has a set of filters, and different Listeners can have a different set of filters.
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Envoy has the following three deployment models

1. Front Proxy: Envoy acts as the primary load balancer for customer requests from the public internet. This deployment style is also called an edge proxy or a load balancer.

2. Service Mesh: Envoy acts as the primary load balancer for requests between internal services. By co-locating Envoy with our code, we can let Envoy handle the complexities of the network.
 This makes service-to-service communication safer and more reliable, while alleviating the need to re-implement this functionality within each service.

3. Sidecar: A basic Service Mesh uses Envoy sidecars to handle outbound traffic for each service instance. This allows Envoy to handle load balancing and resilience strategies for all internal calls, as well as providing a coherent layer for observability. Services are still exposed to the internal network, and all network calls pass through an Envoy on localhost.



front envoy -> envoy sidecar

“Front Envoy” is the edge proxy in our setup where you would usually do TLS termination, authentication, generate request headers, etc…


----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Envoy configuration majorly consists of:
    1. Listeners
    2. Routes
    3. Clusters
    4. Endpoints
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



python -mSimpleHTTPServer & # Start a HTTP server on port 8000
wget https://gist.githubusercontent.com/jvns/340e4d20c83b16576c02efc08487ed54/raw/1ddc3038ed11c31ddc70be038fd23dddfa13f5d3/envoy_config.json
docker run --rm --net host -v=$PWD:/config envoyproxy/envoy /usr/local/bin/envoy -c /config/envoy_config.json