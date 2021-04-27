const path = require('path');


let a = "aa";
let b = "bb";
let c = "cc";

let r = path.join(a, b, c);
let r = `${a}/${b}/${c}`;

console.log(r);