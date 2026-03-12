let userXP = parseInt(localStorage.getItem("userXP")) || 65;
let userRank = localStorage.getItem("userRank") || "SHADOW INITIATE";
let trackedIntel = JSON.parse(localStorage.getItem("trackedIntel")) || [];
window.onload = function() {
  updateProfileUI();
  updateIntelTracker();
  anime({
    targets: '.glitch-text',
    translateY: [-100, 0], // Drops from top
    opacity: [0, 1],
    duration: 2000,
    easing: 'easeOutExpo'
  });
  anime({
    targets: '.news-strip, .upcoming-card, .store-card, .vault-card',
    translateX: [-200, 0],
    opacity: [0, 1],
    delay: anime.stagger(200), // 200ms delay between each card
    duration: 1500,
    easing: 'easeOutElastic(1, .6)' // Adds a cool "bounce" effect
  });

  console.log("%c [SYSTEM]: Vengeance Hub Terminal Online.", "color: #bc13fe; font-weight: bold;");
};



function toggleProfileMenu() {
  const menu = document.getElementById("profileDropdown");

  const tracker = document.getElementById("cartPanel");
  if(tracker) tracker.classList.remove("active");
  if (menu.style.display === "block") {
    menu.style.display = "none";
  } else {
    menu.style.display = "block";
  }
}
function updateProfileUI() {
  const xpFill = document.getElementById("xpProgress");
  const rankLabel = document.getElementById("profile-rank");
  const countLabel = document.getElementById("cartCount");
  if (xpFill) xpFill.style.width = userXP + "%";
  if (rankLabel) rankLabel.innerText = userRank;
  if (countLabel) countLabel.innerText = trackedIntel.length;
}
function claimDailyBonus() {
  const today = new Date().toDateString();
  const lastClaim = localStorage.getItem("lastBonusDate");
  if (lastClaim === today) {
    alert("ACCESS DENIED: Daily Intel Bonus already synced for this cycle.");
    return;
  }
  userXP += 20;
  if (userXP >= 100) {
    userXP = 100;
    userRank = "ELITE OPERATIVE";
  }
  localStorage.setItem("userXP", userXP);
  localStorage.setItem("userRank", userRank);
  localStorage.setItem("lastBonusDate", today);
  updateProfileUI();
  alert("INTEL SYNCED: +20 XP Added to Operative Profile!");
}
function toggleCart() {
  const panel = document.getElementById("cartPanel");
  panel.classList.toggle("active");

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
  toggleCart();
}
window.addEventListener('click', function(e) {
  const menu = document.getElementById("profileDropdown");
  const avatar = document.querySelector('.avatar-trigger');
  if (menu && avatar && !avatar.contains(e.target) && !menu.contains(e.target)) {
    menu.style.display = "none";
  }
});


function logout() {
  const confirmExit = confirm("CRITICAL: Terminating satellite link. Wipe local intel?");
  if (confirmExit) {
      localStorage.removeItem("userXP");
      localStorage.removeItem("userRank");
      localStorage.removeItem("trackedIntel");
      localStorage.removeItem("lastBonusDate");
      window.location.href = "logout.html";
  }
}







const roadmapTl = anime.timeline({
  easing: 'easeOutExpo',
  duration: 1000
});
roadmapTl
  .add({
    targets: '.timeline-line',
    height: ['0%', '100%'],
    opacity: [0, 1],
    duration: 1500
  })
  .add({
    targets: '.animate-roadmap',
    translateX: (el) => el.classList.contains('left') ? [-100, 0] : [100, 0],
    opacity: [0, 1],
    scale: [0.8, 1],
    delay: anime.stagger(200),
    easing: 'easeOutElastic(1, .6)'
  }, '-=1000');




window.addEventListener('load', () => {
  const bg = document.getElementById('target-bg');
  for (let i = 0; i < 20; i++) {
    const p = document.createElement('div');
    p.className = 'particle';
    const size = Math.random() * 3 + 1 + 'px';
    p.style.width = size;
    p.style.height = size;
    p.style.left = Math.random() * 100 + '%';
    p.style.top = Math.random() * 100 + '%';
    bg.appendChild(p);
  }
  anime({
    targets: '.particle',
    translateX: () => anime.random(-50, 50),
    translateY: () => anime.random(-50, 50),
    opacity: [0.1, 0.4, 0.1],
    easing: 'linear',
    duration: () => anime.random(3000, 7000),
    delay: () => anime.random(0, 1000),
    loop: true,
    direction: 'alternate'
  });
  anime({
    targets: '.minimal-header',
    translateY: [-100, 0],
    opacity: [0, 1],
    easing: 'easeOutExpo',
    duration: 1000
  });
  anime({
    targets: '.animate-profile',
    translateY: [40, 0],
    opacity: [0, 1],
    delay: anime.stagger(150, {start: 500}),
    easing: 'easeOutQuart'
  });
});





