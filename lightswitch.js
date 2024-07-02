var element = document.getElementById("html");

function darkMode()
{
    // change theme
    element.classList.toggle("theme-dark");

    // save theme in local storage
    localStorage.myTheme = element.className;

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

// if dark mode is saved in local storage, then toggle it on when new page loads, and change icon to moon
if(localStorage.getItem("myTheme"))
{
    element.classList.toggle("theme-dark");
    icon.classList.replace("fa-sun","fa-moon");
}

