#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MemberAccessException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class FieldAccessException;
}
// Type: System::FieldAccessException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2435))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2380))
// CS Name: System.FieldAccessException
class CORDL_TYPE FieldAccessException : public System::MemberAccessException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~FieldAccessException() = default;

// Ctor Parameters [CppParam { name: "", ty: "FieldAccessException", modifiers: " const&", def_value: None }]
constexpr FieldAccessException(FieldAccessException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FieldAccessException", modifiers: "&&", def_value: None }]
constexpr FieldAccessException(FieldAccessException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FieldAccessException(void* ptr) noexcept : System::MemberAccessException(ptr) {
}


  constexpr FieldAccessException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FieldAccessException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FieldAccessException& operator=(FieldAccessException&& o) noexcept = default;
  constexpr FieldAccessException& operator=(FieldAccessException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit FieldAccessException() ;

/// @brief Method .ctor addr 0x2429310 size 0x5c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit FieldAccessException(::StringW message) ;

/// @brief Method .ctor addr 0x242936c size 0x24 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit FieldAccessException(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2429390 size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::FieldAccessException);
DEFINE_IL2CPP_ARG_TYPE(System::FieldAccessException, "System", "FieldAccessException");
