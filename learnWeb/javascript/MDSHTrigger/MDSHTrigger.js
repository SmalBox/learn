function getImgTitleDom(titleVal){
   var selectDom = [];
   var dom = document.getElementsByTagName('img');
   for (var i = 0; i < dom.length; i++){
      if (titleVal === dom[i].getAttribute('title'))
         selectDom.push(dom[i]);
   }
   return selectDom;
}
function SHTrigger(elnid){
   var eln = getImgTitleDom(elnid);
   if(eln[0].style.display === "none")
     eln[0].style.display = "block";
   else
     eln[0].style.display = "none";
}