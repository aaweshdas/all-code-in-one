const express = require('express');
const app = express();

// Home route
app.get('/', (req, res) => {
  res.send('Hello brotherrrr! Finally Express is working 🚀');
});

// About route
app.get('/about', (req, res) => {
  res.send('This is a basic Express application');
});

// Start server
const PORT = 3000;
app.listen(PORT, () => {
  console.log(`Server running on http://localhost:${PORT}`);
});
