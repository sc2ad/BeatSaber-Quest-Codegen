#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__ApplicationException_def.hpp"
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
class TargetException;
}
// Type: System.Reflection::TargetException
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2343))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3489))
// CS Name: System.Reflection.TargetException
class CORDL_TYPE TargetException : public ::System::ApplicationException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~TargetException() = default;

// Ctor Parameters [CppParam { name: "", ty: "TargetException", modifiers: " const&", def_value: None }]
constexpr TargetException(TargetException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TargetException", modifiers: "&&", def_value: None }]
constexpr TargetException(TargetException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TargetException(void* ptr) noexcept : ::System::ApplicationException(ptr) {
}


  constexpr TargetException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TargetException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TargetException& operator=(TargetException&& o) noexcept = default;
  constexpr TargetException& operator=(TargetException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit TargetException() ;

/// @brief Method .ctor addr 0x237f468 size 0x2c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit TargetException(::StringW message) ;

/// @brief Method .ctor addr 0x237f494 size 0x28 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "inner", ty: "::System::Exception", modifiers: "", def_value: None }]
explicit TargetException(::StringW message, ::System::Exception inner) ;

/// @brief Method .ctor addr 0x237f4bc size 0x24 virtual false final false
 void _ctor(::StringW message, ::System::Exception inner) ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit TargetException(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x237f4e0 size 0x8 virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
} // end anonymous namespace
NEED_NO_BOX(::System::Reflection::TargetException);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::TargetException, "System.Reflection", "TargetException");
