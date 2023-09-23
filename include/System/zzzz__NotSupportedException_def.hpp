#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
class NotSupportedException;
}
// Type: System::NotSupportedException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2445))
// CS Name: System.NotSupportedException
class CORDL_TYPE NotSupportedException : public System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~NotSupportedException() = default;

// Ctor Parameters [CppParam { name: "", ty: "NotSupportedException", modifiers: " const&", def_value: None }]
constexpr NotSupportedException(NotSupportedException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NotSupportedException", modifiers: "&&", def_value: None }]
constexpr NotSupportedException(NotSupportedException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NotSupportedException(void* ptr) noexcept : System::SystemException(ptr) {
}


  constexpr NotSupportedException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NotSupportedException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NotSupportedException& operator=(NotSupportedException&& o) noexcept = default;
  constexpr NotSupportedException& operator=(NotSupportedException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit NotSupportedException() ;

/// @brief Method .ctor addr 0x2442af4 size 0x5c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit NotSupportedException(::StringW message) ;

/// @brief Method .ctor addr 0x243baa0 size 0x24 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "innerException", ty: "System::Exception", modifiers: "", def_value: None }]
explicit NotSupportedException(::StringW message, System::Exception innerException) ;

/// @brief Method .ctor addr 0x2442b50 size 0x24 virtual false final false
 void _ctor(::StringW message, System::Exception innerException) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit NotSupportedException(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2442b74 size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::NotSupportedException);
DEFINE_IL2CPP_ARG_TYPE(System::NotSupportedException, "System", "NotSupportedException");
