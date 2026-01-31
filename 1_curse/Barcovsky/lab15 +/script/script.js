let firstTaskBlock = document.querySelector(".task1_block")
let secondTaskBlock = document.querySelector(".task2")
let thirdTaskBlock = document.querySelector(".task3")



function firstTask() {
    firstTaskBlock.innerHTML = "Hoodwink, зелёных просторов, но была вынуждена иска Hoodwink всегда спешит туда, где ждёт беда, и готова противостоять любой угрозе из призрачного леса, ставшего ей домом. Даже с тяжёлым арбалетом она мимолётно прошмыгивает меж веток и листьев, и выследить её в бою почти невозможно. На мгновение потеряете её из виду, и она уже у вас за спиной — а ваша остолбенелая туша висит в её сетях."
}

function secondTask() {
    secondTaskBlock.style.border = "10px solid red";
}

function thirdTask() {
    thirdTaskBlock.src = "./image/hood.jpg"
}

function thirdTaskMore() {
    thirdTaskBlock.src = "./image/pudge.jpg"    
}