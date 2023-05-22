#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
    
    forの中にあるifの中でbreak;をした場合
        forの外まで抜ける

    行列を取得するとき，配列の種類（intかcharか）に注意！

    char型にcinするとき，数字を打つと文字列として扱われる
        char型の数字として出力するとずれる
    
    1e5のような書き方だとdoubleがたになる．
    
    割り算は低速になりやすい

    挟み撃ち！　未知な数の下端と上端の値を設定し，真ん中の数が未知な数より大きいか小さいかを判定し，その真ん中の数を上端か下端に
    セ停止なおす方法
    
    関数はmain関数よりも上におかなければならない
    
    returnよりも後の処理は実行されない

    文字列は先頭のポインタ（[ ]なし）でも受け取れる

    多重ループはできる限り避ける
    ソートしたほうが早いかも
    ソート ---> whileで目的の場所まで行く ---> ifで一致を検証

    長いブール型の配列を活用して，候補を消したり，一致を即座に判別できるようにする

    配列の[ ]のなかの数字は整数型に直さなければならない

    配列の要素数が変数--> vectorを使用する

    大量の要素を持つ配列の一致検証--> setやmap を使うと早い
        setは要素とkeyが同じもの，mapは違うもの
    
    繰り返しの効率的な書き方　（ただしnが変わる）
        int n  = 5;
        while (n-- > 0){  }
    
    変数：宣言したブロック内で有効（}が認識される前まで）
        同じ名前の変数は，内側の変数が使用される．外側を使うときは::xのようにする．
        static intのようにして宣言すると，main開始時に0で自動的に初期化＋どこでも使える．
        自分自身も呼び出せる

    int& のように宣言／関数の出力を指定／関数の入力を指定　すると，参照渡しになる（int& a=b：aはbを参照する）
    int* のように宣言／...すると，「intへのポインタ型　int*型」になる（値はaへのポインタ）
    &a のようにすると，aへのポインタになる
    *p のようにすると，ポインタpが指すオブジェクトそのもの(エイリアス　別名)になる
        int* p; は「intへのポインタ型」pの宣言であるが，*は右に結合するのでint* p,qはpがint*型，qがint型である
        int n = 3;    int型
        int* p = &n;  int*型
        int q = *p;   int型
        int** r = &p; int**型

    ポインタを関数に渡す，ポインタの値渡し

    配列名は先頭要素へのポインタとみなされる．int* p = a;のときaはint*型のポインタ（&aにすると配列全体へのint(*)[n]型のポインタになる）

    *(p + i) = p[i] = i[p] である（両方とも要素を表し，ポインタではない）同様にa[i]のaは配列aの先頭へのポインタだと解釈できる．
        要素がn個のときa[n]は存在しないが，ポインタ&a[n]は有効
    添え字演算子[ ]は，ポインタaからiこ進んだところにある実際の値を返す．a[i]でaとiの並べ方は自由
    NULLポインタは何も指さない，void*型のポインタは何でも指せる．

    関数の引数に指定するint a[n]とint a[]とint* aは等しい．また，要素数は無視される-->別途渡す必要がある．
        関数に渡す配列（ポインタ）はそのものであるから，consutをつけて仮引数をしていするといい．
        関数は配列を戻り値にできない
        a[n][m]を渡す場合，mは固定されている必要がある
    
    vectorの書き方
        vector<型> 変数名(長さ,初期値)
        vector<型> 配列変数 = vector<型>(要素数, 初期値);  上書き可
        vector<vector<要素の型>> 変数名(要素数1, vector<要素の型>(要素数2, 初期値));
        vector<vector<要素の型>> 変数名(要素数1, vector<要素の型>(要素数2));  // 初期値を省略

    通常の変数などを書く式に，代入演算子を組み込んでもよい
        if( (a = 3) > 5 ){}
    また，for文中でif(a++ == 3){}のようにしてもよい

    オブジェクトの生成
        int* x; --> x = new int(初期化); --> *xとして使う --> deleat x;
        ()をつけないと不定値，()だと0で初期化
    
        int* a; --> a = new int[要素数]; --> *aとして使う --> deleat[] a; 初期化不可

    エラー処理
        try{ }  --->  catch(bad_alloc){  } 

    文字列
        文字列の型はconst char*で，値は先頭文字へのポインタ　静的記憶域時間が与えられる
        末尾は\0のナル文字
        要素数は文字数より多くてかまわない
        char str[]="abc";      char* ptr="ABC";   のように宣言の方法が２種類ある
        str="xyz"はエラー      ptr="XYZ"は可能
        二種類目の方法では，ポインタのさす先が変わっただけで，"abc"は残っている
    
    関数テンプレート
        template <class Type> Type 関数名( ){  } のように書くと複数の型を扱える関数になる
        文脈から判断できない場合は，関数名<型名>()のように書いて呼び出す
        template <> 返却値型 関数名<特定の型名>(){} のようにすると例外を設定できる

    名前空間
        namespace 識別子{関数や宣言} で同じ名前の関数や変数を宣言できる
        識別子::関数名や変数名   で使う

    クラス
        データ（変数）や関数をまとめる
        上に　class クラス型{ メンバ(構成要素)の宣言  }  のように書いて定義する．
        main内で　クラス型 変数名;   と書くとオブジェクトを作れる（つまり，クラスとは型を作るもの）
        クラス定義の中に public: int num;  とあって，main内に  変数名.num = 5;  と書くと代入できる．
        コンストラクタで初期化できる
            クラス名 変数名(引数);   上に書いたオブジェクトの作り方を書き換える．private:にもアクセス可能
        変数名.メンバ関数名(引数)  でクラス内の関数を実行できる（変数numの時と同じ）
        クラス定義の中に書くと自動的にインライン関数になる
        
    autoを型名の代わりに使うことで推察ができる

    クラスメンバアクセス演算子->
        x -> y  は  (*x).y と同じ意味 

    関数オブジェクト
        クラスを使って関数のようなオブジェクトを作る方法
        自分で作ったクラス（型）でも＋のような演算子を設定することができる
        そこで演算子 ()　を自作の型に定義して，関数のようにふるまわせることができる．

    ラムダ式
        関数オブジェクトを簡単にしたもの
        [キャプチャリスト](パラメータリスト) mutable 例外仕様 属性 -> 戻り値の型 { 関数の本体 }　後ろに()もつけられる
        キャプチャ  &:すべての変数を参照 =:すべてをコピー &x:xのみ参照 x:のみコピー　カンマで繋げる
        パラメータ  int n などの新たな変数の宣言　autoを使ってもよい
        省略すると  []{}  になる
        auto 識別子 = ラムダ式;   で関数のように呼び出せる
        ただし関数と違いオーバーロード不可

    参照渡し
        関数の引数をint& nのようにしたり，関数の宣言をint& n = m;のようにすると参照渡しになる．

    高速化
        repでcinするときに，同時に処理すると効率的

    二数の小さいほうを代入 --> min(a,b) を使うと効率的

    複数の処理を，順番を変えて全通り --> 再起呼び出しの関数を使うとよい

    最も大きい/小さいものを求める --> 全通りやるのではなく，一回一回の操作で大きくなるか小さくなるかを調べ，そうなる方を選ぶ．これを繰り返す．

    cinは式という扱い！   forの()の中は，cinも書ける！

    文字列型のメンバ関数を"文字列"に対して使うとき，
        "文字列"s.size()  のようにsをつけなければならない
    
    辞書の順番
        stringのを<や>で比較するだけ

    文字列の結合 --> + や += で可能
        string同士 --> 可  ，  stringとchar --> 可，

    空白を無視して，改行ごとにcin
        getline(cin ,string型の変数)
        AtCoderの入力には空白に見えても改行に似た文字が含まれていることがあるので注意

    bool型の足し算をすると自動的にintになる

    mapのイテレーター --> ポインタのようなもの
        mapは２つの値をペアで保存している．イテレーターはkeyの小さい順に並んでいる．
        イテレーター名->first でkeyを，イテレーター名->second でvalueを取り出せる　詳しくは max.cpp
    
    小文字を大文字に直す関数
        toupper(c)はc(char型)を大文字にした文字を返す
    小文字か大文字化を判定する関数
        isupper(c)はc(char型)が大文字だとture

    minとmaxを積極的にに使う!
    
    小数点以下n桁→ cout<<fixed<<setperprecision(小数点以下の桁数);

    文字との対応 ----> 文字-'a'  などをして数字として扱う

    map
        重複がない
        計算量は logN
        map<Keyの型, Valueの型> 変数名;
        値の追加	mp[key] = value;  <---注意!
        値の削除	mp.erase(key);
        値へのアクセス	mp.at(key)
        所属判定	mp.count(key)
        要素数の取得	mp.size()

    queueによる幅優先探索
        分岐で広がりながら探索する
        queueは入れた順番に取り出せる
        0-1-4
           \5
         \2
         \3-6
           \7
        のようなとき，まず0を入れる，次に123を入れて0を出す
        これを繰り返すと，一番下の階層のものだけ取り出せる

    深さ優先探索
        一度分岐を無視して最後まで進み，終点まで来たら戻る
        再起関数による方法とstackによる方法がある
        再起関数
            今いる場所がすでに見た場所，進めない場所-->return
            進んだことを記録
            四方向に対し再起関数を呼び出し
            

    priority_queue
        大きい値/小さい値から取り出せる

    順番が関係ない---> sortするといいかも

    順列全探索
        すべての並べ方を考えるとき
        要素数が少ないときに有効（-10）
        012 021 102 120 ...を二重forで考える
    
    グラフ問題
        それぞれの頂点のつながっている先をsetに入れる
        vector<set>> Graph(n);

    二分探索
        ある値からdだけ左右に離れたものを探索する
        vectorのiteratorを使う
        vector aを作る --> sort --> 
        auto itr1=upper_bound(a.begin(), a.end(), ある値+d);
        auto itr2=lower_bound(a.begin(), a.end(), ある値-d);
        itr1==itr2のとき+-dの範囲に値はない
        itr1は1を引いて使う！
    
    
    */
    return 0;
}