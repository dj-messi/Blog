function clck(val){
    document.getElementById('cal2').value+=val;
}
function result()
{
   var x =eval(document.getElementById('cal2').value);
   document.getElementById('cal2').value=x;
   
}
function clr()
{
    document.getElementById('cal2').value='';
}