*int main (){
    long long n , x ;
    cin >> n >> x ;
    cout << n % x ;
    return 0 ;
}


/*You have a total of n
 apples that you want to distribute among x
 people as fairly as possible. To achieve this, you start by giving one apple to each person in order, starting from the first person, and continue the distribution process until you run out of apples.

Once you reach the last person, you restart the distribution from the first person, repeating this process until all apples are distributed.

Your task is to count the number of people who end up with more apples than others due to the distribution process. Note that not everyone may receive the same number of apples.

For example, if you have 7
 apples and 3
 people, the distribution would look like this:

Person 1 gets 3 apples.
Person 2 gets 2 apples.
Person 3 gets 2 apples.
In this case, person 1 have received an extra apple compared to person 2 and 3. Therefore, the count of people with extra apples is 1.

Input
One line contains two integers, n
 and x
 (1≤n,x≤109)
.

Output
One integer, The number of people with extra apples.*/