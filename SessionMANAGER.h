

class SessionManager
{

	vector<Session> sessions;
	time_t time = 0;

public:
	SessionManager() {}

	void ListOfSessions() {
		for (size_t i = 0; i < sessions.size(); i++) {
			cout << i + 1 << ". ";
			sessions[i].showTime();
			int winner = sessions[i].getWinner();
			cout << sessions[i].arr[winner] << " won" << endl;
		}
	}

	void PerformGameSession(vector<Player>& players, int num) {
		for (int i = 0; i < num; i++) {
			Session session(players);
			session.gameStart(players);
			session.saveLog();
			session.showTime();
			session.showTeamS1mple();
			session.showTeamDev1ce();
			sessions.push_back(session);
		}
	}
};
