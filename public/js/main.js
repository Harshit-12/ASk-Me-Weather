const sub=document.getElementById("srbtn");
const city  =document.getElementById("city");
const output =document.getElementById("output");
const temp = document.getElementById("temp");
const temp_status = document.getElementById("temp_status");
const datahide  =document.querySelector('.tmp');
const getInfo = async(event) =>{
    event.preventDefault();
    let cityval = city.value;

     if (cityval ===""){
            output.innerText = "Please Enter city name";
            datahide.classList.add('data_hide');
     }
     else{
         try{
            let url = `http://api.openweathermap.org/data/2.5/weather?q=${cityval}&units=metric&appid=f0884be3836fb999d41a4e214ac52f40`;
            const response = await fetch(url);
            const data = await response.json();
            // console.log(data);
            const arrdata  = [data];
            datahide.classList.remove("data_hide");
            // console.log(arrdata[0].main.temp);
            temp.innerText = arrdata[0].main.temp;
            temp_status.innerText = arrdata[0].weather[0].main;
            output.innerText=`${arrdata[0].name} , ${arrdata[0].sys.country}`;
            console.log(output);
            // console.log(arrdata[0].weather[0].main);
            const temp_mood = arrdata[0].weather[0].main;
            if (temp_mood== "Clear"){
               temp_status.innerHTML("<i class='fa-solid fa-sun'> </i>");
            }
         }
         catch{
            // output.innerText = "Please Enter city name properly";
         }
     }
}
sub.addEventListener("click",getInfo);

