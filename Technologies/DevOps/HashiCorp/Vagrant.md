vagrant
========
- vagrant
    - init  -> create vagrantfile
    - validate
    - up    -> 
    - ssh
        - -c "lsblk"
    - rdp
    - sudpend -> sleep
    - resume
    - halt -> shutdown
    - destroy -> remove
    - reload -> restaet
        - --provision
    - box
        - add
        - list
    - status
    - global-status [--prune]
    - login
    - share -> CEARTE link to share you work with other
    - connect
    - package -> make your box from virtial machine
    - plugin -> install plugins for vagrant
        - install
        - uninstall
        - list
        - 
    - snapshots -> restore point









* vagrant plugin install vagrant-share


---------------------------------------------------------------------------------------------

# -*- mode: ruby -*-
# vi: set ft=ruby :

Vagrant.configure(2) do |config|
  config.vm.box = "ubuntu/trusty64"

  config.vm.network "forwarded_port", guest: 80, host: 8080

  config.vm.provider "virtualbox" do |vb|
      vb.customize ["modifyvm", :id, "--memory", "768"]
      vb.customize ["modifyvm", :id, "--natdnshostresolver1", "on"]
      vb.customize ["modifyvm", :id, "--natdnsproxy1", "on"]
      # vb.name = "vagrant-box"
  end

  config.vm.provision "shell", path: "vm-bootstrap.sh"
end

