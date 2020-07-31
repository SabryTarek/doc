[varnish](https://varnish-cache.org/)
=====================================

> Brief:
    - reverse proxy web accelerator
    - written in C
    - designed to improve the HTTP performance by using server-side caching

> Table of Content:
    - how varnish works
    - spin up a varnish docker container
    - set up an HTTP and https varnish configuration
    - talk about the pros and cons of this tech



Varnish Open Source
VarnishPlus 

VCL (Varnish Configuration Language)








## Referances:

> [Hussein Nasser](https://www.youtube.com/watch?v=-cWs6eoyaLg)
    - Classic HTTP Architecture 1:53
    - How Varnish Works 3:50
    - Demo HTTP 7:50
    - Demo HTTPS 18:23
    - Varnish Pros 28:43 
    - Varnish Cons 39:26


Varnish works as a layer 7 reverse proxy
why did I insert layer 7 there 
    because it's an application reverse proxy so it works at the application level
     and guess what if you're in an application level you have to look at the data to understand what's going on right because well we're caching right 
     [for caching something we're looking at the HTTP content it cannot be encrypted I cannot cache encrypted stuff it's useless right so what do we do is basically varnish design is works only an HTTP unencrypted HTTP right] so that sounds scary but we're gonna get to it right so so that's why I said layer seven reverse proxy and not layer four because you cannot really do much caching layer four right and I'm gonna reference a video between layer seven layer four load balancers and proxies



 how does it cache a cache by default anything that is get requests if you make a get request it will look at that okay give the course are very semantically it's cashable because it's unimportant because they are safe right and we made a video so hope to get vs pose I'm gonna reference it here guys so you can just give the idea of what is the difference between get and post but I'm like post requests they cannot be cached because they are not coding code safe right it can also prefetch the comment says hey you just made index dot HTML most of



  you can essentially see the entire stack[Caddy -> Varnish -> Express] in the HTTP headers
    because varnish actually rewrites the header add stuff changes stuff
that's one of the features of of varnish because it's just basically it's a reverse proxy and proxies can change the headers if it is a layer 7 proxy



get have no body
get have prameter maximum 2000 byte



-----------------------------------------------------------------------------------

Varnish is a reverse proxy web accelerator   Written in C designed to improve HTTP performance by using server side caching. 

In this video I’m going to go through how Varnish works, we will spin up a Varnish docker container and finally talk about the pros and cons of this tech. 

Agenda

* Classic HTTP Architecture
* How Varnish Works?
* HTTP Setup - Varnish
* HTTPS Setup - Varnish with Caddy as TLS Terminator.
* Varnish Pros & Cons
* Summary

Pros
* Cache & prefetching documents
* Resolve DNS hostnames in documents 
* Rewrite scripts to optimize code
* Load Balancing 
* Backend Connection Pooling
* Varnish Modules (VMODS, e.g. rewrite headers) 
* Edge side includes (personalized dynamic page)


Cons
* Cache Invalidation
* Only works on unencrypted HTTP
* For HTTPS frontend, terminate TLS
* For HTTPS backend, no solution in Varnish open source
* Can’t cache POST requests (e.g. GraphQL queries)
* HTTP/2 backends won’t benefit


docker commands

docker run --name varnish -p 8080:80 varnish

docker cp default.vcl varnish:/etc/varnish


default.vcl

vcl 4.0;

backend default {
  .host = "husseinmac";
  .port = "2015";
}





timecodes
Classic HTTP Architecture : 1:53
How Varnish Works 3:50
Demo HTTP 7:50
Demo HTTPS 18:23
Varnish Pros 28:43 
Varnish Cons 39:26

Cards:
Connection Pooling 2:15 https://www.youtube.com/watch?v=GTeCt...
Layer 4 vs Layer 7 Load balancing  6:25 https://www.youtube.com/watch?v=aKMLg...
GET vs POST 6:48  https://www.youtube.com/watch?v=K8HJ6...
Postgres NodeJS Chrome 8:23 https://www.youtube.com/watch?v=0JNq4...
Redis 46:13 https://www.youtube.com/watch?v=sVCZo...
TLS Termination 49:35 https://www.youtube.com/watch?v=H0bkL...
 

Resources 
edge side includes
https://www.fastly.com/blog/using-esi...
Cache invalidation varnish
https://www.smashingmagazine.com/2014...
Varnish Doc
https://varnish-cache.org/docs/