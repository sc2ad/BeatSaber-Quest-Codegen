#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
class ApplicationException;
}
// Type: System::ApplicationException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2343))
// CS Name: System.ApplicationException
class CORDL_TYPE ApplicationException : public System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~ApplicationException() = default;

// Ctor Parameters [CppParam { name: "", ty: "ApplicationException", modifiers: " const&", def_value: None }]
constexpr ApplicationException(ApplicationException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ApplicationException", modifiers: "&&", def_value: None }]
constexpr ApplicationException(ApplicationException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ApplicationException(void* ptr) noexcept : System::Exception(ptr) {
}


  constexpr ApplicationException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ApplicationException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ApplicationException& operator=(ApplicationException&& o) noexcept = default;
  constexpr ApplicationException& operator=(ApplicationException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ApplicationException() ;

/// @brief Method .ctor addr 0x23b3cbc size 0x80 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit ApplicationException(::StringW message) ;

/// @brief Method .ctor addr 0x23b3d3c size 0x78 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "innerException", ty: "System::Exception", modifiers: "", def_value: None }]
explicit ApplicationException(::StringW message, System::Exception innerException) ;

/// @brief Method .ctor addr 0x23b3db4 size 0x80 virtual false final false
 void _ctor(::StringW message, System::Exception innerException) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit ApplicationException(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x23b3e34 size 0x80 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::ApplicationException);
DEFINE_IL2CPP_ARG_TYPE(System::ApplicationException, "System", "ApplicationException");
