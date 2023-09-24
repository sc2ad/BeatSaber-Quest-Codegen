#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class InvalidCastException;
}
// Type: System::InvalidCastException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2425))
// CS Name: System.InvalidCastException
class CORDL_TYPE InvalidCastException : public System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~InvalidCastException() = default;

// Ctor Parameters [CppParam { name: "", ty: "InvalidCastException", modifiers: " const&", def_value: None }]
constexpr InvalidCastException(InvalidCastException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InvalidCastException", modifiers: "&&", def_value: None }]
constexpr InvalidCastException(InvalidCastException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InvalidCastException(void* ptr) noexcept : System::SystemException(ptr) {
}


  constexpr InvalidCastException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InvalidCastException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InvalidCastException& operator=(InvalidCastException&& o) noexcept = default;
  constexpr InvalidCastException& operator=(InvalidCastException const& o) noexcept = default;
                


// Methods

static System::InvalidCastException New_ctor() ;

/// @brief Method .ctor addr 0x244067c size 0x5c virtual false final false
 void _ctor() ;

static System::InvalidCastException New_ctor(::StringW message) ;

/// @brief Method .ctor addr 0x243dcc0 size 0x24 virtual false final false
 void _ctor(::StringW message) ;

static System::InvalidCastException New_ctor(::StringW message, System::Exception innerException) ;

/// @brief Method .ctor addr 0x24406d8 size 0x24 virtual false final false
 void _ctor(::StringW message, System::Exception innerException) ;

static System::InvalidCastException New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x24406fc size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::InvalidCastException);
DEFINE_IL2CPP_ARG_TYPE(System::InvalidCastException, "System", "InvalidCastException");
