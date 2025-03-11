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

    // Single click event listener for menu toggle
    menuToggle.addEventListener("click", function (event) {
        event.stopPropagation();
        mobileMenu.classList.toggle("hidden");
    });

    // Close menu when clicking outside
    document.addEventListener("click", function (event) {
        if (!mobileMenu.contains(event.target) && !menuToggle.contains(event.target)) {
            mobileMenu.classList.add("hidden");
        }
    });

    // Close menu when clicking a link
    const menuLinks = document.querySelectorAll("#mobile-menu a");
    menuLinks.forEach(link => {
        link.addEventListener("click", () => {
            mobileMenu.classList.add("hidden");
        });
    });

    // Close menu with Escape key
    document.addEventListener("keydown", function (event) {
        if (event.key === "Escape" && !mobileMenu.classList.contains("hidden")) {
            mobileMenu.classList.add("hidden");
        }
    });
});





