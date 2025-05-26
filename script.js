let vantaEffect;

// Initialize VANTA waves background
function initVanta() {
    vantaEffect = VANTA.WAVES({
        el: "#vanta-bg",
        mouseControls: true,
        touchControls: true,
        gyroControls: false,
        minHeight: 200.00,
        minWidth: 200.00,
        scale: 1.00,
        scaleMobile: 1.00,
        color: 0x131a3a,
        shininess: 30.00,
        waveHeight: 15.00,
        waveSpeed: 0.75,
        zoom: window.innerWidth > 768 ? 0.75 : 0.65
    });
}

// Initialize effect when document is ready
document.addEventListener('DOMContentLoaded', function() {
    initVanta();
    
    // Handle window resize with debouncing
    let resizeTimeout;
    window.addEventListener('resize', function() {
        if (resizeTimeout) clearTimeout(resizeTimeout);
        resizeTimeout = setTimeout(function() {
            if (vantaEffect) {
                vantaEffect.destroy();
            }
            initVanta();
        }, 250); // Wait for 250ms after last resize event
    });

    // Handle mobile menu toggle
    const menuToggle = document.getElementById('menu-toggle');
    const mobileMenu = document.getElementById('mobile-menu');
    
    menuToggle.addEventListener('click', function() {
        if (mobileMenu.classList.contains('hidden')) {
            mobileMenu.classList.remove('hidden');
        } else {
            mobileMenu.classList.add('hidden');
        }
    });
});




<<<<<<< HEAD



=======
>>>>>>> 18c761b10dfaeeca239b5e4590d3f47e9736319b
