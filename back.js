const express = require("express");
const app = express();

app.use(express.json());

app.post("/detection", (req, res) => {
    const { disease, lat, lng } = req.body;

    console.log("Disease:", disease);
    console.log("Location:", lat, lng);

    res.json({ status: "Data received" });
});

app.listen(5000, () => {
    console.log("Server running on port 5000");
});
