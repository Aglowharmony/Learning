🛸 VENGEANCE HUB | Tactical Gaming Command
Vengeance Hub is a high-performance, neon-noir gaming dashboard and marketplace concept. It features a cinematic user interface designed for "operatives" (gamers) to track upcoming deployments, access a secure data vault, and sync game deals from the armory.

⚡ Tech Stack & Core Systems
This project was built using a "Tactical Minimalist" approach, focusing on performance and smooth visual feedback.
Frontend Architecture: Semantic HTML5 & Modular CSS3.
Animation Engine: Anime.js for complex sequencing and motion.
Interaction Library: AOS (Animate on Scroll) for cinematic section entry.
Typography: Orbitron (for tactical UI) and Poppins (for readability).
Iconography: FontAwesome 6.0 (Military/Tactical icons).

🛠️ Key Features
1. The Armory (Marketplace)
A 20-game grid featuring a real-time Tactical Scanner (Search).
Smart Filtering: Uses a custom JavaScript filter to sift through game data-attributes instantly.
3D Hover FX: Cards utilize rotateY and translateY logic for a premium 3D depth effect.
Deal Sync: Interactive "Sync" system that pushes tracked intel to a side-panel cart.

2. The Vault (Intel Library)
A data-heavy repository of over 20 gaming titles.
System Scanner: A custom-built Modal window with a "Laser Scan" animation.
Intel Overlay: Hover-triggered data-strips that reveal game specifics without cluttering the UI.

3. Deployment Roadmap
A vertical timeline tracking upcoming 2026/2027 game releases.
Hype Meters: Visual progress bars indicating community anticipation levels.
Bi-directional Layout: Alternating entries for improved visual flow and scan-ability.

5. System Offline (Logout Experience)
A specialized logout page designed to look like a hardware terminal shutting down.
CRT Scanlines: A fixed overlay mimicking vintage monitor refresh lines.
Glitch Text: Keyframe animations simulating signal interference and data corruption.

## 📁 System Architecture
```text
VENGEANCE-HUB/
├── assets/                 # All static media
│   ├── fonts/              # Local font files
│   ├── icons/              # SVG or custom icons
│   └── images/             # All game posters and logos
├── css/                    # Stylesheets
│   └── style.css           # Reorganized master stylesheet
├── js/                     # Logic and Libraries
│   ├── animations.js       # Specific Anime.js sequences
│   └── script.js           # Core site functionality
├── modules/                # Shared HTML components
│   └── header.html         
├── armory.html             # Market sector
├── deployments.html        # Roadmap sector
├── index.html              # Main feed
├── logout.html             # System shutdown
├── profile.html            # User stats
└── vault.html              # Intel database
```
🚀 Installation & Deployment
To deploy the hub locally:
Clone the repository.
Ensure the images/ directory contains all required tactical assets.
Open index.html in a modern browser (Chrome/Edge recommended for backdrop-filter support).


👤 Credits
Developer: Smit Shah / Anand shukla 
Design Principle: Neon Noir / Tactical Command
Year: 2026
