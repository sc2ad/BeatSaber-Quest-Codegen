#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System {
class SystemException;
}
// Type: System::SystemException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2480))
// CS Name: System.SystemException
class CORDL_TYPE SystemException : public ::System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~SystemException() = default;

// Ctor Parameters [CppParam { name: "", ty: "SystemException", modifiers: " const&", def_value: None }]
constexpr SystemException(SystemException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SystemException", modifiers: "&&", def_value: None }]
constexpr SystemException(SystemException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SystemException(void* ptr) noexcept : ::System::Exception(ptr) {
}


  constexpr SystemException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SystemException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SystemException& operator=(SystemException&& o) noexcept = default;
  constexpr SystemException& operator=(SystemException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit SystemException() ;

/// @brief Method .ctor addr 0x2457a64 size 0x80 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit SystemException(::StringW message) ;

/// @brief Method .ctor addr 0x244fb8c size 0x78 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "innerException", ty: "::System::Exception", modifiers: "", def_value: None }]
explicit SystemException(::StringW message, ::System::Exception innerException) ;

/// @brief Method .ctor addr 0x2457ae4 size 0x80 virtual false final false
 void _ctor(::StringW message, ::System::Exception innerException) ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit SystemException(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x244fc58 size 0x80 virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::SystemException);
DEFINE_IL2CPP_ARG_TYPE(::System::SystemException, "System", "SystemException");
