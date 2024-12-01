"use strict";
/*  
     CMPS2151 - Test#3
     JavaScript
      
     StudentID: 2023158020
     Student Name: Tysha Daniels  
     Date: November 25th, 2024  

     Filename: test3.js
*/

/*-------------------------------------------------Section 1: Account Login Form-------------------------------*/

//Section 1: Question 2
let signupForm = document.getElementById("signup");
signupForm.addEventListener("submit", function(e) { 
   e.preventDefault();

   //Section 1: Question 3 to 5

   //add a regualr expression for the password to make sure it has:
   //1. A capital letter
   //2. A digit
   //3. A special charater
   //4. And make sure it is longer than 8 characters

   let RegEx1 = /[A-Z]/;
   let RegEx2 = /\d/;
   let RegEx3 = /[!$#%]/;

   let password = document.getElementById("pwd").value;
   let feedback = document.getElementById("feedback");

   if(password.length < 8){
      feedback.textContent = "Password must be at least 8 characters";
   } else if (!RegEx1.test(password)) {
     feedback.textContent = "Password must contain a capital letter";
   } else if (!RegEx2.test(password)) {
     feedback.textContent = "Password must contain a number";
   } else if (!RegEx3.test(password)) {
     feedback.textContent = "Password must contain a special character [!$#%]";
   }
   else {
      signupForm.submit();
   }
});
//end of function(e)
//End signupForm eventListener


/*-------------------------------------------------Section 2: Fees Wasted Form--------------------------------*/

//Section 2: Question 1
let feeItem = document.getElementsByClassName("feeItem");
let size = feeItem.length;

//Section 2: Question 1a
for(let i = 0; i<size; i++){
   feeItem[i].addEventListener("click", calcTotal);
}

let fees_Total=0;
// //Section 2: Question 2 : Function to add values of selected check boxes and display total
function calcTotal() {
 
//Section 2: Question 2a
let feesTotal = 0;

//Section 2: Question 2b
for (let i = 0; i < size; i++) {
  if(feeItem[i].checked){
   let num = Number(feeItem[i].value);
   feesTotal+=num;
   fees_Total=feesTotal;
  }
}

//Section 2: Question 2c
 let total = document.getElementById("TotalFees");
 total.innerHTML = `${formatCurrency(feesTotal)}`;
 
}//end of calcTotal( ) function


 // Function to display a numeric value as a text string in the format $##.## 
 function formatCurrency(value) {
    return "$" + value.toFixed(2);
 }
 
 
/*-------------------------------------------------Section 3: Withdraw Reason-------------------------------*/


// Selection lists in the web form
let course = document.getElementById("course");
let section = document.getElementById("section");
let reason = document.getElementById("reason");

// Form button to generate the text of the selected course
let dropCourseBttn = document.getElementById("dropCourse");

// Paragraph containing the text of the selected course
let output = document.getElementById("output");


/* Event handler to modify the content of the section selection list
   when the course selection list changes*/
course.onchange = function() {
   let courseIndex = course.selectedIndex;
     
   let courseList = course.options[courseIndex].text; //store selection from course
   
   if (courseIndex === 0) {
      //Section 3: Question 5 - Call showAll function pass the section as parameter
      showAll(section);
   } else {
     //Section 3: Question 5 - Call filterSelect and pass section and courseList as the category
     filterSelect(section, courseList);
   }  
}//end course onchange function



/* Event handler to modify the content of the reason selection list
   when the section selection list changes*/
section.onchange = function() {
   let sectionIndex = section.selectedIndex;

   let sectionList = section.options[sectionIndex].text;
   
   if (sectionIndex === 0) {
      //Section 3: Question 5 - Call showAll function pass reason as parameter
      showAll(reason);
   } else {
      //Section 3: Question 5 - Call filterSelect and pass reason and sectionList as the category
      filterSelect(reason, sectionList);
   }     
}//end section onchange function



/*Section 3: Question 3 **********************************************
Name: showAll( ) 
@param: selectList
*/

function showAll(selectList){
   let options = selectList.options;
   let optionLength = options.length;

   for(let i = 0; i < optionLength; i++){
      let obj = options[i];
      obj.style.display = "block";
   }
}



//end showAll() function **********************************************



/*Section 3: Question 4 **********************************************
Name: filterSelect( ) 
@param: selectList, category
Description: Function filters the category selected to determine which 
options within that selection list will be displayed
*/

function filterSelect(selectList, category){
   let options = selectList;
   let optionLength = options.length;

   for (let i = 0; i < optionLength; i++) {
     let className = options[i].getAttribute("class");

     if(className == category){
      let obj = options[i];
      obj.style.display = "block";
     }
     else{
      let obj = options[i];
      obj.style.display = "none";
     }
   }
}




//end filterSelect( ) function **********************************************


//Section 3: Question 6****************************************************
dropCourseBttn.addEventListener("click", function(){
   output.textContent = `Dropped ${course.options[course.selectedIndex].text} ${section.options[section.selectedIndex].text} because ${reason.options[reason.selectedIndex].text}`;
});



/*-------------------------------------------------Section 4: Bonus Alert-------------------------------*/
function showResult(){
let fullName = document.getElementById("sname").value;
let nameParts = fullName.split(" ");
let first = nameParts[0];
let last = nameParts[nameParts.length - 1];

let id = document.getElementById("sid").value;

alert(`My name is: ${last} ${first} and my student ID is: ${id}. I have ${output.textContent}. And I have wasted ${formatCurrency(fees_Total)} this semester!`);

}//end showResult( ) function