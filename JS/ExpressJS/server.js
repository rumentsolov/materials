const express = require('express'); // the first step is to require ExpressJS
const app = express(); // function that represent the Express module

app.get("/" , function(req,res){ // req -> request && res -> response
    //console.log(request); // => this logs all the request information from the vrowser
    // the request is for root route "localhost:8080/" 
    res.send("<h1>Hello World!</h1>"); //
}); // specify what should happen when a brouser get intouch with our server and makes a get request to our server

app.get("/contact" , function(req,res){ 
    res.send("<h1>Contact me 2 </h1>");
}); 

app.listen(8080, function () {
    console.log("server started at port 8080")});
