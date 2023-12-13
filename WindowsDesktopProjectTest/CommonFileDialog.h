//#ifndef COMMONFILEDIALOG_H
//#define COMMONFILEDIALOG_H

#pragma once
#include <shlobj.h>
#include <shobjidl.h>     // for IFileDialogEvents and IFileDialogControlEvents
#include <shlwapi.h>
#include <new>

// Indices of file types
#define INDEX_WORDDOC 1
#define INDEX_WEBPAGE 2
#define INDEX_TEXTDOC 3

class CommonFileDialog {
public:
	CommonFileDialog();

	HRESULT CDialogEventHandler_CreateInstance(REFIID riid, void **ppv);

private:
	~CommonFileDialog();
};

//#endif