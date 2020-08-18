# Algorithm
알고리즘 문제 C언어 구현


<br>
<h3> 
알고리즘을 연습하기 위해 달팽이 배열 문제를 c언어로 풀어봤다
</h3>

<br>

n 변수값이 입력받은 값이라고 하였을때

<br>
<br>
<br>


(0,0) (0,1) (0,2) (0,3) <br> 
(1,0) (1,1) (1,2) (1,3) <br>
(2,0) (2,1) (2,2) (2,3) <br>
(3,0) (3,1) (3,2) (3,3) <br>


<br>

이런식으로 배열 선언이 된다

<pre><code>
int arry[n][n];
</code></pre>
<br>
코드부분
<br>

여기서 방법이 여러가지 있지만 나는 한가지 규칙을 찾았다<br>

한번 윗쪽을 그리고 그다음 오른쪽 아래쪽 왼쪽 이걸 반복하기만 하면된다
<br>


<br>
2차원 배열을 하나에 테이블로 보고 천천히 생각해보자<br>
한번 위쪽을 그릴때 배열에 값을 넣을려면 arry[0][0] = ++value, arry[0][1] = ++value ,arry[0][2]= ++value ..... <br>
이런식으로 배열에 값을 넣어주면된다 <br>
그러면 그다음 오른쪽 벽을 그려줘야하니 오른쪽 벽부터 값을 또 넣어줘야한다 오른쪽 벽에 값을 넣으려면 arry[1][0] = ++value, arry[2][0] = ++value ,arry[3][0]= ++value ..... <br> 이런식으로 값을 넣어주면 되는데 arry[0][3] 부분에 값이 한번 더 들어가게 된다 <br>


<br>

<br>
<br>
<br>
<br>

그래서 언제부터 언제까지 배열을 참조하여 값을 넣어줄지 변수로 선언하여 넣어주면된다
<br>

<pre><code>

    int startC = 0;
    int startR = 0;

    int endC = n-1;
    int endR = n-1;
    
</code></pre>
<br>

startC,startR 은 최솟값
endC,edR 은 최대값

<br>
이제 이걸 조건에 맞게 배열로 돌려주면서 값을 하나씩 증가 감소 시키면된다
<br>

먼저 상단벽 부분부터
<br>
컬럼값은 고정 startR부터 endR까지 반복하여 배열에 값 넣어주고 startC값 1올려줌
<br>
<pre><code>
        for(int i = startR; i <= endR; i++){
            arry[startR][i]  =  ++mainValue; // 1부터 n*n까지 증가되면서 배열에 값을 넣어줄 변수
        } startC++;
</code></pre>

<br>
그다음 오른쪽벽
<br>
행값은 고정 startC값부터 시작하여 endC까지그려줌 그리고 endR값 1내려줌
<br>
<pre><code>

for(int i = startC; i <= endC; i++){
            arry[i][endC]  =  ++mainValue;
        } endR--;
        
</code></pre>


<br>
아래쪽 벽
<br>
컬럼값은 고정 endR값부터 startR까지 그려줌 endC값을 1내려줌
<pre><code>
for(int i = endR; i >= startR; i--){
            arry[endC][i]  =  ++mainValue;
        } endC--;
</code></pre>


<br>
왼쪽 벽
<br>
행값은 고정 endC부터 startC까지 그려줌 startR값 1올려줌
<pre><code>
for(int i = endC; i >=  startC; i--){
            arry[i][startR]  =  ++mainValue;
        }startR++;
</code></pre>

<br><br>
이런식으로 벽을 그리는데 시작 변수값이 끝 변수 값과 같으면 반복문을 그만 돌려야하니 while문으로 돌려준다<br>
while(startC <= endC && startR <= endR)
<br>
<br>

천천히 고민해보면 풀만한 문제 같다

  
