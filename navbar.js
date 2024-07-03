// toggle on "is-active" class for both navbar-burger and navbar-menu when burger is clicked

var burger = document.getElementById("burger");
var menu = document.getElementById("menu");

burger.addEventListener("click", function() {
    burger.classList.toggle("is-active");
    menu.classList.toggle("is-active");
});