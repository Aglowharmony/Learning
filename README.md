# EduTech Platform

A comprehensive, feature-packed educational technology web application designed for colleges and schools. Built with React, TypeScript, and Material-UI.

## 🚀 Features

### 🔐 Authentication & User Management
- **Role-based Access Control**: Admin, Teacher, and Student roles
- **Secure Authentication**: JWT-based authentication with persistent sessions
- **User Profiles**: Comprehensive user management with avatars and personal information
- **Demo Accounts**: Quick access with pre-configured demo accounts

### 📊 Dashboard & Analytics
- **Interactive Dashboard**: Real-time analytics and performance metrics
- **Progress Tracking**: Visual progress indicators and completion rates
- **Performance Charts**: Line charts, pie charts, and bar charts for data visualization
- **Activity Feed**: Recent activities and notifications
- **Upcoming Deadlines**: Smart deadline tracking with priority indicators

### 🎓 Course Management
- **Course Creation**: Full CRUD operations for courses
- **Course Catalog**: Beautiful course cards with thumbnails and descriptions
- **Enrollment System**: Easy course enrollment and management
- **Course Scheduling**: Flexible scheduling with multiple time slots
- **Progress Tracking**: Individual and class-wide progress monitoring

### 📝 Assignment & Assessment System
- **Assignment Creation**: Rich assignment creation with file attachments
- **Auto-grading**: Automated grading for quizzes and multiple-choice questions
- **Submission System**: File upload and text submission capabilities
- **Due Date Management**: Smart deadline tracking and notifications
- **Grade Management**: Comprehensive grading system with feedback

### 🎥 Video Streaming & Content Delivery
- **Video Player**: Advanced video player with controls and playback options
- **Content Library**: Organized video content with search and filtering
- **Progress Tracking**: Video watch progress and completion tracking
- **Quality Options**: Multiple video quality settings
- **Captions Support**: Automatic and manual caption support

### 💬 Real-time Communication
- **Live Chat**: Real-time messaging between users
- **Video Calls**: Integrated video calling capabilities
- **Discussion Forums**: Course-specific discussion boards
- **Notifications**: Real-time notifications and alerts
- **File Sharing**: Secure file sharing within conversations

### 📚 Digital Library & Resources
- **Resource Management**: Upload, organize, and share educational resources
- **File Types**: Support for documents, videos, audio, images, and links
- **Search & Filter**: Advanced search and filtering capabilities
- **Version Control**: File versioning and history tracking
- **Access Control**: Public and private resource management

### 📅 Calendar & Scheduling
- **Interactive Calendar**: Full calendar view with event management
- **Event Types**: Different event types (classes, assignments, exams, holidays)
- **Scheduling**: Flexible scheduling with recurring events
- **Integration**: Seamless integration with assignments and courses
- **Notifications**: Calendar-based notifications and reminders

### 📊 Gradebook & Assessment
- **Comprehensive Gradebook**: Full-featured gradebook with analytics
- **Grade Calculation**: Automatic grade calculation and letter grade assignment
- **Progress Reports**: Detailed progress reports for students and teachers
- **Export/Import**: Grade export and import capabilities
- **Analytics**: Grade distribution and performance analytics

### 📱 Mobile-Responsive Design
- **Responsive Layout**: Fully responsive design for all devices
- **Touch-Friendly**: Optimized for touch interactions
- **Mobile Navigation**: Intuitive mobile navigation
- **Progressive Web App**: PWA capabilities for mobile installation

### 🎨 Modern UI/UX
- **Material-UI**: Beautiful, modern interface with Material Design
- **Dark/Light Theme**: Theme switching capabilities
- **Accessibility**: WCAG compliant accessibility features
- **Animations**: Smooth animations and transitions
- **Customizable**: Customizable themes and layouts

## 🛠️ Technology Stack

- **Frontend**: React 18, TypeScript, Material-UI
- **State Management**: Zustand
- **Routing**: React Router DOM
- **Data Fetching**: React Query
- **Charts**: Recharts
- **Video Player**: React Player
- **Date Handling**: date-fns
- **Forms**: React Hook Form
- **File Upload**: React Dropzone
- **Notifications**: React Hot Toast
- **Animations**: Framer Motion

## 🚀 Getting Started

### Prerequisites
- Node.js (v16 or higher)
- npm or yarn

### Installation

1. **Clone the repository**
   ```bash
   git clone <repository-url>
   cd edutech-platform
   ```

2. **Install dependencies**
   ```bash
   npm install
   ```

3. **Start the development server**
   ```bash
   npm start
   ```

4. **Open your browser**
   Navigate to `http://localhost:3000`

### Demo Accounts

The application includes demo accounts for testing:

- **Admin**: `admin@edutech.com` / `password`
- **Teacher**: `teacher@edutech.com` / `password`
- **Student**: `student@edutech.com` / `password`

## 📁 Project Structure

```
src/
├── components/          # Reusable UI components
│   ├── auth/           # Authentication components
│   ├── dashboard/      # Dashboard components
│   ├── courses/        # Course management components
│   ├── assignments/    # Assignment components
│   ├── video/         # Video player components
│   ├── chat/          # Chat components
│   ├── calendar/      # Calendar components
│   ├── grades/        # Gradebook components
│   ├── library/       # Resource library components
│   └── layout/        # Layout components
├── store/             # State management
├── types/            # TypeScript type definitions
├── theme.ts          # Material-UI theme configuration
└── App.tsx           # Main application component
```

## 🎯 Key Features in Detail

### Dashboard Analytics
- Real-time performance metrics
- Interactive charts and graphs
- Activity tracking and notifications
- Progress visualization

### Course Management
- Course creation and editing
- Student enrollment
- Course materials management
- Progress tracking

### Assignment System
- Rich text assignment creation
- File attachment support
- Auto-grading capabilities
- Submission tracking

### Video Platform
- Advanced video player
- Progress tracking
- Quality settings
- Caption support

### Communication Tools
- Real-time chat
- Video calling
- Discussion forums
- File sharing

### Resource Management
- File upload and organization
- Search and filtering
- Access control
- Version management

## 🔧 Configuration

### Environment Variables
Create a `.env` file in the root directory:

```env
REACT_APP_API_URL=http://localhost:3001
REACT_APP_WS_URL=ws://localhost:3001
```

### Theme Customization
Modify `src/theme.ts` to customize the application theme:

```typescript
const theme = createTheme({
  palette: {
    primary: {
      main: '#1976d2', // Your primary color
    },
    // ... other theme options
  },
});
```

## 📱 Mobile Support

The application is fully responsive and includes:
- Mobile-optimized navigation
- Touch-friendly interactions
- Responsive layouts
- Progressive Web App capabilities

## 🚀 Deployment

### Build for Production
```bash
npm run build
```

### Deploy to Netlify
1. Connect your repository to Netlify
2. Set build command: `npm run build`
3. Set publish directory: `build`

### Deploy to Vercel
1. Install Vercel CLI: `npm i -g vercel`
2. Run: `vercel`
3. Follow the prompts

## 🤝 Contributing

1. Fork the repository
2. Create a feature branch: `git checkout -b feature-name`
3. Commit changes: `git commit -m 'Add feature'`
4. Push to branch: `git push origin feature-name`
5. Submit a pull request

## 📄 License

This project is licensed under the MIT License - see the LICENSE file for details.

## 🆘 Support

For support and questions:
- Create an issue in the repository
- Contact the development team
- Check the documentation

## 🔮 Future Enhancements

- AI-powered content recommendations
- Advanced analytics and reporting
- Integration with external LMS systems
- Mobile app development
- Advanced assessment tools
- Collaborative features
- Gamification elements

---

**Built with ❤️ for education**
