#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__SystemException_def.hpp"
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
namespace System {
class UnauthorizedAccessException;
}
// Type: System::UnauthorizedAccessException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2500))
// CS Name: System.UnauthorizedAccessException
class CORDL_TYPE UnauthorizedAccessException : public ::System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~UnauthorizedAccessException() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnauthorizedAccessException", modifiers: " const&", def_value: None }]
constexpr UnauthorizedAccessException(UnauthorizedAccessException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnauthorizedAccessException", modifiers: "&&", def_value: None }]
constexpr UnauthorizedAccessException(UnauthorizedAccessException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnauthorizedAccessException(void* ptr) noexcept : ::System::SystemException(ptr) {
}


  constexpr UnauthorizedAccessException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnauthorizedAccessException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnauthorizedAccessException& operator=(UnauthorizedAccessException&& o) noexcept = default;
  constexpr UnauthorizedAccessException& operator=(UnauthorizedAccessException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UnauthorizedAccessException() ;

/// @brief Method .ctor addr 0x245fa9c size 0x58 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit UnauthorizedAccessException(::StringW message) ;

/// @brief Method .ctor addr 0x245faf4 size 0x20 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "inner", ty: "::System::Exception", modifiers: "", def_value: None }]
explicit UnauthorizedAccessException(::StringW message, ::System::Exception inner) ;

/// @brief Method .ctor addr 0x245fb14 size 0x20 virtual false final false
 void _ctor(::StringW message, ::System::Exception inner) ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit UnauthorizedAccessException(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x245fb34 size 0x4 virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::UnauthorizedAccessException);
DEFINE_IL2CPP_ARG_TYPE(::System::UnauthorizedAccessException, "System", "UnauthorizedAccessException");
