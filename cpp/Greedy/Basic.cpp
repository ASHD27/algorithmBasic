/*
    Greedy Algorithm
    그리디 알고리즘이란 지금 당장 눈앞에 보이는 최적의 해만 찾아가는 알고리즘.
    숲을 보는게 아니라 현재 주어진 나무만 보고 가는 방식
    이 그리디 알고리즘 방식으로 하면 항상 최적의 결과가 나오는 것은 아니지만, 
    최적의 해에 어느정도 근사한 값을 구할 수 있다는 장점이 있다.

    그리디의 대표적인 예제로는 거스름돈 문제가 있다.
    거스름돈 줄 때 보통 동전을 적게 줄려고 하지 많이 주려고 하진 않음
    예를 들면, 240원 거스름돈 준다 치면 10원 짜리 24개 주는 사람은 거의 없음
    100 원 2개, 10 원 4개 이런 식으로 주지

    이 알고리즘은 또한 무조건 큰 경우대로, 무조건 작은 경우대로, 무조건 긴 경우 대로 등
    다소 극단적인 접근 방식으로 문제에 접근한다는 점에서 정렬 기법이 함께 사용되는 경우가 많다
    Kruskal, 최소 비용 신장 트리(MST) 등 이 이에 해당함

    거스름돈 문제로 다시 돌아가보면
    거스름돈 문제에 대한 접근 법은 
    될 수 있으면 "큰 동전 위주"(큰 경우 위주로)로 주는게  기준이 됨

*/

#include <iostream>

using namespace std;

int main()
{
    int n, result = 0; // n 거스름돈의 양
    cin >> n;
    result += n / 500; // 500 원 짜리로 몇번 나눠지는가?
    n %= 500;          // 500 원 짜리 사용했으므로 전체 거스름돈의 양 줄임
    result += n / 100; // 100 원 짜리로 몇번 나눠지는가?
    n %= 100;          // 100 원 짜리 사용했으므로 전체 거스름돈의 양 줄임
    result += n / 50;  // 50 원 짜리로 몇번 나눠지는가?
    n %= 50;           // 50 원 짜리 사용했으므로 전체 거스름돈의 양 줄임
    result += n / 10;  // 10 원 짜리로 몇번 나눠지는가?
    n %= 10;           // 10 원 짜리 사용했으므로 전체 거스름돈의 양 줄임
    return 0;
}