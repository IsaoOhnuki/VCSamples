

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0626 */
/* at Tue Jan 19 12:14:07 2038
 */
/* Compiler settings for ATLFire.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0626 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __ATLFire_h_h__
#define __ATLFire_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if _CONTROL_FLOW_GUARD_XFG
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __IFireTabCtrl_FWD_DEFINED__
#define __IFireTabCtrl_FWD_DEFINED__
typedef interface IFireTabCtrl IFireTabCtrl;

#endif 	/* __IFireTabCtrl_FWD_DEFINED__ */


#ifndef __FireTabCtrl_FWD_DEFINED__
#define __FireTabCtrl_FWD_DEFINED__

#ifdef __cplusplus
typedef class FireTabCtrl FireTabCtrl;
#else
typedef struct FireTabCtrl FireTabCtrl;
#endif /* __cplusplus */

#endif 	/* __FireTabCtrl_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IFireTabCtrl_INTERFACE_DEFINED__
#define __IFireTabCtrl_INTERFACE_DEFINED__

/* interface IFireTabCtrl */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IFireTabCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("479B29EE-9A2C-11D0-B696-00A0C903487A")
    IFireTabCtrl : public IUnknown
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Decay( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Decay( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Flammability( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Flammability( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxHeat( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MaxHeat( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SpreadRate( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SpreadRate( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Size( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Smoothness( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Smoothness( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Distribution( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Distribution( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Chaos( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Chaos( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StartTab( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_StartTab( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AboutBox( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFireTabCtrlVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFireTabCtrl * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFireTabCtrl * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFireTabCtrl * This);
        
        DECLSPEC_XFGVIRT(IFireTabCtrl, get_Decay)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Decay )( 
            IFireTabCtrl * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(IFireTabCtrl, put_Decay)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Decay )( 
            IFireTabCtrl * This,
            /* [in] */ long newVal);
        
        DECLSPEC_XFGVIRT(IFireTabCtrl, get_Flammability)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Flammability )( 
            IFireTabCtrl * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(IFireTabCtrl, put_Flammability)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Flammability )( 
            IFireTabCtrl * This,
            /* [in] */ long newVal);
        
        DECLSPEC_XFGVIRT(IFireTabCtrl, get_MaxHeat)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxHeat )( 
            IFireTabCtrl * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(IFireTabCtrl, put_MaxHeat)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaxHeat )( 
            IFireTabCtrl * This,
            /* [in] */ long newVal);
        
        DECLSPEC_XFGVIRT(IFireTabCtrl, get_SpreadRate)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SpreadRate )( 
            IFireTabCtrl * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(IFireTabCtrl, put_SpreadRate)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SpreadRate )( 
            IFireTabCtrl * This,
            /* [in] */ long newVal);
        
        DECLSPEC_XFGVIRT(IFireTabCtrl, get_Size)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            IFireTabCtrl * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(IFireTabCtrl, put_Size)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Size )( 
            IFireTabCtrl * This,
            /* [in] */ long newVal);
        
        DECLSPEC_XFGVIRT(IFireTabCtrl, get_Smoothness)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Smoothness )( 
            IFireTabCtrl * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(IFireTabCtrl, put_Smoothness)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Smoothness )( 
            IFireTabCtrl * This,
            /* [in] */ long newVal);
        
        DECLSPEC_XFGVIRT(IFireTabCtrl, get_Distribution)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Distribution )( 
            IFireTabCtrl * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(IFireTabCtrl, put_Distribution)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Distribution )( 
            IFireTabCtrl * This,
            /* [in] */ long newVal);
        
        DECLSPEC_XFGVIRT(IFireTabCtrl, get_Chaos)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Chaos )( 
            IFireTabCtrl * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(IFireTabCtrl, put_Chaos)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Chaos )( 
            IFireTabCtrl * This,
            /* [in] */ long newVal);
        
        DECLSPEC_XFGVIRT(IFireTabCtrl, get_StartTab)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartTab )( 
            IFireTabCtrl * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(IFireTabCtrl, put_StartTab)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StartTab )( 
            IFireTabCtrl * This,
            /* [in] */ long newVal);
        
        DECLSPEC_XFGVIRT(IFireTabCtrl, AboutBox)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AboutBox )( 
            IFireTabCtrl * This);
        
        END_INTERFACE
    } IFireTabCtrlVtbl;

    interface IFireTabCtrl
    {
        CONST_VTBL struct IFireTabCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFireTabCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFireTabCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFireTabCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFireTabCtrl_get_Decay(This,pVal)	\
    ( (This)->lpVtbl -> get_Decay(This,pVal) ) 

#define IFireTabCtrl_put_Decay(This,newVal)	\
    ( (This)->lpVtbl -> put_Decay(This,newVal) ) 

#define IFireTabCtrl_get_Flammability(This,pVal)	\
    ( (This)->lpVtbl -> get_Flammability(This,pVal) ) 

#define IFireTabCtrl_put_Flammability(This,newVal)	\
    ( (This)->lpVtbl -> put_Flammability(This,newVal) ) 

#define IFireTabCtrl_get_MaxHeat(This,pVal)	\
    ( (This)->lpVtbl -> get_MaxHeat(This,pVal) ) 

#define IFireTabCtrl_put_MaxHeat(This,newVal)	\
    ( (This)->lpVtbl -> put_MaxHeat(This,newVal) ) 

#define IFireTabCtrl_get_SpreadRate(This,pVal)	\
    ( (This)->lpVtbl -> get_SpreadRate(This,pVal) ) 

#define IFireTabCtrl_put_SpreadRate(This,newVal)	\
    ( (This)->lpVtbl -> put_SpreadRate(This,newVal) ) 

#define IFireTabCtrl_get_Size(This,pVal)	\
    ( (This)->lpVtbl -> get_Size(This,pVal) ) 

#define IFireTabCtrl_put_Size(This,newVal)	\
    ( (This)->lpVtbl -> put_Size(This,newVal) ) 

#define IFireTabCtrl_get_Smoothness(This,pVal)	\
    ( (This)->lpVtbl -> get_Smoothness(This,pVal) ) 

#define IFireTabCtrl_put_Smoothness(This,newVal)	\
    ( (This)->lpVtbl -> put_Smoothness(This,newVal) ) 

#define IFireTabCtrl_get_Distribution(This,pVal)	\
    ( (This)->lpVtbl -> get_Distribution(This,pVal) ) 

#define IFireTabCtrl_put_Distribution(This,newVal)	\
    ( (This)->lpVtbl -> put_Distribution(This,newVal) ) 

#define IFireTabCtrl_get_Chaos(This,pVal)	\
    ( (This)->lpVtbl -> get_Chaos(This,pVal) ) 

#define IFireTabCtrl_put_Chaos(This,newVal)	\
    ( (This)->lpVtbl -> put_Chaos(This,newVal) ) 

#define IFireTabCtrl_get_StartTab(This,pVal)	\
    ( (This)->lpVtbl -> get_StartTab(This,pVal) ) 

#define IFireTabCtrl_put_StartTab(This,newVal)	\
    ( (This)->lpVtbl -> put_StartTab(This,newVal) ) 

#define IFireTabCtrl_AboutBox(This)	\
    ( (This)->lpVtbl -> AboutBox(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFireTabCtrl_INTERFACE_DEFINED__ */



#ifndef __ATLFIRELib_LIBRARY_DEFINED__
#define __ATLFIRELib_LIBRARY_DEFINED__

/* library ATLFIRELib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_ATLFIRELib;

EXTERN_C const CLSID CLSID_FireTabCtrl;

#ifdef __cplusplus

class DECLSPEC_UUID("479B29EF-9A2C-11D0-B696-00A0C903487A")
FireTabCtrl;
#endif
#endif /* __ATLFIRELib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


