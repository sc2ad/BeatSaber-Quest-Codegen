#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__ArgumentException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System {
class ArgumentNullException;
}
// Type: System::ArgumentNullException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2344))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2345))
// CS Name: System.ArgumentNullException
class CORDL_TYPE ArgumentNullException : public System::ArgumentException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~ArgumentNullException() = default;

// Ctor Parameters [CppParam { name: "", ty: "ArgumentNullException", modifiers: " const&", def_value: None }]
constexpr ArgumentNullException(ArgumentNullException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ArgumentNullException", modifiers: "&&", def_value: None }]
constexpr ArgumentNullException(ArgumentNullException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ArgumentNullException(void* ptr) noexcept : System::ArgumentException(ptr) {
}


  constexpr ArgumentNullException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ArgumentNullException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ArgumentNullException& operator=(ArgumentNullException&& o) noexcept = default;
  constexpr ArgumentNullException& operator=(ArgumentNullException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ArgumentNullException() ;

/// @brief Method .ctor addr 0x23b4170 size 0x5c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "paramName", ty: "::StringW", modifiers: "", def_value: None }]
explicit ArgumentNullException(::StringW paramName) ;

/// @brief Method .ctor addr 0x23ac910 size 0x6c virtual false final false
 void _ctor(::StringW paramName) ;

// Ctor Parameters [CppParam { name: "paramName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit ArgumentNullException(::StringW paramName, ::StringW message) ;

/// @brief Method .ctor addr 0x23b41cc size 0x38 virtual false final false
 void _ctor(::StringW paramName, ::StringW message) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit ArgumentNullException(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x23b4204 size 0x4 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::ArgumentNullException);
DEFINE_IL2CPP_ARG_TYPE(System::ArgumentNullException, "System", "ArgumentNullException");
