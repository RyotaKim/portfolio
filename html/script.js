VANTA.WAVES({
    el: "body",  // Apply it to the whole body instead of a div
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
    const menuLinks = document.querySelectorAll("#mobile-menu a"); // Select all links inside the menu

    menuToggle.addEventListener("click", function () {
        mobileMenu.classList.toggle("hidden"); // Show/hide menu
    });

    // Close menu when clicking outside of it
    document.addEventListener("click", function (event) {
        if (!menuToggle.contains(event.target) && !mobileMenu.contains(event.target)) {
            mobileMenu.classList.add("hidden");
        }
    });

    // Close menu when clicking a menu link
    menuLinks.forEach(link => {
        link.addEventListener("click", function () {
            mobileMenu.classList.add("hidden"); // Hide menu after clicking a link
        });
    });
});
