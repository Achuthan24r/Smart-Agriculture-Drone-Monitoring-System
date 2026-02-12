from flask import Flask, request, jsonify
import tensorflow as tf
import numpy as np
from PIL import Image
import io
import requests

app = Flask(__name__)

model = tf.keras.models.load_model("crop_model.h5")

diseases = ["Healthy", "Leaf Spot", "Rust", "Blight"]

def predict_image(img):
    img = img.resize((224, 224))
    img_array = np.array(img) / 255.0
    img_array = np.expand_dims(img_array, axis=0)
    prediction = model.predict(img_array)
    return diseases[np.argmax(prediction)]

@app.route('/upload', methods=['POST'])
def upload():
    image = request.data
    lat = request.headers.get("Latitude")
    lng = request.headers.get("Longitude")

    img = Image.open(io.BytesIO(image))
    disease = predict_image(img)

    # Send to Node Backend
    requests.post("http://localhost:5001/detection", json={
        "disease": disease,
        "lat": lat,
        "lng": lng
    })

    return jsonify({"status": "Processed", "disease": disease})

if __name__ == "__main__":
    app.run(host="0.0.0.0", port=5000)
