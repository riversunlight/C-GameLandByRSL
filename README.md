# C-GameLandByRSL
RSL(riversunlight)が制作したC言語のみで作ったゲームです  
クオリティは高くないが興味があったらプレイして見てください

### vally-ball
バレーボールゲームをモチーフにした1対1のゲームです  
イカとタコをイメージしたキャラクターがバレーのようにトスを上げたりスパイクを打ったりします  
ちょっとだけ作りこみました

###  fruit-get
課題の期限が近づいてきて焦って作った手抜きのゲームです  
手抜きの割に楽しかったので現在新機能を実装中です  
勝ち負けの概念はないですが、スコアで友達と競い合うとより楽しいと思います

### shooting
弾を相手に打って攻撃し、相手のHPを先に0にしたほうの勝利となるゲームです  
相手のHPが高く、攻撃性能も高いため、長い時間楽しむことができます  
少し運によるところもあります

## 操作方法
基本的にはどのゲームもwasdキーで移動します  
ENTERキーで決定  
その他は各ゲームのRULEを参照することで詳しいルールを把握できます


## ゲーム製作上のルール
ソースコードはすべてC言語で書くこと(C++,C#不可)  
(縛り的なもの)

ファイルは.cファイル、.txtファイル、.hファイル、.mdファイル、.exeファイルのみです

プログラムを作るときの優先順位は  
**動き　> 可読性 > 手抜き**  
とします

## githubを使ったことが無い方へ
右上の緑色のボタンをクリックして、DownLoad zipを選択して、任意のファイルに保存してください  
.zipファイルをすべて展開して、遊びたいゲームの.exeファイルをダブルクリックすれば遊ぶことができます

変更があった場合に新しいものにしたいという場合はgit bashをダウンロードして  
このリポジトリをダウンロードしたいフォルダに移動して  
`git clone https://github.com/riversunlight/C-GameLandByRSL`
とコマンドを打って実行すると別の方法でダウンロードできます  
変更されたものに更新する時には  
`git pull origin master`とコマンドを打って実行することで変更されたものが上書き保存されます

## 注意
このゲームは自由にダウンロードしてソースコードを変更しても構いませんが、このリポジトリへのプッシュはご遠慮ください  

このゲームをもとに変更したものをTwitterや別のリポジトリなどのSNS上にアップするのは構いませんがその際は、出典としてこのリポジトリのURLを参考にしたと明記してください  
忘れていた場合は、訴えるなどのことは致しませんが気づいたらURLを張っていただけると嬉しいです  
(といっても誰も変更したり遊んだりしないでしょう(笑))
