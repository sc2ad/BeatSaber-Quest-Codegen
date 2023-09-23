#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__ApplicationException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class Exception;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Reflection {
class TargetInvocationException;
}
// Type: System.Reflection::TargetInvocationException
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2343))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3490))
// CS Name: System.Reflection.TargetInvocationException
class CORDL_TYPE TargetInvocationException : public System::ApplicationException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~TargetInvocationException() = default;

// Ctor Parameters [CppParam { name: "", ty: "TargetInvocationException", modifiers: " const&", def_value: None }]
constexpr TargetInvocationException(TargetInvocationException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TargetInvocationException", modifiers: "&&", def_value: None }]
constexpr TargetInvocationException(TargetInvocationException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TargetInvocationException(void* ptr) noexcept : System::ApplicationException(ptr) {
}


  constexpr TargetInvocationException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TargetInvocationException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TargetInvocationException& operator=(TargetInvocationException&& o) noexcept = default;
  constexpr TargetInvocationException& operator=(TargetInvocationException const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "inner", ty: "System::Exception", modifiers: "", def_value: None }]
explicit TargetInvocationException(System::Exception inner) ;

/// @brief Method .ctor addr 0x237f4e8 size 0x6c virtual false final false
 void _ctor(System::Exception inner) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "inner", ty: "System::Exception", modifiers: "", def_value: None }]
explicit TargetInvocationException(::StringW message, System::Exception inner) ;

/// @brief Method .ctor addr 0x237f554 size 0x24 virtual false final false
 void _ctor(::StringW message, System::Exception inner) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit TargetInvocationException(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x237f578 size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
NEED_NO_BOX(System::Reflection::TargetInvocationException);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::TargetInvocationException, "System.Reflection", "TargetInvocationException");
