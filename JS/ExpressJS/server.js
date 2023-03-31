const express = require('express'); // the first step is to require ExpressJS
const app = express(); // function that represent the Express module




app.get("/" , function(request,response){
    //console.log(request); // => this logs all the request information from the vrowser
    response.send("Hello World!"); //
}); // specify what should happen when a brouser get intouch with our server and makes a get request to our server

app.listen(8080, function () {
    console.log("server started at port 8080")});
