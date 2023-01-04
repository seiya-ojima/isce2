//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Copyright 2012 California Institute of Technology. ALL RIGHTS RESERVED.
// 
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// 
// http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// 
// United States Government Sponsorship acknowledged. This software is subject to
// U.S. export control laws and regulations and has been classified as 'EAR99 NLR'
// (No [Export] License Required except when exporting to an embargoed country,
// end user, or in support of a prohibited end use). By downloading this software,
// the user agrees to comply with all applicable U.S. export laws and regulations.
// The user has the responsibility to obtain export licenses, or other export
// authority as may be required before exporting this software to any 'EAR99'
// embargoed foreign country or citizen of those countries.
//
// Author: Giangi Sacco
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~




#define PY_SSIZE_T_CLEAN
#include <Python.h>
#include "denseoffsetsmodule.h"
#include <cmath>
#include <sstream>
#include <iostream>
#include <string>
#include <stdint.h>
#include <vector>
using namespace std;

static const char * const __doc__ = "module for denseoffsets";

PyModuleDef moduledef = {
    // header
    PyModuleDef_HEAD_INIT,
    // name of the module
    "denseoffsets",
    // module documentation string
    __doc__,
    // size of the per-interpreter state of the module;
    // -1 if this state is global
    -1,
    denseoffsets_methods,
};

// initialization function for the module
// *must* be called PyInit_alos
PyMODINIT_FUNC
PyInit_denseoffsets()
{
    // create the module using moduledef struct defined above
    PyObject * module = PyModule_Create(&moduledef);
    // check whether module creation succeeded and raise an exception if not
    if (!module) {
        return module;
    }
    // otherwise, we have an initialized module
    // and return the newly created module
    return module;
}


PyObject * denseoffsets_C(PyObject* self, PyObject* args)
{
        uint64_t var0;
        uint64_t var1;
        uint64_t offset;
        uint64_t snr;
        if(!PyArg_ParseTuple(args, "KKKK",&var0,&var1,&offset,&snr))
        {
                return NULL;
        }
        denseoffsets_f(&var0,&var1,&offset,&snr);
        return Py_BuildValue("i", 0);
}


PyObject * setLineLength1_C(PyObject* self, PyObject* args)
{
        int var;
        if(!PyArg_ParseTuple(args, "i", &var))
        {
                return NULL;
        }
        setLineLength1_f(&var);
        return Py_BuildValue("i", 0);
}
PyObject * setLineLength2_C(PyObject* self, PyObject* args)
{
        int var;
        if(!PyArg_ParseTuple(args, "i", &var))
        {
                return NULL;
        }
        setLineLength2_f(&var);
        return Py_BuildValue("i", 0);
}

PyObject * setFileLength1_C(PyObject* self, PyObject* args)
{
        int var;
        if(!PyArg_ParseTuple(args, "i", &var))
        {
                return NULL;
        }
        setFileLength1_f(&var);
        return Py_BuildValue("i", 0);
}
PyObject * setFileLength2_C(PyObject* self, PyObject* args)
{
        int var;
        if(!PyArg_ParseTuple(args, "i", &var))
        {
                return NULL;
        }
        setFileLength2_f(&var);
        return Py_BuildValue("i", 0);
}


PyObject * setFirstSampleAcross_C(PyObject* self, PyObject* args)
{
        int var;
        if(!PyArg_ParseTuple(args, "i", &var))
        {
                return NULL;
        }
        setFirstSampleAcross_f(&var);
        return Py_BuildValue("i", 0);
}
PyObject * setLastSampleAcross_C(PyObject* self, PyObject* args)
{
        int var;
        if(!PyArg_ParseTuple(args, "i", &var))
        {
                return NULL;
        }
        setLastSampleAcross_f(&var);
        return Py_BuildValue("i", 0);
}
PyObject *setSkipSampleAcross_C(PyObject* self, PyObject* args)
{
    int var;
    if(!PyArg_ParseTuple(args,"i", &var))
    {
        return NULL;
    }
    setSkipSampleAcross_f(&var);
    return Py_BuildValue("i",0);
}
PyObject * setFirstSampleDown_C(PyObject* self, PyObject* args)
{
        int var;
        if(!PyArg_ParseTuple(args, "i", &var))
        {
                return NULL;
        }
        setFirstSampleDown_f(&var);
        return Py_BuildValue("i", 0);
}
PyObject * setLastSampleDown_C(PyObject* self, PyObject* args)
{
        int var;
        if(!PyArg_ParseTuple(args, "i", &var))
        {
                return NULL;
        }
        setLastSampleDown_f(&var);
        return Py_BuildValue("i", 0);
}
PyObject * setSkipSampleDown_C(PyObject* self, PyObject* args)
{
    int var;
    if(!PyArg_ParseTuple(args,"i", &var))
    {
        return NULL;
    }
    setSkipSampleDown_f(&var);
    return Py_BuildValue("i",0);
}
PyObject * setAcrossGrossOffset_C(PyObject* self, PyObject* args)
{
        int var;
        if(!PyArg_ParseTuple(args, "i", &var))
        {
                return NULL;
        }
        setAcrossGrossOffset_f(&var);
        return Py_BuildValue("i", 0);
}
PyObject * setDownGrossOffset_C(PyObject* self, PyObject* args)
{
        int var;
        if(!PyArg_ParseTuple(args, "i", &var))
        {
                return NULL;
        }
        setDownGrossOffset_f(&var);
        return Py_BuildValue("i", 0);
}
PyObject * setScaleFactorX_C(PyObject* self, PyObject* args)
{
        float var;
        if(!PyArg_ParseTuple(args, "f", &var))
        {
                return NULL;
        }
        setScaleFactorX_f(&var);
        return Py_BuildValue("i", 0);
}
PyObject * setScaleFactorY_C(PyObject* self, PyObject* args)
{
        float var;
        if(!PyArg_ParseTuple(args, "f", &var))
        {
                return NULL;
        }
        setScaleFactorY_f(&var);
        return Py_BuildValue("i", 0);
}
PyObject * setDebugFlag_C(PyObject* self, PyObject* args)
{
        char * var;
        Py_ssize_t varSize;
        if(!PyArg_ParseTuple(args, "s#", &var, &varSize))
        {
                return NULL;
        }
        int varInt = Py_SAFE_DOWNCAST(varSize, Py_ssize_t, int);
        setDebugFlag_f(var,&varInt);
        return Py_BuildValue("i", 0);
}

PyObject * setWindowSizeWidth_C(PyObject* self, PyObject* args)
{
    int var;
    if(!PyArg_ParseTuple(args, "i", &var))
    {
        return NULL;
    }
    setWindowSizeWidth_f(&var);
    return Py_BuildValue("i", 0);
}
PyObject * setWindowSizeHeight_C(PyObject* self, PyObject* args)
{
    int var;
    if(!PyArg_ParseTuple(args, "i", &var))
    {
        return NULL;
    }
    setWindowSizeHeight_f(&var);
    return Py_BuildValue("i", 0);
}
PyObject * setSearchWindowSizeWidth_C(PyObject* self, PyObject* args)
{
    int var;
    if(!PyArg_ParseTuple(args, "i", &var))
    {
        return NULL;
    }
    setSearchWindowSizeWidth_f(&var);
    return Py_BuildValue("i", 0);
}
PyObject * setSearchWindowSizeHeight_C(PyObject* self, PyObject* args)
{
    int var;
    if(!PyArg_ParseTuple(args, "i", &var))
    {
        return NULL;
    }
    setSearchWindowSizeHeight_f(&var);
    return Py_BuildValue("i", 0);
}

PyObject * setZoomWindowSize_C(PyObject* self, PyObject* args)
{
    int var;
    if(!PyArg_ParseTuple(args, "i", &var))
    {
        return NULL;
    }
    setZoomWindowSize_f(&var);
    return Py_BuildValue("i", 0);
}
PyObject * setOversamplingFactor_C(PyObject* self, PyObject* args)
{
    int var;
    if(!PyArg_ParseTuple(args, "i", &var))
    {
        return NULL;
    }
    setOversamplingFactor_f(&var);
    return Py_BuildValue("i", 0);
}
PyObject * setIsComplex1_C(PyObject* self, PyObject* args)
{
    int var;
    if(!PyArg_ParseTuple(args,"i",&var))
    {
        return NULL;
    }
    setIsComplex1_f(&var);
    return Py_BuildValue("i",0);
}
PyObject * setIsComplex2_C(PyObject* self, PyObject* args)
{
    int var;
    if(!PyArg_ParseTuple(args,"i",&var))
    {
        return NULL;
    }
    setIsComplex2_f(&var);
    return Py_BuildValue("i",0);
}
PyObject * setBand1_C(PyObject* self, PyObject* args)
{
    int var;
    if(!PyArg_ParseTuple(args,"i",&var))
    {
        return NULL;
    }
    var = var+1;
    setBand1_f(&var);
    return Py_BuildValue("i",0);
}
PyObject * setBand2_C(PyObject* self, PyObject* args)
{
    int var;
    if(!PyArg_ParseTuple(args,"i",&var))
    {
        return NULL;
    }
    var = var+1;
    setBand2_f(&var);
    return Py_BuildValue("i",0);
}
PyObject * setNormalizeFlag_C(PyObject * self, PyObject* args)
{
    int var;
    if(!PyArg_ParseTuple(args,"i",&var))
    {
        return NULL;
    }
    setNormalizeFlag_f(&var);
    return Py_BuildValue("i",0);
}
