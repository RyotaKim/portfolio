VANTA.WAVES({
    el: "body",  
    mouseControls: true,
    touchControls: true,
    gyroControls: false,
    minHeight: window.innerHeight,
    minWidth: window.innerWidth,
    scale: 1.00,
    scaleMobile: 1.00,
    color: 0x141414
});

document.addEventListener("DOMContentLoaded", function () {
    const menuToggle = document.getElementById("menu-toggle");
    const mobileMenu = document.getElementById("mobile-menu");
    const menuLinks = document.querySelectorAll("#mobile-menu a");

    // Toggle mobile menu visibility when the burger icon is clicked
    menuToggle.addEventListener("click", function (event) {
        event.stopPropagation(); // Prevents the click from propagating to document click
        mobileMenu.classList.toggle("hidden"); // Toggle menu visibility
    });

    /* Close the mobile menu if clicking outside of the menu or the toggle button
    document.addEventListener("click", function (event) {
        if (!menuToggle.contains(event.target) && !mobileMenu.contains(event.target)) {
            mobileMenu.classList.add("hidden");
        }
    });*/

    

    // Close the menu when pressing the Escape key
    document.addEventListener("keydown", function (event) {
        if (event.key === "Escape" && !mobileMenu.classList.contains("hidden")) {
            mobileMenu.classList.add("hidden");
        }
    });
});




