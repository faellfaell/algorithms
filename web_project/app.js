var tetrI = document.querySelector(".tetrI")
var block = document.querySelector(".block");
var x = 160;
var y = 40;
var moveX = 0;
var moveY = 0;
var a = 0;
var b = 0;
var rotate = 0;
var c;

function right()
{
  if(moveX < 360 && rotate == 0)
  {
    moveX += 40;
  }
}

function left()
{
  if(moveX > 0)
  {
    moveX -= 40;
  }
}

function down()
{
  if(moveY < 640 && rotate == 0)
  {
    moveY += 40;
  }
  else if(moveY < 760 && rotate == 1 )
  {
    moveY += 40;
  }
}

function rotation()
{
  rotate == 1 ? rotate = 0 : rotate = 1;
  
  if(rotate == 1 && moveX < 280)
  {
    x = 40;
    y = 160;
    tetrI.style.width=y+"px";
    tetrI.style.height=x+"px";
    tetrI.style.flexDirection="row"
  }
  else if(rotate == 0 && moveY < 640)
  {
    x = 160;
    y = 40;
    tetrI.style.width=y+"px";
    tetrI.style.height=x+"px";
    tetrI.style.flexDirection="column";
  }
}

document.addEventListener("keydown", (event)=>{
    console.log(moveX, moveY, rotate)
  switch(event.keyCode)
  {
    case 39: 
      right();
      tetrI.style.left = moveX+"px";
      break;

    case 37: 
      left();
      tetrI.style.left = moveX+"px";
      break;
    
    case 40:
      down(); 
      tetrI.style.top = moveY+"px"
      break;
    
    case 38:
      x == 40 ? moveY = 0 : moveY = 0;
      tetrI.style.top = moveY+"px"
      break;

    case 32:
      rotation();
      break;

  }
})

