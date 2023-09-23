#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Reflection {
class AmbiguousMatchException;
}
// Type: System.Reflection::AmbiguousMatchException
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3435))
// CS Name: System.Reflection.AmbiguousMatchException
class CORDL_TYPE AmbiguousMatchException : public System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~AmbiguousMatchException() = default;

// Ctor Parameters [CppParam { name: "", ty: "AmbiguousMatchException", modifiers: " const&", def_value: None }]
constexpr AmbiguousMatchException(AmbiguousMatchException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AmbiguousMatchException", modifiers: "&&", def_value: None }]
constexpr AmbiguousMatchException(AmbiguousMatchException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AmbiguousMatchException(void* ptr) noexcept : System::SystemException(ptr) {
}


  constexpr AmbiguousMatchException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AmbiguousMatchException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AmbiguousMatchException& operator=(AmbiguousMatchException&& o) noexcept = default;
  constexpr AmbiguousMatchException& operator=(AmbiguousMatchException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit AmbiguousMatchException() ;

/// @brief Method .ctor addr 0x2378bf8 size 0x5c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit AmbiguousMatchException(::StringW message) ;

/// @brief Method .ctor addr 0x2378c54 size 0x24 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit AmbiguousMatchException(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2378c78 size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
NEED_NO_BOX(System::Reflection::AmbiguousMatchException);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::AmbiguousMatchException, "System.Reflection", "AmbiguousMatchException");
