// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XmlTextReaderImpl
#include "System/Xml/XmlTextReaderImpl.hpp"
// Including type: System.Xml.XmlTextReaderImpl/System.Xml.InitInputType
#include "System/Xml/XmlTextReaderImpl_InitInputType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
  // Forward declaring type: TextReader
  class TextReader;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlResolver
  class XmlResolver;
  // Forward declaring type: XmlParserContext
  class XmlParserContext;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::XmlTextReaderImpl::LaterInitParam);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlTextReaderImpl::LaterInitParam*, "System.Xml", "XmlTextReaderImpl/LaterInitParam");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x5C
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlTextReaderImpl/System.Xml.LaterInitParam
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlTextReaderImpl::LaterInitParam : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.Boolean useAsync
    // Size: 0x1
    // Offset: 0x10
    bool useAsync;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useAsync and: inputStream
    char __padding0[0x7] = {};
    // public System.IO.Stream inputStream
    // Size: 0x8
    // Offset: 0x18
    ::System::IO::Stream* inputStream;
    // Field size check
    static_assert(sizeof(::System::IO::Stream*) == 0x8);
    // public System.Byte[] inputBytes
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<uint8_t> inputBytes;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Int32 inputByteCount
    // Size: 0x4
    // Offset: 0x28
    int inputByteCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: inputByteCount and: inputbaseUri
    char __padding3[0x4] = {};
    // public System.Uri inputbaseUri
    // Size: 0x8
    // Offset: 0x30
    ::System::Uri* inputbaseUri;
    // Field size check
    static_assert(sizeof(::System::Uri*) == 0x8);
    // public System.String inputUriStr
    // Size: 0x8
    // Offset: 0x38
    ::StringW inputUriStr;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Xml.XmlResolver inputUriResolver
    // Size: 0x8
    // Offset: 0x40
    ::System::Xml::XmlResolver* inputUriResolver;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlResolver*) == 0x8);
    // public System.Xml.XmlParserContext inputContext
    // Size: 0x8
    // Offset: 0x48
    ::System::Xml::XmlParserContext* inputContext;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlParserContext*) == 0x8);
    // public System.IO.TextReader inputTextReader
    // Size: 0x8
    // Offset: 0x50
    ::System::IO::TextReader* inputTextReader;
    // Field size check
    static_assert(sizeof(::System::IO::TextReader*) == 0x8);
    // public System.Xml.XmlTextReaderImpl/System.Xml.InitInputType initType
    // Size: 0x4
    // Offset: 0x58
    ::System::Xml::XmlTextReaderImpl::InitInputType initType;
    // Field size check
    static_assert(sizeof(::System::Xml::XmlTextReaderImpl::InitInputType) == 0x4);
    public:
    // Get instance field reference: public System.Boolean useAsync
    bool& dyn_useAsync();
    // Get instance field reference: public System.IO.Stream inputStream
    ::System::IO::Stream*& dyn_inputStream();
    // Get instance field reference: public System.Byte[] inputBytes
    ::ArrayW<uint8_t>& dyn_inputBytes();
    // Get instance field reference: public System.Int32 inputByteCount
    int& dyn_inputByteCount();
    // Get instance field reference: public System.Uri inputbaseUri
    ::System::Uri*& dyn_inputbaseUri();
    // Get instance field reference: public System.String inputUriStr
    ::StringW& dyn_inputUriStr();
    // Get instance field reference: public System.Xml.XmlResolver inputUriResolver
    ::System::Xml::XmlResolver*& dyn_inputUriResolver();
    // Get instance field reference: public System.Xml.XmlParserContext inputContext
    ::System::Xml::XmlParserContext*& dyn_inputContext();
    // Get instance field reference: public System.IO.TextReader inputTextReader
    ::System::IO::TextReader*& dyn_inputTextReader();
    // Get instance field reference: public System.Xml.XmlTextReaderImpl/System.Xml.InitInputType initType
    ::System::Xml::XmlTextReaderImpl::InitInputType& dyn_initType();
  }; // System.Xml.XmlTextReaderImpl/System.Xml.LaterInitParam
  #pragma pack(pop)
  static check_size<sizeof(XmlTextReaderImpl::LaterInitParam), 88 + sizeof(::System::Xml::XmlTextReaderImpl::InitInputType)> __System_Xml_XmlTextReaderImpl_LaterInitParamSizeCheck;
  static_assert(sizeof(XmlTextReaderImpl::LaterInitParam) == 0x5C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"