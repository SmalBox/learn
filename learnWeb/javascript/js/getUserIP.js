
function attachEvents()
{
	document.getElementById("x").onclick = showMessage;
}
function showMessage()
{
	document.getElementById("x").innerHTML = returnCitySN["cname"]+"("+returnCitySN["cip"]+")";
}
