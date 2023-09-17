#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__FormatException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Reflection {
class CustomAttributeFormatException;
}
// Type: System.Reflection::CustomAttributeFormatException
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2382))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3454))
// CS Name: System.Reflection.CustomAttributeFormatException
class CORDL_TYPE CustomAttributeFormatException : public ::System::FormatException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~CustomAttributeFormatException() = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomAttributeFormatException", modifiers: " const&", def_value: None }]
constexpr CustomAttributeFormatException(CustomAttributeFormatException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomAttributeFormatException", modifiers: "&&", def_value: None }]
constexpr CustomAttributeFormatException(CustomAttributeFormatException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CustomAttributeFormatException(void* ptr) noexcept : ::System::FormatException(ptr) {
}


  constexpr CustomAttributeFormatException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CustomAttributeFormatException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CustomAttributeFormatException& operator=(CustomAttributeFormatException&& o) noexcept = default;
  constexpr CustomAttributeFormatException& operator=(CustomAttributeFormatException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit CustomAttributeFormatException() ;

/// @brief Method .ctor addr 0x237905c size 0x60 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit CustomAttributeFormatException(::StringW message) ;

/// @brief Method .ctor addr 0x23790bc size 0x28 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "inner", ty: "::System::Exception", modifiers: "", def_value: None }]
explicit CustomAttributeFormatException(::StringW message, ::System::Exception inner) ;

/// @brief Method .ctor addr 0x23790e4 size 0x24 virtual false final false
 void _ctor(::StringW message, ::System::Exception inner) ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit CustomAttributeFormatException(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2379108 size 0x8 virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
} // end anonymous namespace
NEED_NO_BOX(::System::Reflection::CustomAttributeFormatException);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::CustomAttributeFormatException, "System.Reflection", "CustomAttributeFormatException");
