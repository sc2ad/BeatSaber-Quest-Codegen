#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class TimeoutException;
}
// Type: System::TimeoutException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2486))
// CS Name: System.TimeoutException
class CORDL_TYPE TimeoutException : public ::System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~TimeoutException() = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeoutException", modifiers: " const&", def_value: None }]
constexpr TimeoutException(TimeoutException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeoutException", modifiers: "&&", def_value: None }]
constexpr TimeoutException(TimeoutException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TimeoutException(void* ptr) noexcept : ::System::SystemException(ptr) {
}


  constexpr TimeoutException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TimeoutException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TimeoutException& operator=(TimeoutException&& o) noexcept = default;
  constexpr TimeoutException& operator=(TimeoutException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit TimeoutException() ;

/// @brief Method .ctor addr 0x2458f10 size 0x58 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit TimeoutException(::StringW message) ;

/// @brief Method .ctor addr 0x2458f68 size 0x20 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit TimeoutException(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2458f88 size 0x4 virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::TimeoutException);
DEFINE_IL2CPP_ARG_TYPE(::System::TimeoutException, "System", "TimeoutException");
