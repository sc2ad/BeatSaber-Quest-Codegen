#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__TypeLoadException_def.hpp"
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System {
class TypeAccessException;
}
// Type: System::TypeAccessException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2572))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2494))
// CS Name: System.TypeAccessException
class CORDL_TYPE TypeAccessException : public System::TypeLoadException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~TypeAccessException() = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeAccessException", modifiers: " const&", def_value: None }]
constexpr TypeAccessException(TypeAccessException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeAccessException", modifiers: "&&", def_value: None }]
constexpr TypeAccessException(TypeAccessException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TypeAccessException(void* ptr) noexcept : System::TypeLoadException(ptr) {
}


  constexpr TypeAccessException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TypeAccessException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TypeAccessException& operator=(TypeAccessException&& o) noexcept = default;
  constexpr TypeAccessException& operator=(TypeAccessException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit TypeAccessException() ;

/// @brief Method .ctor addr 0x245cd4c size 0x5c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit TypeAccessException(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x245cda8 size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::TypeAccessException);
DEFINE_IL2CPP_ARG_TYPE(System::TypeAccessException, "System", "TypeAccessException");
