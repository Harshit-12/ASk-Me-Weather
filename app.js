const express= require("express");
const path = require("path");
const app= express();
// const hbs=require("hbs");
const staticpath =path.join(__dirname ,"/public");
// console.log(staticpath);
// console.log(path.join("D:\Weather Express App\public"))
const newpath = path.join(__dirname,"/templates/views")
console.log(newpath);
app.use(express.static(staticpath))
app.set("view engine", "hbs");
app.set("views",newpath);

const port= process.env.PORT || 8000;
app.get("/", (req,res)  => {
    res.send("Welcome Harshit");
});

app.get("/about", (req,res)  => {
    res.send("Welcome to about ka page Harshit");
});

app.get("/weather", (req,res)  => {
    res.render('weather');
});
app.get("/try", (req,res)  => {
    res.render('w');
});
app.get("*", (req,res)  => {
    res.send("404 Error Page");
});

app.listen(port, ()=>{
    console.log(`listening to port ${port}`);
});