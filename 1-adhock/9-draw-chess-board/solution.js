function drawChessBoard() {
  for (let i = 1; i <= 8; i++) {
    let draw = '';
    for (let j = 1; j <= 8; j++) {
      if (i % 2 !== 0) {
        draw = j % 2 !== 0 ? draw += ' ' : draw += '#';       
      } else {
        draw = j % 2 === 0 ? draw += ' ' : draw += '#';
      }
    }
    console.log(draw);
  }
}

drawChessBoard();

/*
 # # # #
# # # # 
 # # # #
# # # # 
 # # # #
# # # # 
 # # # #
# # # #
*/