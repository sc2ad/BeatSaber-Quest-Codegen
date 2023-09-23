#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class InvalidProgramException;
}
// Type: System::InvalidProgramException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2427))
// CS Name: System.InvalidProgramException
class CORDL_TYPE InvalidProgramException : public System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~InvalidProgramException() = default;

// Ctor Parameters [CppParam { name: "", ty: "InvalidProgramException", modifiers: " const&", def_value: None }]
constexpr InvalidProgramException(InvalidProgramException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InvalidProgramException", modifiers: "&&", def_value: None }]
constexpr InvalidProgramException(InvalidProgramException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InvalidProgramException(void* ptr) noexcept : System::SystemException(ptr) {
}


  constexpr InvalidProgramException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InvalidProgramException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InvalidProgramException& operator=(InvalidProgramException&& o) noexcept = default;
  constexpr InvalidProgramException& operator=(InvalidProgramException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit InvalidProgramException() ;

/// @brief Method .ctor addr 0x24407b0 size 0x5c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit InvalidProgramException(::StringW message) ;

/// @brief Method .ctor addr 0x244080c size 0x24 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit InvalidProgramException(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2440830 size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::InvalidProgramException);
DEFINE_IL2CPP_ARG_TYPE(System::InvalidProgramException, "System", "InvalidProgramException");
