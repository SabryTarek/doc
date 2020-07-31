Teraform (infrastructure as a code) [IAC]
=========================================

- an open source tool that codifies APIs into declarative configuration files that can be shared amongst team members, treated as code, edited, reviewed, and versioned. In these nine hands-on labs, you will work with example templates and understand how to launch a range of configurations, from simple servers, through full load-balanced applications.

Supported providers:
- AWS Amazion web service
- Microsoft Azure
- GCP Google Coud Plateform
- Digitalocean
- Openstak
- baremetal
- vmware

- HCL: Hachicorp Configuration Language
- .tf
- Terraform enterprice version

- write
- pan
- create

files:
- providers.tf
- variables.tf
- terraform.tfvars
- main.tf

commands:
- terraform init -> download refed plugins(like provider.digitalocean)
- terraform plan
- terraform apply


sed "s/web1/web2/g" web1.tf > web2.tf



Providers:
every Provider has its Resources(services)
Resources:



Blocks:
- 


Common commands:
-    apply              Builds or changes infrastructure
    console            Interactive console for Terraform interpolations
-    destroy            Destroy Terraform-managed infrastructure
    env                Workspace management
    fmt                Rewrites config files to canonical format
    get                Download and install modules for the configuration
    graph              Create a visual graph of Terraform resources
    import             Import existing infrastructure into Terraform
-    init               Initialize a Terraform working directory
    output             Read an output from a state file
-    plan               Generate and show an execution plan
-    providers          Prints a tree of the providers used in the configuration
    push               Upload this Terraform module to Atlas to run
    refresh            Update local state file against real resources
-    show               Inspect Terraform state or plan
    taint              Manually mark a resource for recreation
    untaint            Manually unmark a resource as tainted
    validate           Validates the Terraform files
-    version            Prints the Terraform version
    workspace          Workspace management
All other commands:
    debug              Debug output management (experimental)
    force-unlock       Manually unlock the terraform state
    state              Advanced state management