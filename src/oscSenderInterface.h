//
//  oscSenderInterface.h
//  A_P_P_A_R_E_L
//
//  Created by Julien on 23/10/2014.
//
//

#pragma once
#include "ofMain.h"
#include "ofxOscSender.h"

class apparelMod;
class oscSenderInterface
{
	public:
		oscSenderInterface			()
		{
			m_isSetup = false;
		}

		virtual void 	setup			(string ip, int port){}
		virtual	void	sendValue		(string address, float value){}
		virtual	void	sendValue		(string address, int value){}
		virtual	void	sendValue		(string address, bool value){}
		virtual void 	sendParameter	(const ofAbstractParameter & parameter){}
		virtual void 	sendModWeight	(apparelMod* pMod){}
 
		virtual void 	setActive		(bool is=true){m_isActive=is;}
				bool 	isSetup			(){return m_isSetup;}
				bool 	isActive		(){return m_isActive;}
				string	getIP			(){return m_ip;}
				int		getPort			(){return m_port;}

		// Specific to application
				

	
	protected:
		bool		m_isSetup;
		bool		m_isActive;

		string		m_ip;
		int			m_port;
};
