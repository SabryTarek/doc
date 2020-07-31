JWT
========

> JWT (Json Web Token) -> using React, Vue
    header.payload.signature
JWT.IO allows you to decode, verify and generate JWT



    [HEADER].[PAYLOAD].[SIGNATURE]
[PAYLOAD] contain [CLAIMS]: user details and additional metadata 
base64URL
header
{
    "alg": "HS256",
    "typ": "JWT"
}


HMACSHA256
    (
        base64UrlEncode(HEADER) 
            + "." +
                 base64UrlEncode(PAYLOAD),
                     secret
                        )


npm i -g jsonwebtoken