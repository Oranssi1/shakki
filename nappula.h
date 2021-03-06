//
//  nappula.h
//  Chess
//
//  Created by Nico Behnen on 18/01/2019.
//  Copyright � 2019 B & J Corp. All rights reserved.
//

#ifndef nappula_h
#define nappula_h

#include <string>

enum
{
	VT, VR, VL, VD, VK, VS,
	MT, MR, ML, MD, MK, MS
};

class Nappula {

private:
	std::wstring unicode;
	int vari; // valkea = 0, musta = 1
	int _koodi; // VT, VR, MT tms.
public:
	Nappula(std::wstring, int, int);
	Nappula();
	void setKoodi(int);
	int getKoodi();
	void setUnicode(std::wstring);
	std::wstring getUnicode();
	void setVari(int);
	int getVari();
};


#endif /* nappula_h */
