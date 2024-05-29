for(let row = 0; row < 6; row++){
    for(let col = 0; col < 5; col++){
        if(row === 0 || row === 5){
            process.stdout.write("* ")
        }else {
            if(col === 0 || col === 4){
                process.stdout.write("* ")
            } else {
                process.stdout.write("  ")
            }
        }
    }
    // process.stdout.write("\\n")
    console.log()
}