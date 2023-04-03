var num = Math.random(); // generates num between 0 and 0.(9)

var floor = Math.floor(num);
var ceil = Math.ceil(num);

console.log(num);
alert(num);

// html tree generator software


typeof(num) // int

var a = 2 , b = 2;

if(a==b) // check for equality

if(a===b) // checks if datatype also matches

var arr = ["1","2","3","4","5"]; // 
arr.length; // gives 5
arr.push(a); // pushes at the end of the array
arr.pop(); // removes the end of the array
arr.includes(b); // checks if datatype is inside the array && returns true or false

var buttonInnerHTML = this.innerHTML;

switch(buttonInnerHTML) {
    case "w" :
        var tom1 = new Audio("sounds/tom-1.mp3")
        tom1.play();
        break;
    case "a" :
        var tom2 = new Audio("sounds/tom-2.mp3")
        tom2.play();
        break;   
    case "s" :
        var tom3 = new Audio("sounds/tom-3.mp3")
        tom3.play();
        break;  
    case "d" :
        var tom4 = new Audio("sounds/tom-4.mp3")
        tom4.play();
        break;  
    case "j" :
        var snare = new Audio("sounds/snare.mp3")
        snare.play();
    break;  
    case "k" :
        var crash = new Audio("sounds/crash.mp3")
        crash.play();
    break;  
    case "l" :
        var kick = new Audio("sounds/kick-bass.mp3")
        kick.play();
    break;  
        default :
        console.log(buttonInnerHTML);
}


//! DOM Document Object Model

#document; // the entire html tree
document.firstElementChild; // the first child of the document
document.lastElementChild.firstElementChild; // the first child of the last child

var heading = document.lastElementChild.firstElementChild; // so we could manipulate it

heading.innerHTML = "Good buy!"; // it changes the header text  only

heading.style.color = "red"; // changes the color of heading text

// car.color; => gives the car object color so its called Getter
// car.color = "green"; // sets the car object color
// car.drive; => a method same as C++

document.getElementsByTagName("lib"); // fetch all elements that have that name and returns array
document.getElementById("title"); // returns a single element
document.querySelector("h1") // returns a single item by anything like <h1 id = "title">Good buy!"</h1>; && Selectore is anything before {} that we use to code in html and css

//! Event ilsteners

let btns = document.querySelectorAll("button"); // will make all objects of type button to be selected
for (i of btns) {i.addEventListener("click", handdleClick);};

function handdleClick(){alert("clieked");}

document.addEventListener("click", handdleClick); //click if write it handdleClick() the function will be called every time  when website is reloaded

<script src="index.js"></script> // will add the scripts in index.js inside the website

// Annonimus function
for (i of btns) {i.addEventListener("click", function (){alert("clieked"); });
}

//!Functions

function add(num1, num2) { return num1 + num2; }
function multiply(num1, num2) { return num1 * num2; }
function calclulator(num1, num2, operator) { return operator(num1, num2);}
calclulator(num1, num2, multiply); // will return multiplication of num1 and num2

//!Debugger inside Chrome

debugger;
calclulator(3,4,multiply); // Shift + Enter will show you debbuger for that function

//! Objects ^^
var houseKeeper1 = {
    yearsOfExperiance : 12,
    name : "Jane",
    cleaningRepertoire : ["bathroom", "lobby", "bedroom"],
    moveSiotcase: function () { // this is the method
        alert("May I take your siutcase?");
        pickUpSiutcase();
        move();
    }
}

//?calling method :
houseKeeper1.moveSiotcase();

console.log(houseKeeper1.name); // will give me the Jane's name

//! Objects true Constructor function

function BellBoy(name, age, hasWorkPermit, languages) {
    this.name = name;
    this.age = age;
    this.hasWorkPermit = hasWorkPermit
    this.languages = languages;
    this. moveSiotcase = function () { // this is the method
        alert("May I take your siutcase?");
        pickUpSiutcase();
        move();
    }
    
}

var Bellboy1 = new Bellboy("Timmy", 19, true, ["French", "English"]);
//! prints what key from keyboard was pressed

document.addEventListener("keypress", function (event) {  // function here is anonymous function and prints whatever event there is inside
    alert(event.key); 
});

//REPL => Read Evaluation Print Loop -> allows you to execude code in bytesize chars; NODE REPL executes the Node.js

//Exits with REPL with .exit or doubple press Ctrl+C

//! npm => Node Package Manager
// npm init => initializes package.json file , when we install external modules theywill appear inside that package

// npm install extpress => will install Express JS in the folder I am in
// nodeamon file.js // will start my server

//! Errors
/*
100 hold on
200 its ok
300 go away security involved
400 you fucked up, client fucked up
500 I fucked up
*/