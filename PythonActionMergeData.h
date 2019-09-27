/*
 * PythonActionMergeData.h. Action resolve data.
 *
 * Copyright (c) 2012, Perforce Software, Inc.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1.  Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *
 * 2.  Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL PERFORCE SOFTWARE, INC. BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * $Id: //depot/main/p4-python/PythonActionMergeData.h#2 $
 */

#ifndef PYTHONACTIONMERGEDATA_H_
#define PYTHONACTIONMERGEDATA_H_

class PythonActionMergeData
{
public:
    PythonActionMergeData(ClientUser *ui, ClientResolveA *m, StrPtr &hint, PyObject *info);
    ~PythonActionMergeData();

    void SetDebug( int d )     { debug = d; }

    PyObject * GetMergeAction() const;
    PyObject * GetYoursAction() const;
    PyObject * GetTheirAction() const;
    PyObject * GetType() const;

    PyObject * GetMergeInfo() const;
    PyObject * GetMergeHint() const;

    StrBuf GetString() const;

private:
    int                 debug;
    ClientUser *        ui;
    StrBuf              hint;
    ClientResolveA *    merger;
    PyObject *		mergeInfo;
};

#endif /* PYTHONACTIONMERGEDATA_H_ */
