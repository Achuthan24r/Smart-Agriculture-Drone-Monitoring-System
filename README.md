# 🚁🌾 AI Drone-Based Smart Agriculture Monitoring System

An advanced AgriTech system that uses a drone-mounted camera, GPS tracking, Artificial Intelligence, and a web dashboard to detect crop diseases and monitor farm health in real time.

This project combines:

- 🚁 Drone Technology
- 🤖 Artificial Intelligence
- 🌐 Full Stack Development
- 📡 IoT Systems
- 🗄 Database Storage
- 🗺 GPS Mapping

---

## 📌 Project Overview

The system captures crop images using ESP32-CAM mounted on a drone, tags the image with GPS location, sends it to an AI server for disease detection, stores results in a database, and displays infected areas on a web-based map dashboard.

---

## 🧠 System Architecture

2️⃣ Start MongoDB

Make sure MongoDB is running locally:

mongod

3️⃣ Run Node Backend
cd node_backend
npm install
node server.js


Server runs at:

http://localhost:5001

4️⃣ Run Flask AI Server
cd flask_ai_server
pip install tensorflow flask pillow numpy requests
python app.py


AI Server runs at:

http://localhost:5000

5️⃣ Upload ESP32 Code

Open esp32_cam_code.ino

Add your WiFi credentials

Replace server IP with your computer IP

Upload using Arduino IDE

6️⃣ Open Dashboard

Open:

dashboard/index.html


Detected crop diseases will appear as markers on the map.

🧠 AI Model Details

The AI model classifies:

Healthy

Leaf Spot

Rust

Blight

Input Size: 224x224
Framework: TensorFlow
Model File: crop_model.h5

You can train using:

PlantVillage dataset

Teachable Machine

Custom dataset

📊 Applications

Large-scale farm monitoring

Precision agriculture

Government agriculture departments

Smart irrigation planning

AgriTech startups

🔮 Future Improvements

🔥 Heatmap visualization

📱 Mobile application

☁ Cloud deployment (AWS/GCP)

🛰 NDVI vegetation index analysis

🤖 Autonomous drone navigation

📩 SMS alert system

📈 Yield prediction using ML

🏆 Why This Project is Advanced

✅ Combines Drone + AI + IoT
✅ GPS-based disease mapping
✅ Full stack architecture
✅ Real-world scalability
✅ Startup-ready solution
👨‍💻 Developed By

Achuthan Rameshkumar
Full Stack & IoT Developer
AgriTech Innovator 🌾🚀


---

If you want next:

- 📊 Professional PPT for presentation  
- 📱 Mobile app version  
- 💰 Startup business model canvas  
- 🧠 AI training step-by-step guide  
- 🌍 Cloud deployment guide  

Say **AGRI TECH FOUNDER MODE** 😎🌾
