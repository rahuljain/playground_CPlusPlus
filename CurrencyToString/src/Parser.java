import java.util.Queue;


public class Parser {
	get(String no);
	Queue q = new Queue();
	char *char1 = no.end();
	char *char2 = no.end();
	int pos = 0;
	
	for(int i = 0; i < no.size(); i++) {
		ptr1--;
		if(ptr1 == '.') {
			while(pos<=i) {
				if(ptr2 == '0') {
					ptr2--;
				}
				else if(pos == 0) {
					q.push(One.getVal(ptr2-'0'));
					ptr2--;
				}
				else if(pos == 1) {
					q.push(Ten.getVal(ptr2-'0'));
				}
				pos++;
			}
		}
	}
	
}
