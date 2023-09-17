#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/ComponentModel/zzzz__Win32Exception_def.hpp"
#include <cstdint>
namespace {
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class NetworkInformationException;
}
// Type: System.Net.NetworkInformation::NetworkInformationException
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8343))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8102))
// CS Name: System.Net.NetworkInformation.NetworkInformationException
class CORDL_TYPE NetworkInformationException : public ::System::ComponentModel::Win32Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~NetworkInformationException() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetworkInformationException", modifiers: " const&", def_value: None }]
constexpr NetworkInformationException(NetworkInformationException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetworkInformationException", modifiers: "&&", def_value: None }]
constexpr NetworkInformationException(NetworkInformationException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetworkInformationException(void* ptr) noexcept : ::System::ComponentModel::Win32Exception(ptr) {
}


  constexpr NetworkInformationException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetworkInformationException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetworkInformationException& operator=(NetworkInformationException&& o) noexcept = default;
  constexpr NetworkInformationException& operator=(NetworkInformationException const& o) noexcept = default;
                


// Properties

 int32_t __declspec(property(get=get_ErrorCode))  ErrorCode;


// Methods

// Ctor Parameters []
explicit NetworkInformationException() ;

/// @brief Method .ctor addr 0x2859034 size 0x64 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "serializationInfo", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "streamingContext", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit NetworkInformationException(::System::Runtime::Serialization::SerializationInfo serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method .ctor addr 0x2859098 size 0x8 virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method get_ErrorCode addr 0x28590a0 size 0x8 virtual true final false
 int32_t get_ErrorCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
} // end anonymous namespace
NEED_NO_BOX(::System::Net::NetworkInformation::NetworkInformationException);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::NetworkInformationException, "System.Net.NetworkInformation", "NetworkInformationException");
