openssl
========

> Encrypt:
openssl 
ase-256-cbc\
-a\
-salt\
-in plainText.txt\
-out chipherText.txt\

> Decrypt:
openssl 
ase-256-cbc\
-a\
-d\
-in chipherText.txt\
-out newPlainText.txt\


openssl aes-256-cbc -a -salt -in secrets.txt -out secrets.txt.enc

openssl aes-256-cbc -d -a -in secrets.txt.enc -out secrets.txt.new

openssl help




OpenSSL: One of the most popular commands in SSL to create, convert, manage the SSL Certificates
> Commands:

 - openssl -> open openssl interpreter
    - help








> Some of the abbreviations related to certificates:
- SSL – Secure Socket Layer
- CSR – Certificate Signing Request
- TLS – Transport Layer Security
- PEM – Privacy Enhanced Mail
- DER – Distinguished Encoding Rules
- SHA – Secure Hash Algorithm
- PKCS – Public-Key Cryptography Standards




Statistical Analisys:
- [SPSS]()
- [jasp](https://jasp-stats.org/)
- [GNU]




cryptography protocals:
- SSL – Secure Socket Layer
- TLS – Transport Layer Security



to make secured channel= connection betwwen Browser <-> Server we need to SSL Certificate
SSL Certificate:
    - Public Key
    - Private Key
    - CSR data file = CSR file


Steps:
1. CSR – Certificate Signing Request
    - output
        - Private-Key
            - Encrypt data with it
        - CSR File
            - Encrypted file with Private-Key, contain Data about my website: name - email - GeoLocation
2. send Private Key + CSR file to Cerificate Authorty(CA)=Cerificate Issuer Compony



qrljucker
beef
msvenomp