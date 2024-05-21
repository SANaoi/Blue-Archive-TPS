const express = require("express")
const app = express()
const port = 4321

app.use(express.static("public"))

app.listen(port, ()=>{
    console.log(`server running - port:${port}`)
})