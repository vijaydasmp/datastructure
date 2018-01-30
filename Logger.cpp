// Assuming a Simple Design of having only 1 stream to write to , for e.g only to 1 file or console only




class Logger
{
	
	private:
	ofstream logfile;
	static Logger *m_instance;
	enum class MSGTYPE
	{
	   INFO,
	   WARN,
	   DEBUG
	}

	Logger();
  	Logger(const Logger &lg);
  	Logger& operator =(const Logger &lg);
  	~Logger();
	
	public:
	
	initialize()
	{
	   logfile.open("/var/tmp/log.txt",ios::out);	
	}
	
	write(MSGTYPE type, str msg )
	{
		
	}
		
}
