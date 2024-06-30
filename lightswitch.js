function darkMode()
{
    // change theme
    var element = document.getElementById("html");
    element.classList.toggle("theme-dark");

    // change theme icon
    var icon = document.getElementById("icon");
    if(icon.classList.contains("fa-sun"))
    {
        icon.classList.replace("fa-sun","fa-moon");
    }
    else
    {
        icon.classList.replace("fa-moon","fa-sun");
    }
    
}