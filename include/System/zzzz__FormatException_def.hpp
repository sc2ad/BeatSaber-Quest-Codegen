#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
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
class FormatException;
}
// Type: System::FormatException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2382))
// CS Name: System.FormatException
class CORDL_TYPE FormatException : public ::System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~FormatException() = default;

// Ctor Parameters [CppParam { name: "", ty: "FormatException", modifiers: " const&", def_value: None }]
constexpr FormatException(FormatException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FormatException", modifiers: "&&", def_value: None }]
constexpr FormatException(FormatException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FormatException(void* ptr) noexcept : ::System::SystemException(ptr) {
}


  constexpr FormatException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FormatException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FormatException& operator=(FormatException&& o) noexcept = default;
  constexpr FormatException& operator=(FormatException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit FormatException() ;

/// @brief Method .ctor addr 0x24293a0 size 0x5c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit FormatException(::StringW message) ;

/// @brief Method .ctor addr 0x24293fc size 0x24 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "innerException", ty: "::System::Exception", modifiers: "", def_value: None }]
explicit FormatException(::StringW message, ::System::Exception innerException) ;

/// @brief Method .ctor addr 0x2429420 size 0x24 virtual false final false
 void _ctor(::StringW message, ::System::Exception innerException) ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit FormatException(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2429444 size 0x8 virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::FormatException);
DEFINE_IL2CPP_ARG_TYPE(::System::FormatException, "System", "FormatException");
