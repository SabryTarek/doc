traefik
=============

sudo mkdir /opt/traefik



cat << EOF > /opt/traefik/traefik.toml
debug = false

logLevel = "ERROR"
defaultEntryPoints = ["http"]

[entryPoints]
  [entryPoints.http]
  address = ":80"

[api]

[docker]
endpoint = "unix:///var/run/docker.sock"
domain = "domain.com"
watch = true
exposedByDefault = false
EOF




sudo docker run -d --name traefik -p 8080:8080 -p 80:80 \
-v /opt/traefik/traefik.toml:/etc/traefik/traefik.toml \
-v /var/run/docker.sock:/var/run/docker.sock \
traefik

sudo docker volume create portainer_data
sudo docker run -d --name portainer -p 9000:9000 \
-v /var/run/docker.sock:/var/run/docker.sock \
-v portainer_data:/data \
-l traefik.enable=true \
-l traefik.frontend.rule=Host:portainer.domain.com \
-l traefik.port=9000 \
-l traefik.protocol=http \
portainer/portainer





---------------------------------------------------------------------------------------------------------------------------------------------------------------
[portainer](https://portainer.io)
=================================

docker volume create portainer_data &&\
docker run -d -p 8000:8000 -p 9000:9000 -v /var/run/docker.sock:/var/run/docker.sock -v portainer_data:/data portainer/portainer




- portainer
- traefik
- pi hole
- netdata