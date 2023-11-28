//#ifndef COMMONFILEDIALOG_H
//#define COMMONFILEDIALOG_H

#pragma once
#include <shlobj.h>
#include <shobjidl.h>     // for IFileDialogEvents and IFileDialogControlEvents
#include <shlwapi.h>
#include <new>

class CommonFileDialog {
public:
	CommonFileDialog();

	HRESULT CDialogEventHandler_CreateInstance(REFIID riid, void **ppv);

private:
	~CommonFileDialog();
};

//#endif