const subBtn = document.getElementsByClassName("submit")


subBtn[0].addEventListener("click", function () {
    const name = document.getElementById("name").value;
    const secondName = document.getElementById("secondName").value;
    const fam = document.getElementById("fam").value;
    const mail = document.getElementById("mail").value;
    const number = document.getElementById("number").value;
    const faculty = document.getElementById("faculty").value;
    const group = document.getElementById("group").value;
    const course = document.getElementById("course").value;

    const set = Array.from(
        document.querySelectorAll("#set input:checked")
    ).map(input => input.id);
    console.log(set);
    
    const footer = document.getElementsByClassName("footerOutput")
    footer[0].innerHTML = `
        <p>Имя: ${name}</p>
        <p>Отчество: ${secondName}</p>
        <p>Фамилия: ${fam}</p>
        <p>mail: ${mail}</p>
        <p>Телефон: ${number}</p>
        <p>Факультет: ${faculty}</p>
        <p>Группа: ${group}</p>
        <p>Курс: ${course}</p>
        <p>Соцсети: ${set.join(", ")}</p>
    `
})

