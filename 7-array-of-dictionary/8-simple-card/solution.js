
function simpleCardsFusion (str) {
  const fusionCards = [
    { name: 'Cyber Twin Dragon', card1: 'Cyber Dragon', card2: 'Cyber Dragon' },
    { name: 'Gaia The Dragon Champion', card1: 'Curse of Dragon', card2: 'Gaia The Fierce Knight' },
    { name: 'Meteor B. Dragon', card1: 'Red-Eyes B. Dragon', card2: 'Meteor Dragon' },
    { name: 'Crimson Sunbird', card1: 'Faith Bird', card2: 'Skull Red Bird' },
    { name: 'Flame Swordsman', card1: 'Masaki the Legendary Swordsman', card2: 'Flame Manipulator' }
  ];
  
  let name = str.split('+');
  let ans = '';
  for (let card of fusionCards) {
    if (card.card1 == name[0] && card.card2 == name[1]) {
      ans = card.name;
    }
    if (card.card2 == name[0] && card.card1 == name[1]) {
      ans = card.name;
    }
  }
  return ans != '' ? ans : 'Fusion failed';

}

console.log(simpleCardsFusion('Flame Manipulator+Masaki the Legendary Swordsman'));
// Flame Swordsman

console.log(simpleCardsFusion('Gaia The Fierce Knight+Curse of Dragon'));
// Gaia the Dragon Champion

console.log(simpleCardsFusion('Faith Bird+Skull Red Bird'));
// Crimson Sunbird

console.log(simpleCardsFusion('Red-Eyes B. Dragon+Meteor Dragon'));
// Meteor B. Dragon

console.log(simpleCardsFusion('Cyber Dragon+Cyber Dragon'));
// Cyber Twin Dragon

console.log(simpleCardsFusion('Dark Magician+Dark Magician'));
// Fusion failed

console.log(simpleCardsFusion('Cyber Dragon+Dark Magician'));
// Fusion failed
