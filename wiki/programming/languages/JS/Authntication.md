> passport
    - Local Strategy -> use local database
> OAuth -> authentication with [facebook, google, github, twitter, ...]

> JWT (Json Web Token) -> using React, Vue
    header.payload.signature
JWT.IO allows you to decode, verify and generate JWT


# don't save password in database as a plain text you should cipher it by bcryptjs module in node



install dependancies
- npm i express ejs express-ejs-layouts mongoose passport passport-local - bcryptjs connect-flash express-session

start
test
dev
process.env.PORT

refactor C-.



Could make a topic about refresh tokens, blacklisting,



Cookie Based_Authentication
- server create active session in database
- places a cookie on the browser with the session ID that matches the active session in the database




cookie based authentication is stateful why because the authentication records must be kept both to the server and on the client side so the server


when the user logs out of the application and the session is destroyed both on the server so this active session database is destroyed as well as this cookie over here on the client side is destroyed as well







server sends this token just as it would send any other data so there is nothing special about this so it's just a long piece of string

the client receives this token and now it needs to store it somewhere on the client side now the most common place is the local storage but the tokens can also be stored in  the session storage or even a cookie as well which could bring some confusions to the talking based authentication cookie based education because even the Tokyo based authentication can be stored in a cookie as well






Authentication:
- Cookie_Based
    - Session_ID
        - UUID.v4()
- Tokken_Based
    - Signed_Tokken

Protected Resources

singualr Domain VS. SubDomain