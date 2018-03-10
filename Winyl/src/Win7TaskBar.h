/*  This file is part of Winyl Player source code.
    Copyright (C) 2008-2018, Alex Kras. <winylplayer@gmail.com>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#pragma once

#include "ExImage.h"

class Win7TaskBar
{

public:
	Win7TaskBar();
	virtual ~Win7TaskBar();

	void SetCover(HWND wnd, const ExImage::Source& image);
	void EmptyCover(HWND wnd);
	void MessageCoverBitmap(HWND wnd, int width, int height);
	void MessageCoverPreview(HWND wnd);

	void AddButtons(HWND wnd, bool isPlay);
	void UpdateButtons(HWND wnd, bool isPlay);
	void SetProgressValue(HWND wnd, int current, int total);

private:
	ExImage::Source cover;
};


