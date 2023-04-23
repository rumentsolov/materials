const express = require("express"); // the first step is to require ExpressJS
const bodyParser = require("body-parser"); // requires body parses to be able to get info from website

const app = express(); // function that represent the Express module
app.use(bodyParser.urlencoded({extended:true})); // out app uses body parser from` now on || bodyParser.text() returns text || bodyParser.json() returns json || "extended:true" allows us to post nested objects


app.get("/" , function(req,res){ // req -> request && res -> response
    //console.log(request); // => this logs all the request information from the vrowser
    // the request is for root route "localhost:8080/" 
    //res.send("<h1>Hello World!</h1>"); //
    res.sendFile(__dirname + "/index.html"); // => __dirname is the path to the folder containing index.html
    
}); // specify what should happen when a brouser get intouch with our server and makes a get request to our server



app.post("/" , function(req,res){  // our server allows to processing any post requests
    console.log(req.body); // body parses provides us to access the req.body (body is the whole object) and other properties of object body
    //res.send("<h1>Some action needed</h1>");
    var num1 = Number(req.body.num1); // num1 is name attribute in my http file but its text thats why cast it to Number
    var num2 = Number(req.body.num2); 
    var result = num1 + num2; // so we deal calculation insinde our server

    res.send("the result is: " + result); // this sends the result to the user's page
}); 

app.listen(8080, function () {
    console.log("server started at port 8000")});

