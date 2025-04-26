#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include <iterator>
#include<unordered_map>
#include <map>
#include <iomanip>
#include <limits>
using namespace std;
map<string,vector<string>>student;
map<string,vector<string>>professor;
map<string,vector<string>>klass;

multimap<string, string>student_s;
multimap<string, string>professor_s;

multimap<string, vector<string>> garde;

multimap<string,string> top_grade;

vector<string> string_split(string s, const char delimiter)
{
    size_t start=0;
    size_t end=s.find_first_of(delimiter);
    vector<string> output;
    while (end <= string::npos)
    {
	    output.emplace_back(s.substr(start, end-start));

	    if (end == string::npos)
	    	break;

    	start=end+1;
    	end = s.find_first_of(delimiter, start);
    }
    return output;
}

int main(){
   
    while (true)
    {
        string order;
        getline(cin,order);
        vector<string> o = string_split(order, ' ');

        if(o[0] == "register_student"){
            auto s = student.find(o[2]);
            auto p = professor.find(o[2]);
            if(s == student.end() && p == professor.end()){
                student.insert(pair<string,vector<string>>(o[2],{o[1],o[3],o[4]}));
                cout << "welcome to golestan"<<endl;
            }else{
                cout << "this identical number previously registered" << endl;
            }
        }else if(o[0] == "register_professor"){
            auto s = student.find(o[2]);
            auto p = professor.find(o[2]);
            if(s == student.end() && p == professor.end()){
                professor.insert(pair<string,vector<string>>(o[2],{o[1],o[3]}));
                cout << "welcome to golestan"<<endl;
            }else{
                cout << "this identical number previously registered" << endl;
            }
        }else if(o[0] == "make_class"){
            auto c = klass.find(o[2]);
            if(c == klass.end()){
                klass.insert(pair<string,vector<string>>(o[2],{o[1],o[3]}));
                cout << "class added successfully"<< endl;
            }else{
                cout << "this class id previously used"<< endl;
            }
        }else if(o[0] == "add_student"){
            int i =0;
            if(student.find(o[1]) == student.end()){
                cout << "invalid student"<< endl;
                i++;
            }
            if(klass.find(o[2]) == klass.end()){
                cout << "invalid class"<< endl;
                i++;
            }
            if(klass.find(o[2])->second[1] != student.find(o[1])->second[2]){
                cout << "student field is not match" << endl;
                i++;
            }
            for(auto s_s=student_s.begin();s_s!=student_s.end();s_s++){
                if(s_s->first == o[1] && s_s->second == o[2]){
                    cout << "student is already registered" << endl;
                    i++;
                }
            }
            if(i == 0){
                student_s.insert(pair<string, string>(o[1],o[2]));
                cout << "student added successfully to the class" << endl;
            }
        }else if(o[0] == "add_professor"){
            int j = 0;
            if(professor.find(o[1]) == professor.end()){
                cout << "invalid professor"<< endl;
                j++;
            }
            if(klass.find(o[2]) == klass.end()){
                cout << "invalid class"<< endl;
                j++;
            }
            if(klass.find(o[2])->second[1] != professor.find(o[1])->second[1]){
                cout << "professor field is not match" << endl;
                j++;
            }
            for(auto s_p=professor_s.begin();s_p != professor_s.end();s_p++){
                if(s_p->second == o[2]){
                    cout << "this class has a professor" << endl;
                    j++;
                }
            }
            if(j == 0){              
                professor_s.insert(pair<string, string>(o[1],o[2]));
                cout << "professor added successfully to the class" << endl;
            }
        }else if(o[0] == "student_status"){
            auto s = student.find(o[1]);
            if(s == student.end()){
                cout << "invalid student"<< endl;
            }else{
                for(auto &p : s->second){
                    cout << p << " ";
                }
                for(auto &a_s : student_s){
                    if(a_s.first == o[1]){
                        auto c = klass.find(a_s.second);
                        if(c != klass.end()){
                            cout << c->second[0] << " ";
                        }
                    }
                }
                cout << endl;
            }
        }else if(o[0] == "professor_status"){
            auto p = professor.find(o[1]);
            if(p == professor.end()){
                cout << "invalid professor"<< endl;
            }else{
                for(auto &p : p->second){
                    cout << p << " ";
                }
                for(auto &a_p : professor_s){
                    if(a_p.first == o[1]){
                        auto c = klass.find(a_p.second);
                        if(c != klass.end()){
                            cout << c->second[0] << " ";
                        }
                    }
                }
                cout << endl;
            }
        }else if(o[0] == "class_status"){
            auto c = klass.find(o[1]);
            int k = 0 ;
            if(c == klass.end()){
                cout << "invalid class "<< endl;
            }else{
                for(auto &a_p : professor_s){
                    if(a_p.second == o[1]){
                        auto c = professor.find(a_p.first);
                        if(c != professor.end()){
                            cout << c->second[0] << " ";
                            k++;
                        }
                    }
                }
                if(k == 0){
                    cout << "None" << " ";
                }
                for(auto &a_s : student_s){
                    if(a_s.second == o[1]){
                        auto c = student.find(a_s.first);
                        if(c != student.end()){
                            cout << c->second[0] << " ";
                        }
                    }
                }
                cout << endl;
            }
        }else if(o[0] == "set_final_mark"){
            int b = 0;
            auto p = professor.find(o[1]);
            if(p == professor.end()){
                cout << "invalid professor"<< endl;
                b++;
            }
            auto s = student.find(o[2]);
            if(s == student.end()){
                cout << "invalid student"<< endl;
                b++;
            }
            auto c = klass.find(o[3]);
            if(c == klass.end()){
                cout << "invalid class "<< endl;
                b++;
            }
            for(auto &s_p : professor_s){
                if(s_p.first == o[1] && s_p.second != o[3]){
                    cout << "professor class is not match" << endl;
                    b++;
                }
            }
            for(auto &s_s : student_s){
                if(s_s.first != o[2] && s_s.second != o[3]){
                    cout << " student did not registered" << endl;
                    b++;
                }
            }
            if(b == 0){
                int n = 0;
                for(auto &g_s : garde){
                    if(g_s.first == o[2]){
                        if(g_s.second[0] == o[1] && g_s.second[1] == o[3]){
                            garde.erase(g_s);
                            garde.insert(pair<string,vector<string>>(o[2],{o[1],o[3],o[4]}));
                            n++;
                            cout << "student final mark added or changed" << endl;
                        }
                    }
                }
                if(n == 0){
                    garde.insert(pair<string,vector<string>>(o[2],{o[1],o[3],o[4]}));
                    cout << "student final mark added or changed" << endl;
                }
            }               
        }else if(o[0] == "mark_student"){
            int e = 0;
            auto s = student.find(o[1]);
            if(s == student.end()){
                cout << "invalid student"<< endl;
                e++;
            }
            auto c = klass.find(o[2]);
            if(c == klass.end()){
                cout << "invalid class"<< endl;
                e++;
            }
            for(auto &s_s : student_s){
                if(s_s.first == o[2] && s_s.second != o[3]){
                    cout << " student did not registered" << endl;
                    e++;
                }
            }
            int fi = 0;
            for(auto &g_g : garde){
                if(g_g.second[1] == o[2] && g_g.first == o[1]){
                    fi++;
                }
            }
            if(fi == 0){
                cout << "None" << endl;
            }
            if(e == 0){
                for(auto &g_s : garde){
                    if(g_s.first == o[1] && g_s.second[1] == o[2]){
                        cout << g_s.second[2] << endl;
                    }
                }
            }
        }else if(o[0] == "mark_list"){
            int s = 0;
            auto c = klass.find(o[1]);
            if(c == klass.end()){
                cout << "invalid class "<< endl;
                s++;
            }
            for(auto &v : professor_s){
                if(v.second != o[1]){
                    cout << "no professor" << endl;
                    s++;
                }
            }
            for(auto &r : student_s){
                if(r.second != o[1]){
                    cout << "no student" << endl;
                    s++;
                }
            }
            if(s == 0){
                for(auto &z : student_s){
                    int d = 0;
                    if(z.second == o[1]){
                        for(auto &x : garde){
                            if(x.first == z.first && x.second[1] == o[1]){
                                cout << x.second[2] << " ";
                                d++;
                            }
                        }
                        if(d == 0){
                            cout << "None" << " ";
                        }
                    }
                }
                cout << endl;
            }
        }else if(o[0] == "average_mark_professor"){
            int d = 0,t=0;
            double sum=0;
            auto p = professor.find(o[1]);
            if(p == professor.end()){
                cout << "invalid professor"<< endl;
            }else{
                for(auto &f : garde){
                    if(f.second[0] == o[1]){
                        sum += stoi(f.second[2]);
                        t++;
                    }
                }
                if(t == 0){
                    cout << "None" << endl;
                }else{
                    cout << fixed << setprecision(2) << sum / t << endl;
                }
            }
        }else if(o[0] == "average_mark_student"){
            int t=0;
            double sum=0;
            auto s = student.find(o[1]);
            if(s == student.end()){
                cout << "invalid student"<< endl;
            }else{
                for(auto &k : garde){
                    if(k.first == o[1]){
                        sum += stoi(k.second[2]);
                        t++;
                    }
                }
                if(t == 0){
                    cout << "None" << endl;
                }else{
                    top_grade.insert(pair<string,string>(o[1],to_string(sum/t)));
                    cout << fixed << setprecision(2) << sum / t << endl;
                }
            }
        }else if(o[0] == "top_student"){
            int t=0;
            double sum=0;
            int top_top=0,m=0;
            pair<string,vector<string>> top_guy;
            for(auto &s : student){
                if(s.second[2] == o[1] && s.second[1] == o[2]){
                    for(auto &k : garde){
                        if(k.first == s.first){
                            sum += stoi(k.second[2]);
                            t++;
                        }
                    }
                    double avg = sum/t;
                    if( top_top <= avg){
                        top_top = avg;
                        top_guy = s;
                    }
                    m++;
                }
            }
            if(m == 0){
                cout << "None" << endl;
            }else{
                cout << top_guy.second[0] << endl;
            }
        }else if(o[0] == "top_mark"){
            auto c = klass.find(o[1]);
            if(c == klass.end()){
                cout << "invalid class "<< endl;
            }
            int q = 0,w = 0;
            for(auto &t_g : garde){
                if(t_g.second[1] == o[1] && w < stoi(t_g.second[2])){
                    w = stoi(t_g.second[2]);
                    q++;
                }
            }
            if(q == 0){
                cout << "None" << endl;
            }else{
                cout << w;
            }
        }else if(o[0] == "end"){
            break;
        }
    }
}