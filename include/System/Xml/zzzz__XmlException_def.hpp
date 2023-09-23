#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Xml {
class XmlException;
}
// Type: System.Xml::XmlException
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11509))
// CS Name: System.Xml.XmlException
class CORDL_TYPE XmlException : public System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb8};

virtual ~XmlException() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlException", modifiers: " const&", def_value: None }]
constexpr XmlException(XmlException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlException", modifiers: "&&", def_value: None }]
constexpr XmlException(XmlException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlException(void* ptr) noexcept : System::SystemException(ptr) {
}


  constexpr XmlException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlException& operator=(XmlException&& o) noexcept = default;
  constexpr XmlException& operator=(XmlException const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_res, put=__set_res))  res;

constexpr void __set_res(::StringW value) ;

constexpr ::StringW __get_res() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_args, put=__set_args))  args;

constexpr void __set_args(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_args() const;

 int32_t __declspec(property(get=__get_lineNumber, put=__set_lineNumber))  lineNumber;

constexpr void __set_lineNumber(int32_t value) ;

constexpr int32_t __get_lineNumber() const;

 int32_t __declspec(property(get=__get_linePosition, put=__set_linePosition))  linePosition;

constexpr void __set_linePosition(int32_t value) ;

constexpr int32_t __get_linePosition() const;

 ::StringW __declspec(property(get=__get_sourceUri, put=__set_sourceUri))  sourceUri;

constexpr void __set_sourceUri(::StringW value) ;

constexpr ::StringW __get_sourceUri() const;

 ::StringW __declspec(property(get=__get_message, put=__set_message))  message;

constexpr void __set_message(::StringW value) ;

constexpr ::StringW __get_message() const;


// Properties

 int32_t __declspec(property(get=get_LineNumber))  LineNumber;

 int32_t __declspec(property(get=get_LinePosition))  LinePosition;

 ::StringW __declspec(property(get=get_Message))  Message;

 ::StringW __declspec(property(get=get_ResString))  ResString;


// Methods

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit XmlException(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x27135c8 size 0x3d8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetObjectData addr 0x2713c44 size 0x170 virtual true final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

// Ctor Parameters []
explicit XmlException() ;

/// @brief Method .ctor addr 0x2713db4 size 0x18 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit XmlException(::StringW message) ;

/// @brief Method .ctor addr 0x2713dcc size 0x14 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "innerException", ty: "System::Exception", modifiers: "", def_value: None }, CppParam { name: "lineNumber", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "linePosition", ty: "int32_t", modifiers: "", def_value: None }]
explicit XmlException(::StringW message, System::Exception innerException, int32_t lineNumber, int32_t linePosition) ;

/// @brief Method .ctor addr 0x2713de0 size 0x8 virtual false final false
 void _ctor(::StringW message, System::Exception innerException, int32_t lineNumber, int32_t linePosition) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "innerException", ty: "System::Exception", modifiers: "", def_value: None }, CppParam { name: "lineNumber", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "linePosition", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "sourceUri", ty: "::StringW", modifiers: "", def_value: None }]
explicit XmlException(::StringW message, System::Exception innerException, int32_t lineNumber, int32_t linePosition, ::StringW sourceUri) ;

/// @brief Method .ctor addr 0x2713de8 size 0x128 virtual false final false
 void _ctor(::StringW message, System::Exception innerException, int32_t lineNumber, int32_t linePosition, ::StringW sourceUri) ;

// Ctor Parameters [CppParam { name: "res", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "args", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }]
explicit XmlException(::StringW res, ::ArrayW<::StringW> args) ;

/// @brief Method .ctor addr 0x2709af0 size 0x5c virtual false final false
 void _ctor(::StringW res, ::ArrayW<::StringW> args) ;

// Ctor Parameters [CppParam { name: "res", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "arg", ty: "::StringW", modifiers: "", def_value: None }]
explicit XmlException(::StringW res, ::StringW arg) ;

/// @brief Method .ctor addr 0x27098ec size 0xd8 virtual false final false
 void _ctor(::StringW res, ::StringW arg) ;

// Ctor Parameters [CppParam { name: "res", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "arg", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "sourceUri", ty: "::StringW", modifiers: "", def_value: None }]
explicit XmlException(::StringW res, ::StringW arg, ::StringW sourceUri) ;

/// @brief Method .ctor addr 0x2714088 size 0xe4 virtual false final false
 void _ctor(::StringW res, ::StringW arg, ::StringW sourceUri) ;

// Ctor Parameters [CppParam { name: "res", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "arg", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "lineNumber", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "linePosition", ty: "int32_t", modifiers: "", def_value: None }]
explicit XmlException(::StringW res, ::StringW arg, int32_t lineNumber, int32_t linePosition) ;

/// @brief Method .ctor addr 0x270f7dc size 0xec virtual false final false
 void _ctor(::StringW res, ::StringW arg, int32_t lineNumber, int32_t linePosition) ;

// Ctor Parameters [CppParam { name: "res", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "arg", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "lineNumber", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "linePosition", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "sourceUri", ty: "::StringW", modifiers: "", def_value: None }]
explicit XmlException(::StringW res, ::StringW arg, int32_t lineNumber, int32_t linePosition, ::StringW sourceUri) ;

/// @brief Method .ctor addr 0x271416c size 0xf8 virtual false final false
 void _ctor(::StringW res, ::StringW arg, int32_t lineNumber, int32_t linePosition, ::StringW sourceUri) ;

// Ctor Parameters [CppParam { name: "res", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "args", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }, CppParam { name: "lineNumber", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "linePosition", ty: "int32_t", modifiers: "", def_value: None }]
explicit XmlException(::StringW res, ::ArrayW<::StringW> args, int32_t lineNumber, int32_t linePosition) ;

/// @brief Method .ctor addr 0x270f93c size 0x70 virtual false final false
 void _ctor(::StringW res, ::ArrayW<::StringW> args, int32_t lineNumber, int32_t linePosition) ;

// Ctor Parameters [CppParam { name: "res", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "args", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }, CppParam { name: "lineNumber", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "linePosition", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "sourceUri", ty: "::StringW", modifiers: "", def_value: None }]
explicit XmlException(::StringW res, ::ArrayW<::StringW> args, int32_t lineNumber, int32_t linePosition, ::StringW sourceUri) ;

/// @brief Method .ctor addr 0x2714264 size 0x7c virtual false final false
 void _ctor(::StringW res, ::ArrayW<::StringW> args, int32_t lineNumber, int32_t linePosition, ::StringW sourceUri) ;

// Ctor Parameters [CppParam { name: "res", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "args", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }, CppParam { name: "innerException", ty: "System::Exception", modifiers: "", def_value: None }, CppParam { name: "lineNumber", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "linePosition", ty: "int32_t", modifiers: "", def_value: None }]
explicit XmlException(::StringW res, ::ArrayW<::StringW> args, System::Exception innerException, int32_t lineNumber, int32_t linePosition) ;

/// @brief Method .ctor addr 0x27142e0 size 0x7c virtual false final false
 void _ctor(::StringW res, ::ArrayW<::StringW> args, System::Exception innerException, int32_t lineNumber, int32_t linePosition) ;

// Ctor Parameters [CppParam { name: "res", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "args", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }, CppParam { name: "innerException", ty: "System::Exception", modifiers: "", def_value: None }, CppParam { name: "lineNumber", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "linePosition", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "sourceUri", ty: "::StringW", modifiers: "", def_value: None }]
explicit XmlException(::StringW res, ::ArrayW<::StringW> args, System::Exception innerException, int32_t lineNumber, int32_t linePosition, ::StringW sourceUri) ;

/// @brief Method .ctor addr 0x2714008 size 0x80 virtual false final false
 void _ctor(::StringW res, ::ArrayW<::StringW> args, System::Exception innerException, int32_t lineNumber, int32_t linePosition, ::StringW sourceUri) ;

/// @brief Method FormatUserMessage addr 0x2713f10 size 0xf8 virtual false final false
static ::StringW FormatUserMessage(::StringW message, int32_t lineNumber, int32_t linePosition) ;

/// @brief Method CreateMessage addr 0x27139a0 size 0x2a4 virtual false final false
static ::StringW CreateMessage(::StringW res, ::ArrayW<::StringW> args, int32_t lineNumber, int32_t linePosition) ;

/// @brief Method BuildCharExceptionArgs addr 0x2709a94 size 0x5c virtual false final false
static ::ArrayW<::StringW> BuildCharExceptionArgs(::StringW data, int32_t invCharIndex) ;

/// @brief Method BuildCharExceptionArgs addr 0x271435c size 0x54 virtual false final false
static ::ArrayW<::StringW> BuildCharExceptionArgs(::ArrayW<char16_t> data, int32_t length, int32_t invCharIndex) ;

/// @brief Method BuildCharExceptionArgs addr 0x270fefc size 0x2a8 virtual false final false
static ::ArrayW<::StringW> BuildCharExceptionArgs(char16_t invChar, char16_t nextChar) ;

/// @brief Method get_LineNumber addr 0x27143b0 size 0x8 virtual false final false
 int32_t get_LineNumber() ;

/// @brief Method get_LinePosition addr 0x27143b8 size 0x8 virtual false final false
 int32_t get_LinePosition() ;

/// @brief Method get_Message addr 0x27143c0 size 0x18 virtual true final false
 ::StringW get_Message() ;

/// @brief Method get_ResString addr 0x27143d8 size 0x8 virtual false final false
 ::StringW get_ResString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::XmlException);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlException, "System.Xml", "XmlException");
