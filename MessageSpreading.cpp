There are N students in a class, each in possession of a different funny story. As the students were getting bored in the class, they decided to come up with a game so that they can pass their time.

They want to share the funny stories with each other by sending electronic messages. Assume that a sender includes all the funny stories
he or she knows at the time the message is sent and that a message may only have one addressee. What is the minimum number of messages
they need to send to guarantee that everyone of them gets all the funny stories?

A---->B(has A,B story) ---->c(has A,B,C story)----->A(has A,B,C story) ---->B(A,B,C story)

so n in 1st cycle
and (n-2) in 2nd cycle

int main() {
	int t;
cin >> t;
while(t--)
{
int n;
cin >> n;

int ans = 2*(n - 1);
cout << ans << endl;
}
	return 0;
}
