OpenStack https://openstack.org/
================

Introduction to OpenStack Edx Linux Foundation
https://www.edx.org/course/introduction-to-openstack?fbclid=IwAR2n8idyKOI-nSIjAvXGRWFoWAyd4IYZHfJoeAGly1F_UBp5Sk9bHXjO4ME



Redhat-based -> RDO (RedHat Distribution of OpenStack) developed tool called packstack which is used a puppet manifest to download and configure all openstack Servicies
Ubuntu-based -> DevStack

-------------------------------------------------------------------------------------------------------------------------------------------------------------


systemctl disable firewalld
systemctl stop firewalld

systemctl disable NetworkManger
systemctl stop NetworkManger

systemctl enable network
systemctl start network

dnf install centos-release-openstack-<opensack_version>
dnf update -y
dnf install openstack-packstack
packstack --allinone

cat ketstonecr_admin

export OS_USERNAME=admin
export OS_PASSWORD=sklgs;nz;k43
export OS_AUTH_URL=http://10.0.2.15:5000/v2.0
-------------------------------------------------------------------------------------------------------------------------------------------------------------
Ubuntu OpenStack installer

sudo apt-add-repository ppa:cloud-installer/testing
sudo apt-get update
sudo apt-get install openstack

sudo openstack-install

- *Single Install
- Multi Install
- Landscape
-------------------------------------------------------------------------------------------------------------------------------------------------------------


instanace



1. pull vm image to glance (image seervice)
2. flavor (template service) [RAM - VCPU - Disk]
3. virtual network -> ip subnet



-------------------------------------------------------------------------------------------------------------------------------------------------------------

OpenStack Arhitecture
OpenStack Servicies (Component)

- Horizon (dashboard)
- KeyStone (Auth)
- Glance (image Registry)
- Nova (Compute Engine) depend on KVM/LibVirt API
- Neutron (Network Manager)
- Cinder (block storage)
- Swift (object storage)
-------------------------------------------------------------------------------------------------------------------------------------------------------------


Cloud Computing

openstack-based cloud solutions

Cloud computing VS virtualization