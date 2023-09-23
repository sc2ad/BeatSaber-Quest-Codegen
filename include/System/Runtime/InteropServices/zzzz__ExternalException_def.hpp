#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class ExternalException;
}
// Type: System.Runtime.InteropServices::ExternalException
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3298))
// CS Name: System.Runtime.InteropServices.ExternalException
class CORDL_TYPE ExternalException : public System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~ExternalException() = default;

// Ctor Parameters [CppParam { name: "", ty: "ExternalException", modifiers: " const&", def_value: None }]
constexpr ExternalException(ExternalException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ExternalException", modifiers: "&&", def_value: None }]
constexpr ExternalException(ExternalException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ExternalException(void* ptr) noexcept : System::SystemException(ptr) {
}


  constexpr ExternalException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ExternalException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ExternalException& operator=(ExternalException&& o) noexcept = default;
  constexpr ExternalException& operator=(ExternalException const& o) noexcept = default;
                


// Properties

 int32_t __declspec(property(get=get_ErrorCode))  ErrorCode;


// Methods

// Ctor Parameters []
explicit ExternalException() ;

/// @brief Method .ctor addr 0x236a29c size 0x5c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit ExternalException(::StringW message) ;

/// @brief Method .ctor addr 0x236a2f8 size 0x24 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "errorCode", ty: "int32_t", modifiers: "", def_value: None }]
explicit ExternalException(::StringW message, int32_t errorCode) ;

/// @brief Method .ctor addr 0x236a31c size 0x28 virtual false final false
 void _ctor(::StringW message, int32_t errorCode) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit ExternalException(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x236a344 size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_ErrorCode addr 0x236a34c size 0x8 virtual true final false
 int32_t get_ErrorCode() ;

/// @brief Method ToString addr 0x236a354 size 0x1e4 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::InteropServices
NEED_NO_BOX(System::Runtime::InteropServices::ExternalException);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::ExternalException, "System.Runtime.InteropServices", "ExternalException");
