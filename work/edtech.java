import java.util.Scanner;

public class edtech {
    public static void main(String[] args) {
        Scanner a = new Scanner(System.in);
        String name;
        int choice;
        int coins = 0, level = 1;
        int modules = 0;
        String notes = " ";

        System.out.println("\n\tEnter name of student\t\n");
        name = a.next();
        boolean menu = true;
        while (menu) {
            System.out.println("\n\tEnter whether you are teacher or student\t\n\tEnter the Characters\n1.Teacher\n2.Student\n3.Exit\n");
            String low = a.next();
            switch (low) {
                case "Student":
                    boolean loop = true;

                    while (loop) {
                        System.out.println("\n\tEnter what you need to do\t\n\tEnter the Numbers\n" +
                                "1. Complete Modules\n" +
                                "2. VR Lab\n" +
                                "3. Mentor Bot\n" +
                                "4. Micro Learning\n" +
                                "5. Notes Canvas\n" +
                                "6. Smart Text Reader\n" +
                                "7. Concept Chain\n" +
                                "8. Growth Dashboard\n" +
                                "9. End\n");

                        choice = a.nextInt();

                        switch (choice) {
                            case 1:
                                modules++;
                                coins += 10;
                                System.out.println("\n" + name + " completed a module!");
                                System.out.println("Now at module " + modules);
                                System.out.println("Coins: " + coins);
                                System.out.println("Level: " + level);

                                if (coins % 50 == 0) {
                                    level++;
                                    System.out.println("\nCongratulations!!! You've leveled up!");
                                    System.out.println("Now at level " + level);
                                }
                                break;

                            case 2:
                                String sub;
                                boolean loop2 = true;
                                while (loop2) {
                                    System.out.println("\n\tEnter subject you want to watch VR Lab \t\n\tEnter the Characters\nPhysics / Chemistry / End\n");
                                    sub = a.next();
                                    switch (sub) {
                                        case "Physics":
                                            String topic;
                                            boolean insideloop = true;
                                            while (insideloop) {
                                                System.out.println("\n\tWhat do you need to watch\t\n\tEnter the Characters\nKinematics / Rotation / Waves / End\n");
                                                topic = a.next();
                                                switch (topic) {
                                                    case "Kinematics":
                                                        System.out.println("\nExplaining motion in 1D....");
                                                        System.out.println("\nExplaining motion in 2D....");
                                                        break;
                                                    case "Rotation":
                                                        System.out.println("\nExplaining UCM....");
                                                        System.out.println("\nExplaining VCM....");
                                                        break;
                                                    case "Waves":
                                                        System.out.println("\nExplaining wave motion....");
                                                        break;
                                                    case "End":
                                                        insideloop = false;
                                                        break;
                                                    default:
                                                        System.out.println("\nTopic not available yet. Will update soon.\n");
                                                        break;
                                                }
                                            }
                                            break;

                                        case "Chemistry":
                                            String topic1;
                                            boolean insideloop1 = true;
                                            while (insideloop1) {
                                                System.out.println("\n\tWhat do you need to watch\t\n\tEnter the Characters\nKinetics / Equilibrium / MoleConcept / End");
                                                topic1 = a.next();
                                                switch (topic1) {
                                                    case "Kinetics":
                                                        System.out.println("\nExplaining 1st order kinetics....");
                                                        System.out.println("\nExplaining 2nd order kinetics....");
                                                        break;
                                                    case "Equilibrium":
                                                        System.out.println("\nExplaining chemical equilibrium....");
                                                        System.out.println("\nExplaining how to calculate alpha....");
                                                        break;
                                                    case "MoleConcept":
                                                        System.out.println("\nExplaining mole theory....");
                                                        System.out.println("\nExplaining limiting reagent....");
                                                        break;
                                                    case "End":
                                                        insideloop1 = false;
                                                        break;
                                                    default:
                                                        System.out.println("\nTopic not available yet. Will update soon.\n");
                                                        break;
                                                }
                                            }
                                            break;

                                        case "End":
                                            loop2 = false;
                                            break;

                                        default:
                                            System.out.println("\nSubject not available. Will update soon.\n");
                                            break;
                                    }
                                }
                                break;

                            case 3:
                                String question;
                                boolean insideloop2 = true;
                                while (insideloop2) {
                                    System.out.println("\n\tEnter your Question\t\n\tEnter the Characters\nGravity / Atom / Photosynthesis / End\n");
                                    question = a.next();
                                    switch (question) {
                                        case "Gravity":
                                            System.out.println("\nGravity is the fundamental force of attraction between all objects with mass.");
                                            System.out.println("It is 9.8 m/s² on Earth.\n");
                                            break;
                                        case "Atom":
                                            System.out.println("\nAn atom is the basic building block of all matter, with a nucleus and electrons.\n");
                                            break;
                                        case "Photosynthesis":
                                            System.out.println("\nPhotosynthesis is the process where plants use sunlight, water, and CO₂ to make food.\n");
                                            break;
                                        case "End":
                                            insideloop2 = false;
                                            break;
                                        default:
                                            System.out.println("\nAnswer not available. We’ll update it soon.\n");
                                            break;
                                    }
                                }
                                break;

                            case 4:
                                System.out.println("Enter the topic of video:");
                                String videoTopic = a.next();
                                System.out.println("\nPlaying 2-minute lesson on " + videoTopic);
                                System.out.println("\n1/4: Introduction on " + videoTopic);
                                System.out.println("\n2/4: Core question on " + videoTopic);
                                System.out.println("\n3/4: Practice question on " + videoTopic);
                                System.out.println("\n4/4: Summary on " + videoTopic);
                                System.out.println("\nLesson Completed!");
                                break;

                            case 5:
                                a.nextLine(); // consume newline
                                System.out.println("\nEnter your notes:\n");
                                String l = a.nextLine();
                                notes = notes + " " + l;
                                System.out.println("\nSaved Note:\n" + notes);
                                break;

                            case 6:
                                a.nextLine();
                                System.out.println("\nEnter the text you want to read:\n");
                                String read = a.nextLine();
                                System.out.println("\n\tThe readable text is:\n" + read);
                                break;

                            case 7:
                                String topic2;
                                boolean insideloop3 = true;
                                while (insideloop3) {
                                    System.out.println("\n\tEnter your Topic\t\n\tEnter the Characters\nPhotosynthesis / Programming / End\n");
                                    topic2 = a.next();
                                    switch (topic2) {
                                        case "Photosynthesis":
                                            System.out.println("\nPhotosynthesis -> Light reaction -> ATP Production\n");
                                            break;
                                        case "Programming":
                                            System.out.println("\nProgramming\n  Problem Analysis -> Flowchart/Algorithm -> Coding -> Compilation -> Debugging -> Documentation\n");
                                            break;
                                        case "End":
                                            insideloop3 = false;
                                            break;
                                        default:
                                            System.out.println("\nConcept chain not available yet. Will update soon.\n");
                                            break;
                                    }
                                }
                                break;

                            case 8:
                                int creativity = 80, curiosity = 75, consistency = 90;
                                System.out.println("\n\tPersonal Growth of " + name + "\t\n");
                                System.out.println("\nCreativity: " + creativity);
                                System.out.println("\nCuriosity: " + curiosity);
                                System.out.println("\nConsistency: " + consistency);
                                break;

                            case 9:
                                loop = false;
                                break;

                            default:
                                System.out.println("\n\tInvalid choice. Try again.\n");
                                break;
                        }
                        break;
                    }
                case "Teacher":
                    System.out.println("\nEnter Teacher name:\n");
                    String teacherName = a.next();

                    boolean teacherMenu = true;
                    while (teacherMenu) {
                        System.out.println("\n\tSelect an option\n1. Teacher Dashboard\n2. Exit");
                        int teacherChoice = a.nextInt();
                        a.nextLine(); // consume newline

                        switch (teacherChoice) {
                            case 1:
                                System.out.println("\n\tEnter the class of student\n1. Branch\n2. Division\n3. Exit");
                                String classOption = a.next();
                                switch (classOption) {
                                    case "Branch":
                                        System.out.println("\n\tEnter the branch of student\n1. AIML\n2. EXTC\n3. Exit");
                                        String branch = a.next();
                                        switch (branch) {
                                            case "AIML":
                                            case "EXTC":
                                                System.out.println("\n\tEnter division of student\nA / B / C");
                                                String division = a.next();

                                                boolean inside = true;
                                                while (inside) {
                                                    System.out.println("\n\tWhat do you want to perform:\n1. Edit timetable\n2. Assign Homework\n3. Exit");
                                                    int action = a.nextInt();
                                                    a.nextLine(); // consume newline
                                                    switch (action) {
                                                        case 1:
                                                            System.out.println("\nWhich Class do you want to add?\n");
                                                            String class1 = a.next();
                                                            System.out.println("\nClass Added: " + class1);
                                                            break;

                                                        case 2:
                                                            System.out.println("\nWhat assignment do you want to give to students?\n");
                                                            String assignment = a.next();
                                                            System.out.println("\nAssignment given to students: " + assignment);
                                                            break;

                                                        case 3:
                                                            inside = false;
                                                            break;

                                                        default:
                                                            System.out.println("Invalid option. Try again.");
                                                            break;
                                                    }
                                                }
                                                break;

                                            case "Exit":
                                                break;
                                        }
                                        break;

                                    case "Exit":
                                        break;
                                }
                                break;

                            case 2:
                                teacherMenu = false;
                                break;

                            default:
                                System.out.println("Invalid option.");
                                break;
                        }
                    }
                    break;

            }
        break;
        }

    }
}
