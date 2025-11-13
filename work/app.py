
import streamlit as st
from datetime import datetime
from streamlit_autorefresh import st_autorefresh

# --- Page Config ---
st.set_page_config(page_title="EdTech Simulation", page_icon="🎓", layout="centered")


# --- Initialize session state ---
if "coins" not in st.session_state:
    st.session_state.coins = 0
    st.session_state.level = 1
    st.session_state.modules = 0
    st.session_state.notes = ""
if "student_data" not in st.session_state:
    st.session_state.student_data = {
        "AIML": {"Div A": ["Sarthak", "Riya", "Arjun"], "Div B": ["Neha", "Rohan"]},
        "EXTC": {"Div A": ["Simran", "Vivek"], "Div B": ["Tina", "Kabir"]},
    }
if "timetable" not in st.session_state:
    st.session_state.timetable = {
        "AIML": ["Maths", "AI", "ML", "Break", "Python"],
        "EXTC": ["Signals", "Electronics", "Networks", "Break", "Maths"]
    }

# --- Header ---
st.title("🎓 EdTech Learning Simulator")
st.write("Welcome to your personalized AI Learning Platform!")

# --- Name Input ---
name = st.text_input("Enter your name:", placeholder="Student or Teacher Name")

if name:
    st.success(f"Welcome, {name}! Let's start learning 🚀")

    # --- Sidebar Menu ---
    menu = st.sidebar.radio(
        "Select an Option:",
        ["Time Table", "Teacher", "Student", "🚪 Exit"]
    )

    # --- Time Table ---
    if menu == "Time Table":
        st.title(f"This is {name}'s Timetable")
        st.image("timetable.jpg")

    # --- Teacher Dashboard ---
    elif menu == "Teacher":
        st.header("👩‍🏫 Teacher Dashboard")

        branch = st.selectbox("Select Branch:", ["AIML", "EXTC"])
        division = st.selectbox("Select Division:", list(st.session_state.student_data[branch].keys()))

        st.subheader(f"📚 {branch} - {division} Section")

        # --- Timetable Management ---
        st.markdown("### 🗓 Edit Timetable")
        subjects = st.session_state.timetable[branch]
        st.table({"Period": [1, 2, 3, 4, 5], "Subject": subjects})

        cancel_class = st.selectbox("Select Period to Cancel:", range(1, len(subjects) + 1))
        if st.button("Cancel Upcoming Class"):
            subjects[cancel_class - 1] = "❌ Cancelled"
            st.session_state.timetable[branch] = subjects
            st.success(f"Class for Period {cancel_class} has been cancelled.")
            st.experimental_rerun()

        # --- Homework / Assignment ---
        st.markdown("### 📝 Assign Homework / Assignment")
        hw = st.text_area("Enter Homework Details:")
        if st.button("Assign Homework"):
            st.success(f"Homework assigned to {branch} - {division}:")
            st.info(hw)

        # --- Student Management ---
        st.markdown("### 👨‍🎓 Manage Students")
        students = st.session_state.student_data[branch][division]
        selected_student = st.selectbox("Select a Student:", students)

        st.subheader(f"Manage {selected_student}'s Record")

        # Marks
        marks = st.number_input(f"Enter Marks for {selected_student}:", min_value=0, max_value=100)
        if st.button("Save Marks"):
            st.success(f"✅ Marks saved for {selected_student}: {marks}/100")

        # Attendance
        attendance_date = st.date_input("Select Date for Attendance:")
        present = st.radio("Mark Attendance:", ["Present", "Absent"])
        if st.button("Save Attendance"):
            st.success(f"📅 {selected_student} marked as **{present}** on {attendance_date}")

        st.divider()
        st.info("Teacher can use this panel to manage students, update marks, attendance, and assignments.")

    # --- Student Dashboard ---
    elif menu == "Student":
        topic = st.selectbox("Select Topic:", [
            'Complete Modules', 'VR Lab', 'Mentor Bot', 'Micro Learning',
            'Notes Canvas', 'Smart Tech Reader', 'Concept Chain',
            'Growth Dashboard', 'Attendance'
        ])

        if topic == "Complete Modules":
            if st.button("Complete Module"):
                st.session_state.modules += 1
                st.session_state.coins += 10
                st.success(f"🎉 {name} completed a module!")
                st.info(f"Modules: {st.session_state.modules} | Coins: {st.session_state.coins} | Level: {st.session_state.level}")

                if st.session_state.coins % 50 == 0:
                    st.session_state.level += 1
                    st.balloons()
                    st.success(f"🌟 Congratulations! You’ve reached Level {st.session_state.level}!")

        elif topic == "VR Lab":
            subject = st.selectbox("Select Subject:", ["Physics", "Chemistry"])
            if subject == "Physics":
                topic = st.selectbox("Select Topic:", ["Kinematics", "Rotation", "Waves"])
                if st.button("Explore"):
                    st.write(f"📘 Exploring {topic} concepts...")
            elif subject == "Chemistry":
                topic = st.selectbox("Select Topic:", ["Kinetics", "Equilibrium", "Mole Concept"])
                if st.button("Explore"):
                    st.write(f"🧪 Learning about {topic}...")

        elif topic == "Mentor Bot":
            question = st.selectbox("Ask a Question:", ["Gravity", "Atom", "Photosynthesis"])
            if st.button("Ask"):
                if question == "Gravity":
                    st.write("🌍 Gravity is the force of attraction between objects with mass (9.8 m/s² on Earth).")
                elif question == "Atom":
                    st.write("⚛️ An atom is the smallest unit of matter, with a nucleus and orbiting electrons.")
                elif question == "Photosynthesis":
                    st.write("🌿 Photosynthesis converts sunlight, CO₂, and water into glucose and oxygen.")

        elif topic == "Micro Learning":
            topic = st.text_input("Enter topic for quick lesson:")
            if st.button("Start Lesson"):
                st.write(f"🎥 Playing micro-lesson on **{topic}**")
                st.progress(100)
                st.success("Lesson Completed ✅")

        elif topic == "Notes Canvas":
            new_note = st.text_area("Write your notes:")
            if st.button("Save Note"):
                st.session_state.notes += "\n" + new_note
                st.success("🗒️ Note saved successfully!")
            if st.session_state.notes.strip():
                st.write("### Saved Notes:")
                st.info(st.session_state.notes)

        elif topic == "Smart Tech Reader":
            text = st.text_area("Enter text to read:")
            if st.button("Read Text"):
                st.write("🗣️", text)

        elif topic == "Concept Chain":
            topic = st.selectbox("Select Topic:", ["Photosynthesis", "Programming"])
            if topic == "Photosynthesis":
                st.write("🌱 Photosynthesis → Light Reaction → ATP Production")
            elif topic == "Programming":
                st.write("💻 Problem Analysis → Algorithm → Coding → Debugging → Documentation")

        elif topic == "Growth Dashboard":
            creativity, curiosity, consistency = 80, 75, 90
            st.header(f"Personal Growth of {name}")
            st.metric("Creativity", f"{creativity}%")
            st.metric("Curiosity", f"{curiosity}%")
            st.metric("Consistency", f"{consistency}%")
            st.progress((creativity + curiosity + consistency) // 3 / 100)

        elif topic == "Attendance":
            attendance = 79
            st.header(f"Attendance of {name}")
            st.metric("Attendance", f"{attendance}%")
            st.progress(attendance / 100)

    # --- Exit ---
    elif menu == "🚪 Exit":
        st.warning("Thanks for using the EdTech Simulation! 👋")

else:
    st.info("👆 Please enter your name to start.")

