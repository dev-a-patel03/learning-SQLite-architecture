const fs = require("fs");
const bytes = fs.readFileSync("music.db");   // read the whole file as raw bytes
console.log(bytes.length);                   // how many bytes the file has
console.log([...bytes.subarray(0, 16)]);     // the first 16 bytes, as normal numbers
console.log(JSON.stringify(bytes.subarray(0, 16).toString()));   // the same bytes as text