const fs = require('fs');
function prompt(texto = "") {
    process.stdout.write(texto);
    const buffer = Buffer.alloc(1024);
    const bytesLidos = fs.readSync(0, buffer, 0, 1024);
    return buffer.toString('utf8', 0, bytesLidos).trim();
}





function lvp9() {
    let recebe = prompt();
    let num = parseFloat(recebe);
   
    if (num > 0) {
        console.log("NUM=" + (num).toFixed(2) +  " POSITIVO");
    }

    else if (num == 0)
        console.log("NUM=" + (num).toFixed(2) +  " NULO");

    else {
        console.log("NUM=" + (num).toFixed(2) +  " NEGATIVO");
    }

    return num;
}

lvp9();

