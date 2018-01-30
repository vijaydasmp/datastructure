// Assuming a Simple Design of having only 1 stream to write to , for e.g only to 1 file or console only
/*
The requesters need a well-known object to which to send requests to log. This means a global point of access.
Since the logging service is a single event source to which multiple listeners can register, there only needs to be one instance.

https://www.ibm.com/developerworks/webservices/library/co-single/index.html
*/


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
	
	static Logger* GetLogger()
	{
		if(m_instance == NULL)
			m_instance = new Logger();
		return m_instance;
	}
	initialize()
	{
	   logfile.open("/var/tmp/log.txt",ios::out||ios::app);	
	}
	
	write(MSGTYPE type, const string &msg )
	{
	   switch(type)
	   {
		   case INFO:
			   logfile<<"INFO: "<<msg<<endl;
		   case WARN:
			   logfile<<"WARN: "<<msg<<endl;
		   case DEBUG:
			   logfile<<"DEBUG: "<<msg<<endl;
	   }
	}
		
}

int main()
{
	Logger *log = Logger::GetLogger();
	log->initialize();
	
	log->write(INFO, "starting program")
	return 0;
}
