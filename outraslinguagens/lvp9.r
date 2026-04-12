lvp9 <- function() {
   
    num <- scan(file = "stdin", what = numeric(), n = 1, quiet = TRUE)

    
    if (num > 0) {
        cat(sprintf("NUM=%.2f POSITIVO", num))
    }
    else if (num == 0) {
        cat(sprintf("NUM=%.2f NULO", num))
        }
    else {
        cat(sprintf("NUM=%.2f NEGATIVO", num))
    }
}
lvp9()
