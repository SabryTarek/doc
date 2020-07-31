const Ajv = require('ajv');
let ajv = new Ajv();


let schema = {
  "properties": {
    "foo": { "type": "string" },
    "bar": { "type": "number", "maximum": 3 }
  }
};

let validate = ajv.compile(schema);

function test(data) {
  let valid = validate(data);
  if (valid) console.log('Valid!');
  else console.log('Invalid: ' + ajv.errorsText(validate.errors));
}

test({"foo": "abc", "bar": 2});
test({"foo": 2, "bar": 4});
