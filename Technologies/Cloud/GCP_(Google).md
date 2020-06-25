

-----------------------------------------------------------------------------------------------------------------------------

> Google Conference:
- Google Next
- Google IO


-----------------------------------------------------------------------------------------------------------------------------






> Google Cloud Platform:
- Google Cloud Console -> GUI
- Google Cloud shell -> CLI

-----------------------------------------------------------------------------------------------------------------------------


- Compute Engine -> IaaS
- App Engine -> PaaS
  - App Engine Standard Environment
  - App Engine Flexible Environment

-----------------------------------------------------------------------------------------------------------------------------




Cloud Shell is a Debian-based virtual machine with a persistent 5GB home directory, which makes it easy for you to manage your GCP projects and resources. The Cloud SDK gcloud and other utilities you need come pre-installed in Cloud Shell, which allows you to get up and running quickly.

Google Cloud Shell is a virtual machine that is loaded with development tools. It offers a persistent 5GB home directory and runs on the Google Cloud. Google Cloud Shell provides command-line access to your GCP resources.


The contents of your Cloud Shell home directory persists across projects between all Cloud Shell sessions, even after the virtual machine terminates and is restarted.




To attach a persistent disk to a virtual machine instance, both resources must be in the same zone. Similarly, if you want to assign a static IP address to an instance, the instance must be in the same region as the static IP.




gcloud help config = gcloud config --help




# gsutil:tool in Cloud Shell to manage Cloud Storage resources. This includes creating and deleting buckets and objects, copying and moving storage data, and managing bucket and object ACLs and transfer data in and out of your Cloud Shell instance.

-----------------------------------------------------------------------------------------------------------------------------
> [gcloud](https://cloud.google.com/sdk/gcloud/):
- gcloud auth list
- gcloud config list project
- gcloud config list
- gcloud config list --all
- gcloud compute instances create gcelab --zone us-central1-c
- gcloud compute disks create mydisk --size=200GB --zone us-central1-c
- gcloud compute instances attach-disk gcelab --disk mydisk --zone us-central1-c
- gcloud compute instances attach-disk gcelab --disk mydisk --device-name <YOUR_DEVICE_NAME> --zone us-central1-c
- gcloud compute ssh gcelab --zone us-central1-c
- 
-----------------------------------------------------------------------------------------------------------------------------


sudo mkfs.ext4 -F -E lazy_itable_init=0,lazy_journal_init=0,discard /dev/disk/by-id/scsi-0Google_PersistentDisk_persistent-disk-1
sudo mount -o discard,defaults /dev/disk/by-id/scsi-0Google_PersistentDisk_persistent-disk-1 /mnt/mydisk

-----------------------------------------------------------------------------------------------------------------------------

> gsutil:
- gsutil mb gs://<bucket_name>
- gsutil cp test.dat gs://<bucket_name>
-----------------------------------------------------------------------------------------------------------------------------


qwiklabs:
    - Google Cloud training
      - 353 quest


learning path -> Quest -> Lab
- Quest is a series of related labs that form a learning path. Completing this Quest earns you the badge above, to recognize your achievement. You can make your badge (or badges) public and link to them in your online resume or social media account.
-----------------------------------------------------------------------------------------------------------------------------

gcloud compute instances create gcelab --zone us-central1-c && gcloud compute disks create mydisk --size=200GB --zone us-central1-c



-----------------------------------------------------------------------------------------------------------------------------


https://cloud.google.com/compute/docs/regions-zones/

https://cloud.google.com/sdk/gcloud/

https://cloud.google.com/shell/docs/



-----------------------------------------------------------------------------------------------------------------------------


https://ibm.biz/Bd2F2B












network load balancers and HTTP load balancers












Install the Stackdriver Agents - Run the commands shown on screen in the SSH window to install the Stackdriver monitoring agent and Stackdriver logging agent for your instance.

Note: When you run gcloud on your own machine, the config settings persist across sessions. In Cloud Shell you need to set this for every new session or reconnection.



Instance Templates define the look of every virtual machine in the cluster (disk, CPUs, memory, etc).
Managed Instance Groups instantiate a number of virtual machine instances using the Instance Template.







cat << EOF > startup.sh
#! /bin/bash
apt-get update
apt-get install -y nginx
service nginx start
sed -i -- 's/nginx/Google Cloud Platform - '"\$HOSTNAME"'/' /var/www/html/index.nginx-debian.html
EOF

gcloud compute instance-templates create nginx-template --metadata-from-file startup-script=startup.sh
gcloud compute target-pools create nginx-pool
A target pool allows a single access point to all the instances in a group and is necessary for load balancing

gcloud compute instance-groups managed create nginx-group \
         --base-instance-name nginx \
         --size 2 \
         --template nginx-template \
         --target-pool nginx-pool

gcloud compute instances list

gcloud compute firewall-rules create www-firewall --allow tcp:80


Network load balancing allows you to balance the load of your systems based on incoming IP protocol data, such as address, port, and protocol type. You also get some options that are not available, with HTTP(S) load balancing. For example, you can load balance additional TCP/UDP-based protocols such as SMTP traffic. And if your application is interested in TCP-connection-related characteristics, network load balancing allows your app to inspect the packets, where HTTP(S) load balancing does not.




























https://blog.qwiklabs.com/study-jam-1/
Get Started
1s-cairo-8344

gs://UNIQ_ID
gs://<UNIQ_ID>  # by convintion UNIQ_ID = project name







-----------------------------------------------------------------------------------------------------------------------------
- gcloud compute instances create <vm_name> --zone <zone>



- cloud storage = object storage
- Cloud SQL
  - MySQL
  - Postgress
# files=blobs
- bucket conatin folders -> files



- developers Keynotes
aprile
- Google IO
- Google Next


- antos convert vm to container


google cloud > Google Cloud Platform







Cloud Shell (CLI)
Cloud Console (WebUI)
  Navigation menu
Cloud SDK (gcloud command)

Create and manage your Google Cloud Platform instances, disks, networks, and other resources in one place.


Run the Application Locally = deply it at Cloud Shell

App Engine app.yaml
  - describe an application's deployment configuration
  - if this file is not present, App Engine will try to guess the deployment configuration
  - To deploy your application into App Engine environment run: `gcloud app deploy`
  - at the first time you are deploying App Engine, the tool will prompt you to select a location to deploy the app (us-central)
  - When prompted, enter y to confirm deployment
  - First time deployment may take several minutes. Because App Engine Flexible environment automatically provisions a Google Compute Engine virtual machine for you behind the scenes, and then installs and starts the application
  - After the application deploys, you can visit it by opening the URL http://<project-id>.appspot.com === gcloud app browse

# Update the application to generate a UUID every time someone visits the page.
In this step, you updated your Node.js application without any downtime.



------------------------------------------
runtime: nodejs
env: flex
------------------------------------------
Learn More
Node.js on Google Cloud Platform: https://cloud.google.com/nodejs/
App Engine Documentation: https://cloud.google.com/appengine/
For Node.js examples: https://cloud.google.com/nodejs/samples







Global LoadBalancer



- 7 http

- 4 SSL

- 4 TCP

act as cloudflare







manageed same  resources

unmanageed differant resources





- firewall

- firewall rule



Google Cloud Source Repository === Github
- git remote repo === git host

`gcloud source repos create <REPO_DEMO>`

`gcloud source repos clone <REPO_DEMO>`





- [Digital Octions]
- [Linode]
- [google codelab]
- [Fedora Magazine]
- [Archwiki]
- [Debianwiki]
- []
- []
- []
- []
- []
- []
- []
- []
- []
- []
- []
- []
- []
- []
- []
- []
