# Multiple_Inheritance__VirtualFunctions

Character Sınıfı: Tüm karakterlerin temel sınıfıdır. name özelliği ve display sanal fonksiyonu içerir.

Fighter ve Mage Arayüzleri: Fighter sınıfı attack, Mage sınıfı castSpell saf sanal fonksiyonlarını içerir.

Human, Elf, Orc Sınıfları: Character sınıfından türetilmiştir. Elf ve Orc sınıfları sırasıyla Mage ve Fighter arayüzlerini uygular.

BattleMage Sınıfı: Hem Fighter hem de Mage arayüzlerini uygular, yani hem saldırı hem de büyü yapabilir.

main Fonksiyonu: Farklı karakter türlerini oluşturur ve yeteneklerini kullanır.