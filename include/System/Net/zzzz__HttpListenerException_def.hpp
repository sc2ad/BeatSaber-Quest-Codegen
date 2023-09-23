#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/ComponentModel/zzzz__Win32Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Net {
class HttpListenerException;
}
// Type: System.Net::HttpListenerException
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8343))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7914))
// CS Name: System.Net.HttpListenerException
class CORDL_TYPE HttpListenerException : public System::ComponentModel::Win32Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~HttpListenerException() = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpListenerException", modifiers: " const&", def_value: None }]
constexpr HttpListenerException(HttpListenerException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpListenerException", modifiers: "&&", def_value: None }]
constexpr HttpListenerException(HttpListenerException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HttpListenerException(void* ptr) noexcept : System::ComponentModel::Win32Exception(ptr) {
}


  constexpr HttpListenerException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HttpListenerException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HttpListenerException& operator=(HttpListenerException&& o) noexcept = default;
  constexpr HttpListenerException& operator=(HttpListenerException const& o) noexcept = default;
                


// Properties

 int32_t __declspec(property(get=get_ErrorCode))  ErrorCode;


// Methods

// Ctor Parameters []
explicit HttpListenerException() ;

/// @brief Method .ctor addr 0x280a084 size 0x64 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "errorCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit HttpListenerException(int32_t errorCode, ::StringW message) ;

/// @brief Method .ctor addr 0x280a0e8 size 0x8 virtual false final false
 void _ctor(int32_t errorCode, ::StringW message) ;

// Ctor Parameters [CppParam { name: "serializationInfo", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "streamingContext", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit HttpListenerException(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method .ctor addr 0x280a0f0 size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method get_ErrorCode addr 0x280a0f8 size 0x8 virtual true final false
 int32_t get_ErrorCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::HttpListenerException);
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpListenerException, "System.Net", "HttpListenerException");
