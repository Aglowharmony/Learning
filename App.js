import React from 'react';
import { Box, Typography, Container } from '@mui/material';
import { School } from '@mui/icons-material';

const App = () => {
  return (
    <Box sx={{ minHeight: '100vh', backgroundColor: '#f5f5f5' }}>
      <Container maxWidth="lg" sx={{ py: 4 }}>
        <Box sx={{ textAlign: 'center' }}>
          <School sx={{ fontSize: 64, color: '#1976d2', mb: 2 }} />
          <Typography variant="h3" gutterBottom>
            🎉 EduTech Platform is Running!
          </Typography>
          <Typography variant="h6" color="text.secondary">
            Your comprehensive educational technology platform is now live!
          </Typography>
        </Box>
      </Container>
    </Box>
  );
};

export default App;

