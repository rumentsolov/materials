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

