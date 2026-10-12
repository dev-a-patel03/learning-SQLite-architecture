const text = "Queen";
const memory = new Uint8Array(32);   
for (let i = 0; i < text.length; i++) {
  memory[10 + i] = text.charCodeAt(i);   // put each letter's code in the next slot
}
memory[10 + text.length] = 0;            // a 0 to mark "the text ends here"

console.log(memory);
let name1 = 10;    // "the text I care about starts at address 10"

function readString(memory, address) {
  let result = "";
  while (memory[address] !== 0) {          // stop when we reach the 0 byte
    result += String.fromCharCode(memory[address]);
    address++;                             // move to the next slot
  }
  return result;
}

console.log(readString(memory, name1));
