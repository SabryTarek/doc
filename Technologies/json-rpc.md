[JSON-RPC](https://www.jsonrpc.org/)
====================================

Request:
{
    "jsonrpc": "<version>",
    "method": "<method_name>",
    "params": ["<pram1>", "<pram2>", ...],
    "id": <id_number>
}
EX:=> {"jsonrpc": "2.0", "method": "ask", "params": ["Could you tell me about JSON RPC"], "id": 1}


{
    "jsonrpc": "<version>",
    "result": "<response>",
    "id": <id_number>
}
EX:=> {"jsonrpc": "2.0", "result": "Sure thing. JSON RPC is a remote procedure call specification. It allows remote execution of a function. Even on another context, such as in a different language or even a different server around the world. It's a simpler alternative to SOAP and JSON format is more concrete than XML", "id": 1}






{"jsonrpc": "2.0", "method": "ask", "params": ["Could you tell me about JSON RPC"], "id": 1}
{"jsonrpc": "2.0", "result": "Sure thing. JSON RPC is a remote procedure call specification. It allows remote execution of a function. Even on another context, such as in a different language or even a different server around the world. It's a simpler alternative to SOAP and JSON format is more concrete than XML", "id": 1}