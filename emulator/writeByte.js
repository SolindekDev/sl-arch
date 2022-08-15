const fs = require('fs');

function theBiggestAddress(toBuf) {
    let onlyAddress = [];
    toBuf.forEach((buf) => {
        onlyAddress.push(buf.address)
    })
    return Math.max.apply(null, onlyAddress)
}

let toBuf = [
    { address: 0, value: 0x20 }, // mov
    { address: 1, value: 0x61 }, // r1
    { address: 2, value: 0x01 }, // 1
    { address: 3, value: 0x20 }, // mov
    { address: 4, value: 0x62 }, // r2
    { address: 5, value: 0x01 }, // 1
    { address: 6, value: 0x20 }, // mov
    { address: 7, value: 0x63 }, // r3
    { address: 8, value: 0xFF }, // 255
    { address: 9, value: 0x20 }, // mov
    { address: 10, value: 0x64 }, // r4
    { address: 11, value: 0xFF }, // 255
    { address: 12, value: 0x20 }, // mov
    { address: 13, value: 0x65 }, // r5
    { address: 14, value: 0xFF }, // 255
    { address: 15, value: 0xFF }, // 255
];

let buf = new Uint8Array(theBiggestAddress(toBuf));
toBuf.forEach((b) => buf[b.address] = b.value)

fs.writeFile(process.argv[2], buf, (err) => {
    if (err) throw err;

    console.log('Successfully written buffer to file');
    console.log(buf);
})
