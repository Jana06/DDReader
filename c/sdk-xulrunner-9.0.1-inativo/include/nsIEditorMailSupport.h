/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/editor/idl/nsIEditorMailSupport.idl
 */

#ifndef __gen_nsIEditorMailSupport_h__
#define __gen_nsIEditorMailSupport_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsISupportsArray; /* forward declaration */

class nsIDOMNode; /* forward declaration */


/* starting interface:    nsIEditorMailSupport */
#define NS_IEDITORMAILSUPPORT_IID_STR "fdf23301-4a94-11d3-9ce4-9960496c41bc"

#define NS_IEDITORMAILSUPPORT_IID \
  {0xfdf23301, 0x4a94, 0x11d3, \
    { 0x9c, 0xe4, 0x99, 0x60, 0x49, 0x6c, 0x41, 0xbc }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIEditorMailSupport : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IEDITORMAILSUPPORT_IID)

  /* void pasteAsQuotation (in long aSelectionType); */
  NS_SCRIPTABLE NS_IMETHOD PasteAsQuotation(PRInt32 aSelectionType) = 0;

  /* nsIDOMNode insertAsQuotation (in AString aQuotedText); */
  NS_SCRIPTABLE NS_IMETHOD InsertAsQuotation(const nsAString & aQuotedText, nsIDOMNode * *_retval NS_OUTPARAM) = 0;

  /* void insertTextWithQuotations (in DOMString aStringToInsert); */
  NS_SCRIPTABLE NS_IMETHOD InsertTextWithQuotations(const nsAString & aStringToInsert) = 0;

  /* void pasteAsCitedQuotation (in AString aCitation, in long aSelectionType); */
  NS_SCRIPTABLE NS_IMETHOD PasteAsCitedQuotation(const nsAString & aCitation, PRInt32 aSelectionType) = 0;

  /* nsIDOMNode insertAsCitedQuotation (in AString aQuotedText, in AString aCitation, in boolean aInsertHTML); */
  NS_SCRIPTABLE NS_IMETHOD InsertAsCitedQuotation(const nsAString & aQuotedText, const nsAString & aCitation, PRBool aInsertHTML, nsIDOMNode * *_retval NS_OUTPARAM) = 0;

  /* void rewrap (in boolean aRespectNewlines); */
  NS_SCRIPTABLE NS_IMETHOD Rewrap(PRBool aRespectNewlines) = 0;

  /* void stripCites (); */
  NS_SCRIPTABLE NS_IMETHOD StripCites(void) = 0;

  /* nsISupportsArray getEmbeddedObjects (); */
  NS_SCRIPTABLE NS_IMETHOD GetEmbeddedObjects(nsISupportsArray * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIEditorMailSupport, NS_IEDITORMAILSUPPORT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIEDITORMAILSUPPORT \
  NS_SCRIPTABLE NS_IMETHOD PasteAsQuotation(PRInt32 aSelectionType); \
  NS_SCRIPTABLE NS_IMETHOD InsertAsQuotation(const nsAString & aQuotedText, nsIDOMNode * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD InsertTextWithQuotations(const nsAString & aStringToInsert); \
  NS_SCRIPTABLE NS_IMETHOD PasteAsCitedQuotation(const nsAString & aCitation, PRInt32 aSelectionType); \
  NS_SCRIPTABLE NS_IMETHOD InsertAsCitedQuotation(const nsAString & aQuotedText, const nsAString & aCitation, PRBool aInsertHTML, nsIDOMNode * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Rewrap(PRBool aRespectNewlines); \
  NS_SCRIPTABLE NS_IMETHOD StripCites(void); \
  NS_SCRIPTABLE NS_IMETHOD GetEmbeddedObjects(nsISupportsArray * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIEDITORMAILSUPPORT(_to) \
  NS_SCRIPTABLE NS_IMETHOD PasteAsQuotation(PRInt32 aSelectionType) { return _to PasteAsQuotation(aSelectionType); } \
  NS_SCRIPTABLE NS_IMETHOD InsertAsQuotation(const nsAString & aQuotedText, nsIDOMNode * *_retval NS_OUTPARAM) { return _to InsertAsQuotation(aQuotedText, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD InsertTextWithQuotations(const nsAString & aStringToInsert) { return _to InsertTextWithQuotations(aStringToInsert); } \
  NS_SCRIPTABLE NS_IMETHOD PasteAsCitedQuotation(const nsAString & aCitation, PRInt32 aSelectionType) { return _to PasteAsCitedQuotation(aCitation, aSelectionType); } \
  NS_SCRIPTABLE NS_IMETHOD InsertAsCitedQuotation(const nsAString & aQuotedText, const nsAString & aCitation, PRBool aInsertHTML, nsIDOMNode * *_retval NS_OUTPARAM) { return _to InsertAsCitedQuotation(aQuotedText, aCitation, aInsertHTML, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Rewrap(PRBool aRespectNewlines) { return _to Rewrap(aRespectNewlines); } \
  NS_SCRIPTABLE NS_IMETHOD StripCites(void) { return _to StripCites(); } \
  NS_SCRIPTABLE NS_IMETHOD GetEmbeddedObjects(nsISupportsArray * *_retval NS_OUTPARAM) { return _to GetEmbeddedObjects(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIEDITORMAILSUPPORT(_to) \
  NS_SCRIPTABLE NS_IMETHOD PasteAsQuotation(PRInt32 aSelectionType) { return !_to ? NS_ERROR_NULL_POINTER : _to->PasteAsQuotation(aSelectionType); } \
  NS_SCRIPTABLE NS_IMETHOD InsertAsQuotation(const nsAString & aQuotedText, nsIDOMNode * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->InsertAsQuotation(aQuotedText, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD InsertTextWithQuotations(const nsAString & aStringToInsert) { return !_to ? NS_ERROR_NULL_POINTER : _to->InsertTextWithQuotations(aStringToInsert); } \
  NS_SCRIPTABLE NS_IMETHOD PasteAsCitedQuotation(const nsAString & aCitation, PRInt32 aSelectionType) { return !_to ? NS_ERROR_NULL_POINTER : _to->PasteAsCitedQuotation(aCitation, aSelectionType); } \
  NS_SCRIPTABLE NS_IMETHOD InsertAsCitedQuotation(const nsAString & aQuotedText, const nsAString & aCitation, PRBool aInsertHTML, nsIDOMNode * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->InsertAsCitedQuotation(aQuotedText, aCitation, aInsertHTML, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Rewrap(PRBool aRespectNewlines) { return !_to ? NS_ERROR_NULL_POINTER : _to->Rewrap(aRespectNewlines); } \
  NS_SCRIPTABLE NS_IMETHOD StripCites(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->StripCites(); } \
  NS_SCRIPTABLE NS_IMETHOD GetEmbeddedObjects(nsISupportsArray * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEmbeddedObjects(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsEditorMailSupport : public nsIEditorMailSupport
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIEDITORMAILSUPPORT

  nsEditorMailSupport();

private:
  ~nsEditorMailSupport();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsEditorMailSupport, nsIEditorMailSupport)

nsEditorMailSupport::nsEditorMailSupport()
{
  /* member initializers and constructor code */
}

nsEditorMailSupport::~nsEditorMailSupport()
{
  /* destructor code */
}

/* void pasteAsQuotation (in long aSelectionType); */
NS_IMETHODIMP nsEditorMailSupport::PasteAsQuotation(PRInt32 aSelectionType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMNode insertAsQuotation (in AString aQuotedText); */
NS_IMETHODIMP nsEditorMailSupport::InsertAsQuotation(const nsAString & aQuotedText, nsIDOMNode * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void insertTextWithQuotations (in DOMString aStringToInsert); */
NS_IMETHODIMP nsEditorMailSupport::InsertTextWithQuotations(const nsAString & aStringToInsert)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void pasteAsCitedQuotation (in AString aCitation, in long aSelectionType); */
NS_IMETHODIMP nsEditorMailSupport::PasteAsCitedQuotation(const nsAString & aCitation, PRInt32 aSelectionType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMNode insertAsCitedQuotation (in AString aQuotedText, in AString aCitation, in boolean aInsertHTML); */
NS_IMETHODIMP nsEditorMailSupport::InsertAsCitedQuotation(const nsAString & aQuotedText, const nsAString & aCitation, PRBool aInsertHTML, nsIDOMNode * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void rewrap (in boolean aRespectNewlines); */
NS_IMETHODIMP nsEditorMailSupport::Rewrap(PRBool aRespectNewlines)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void stripCites (); */
NS_IMETHODIMP nsEditorMailSupport::StripCites()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsISupportsArray getEmbeddedObjects (); */
NS_IMETHODIMP nsEditorMailSupport::GetEmbeddedObjects(nsISupportsArray * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIEditorMailSupport_h__ */
