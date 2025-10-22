import React from 'react';
import { Routes, Route, Navigate } from 'react-router-dom';
import { Box, Typography, Card, CardContent, Button, Container } from '@mui/material';
import { School, Dashboard, Assignment, VideoLibrary, Chat, Calendar, Grade, LibraryBooks } from '@mui/icons-material';

const App: React.FC = () => {
  return (
    <Box sx={{ minHeight: '100vh', backgroundColor: '#f5f5f5' }}>
      {/* Header */}
      <Box sx={{ 
        backgroundColor: '#1976d2', 
        color: 'white', 
        p: 2, 
        boxShadow: 2 
      }}>
        <Container maxWidth="lg">
          <Box sx={{ display: 'flex', alignItems: 'center', gap: 2 }}>
            <School sx={{ fontSize: 32 }} />
            <Typography variant="h4" component="h1">
              EduTech Platform
            </Typography>
          </Box>
        </Container>
      </Box>

      {/* Main Content */}
      <Container maxWidth="lg" sx={{ py: 4 }}>
        <Typography variant="h3" gutterBottom sx={{ textAlign: 'center', mb: 4 }}>
          Welcome to EduTech Platform
        </Typography>
        
        <Typography variant="h6" color="text.secondary" sx={{ textAlign: 'center', mb: 4 }}>
          A comprehensive educational technology platform for colleges and schools
        </Typography>

        {/* Feature Cards */}
        <Box sx={{ 
          display: 'grid', 
          gridTemplateColumns: { xs: '1fr', sm: 'repeat(2, 1fr)', md: 'repeat(3, 1fr)' },
          gap: 3,
          mb: 4
        }}>
          <FeatureCard 
            icon={<Dashboard />}
            title="Dashboard"
            description="Analytics and performance tracking"
            color="#1976d2"
          />
          <FeatureCard 
            icon={<School />}
            title="Course Management"
            description="Create and manage courses"
            color="#2e7d32"
          />
          <FeatureCard 
            icon={<Assignment />}
            title="Assignments"
            description="Assignment creation and grading"
            color="#ed6c02"
          />
          <FeatureCard 
            icon={<VideoLibrary />}
            title="Video Platform"
            description="Video streaming and content delivery"
            color="#9c27b0"
          />
          <FeatureCard 
            icon={<Chat />}
            title="Communication"
            description="Real-time chat and messaging"
            color="#f44336"
          />
          <FeatureCard 
            icon={<Calendar />}
            title="Scheduling"
            description="Calendar and event management"
            color="#00acc1"
          />
          <FeatureCard 
            icon={<Grade />}
            title="Gradebook"
            description="Comprehensive grading system"
            color="#795548"
          />
          <FeatureCard 
            icon={<LibraryBooks />}
            title="Resource Library"
            description="File management and sharing"
            color="#607d8b"
          />
        </Box>

        {/* Demo Section */}
        <Card sx={{ mb: 4 }}>
          <CardContent sx={{ textAlign: 'center', py: 4 }}>
            <Typography variant="h5" gutterBottom>
              Try the Demo
            </Typography>
            <Typography variant="body1" color="text.secondary" sx={{ mb: 3 }}>
              Experience the full platform with our demo accounts
            </Typography>
            <Box sx={{ display: 'flex', gap: 2, justifyContent: 'center', flexWrap: 'wrap' }}>
              <Button variant="contained" size="large">
                Demo as Admin
              </Button>
              <Button variant="contained" size="large">
                Demo as Teacher
              </Button>
              <Button variant="contained" size="large">
                Demo as Student
              </Button>
            </Box>
          </CardContent>
        </Card>

        {/* Features List */}
        <Card>
          <CardContent>
            <Typography variant="h5" gutterBottom>
              Platform Features
            </Typography>
            <Box sx={{ 
              display: 'grid', 
              gridTemplateColumns: { xs: '1fr', md: 'repeat(2, 1fr)' },
              gap: 2
            }}>
              <FeatureList />
            </Box>
          </CardContent>
        </Card>
      </Container>
    </Box>
  );
};

interface FeatureCardProps {
  icon: React.ReactNode;
  title: string;
  description: string;
  color: string;
}

const FeatureCard: React.FC<FeatureCardProps> = ({ icon, title, description, color }) => (
  <Card sx={{ 
    height: '100%',
    transition: 'transform 0.2s ease-in-out, box-shadow 0.2s ease-in-out',
    '&:hover': {
      transform: 'translateY(-4px)',
      boxShadow: '0 8px 25px rgba(0,0,0,0.15)',
    }
  }}>
    <CardContent sx={{ textAlign: 'center', p: 3 }}>
      <Box sx={{ 
        color, 
        mb: 2,
        '& .MuiSvgIcon-root': { fontSize: 48 }
      }}>
        {icon}
      </Box>
      <Typography variant="h6" gutterBottom>
        {title}
      </Typography>
      <Typography variant="body2" color="text.secondary">
        {description}
      </Typography>
    </CardContent>
  </Card>
);

const FeatureList: React.FC = () => (
  <>
    <Box>
      <Typography variant="h6" gutterBottom>Core Features</Typography>
      <ul>
        <li>Role-based authentication (Admin, Teacher, Student)</li>
        <li>Interactive dashboard with analytics</li>
        <li>Course management system</li>
        <li>Assignment and quiz creation</li>
        <li>Video streaming platform</li>
        <li>Real-time communication</li>
      </ul>
    </Box>
    <Box>
      <Typography variant="h6" gutterBottom>Advanced Features</Typography>
      <ul>
        <li>Calendar and scheduling</li>
        <li>Gradebook and assessment tools</li>
        <li>Resource library management</li>
        <li>Progress tracking</li>
        <li>Mobile-responsive design</li>
        <li>Modern Material-UI interface</li>
      </ul>
    </Box>
  </>
);

export default App;