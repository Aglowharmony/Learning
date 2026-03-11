/* --- 1. DATA INITIALIZATION --- */
// Using 'intel_tracker' instead of 'cart' for the gaming theme
let intelTracker = JSON.parse(localStorage.getItem("intel_tracker")) || [];
let currentXP = localStorage.getItem("userXP") || 65; 

/* --- 2. THE WELCOME CONSOLE --- */
function welcomeMessage() {
    // A professional "hacker" style welcome for your presentation
    console.log("%c [SYSTEM]: Vengeance Hub Initialized...", "color: #bc13fe; font-weight: bold;");
    updateIntelUI();
    updateXPBar();
}

/* --- 3. INTEL TRACKER (ADD TO CART) --- */
function addToCart(itemDetails) {
    intelTracker.push(itemDetails);
    localStorage.setItem("intel_tracker", JSON.stringify(intelTracker));
    
    // UI Feedback
    updateIntelUI();
    showNotification("Data Synced to Intel Tracker");
}

function updateIntelUI() {
    let count = document.getElementById("cartCount");
    let list = document.getElementById("cartItems");

    if (count) count.innerText = intelTracker.length;
    if (!list) return;

    list.innerHTML = "";
    intelTracker.forEach((item, index) => {
        let li = document.createElement("li");
        li.innerHTML = `
            <span>${item}</span>
            <button class="remove-btn" onclick="removeItem(${index})">Delete</button>
        `;
        list.appendChild(li);
    });
}

function removeItem(index) {
    intelTracker.splice(index, 1);
    localStorage.setItem("intel_tracker", JSON.stringify(intelTracker));
    updateIntelUI();
}

function clearCart() {
    intelTracker = [];
    localStorage.removeItem("intel_tracker");
    updateIntelUI();
    toggleCart(); // Close panel after purge
}

/* --- 4. PROFILE & XP LOGIC --- */
function updateXPBar() {
    const bar = document.getElementById("xpProgress");
    if (bar) {
        // Slight delay for a "filling up" animation effect on load
        setTimeout(() => {
            bar.style.width = currentXP + "%";
        }, 500);
    }
}

function gainXP(amount) {
    currentXP = parseInt(currentXP) + amount;
    if (currentXP > 100) currentXP = 100;
    
    localStorage.setItem("userXP", currentXP);
    updateXPBar();
    
    if (currentXP >= 100) {
        document.getElementById("profile-rank").innerText = "ELITE OPERATIVE";
        document.getElementById("profile-rank").style.color = "#00f3ff";
    }
}

/* --- 5. UI INTERACTION (TOGGLES) --- */
function toggleCart() {
    document.getElementById("cartPanel").classList.toggle("active");
}

// Shows/Hides Game Requirements or News Details
function toggleDetails(id) {
    let target = document.getElementById(id);
    if (target.style.display === "block") {
        target.style.display = "none";
    } else {
        target.style.display = "block";
    }
}

function showNotification(msg) {
    // Simple alert for presentation, or you can use console
    alert("ALERT: " + msg);
}

/* --- 6. PAGE LOAD --- */
window.onload = function() {
    welcomeMessage();
    
    // Initialize AOS (Animate on Scroll)
    if (typeof AOS !== 'undefined') {
        AOS.init();
    }
};
