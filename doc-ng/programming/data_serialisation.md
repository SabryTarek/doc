Data Serialization
==================
Serialization: convert a data structure to binary format and stream it across whatever platforms you have

Serialization Deserialization API in multiple languages

> Usages:
- storage
- transimssion data over a network

> types:
- XML (schema: DTD)
- JSON (JavaScript Object Notation) (schema: jsonschema)
- YAML
- CSV (Comma Separated Values)
- ini
- protobuf (protocal buffer) make by google (open source)





- how to make sure the deserialize data structure uses the same types as the original one
- how not to break programs when you need to change the format
- how to make the process fast (perfomance)





------------------------------------------------------------------------------------------------
JSON Schema
============
- usages:
    - validation
        - forms
        - data from a clinet before send it to the server
        - APIs
    - generate forms


- always used as a middleware
- best validator implemented in JS is [ajv](https://ajv.js.org/) 

what can  we validate:
    - types
    - Ranges & Sizes & Lenghs
    - Container Contents
    - Form
    - Highre-Order Operators



- JSON parser
- JSON linter

- JSON schema parser
- JSON schema linter
to use your schema in JSON:

> every Schema object has:

- "$schema": "http://www.json-schema.org/draft-04/schema#"
- "$id": "http://example.com/root.json", 
- "title": STRING
- "description": STRING
- *"type": STRING
- "required": ARRAY
- "additionalProperties": BOOLEAN
- "properties": OBJECT


> every element in properties array whatever its type (All datatypes):
- "$id": "#/properties/checked"
- *"type": "" | *"type": ["number", "string"]
- "disallow": STRING -> The reverse of 'type', used to exclude datatypes
- "title": STRING
- "description": STRING
- "default": STRING
- "examples": ARRAY
- "readOnly": BOOLEAN
- "writeOnly": BOOLEAN
- "required": BOOLEAN
- "enum": [ 2, "foo", {"foo": "bar" }, [1, 2, 3] ]
- "const": "foo"
- {
    "type": "integer",
    "minimum": 1,
    "maximum": 1000,
    "if": { "minimum": 100 },
    "then": { "multipleOf": 100 },
    "else": {
        "if": { "minimum": 10 },
        "then": { "multipleOf": 10 }
    }
    }
- {
    "not": {
        "items": {
            "not": { "type": "string" }
        }
    }
}valid: ["a"], [1, "a"], any array containing at least one string




------------------------------------------------------------------------------------------------
> types:

> string:
- "minLength": INTEGER
- "maxLength": INTEGER
- "pattern": REGEX
- "format": INTEGER
    - standard possible values include:
        * date-time (YYYY-MM-DDThh:mm:ssZ in UTC)
        * date (YYYY-MM-DD)
        * time (hh:mm:ss)
        * utc-millisec (int or float, usec since the epoch)
        * regex (ECMA 262/Perl 5/standard JS)
        * color (CSS 2.1 color value)
        * style (a CSS style definition)
        * phone (in E.123 format)
        * uri
        * email
        * ip-address
        * ipv6
        * host-name
- "formatMaximum": STRING
- "formatMinimum": STRING
- "formatExclusiveMaximum": BOOLEAN
- "formatExclusiveMinimum": BOOLEAN

> number:
- "minimum": NUMBER
- "maximum": NUMBER
- "exclusiveMinimum": BOOLEAN
- "exclusiveMaximum": BOOLEAN
- "multipleOf": NUMBER

> integer:

> boolean:

> object:
- "minProperties": INTEGER
- "maxProperties": INTEGER
- "additionalPropereties": BOOLEAN
- "required": ARRAY
- "patternProperties": REGEX
- "properties": OBJECT
- "propertyNames": { "format": "email" }


> array:
- "minItems": INTEGER
- "maxItems": INTEGER
- "uniqueItems": BOOLEAN
- "additionalItems": BOOLEAN
- "List Validation": LIST / TUPLE / EMPTY
- "items": OBJECT
- "contains": { "type": TYPE } -> The array is valid if it contains at least one item that is valid according to this schema.
> null:

> any:

------------------------------------------------------------------------------------------------
ajv
===
- npm i ajv
- ajv-keywords: Custom JSON-Schema keywords for Ajv validator

> API
- new Ajv(Object options) -> Object //Create Ajv instance.
- .compile(Object schema) -> Function<Object data>

------------------------------------------------------------------------------------------------
"json.schemas": [
    {
        "fileMatch": [
            "/.babelrc"
        ],
        "url": "http://json.schemastore.org/babelrc"
    }
------------------------------------------------------------------------------------------------
protobuf (protocal buffer)
==========================

syntax = "proto3";

massage SearchRequest {
    required string quary = 1;
    optional int32 page_number = 2;
    optional int32 result_per_page = 3; [defult = 10]
    enum Corpus {
        UNIVERSAL = 0;
        WEB = 1;
        LOCAL = 2;
        NEWS = 3;
        SPORTS = 4;
    }
    optional Corpus corpus = 4 [defult = UNIVERSAL]
}



massage SearchResponse {
    repeated Result result = 1;

    massage Result {
    required string url = 1;
    optional string title = 2;
    required string snippets = 3;
    }
}

- massage
- enum
- ;
- required
- optional
- repeated -> entend
- datatypes:
    - string
    - int16
    - int32
    - int64
- [defult = 3]
- alias number indecators


------------------------------------------------------------------------------------------------
yaml
====

---
# A list of tasty fruits
fruits:
    - Apple
    - Orange
    - Strawberry
    - Mango
...

A dictionary is represented in a simple key: value form (the colon must be followed by a space):

# An employee record
martin:
    name: Martin D'vloper
    job: Developer
    skill: Elite
------------------------------------------------------------------------------------------------

toml
====
.toml

key = ""
sections
----------------------------------------------------------------
[[source]]
url = "https//www.pypi.org/simple"
ssl_verify = true
name = "pypi"

[packages]
requests = "*"
[dev-packages]


[requires]
python_version = "3.7"


---------------------------

rq
jsonp
bson
apache avro
msgpack