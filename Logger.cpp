// Assuming a Simple Design of having only 1 stream to write to , for e.g only to 1 file or console only




class Logger
{
	
	private:
	
	enum class Messagetype
	{
	   INFO,
	   WARN,
	   DEBUG
	}

	Logger();
  Logger(const Logger &lg);
  Logger& operator =(const Logger &lg);
  ~Logger();
	
}
