Ansible
=========
What makes it different from other management software is that Ansible uses (potentially existing) SSH infrastructure, while others (Chef, Puppet, ...) need a specific PKI infrastructure to be set up
- agentless
- serverless [doemonless]
- modules
- playbook -> yaml -> like Dockerfile's conventions help building modular playbooks, and housekeeping will be much simpler. Rubyists would call this
    "convention over configuration".



**ansible**

* (all | <group_name> | <host>) 
* -i [input file]{ansi_hosts}   => optional
* -m [module] command => Default
* -a [argument] "{ls -la"}
* -u [user] {root} ansible => default
* -s -> sudo
* -K -> uppercase -> ask for sudo password
* -b -> become root






**modules**
- ping -> connect check
- command -> run a command
- script -> run a script
- setup -> machine info
- -m copy -a 'src=/etc/motd dest=/tmp/'








**playbook.yml** -> ansible-playbook <playbook_script.yml> -i -l -t 



hosts:
tasks:
  - name:
  - module:
  - tags
  - 










 - hosts:
   remote-user: <user_name> {root}
 - vars:
 - tasks:
     - name: <task_name>
       module:
       tags: deploy #any word
    gather_facts: no -> to no run setup module before excuting the playbook
 - handler:
    - name: start nginx
      sevice:
   


  dnf: pkg=httpd state=installed update_cache=true
  file: dest=/etc/apache2/sites-enabled/000-default.conf state=absent
  file: src=/etc/apache2/awesome-app.conf dest=/etc/apache2/sites-enabled/awesome-app.conf state=link
  register: keyword records output from the module
  when:
    result|failed checks if the registered variable (result) contains a failed status
  ignore_errors: True
fail: msg="Configuration file is not valid. Please check that before re-running the playbook."
          when: result|failed

 INVENTORY

- host0.example.org ansible_host=172.19.0.2 ansible_user=root
- host1.example.org ansible_host=172.19.0.3 ansible_user=root
- host2.example.org ansible_host=172.19.0.4 ansible_user=root
- host0.example.org ansible_host=192.168.0.12 ansible_port=2222

ansible_host is a special variable that sets the IP ansible will use when trying to connect to this host.

    ansible_user is another special variable that tells ansible to connect as this user when using ssh. By default ansible would use your
    current username, or use another default provided in ~/.ansible.cfg (remote_user)











    interactive command line tutorials :-
    - nutsh -> nut shell




**roles**
role's conventions help building modular playbooks, and housekeeping will be much simpler. Rubyists would call this
    "convention over configuration".


-------------------------------------------------------------------------------------------------------------------

- ansible Galaxy
- ansible tower <-> ansible AWX



present if droplet found don't 




ansible-playbook <playook_name> --extra-vars="site"

sudo dnf install python-dopy  
pip install dopy
pip install -r requirements.txt
python -m #SimpleHTTPServer








 يمكنك استعماله من المصدر تحت اسم

Awx

وهناك صورة رسمية على docker hub
فقط شغل الحاوية
Manage