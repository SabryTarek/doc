MonogoDB
=========
- Record(Row) -> Document 
- Table -> Collection
- column -> field
- database -> database


- db -> pointer at current database
- if you use a database not exits mongo will create it for you
- if you don't use(select) any database it will pointer to "test" database 
- 



- use <database_name>
- show dbs collections users profile
- db.<collection_name>
    - .insert({"name": "sabry", "age": 21})
    - .find()
    - .remove()
if you alert function name in javascript the output will be function implementation
- monoDB use JSON=hash_table as a data structure for eveything
- 
- embedded object: object as a value for key in parent object
- embedded document: Document as a value for key in parent Document


Bulk insert
_id default timestamp node_id


store javascript function in db
projection

query operator


https://university.mongodb.com/


https://drive.google.com/drive/u/0/folders/0B0iHvGB3pLQjeEo1T0pORkNjTXc





- driver = connector -> mongodb

.pretty()









C-n -> new window
C-N -> new incognito window



> Cloud

- mlab - community
- Atlas -> official

> GUI

- compass -> official
- Robo





mongoose
=========

> Driver connection




// MongoDB
const mongoose = require("mongoose")
const db = require("./config/keys").MongoURI

mongoose.connect(db, { useNewUrlParser: true })
    .then(() => console.info("connected ..."))
    .catch((err) => console.error(err))
---------------------------------------------------------------------------------------
> Schema

const mongoose = require("mongoose");
const userSchema = mongoose.Schema({
  name: {
    type: string,
    required: True
  },
  email: {
    type: string,
    required: True
  },
  password: {
    type: string,
    required: True
  },
  data: {
    type: string,
    required: True,
    default: Date.now
  }
});


const User = mongoose.model("User", userSchema)
module.exports  = User

---------------------------------------------------------------------------------------
> model
---------------------------------------------------------------------------------------
> functions


- find({}, )
- findById()
---------------------------------------------------------------------------------------
