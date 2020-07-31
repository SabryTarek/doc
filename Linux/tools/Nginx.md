Nginx
======

- event-driven = event based
- solve C10K problem -> C10K: concurrent 10000 request
- lightwghite
- bare metal low consuming
- for static content

- written by: Igor Sysoev




- Serving Static Content
- Reverse Proxy
- Load Balancer
- content cache
- API Gateway
- Web Application Firewall (WAF)







------------------------------------------------------------------------------------------------------------------------
> NginX CLI

nginx -s <Signal>
Signal:
- stop — fast shutdown
- quit — graceful shutdown
- reload — reloading the configuration file #before reload use: nginx -t -> Test The Configuration;
- reopen — reopening the ; files




EX: nginx -s stop


------------------------------------------------------------------------------------------------------------------------
> NginX Configurations File

Configurations Files:
-  -> Virtual Host Configurations File
- /etc/nginx/nginx.conf -> NginX Configurations File




-  namespaces EX: server
-  module
-  contexts
   -  each namespace have some blocks=directives
      -  directives = blocks


 - Main Context = Global Context



> Contexts:
- http {}
  - Server {}
- events {}
- mail {}



> directives:

- error_log
- access_log

- Personal Package Archive PPA
- source.list



- sites-available/
- sites-enabled/ -> symlinks to files in sites-available/ directory
  - default



> Resources:
- https://www.nginx.com/
- https://www.nginx.eg/
- [NGINX 3rd Party Modules](https://www.nginx.com/resources/wiki/modules/index.html)
- [NGINX Wiki](https://www.nginx.com/resources/wiki/)
------------------------------------------------------------------------------------------------------------------------








http {
    server {
        listen 80;
        server_name sabry.tarek.com

        access_log /var/log/access_sabry.log;
        error_log /var/log/error_sabry.log;

        root /var/www/html;
        index index.html;
    }
}



















> Minimal Configurations
- /etc/nginx/nginx.conf
- /etc/nginx/conf.d/ ->  every Virtual Host has configuration file in this directory like:
  - default.conf



http {
    server {
    }
}





http has one or more server


-----------------------------------------------------------------------------------------------------------------
std::cerr << "some error" << std::endl;



#include <stdexcept>
throw std::runtime_error("Unknown exception");
Omitting the ; in the last statement of a cell results in an output being printed
-----------------------------------------------------------------------------------------------------------------
> Apache

1998 one sever can host more than one website -> virtual host
- http -> 80
- https -> :443
- Redhat based -> httpd
- Debian based -> apache2
- var/www/html -> apache 
- /etc/httpd -> configration file 
- /etc/httpd/conf/httpd.conf -> main config file
- get / post
- proxy -> filter -> proxy server before the internet
- reverse proxy


configration
------------- 

configration :
- global configration (Listen{port} - RootServer{conf path} - include - user apache - group apache)
- main configration (ServerAdmin{admin mail} - ServerName - RootDirectory - Options indexes  followSymbolic -  DirectoryIndex Error Log{/var/log})
- virtual hosts configration ()


apache_manual

systemctl reload httpd reload configration files without downtime






- web server
- reverse proxy
which act as:
- load balancer
- caching layer
- forward proxy



------------------------------------------------------------------------------------------------------------------------------------------------------
Minimal configration

/etc/enginx/enginx.conf:

http {
  server {
    listen 80;
  }
}

events { }
------------------------------------------------------------------------------------------------------------------------------------------------------
http {

  server {
    listen 80;
    root /var/www/site;
    
    location /images {
      root /var/www/site;
    }

    location ~ .png {
      return 403;
    }

  }

  server {
    listen 8888;
    location / {
      
        proxy_pass http://localhost:8080/;
    }
    

    location /img {

        proxy_pass http://localhost:8080/images/;
    }
  }
}
events {}


------------------------------------------------------------------------------------------------------------------------------------------------------


NginX is an open source web server written in C and can also be used as a reverse proxy and a load balancer.

In this video, I want to go through the following topics in NginX

* What is NginX? 2:25
* Current & Desired Architecture 4:58
* Layer 4 and Layer 7 Proxying in Nginx 8:40
* Example 10:25
    * Install Nginx (mac) 13:30
    * Nginx as a Web Server 15:00 (webserver.conf)
        * Static context location root  20:00
        * regular expression 27:00
        * proxy pass 30:30
    * Nginx as a Layer 7 Proxy 33:30
        * Proxy to 4 backend NodeJS services (docker) 37:00
        * IP_Hash load balaning 43:00
        * Split load to multiple backends (app1/app2) 46:00 
        * Block certain requests (/admin) 49:00 
    * NGINX as a Layer 4 Proxy 51:30
    * Create DNS record 1:01:08
    * Enable HTTPS on Nginx (lets encrypt) 1:05:08
    * Enable TLS 1.3 on Nginx  1:14:00
    * Enable HTTP/2 on NGINX 1:17:10
* Summary 1:20:10




http {
    
    upstream allbackend {
        #ip_hash;
        server 127.0.0.1:2222;
        server 127.0.0.1:3333;
        server 127.0.0.1:4444;
        server 127.0.0.1:5555;
    }
    
    upstream app1backend {
        server 127.0.0.1:2222;
        server 127.0.0.1:3333;
    }

    upstream app2backend {
        server 127.0.0.1:4444;
        server 127.0.0.1:5555;
    }


    server {
          listen 80;
          listen 443 ssl http2;

          ssl_certificate /etc/letsencrypt/live/nginxtest.ddns.net/fullchain.pem;
          
          ssl_certificate_key /etc/letsencrypt/live/nginxtest.ddns.net/privkey.pem;

          ssl_protocols TLSv1.3;

          location / {

              proxy_pass http://allbackend/;
           }

         location /app1 { 
              proxy_pass http://app1backend/;
          }
        
        location /app2 {
              proxy_pass http://app2backend/;
         }
         
        location /admin {
          return 403;
        }          
     }



}

events { }



stream {
    
    upstream allbackend {
        server 127.0.0.1:2222;
        server 127.0.0.1:3333;
        server 127.0.0.1:4444;
        server 127.0.0.1:5555;
    }
    


    server {
          listen 80;
          proxy_pass allbackend;
 
     }



}

events { } 