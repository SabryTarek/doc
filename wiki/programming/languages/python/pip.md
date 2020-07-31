pip is a recursive acronym for "pip installs packages".
That old joke still cracks me up :p
same like GNU and WINE


Pipenv vs. Poetry

pipfile



pipenv
activate: pipenv shell
pipenv inside pipenv: pipenv run
- pipfile
- pipfile.lock


the recommended tool from Python.org
- pipenv install <package_name> [--dev]
- pipenv uninstall <package_name>
- pipenv shell
- pipenv run
- exit
- pipenv lock -r
- pipenv --rm
- pipenv --python 3.6
- pipenv --venv
- pipenv check
- pipenv graph
- pipenv lock
- pipenv --ignore-pipefile

--upgrade or -U
--user <spacifice_linux_user>
pip install --user conan

os.environ["PASSWORD"]
- pipenv install --update  <package_name>

environment.yml


----------------------------------------------------------------------------------------------------------------------------------------------
pinning a dependency:

flask==0.12.1
Pinning the flask dependency to a specific version ensures that a pip install -r requirements.txt sets up the exact version of flask you used during development

dependencies
    sub-dependencies


https://pypi.org/



----------------------------------------------------------------------------------------------------------------------------------------------
pipenv use - virtualenv also  pipenv wraps virtualenvs
- virtualenv <env_name> === python3 -m venv <env_name>  === pipenv  === CondaEnv

- virtualenv -p python3<env_name
- source <env_name>/bin/activate
- deactivate
/lib/site-packages/