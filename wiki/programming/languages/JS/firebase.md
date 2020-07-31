Firebase
=========


- insert :-
    - firebase.database().ref().child().set()




  // Initialize Firebase
  var config = {
    apiKey: "AIzaSyAD-VAti7-V7PUhLd_W7qtxf9YpZCScflk",
    authDomain: "focal-sabry.firebaseapp.com",
    databaseURL: "https://focal-sabry.firebaseio.com",
    projectId: "focal-sabry",
    storageBucket: "",
    messagingSenderId: "642470154623"
  };
  firebase.initializeApp(config);

  var input = document.getElementById('in'),
      insert= document.getElementById('add');


insert.addEventListener('click', e=> {
    alert('Hello');
          var input = document.getElementById('in').value;
          firebase.database().ref('focal-sabry').child('name').set(input);
      });