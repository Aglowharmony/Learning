/* --- 1. SYSTEM DATA (LocalStorage) --- */
// Recovers data from browser memory so stats persist after refresh
let userXP = parseInt(localStorage.getItem("userXP")) || 65;
let userRank = localStorage.getItem("userRank") || "SHADOW INITIATE";
let trackedIntel = JSON.parse(localStorage.getItem("trackedIntel")) || [];

/* --- 2. INITIALIZATION ON LOAD --- */
window.onload = function() {
  updateProfileUI();
  updateIntelTracker();

  // Aesthetic Console Log for your presentation
  console.log("%c [SYSTEM]: Vengeance Hub Terminal Online.", "color: #bc13fe; font-weight: bold;");
  console.log("%c [STATUS]: Satellite Link Secured.", "color: #00f3ff;");
};

/* --- 3. PROFILE DROPDOWN LOGIC --- */
function toggleProfileMenu() {
  const menu = document.getElementById("profileDropdown");

  // Close Intel Tracker if open to prevent UI clutter
  const tracker = document.getElementById("cartPanel");
  if(tracker) tracker.classList.remove("active");

  // Toggle Display
  if (menu.style.display === "block") {
    menu.style.display = "none";
  } else {
    menu.style.display = "block";
  }
}

// Updates the XP Bar width and Rank text
function updateProfileUI() {
  const xpFill = document.getElementById("xpProgress");
  const rankLabel = document.getElementById("profile-rank");
  const countLabel = document.getElementById("cartCount");

  // Smoothly animate the XP bar width
  if (xpFill) xpFill.style.width = userXP + "%";
  if (rankLabel) rankLabel.innerText = userRank;
  if (countLabel) countLabel.innerText = trackedIntel.length;
}

/* --- 4. DAILY BONUS LOGIC (XP REWARD) --- */
function claimDailyBonus() {
  const today = new Date().toDateString();
  const lastClaim = localStorage.getItem("lastBonusDate");

  // Prevent double claiming
  if (lastClaim === today) {
    alert("ACCESS DENIED: Daily Intel Bonus already synced for this cycle.");
    return;
  }

  // Award +20 XP
  userXP += 20;

  // Handle Level Up
  if (userXP >= 100) {
    userXP = 100;
    userRank = "ELITE OPERATIVE";
  }

  // Save to LocalStorage
  localStorage.setItem("userXP", userXP);
  localStorage.setItem("userRank", userRank);
  localStorage.setItem("lastBonusDate", today);

  // Update the UI
  updateProfileUI();
  alert("INTEL SYNCED: +20 XP Added to Operative Profile!");
}

/* --- 5. INTEL TRACKER (CART) LOGIC --- */
function toggleCart() {
  const panel = document.getElementById("cartPanel");
  panel.classList.toggle("active");

  // Close Profile menu if open to avoid overlap
  const profileMenu = document.getElementById("profileDropdown");
  if (profileMenu) profileMenu.style.display = "none";
}

function addToCart(gameName) {
  trackedIntel.push(gameName);
  localStorage.setItem("trackedIntel", JSON.stringify(trackedIntel));

  updateIntelTracker();
  alert("INTEL ACQUIRED: " + gameName + " added to tracker.");
}

function updateIntelTracker() {
  const list = document.getElementById("cartItems");
  const count = document.getElementById("cartCount");

  if (count) count.innerText = trackedIntel.length;
  if (!list) return;

  list.innerHTML = "";
  trackedIntel.forEach((item, index) => {
    let li = document.createElement("li");
    li.style.background = "#1a1a1e";
    li.style.padding = "10px";
    li.style.marginBottom = "8px";
    li.style.display = "flex";
    li.style.justifyContent = "space-between";
    li.style.borderLeft = "3px solid #bc13fe";

    li.innerHTML = `
            <span style="font-size: 13px;">${item}</span>
            <button class="remove-btn" onclick="removeIntel(${index})"
                    style="padding: 2px 8px; font-size: 10px; border-color: #ff4444; color: #ff4444;">
                PURGE
            </button>
        `;
    list.appendChild(li);
  });
}

function removeIntel(index) {
  trackedIntel.splice(index, 1);
  localStorage.setItem("trackedIntel", JSON.stringify(trackedIntel));
  updateIntelTracker();
}

function clearCart() {
  trackedIntel = [];
  localStorage.removeItem("trackedIntel");
  updateIntelTracker();
  toggleCart(); // Close panel after clearing
}

/* --- 6. UTILITY: CLOSE MENUS ON OUTSIDE CLICK --- */
window.addEventListener('click', function(e) {
  const menu = document.getElementById("profileDropdown");
  const avatar = document.querySelector('.avatar-trigger');

  // If clicking outside both the avatar and the menu, hide the menu
  if (menu && avatar && !avatar.contains(e.target) && !menu.contains(e.target)) {
    menu.style.display = "none";
  }
});
