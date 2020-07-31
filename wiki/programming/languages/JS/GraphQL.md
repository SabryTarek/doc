GraphQL server
===============
- graph ql schema
- data loader



GraphQL Server
GraphQL Client
express-generator 

express-graphql //=> connector between express and graphql to send & recive data through GraphQL



create the entry point for any
client that wants to interact with graph
QL on our server so we can say app dot
use slash graph QL and then the second
parameter will actually be Express graph
QL 

quary languade for your api


SQL is a data level language so you query the database directly but with graph QL we query the application layer on the server which allows usto use virtually any kind of database or data store that we want we can even use just hard coded data we could use an SQL database no SQL likeMongoDB just about anything all right another huge benefit to graph QL is that it provides almost a blueprint of your data in your API and itgives clients the power to ask for exactly what they want one problem with a standard REST API is that you may only want for instance a user'sfirst name but with the way that a REST API is usually set up it forces you to fetch all the user data which is virtually wasting bandwidth andother resources so with graph QL we can just ask for exactly what we want and nothing more so this is incredibly powerful we can also makemultiple requests at once which saves even more on resources all right




schema file: where we'll put all of our queries and mutations
mutation: this just means that we're we're building a response that's going to change the data in some way so if we want to make a post request to our API to add data to the server that would be done through a mutation okay same thing with update and delete 



mock REST API so basically like a fake REST API and that's going to act as our as our database


React and go Relay/Apolloclient

- graphql vs falcor vs oData



Vasanth Mohan
1 year ago (edited)
The argument that graphQL allows us to fetch the specific data we need confuses me. Wouldnt a standard SELECT with WHERE clause do the same? Add a middleware and everything can be simulated, right? What exactly is the difference?﻿


REPLY

Hide replies
 Immanuel Herman
Immanuel Herman
1 year ago (edited)
Vasanth Mohan I'm new in this, but as far as I know, you can get data in whatever structure you want with graphql, instead of fixed structure in typical REST.

Plus queries in graphql seems to be far more flexible. You can request more complex query, which ofc is also possible on 'typical' REST but would required much more complicated controller.




Isn't one of the tasks of designing an API defining meaningful objects with a single responsibility? 
Having lots of fields in the user object is a design problem that should be fixed in first place and not handed over to the client to solve it.﻿Isn't one 




const express = require ('express');
const expressGraphQL = require ('express-graphql');
const schema = require ('./schema.js');


const app = express();

app.use ('./graphql', expressGraphQL({
    schema: schema,
    graphiql: true
}));
app.listen(4000, () =>{
    console.log ('Server Running');
});




Express Graphql code implementation has changed. Use:

const expressGraphql = require('express-graphql');
....
app.use('/graphql', graphqlHTTP({
  schema,
  graphiql: true,  //  http://localhost:4000/graphql graphql client  for testing like postman
}));

buildSchema Method
ES6's find (biult-in=helper) function


There's no need in passing parentValue and args for resolve method in 'cuctomers' field, it's just enough to leave resolve() { ... }﻿



"const is immutable." - Technically yes, but be careful leaving it at just that.
JavaScript primitive consts are immutable in the way that most people would expect, BUT complex consts are *not*!
The contents of complex consts, most commonly objects and arrays, are still mutable!
For example, `const obj = {}` will error if you try to reassign the obj itself (e.g. `obj = {a: 'b'}`) but you can absolutely change obj's keys and values (e.g. `obj.a = 'b'`


How do you query by more than one field, but make them optional. ie. I might want to query by email or email and age > 27 ??



PS: Guys if you are using node.js version 10 you have to go back to version 8 to be able to execute the json server(that was my case, correct me if I'm wrong). You can do it by using nvm (Node Version Manager) for windows for exemple.﻿













----------------------------------------------

Query Language


> Request (Query)

Query {
    User(id: "fd54gttg7")
        {
            name
            posts {
                title
        }
            followers (last: 3) {
                name
            }
    }
}


> Response

data: {
    name: "Sabry"
    {
        "Learn GraphQL",
        "Learn RestAPI",
        "Learn Webservices"
    }

}

----------------------------------------------








GraphQL Clients: send query to GraphQL server
    - Apollo Client
Relay
Graphql Request


GraphQL-express







GraphQL
- Query: get request
- Mutation: (post, put, delete) request
- Sub