#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
class TypeInitializationException;
}
// Type: System::TypeInitializationException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2496))
// CS Name: System.TypeInitializationException
class CORDL_TYPE TypeInitializationException : public System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~TypeInitializationException() = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeInitializationException", modifiers: " const&", def_value: None }]
constexpr TypeInitializationException(TypeInitializationException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeInitializationException", modifiers: "&&", def_value: None }]
constexpr TypeInitializationException(TypeInitializationException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TypeInitializationException(void* ptr) noexcept : System::SystemException(ptr) {
}


  constexpr TypeInitializationException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TypeInitializationException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TypeInitializationException& operator=(TypeInitializationException&& o) noexcept = default;
  constexpr TypeInitializationException& operator=(TypeInitializationException const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__typeName, put=__set__typeName))  _typeName;

constexpr void __set__typeName(::StringW value) ;

constexpr ::StringW __get__typeName() const;


// Properties

 ::StringW __declspec(property(get=get_TypeName))  TypeName;


// Methods

// Ctor Parameters []
explicit TypeInitializationException() ;

/// @brief Method .ctor addr 0x245cdb0 size 0x58 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "fullTypeName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "innerException", ty: "System::Exception", modifiers: "", def_value: None }]
explicit TypeInitializationException(::StringW fullTypeName, System::Exception innerException) ;

/// @brief Method .ctor addr 0x245ce08 size 0x80 virtual false final false
 void _ctor(::StringW fullTypeName, System::Exception innerException) ;

// Ctor Parameters [CppParam { name: "fullTypeName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "innerException", ty: "System::Exception", modifiers: "", def_value: None }]
explicit TypeInitializationException(::StringW fullTypeName, ::StringW message, System::Exception innerException) ;

/// @brief Method .ctor addr 0x245ce88 size 0x38 virtual false final false
 void _ctor(::StringW fullTypeName, ::StringW message, System::Exception innerException) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit TypeInitializationException(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x245cec0 size 0x84 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetObjectData addr 0x245cf44 size 0x108 virtual true final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_TypeName addr 0x245d04c size 0x54 virtual false final false
 ::StringW get_TypeName() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::TypeInitializationException);
DEFINE_IL2CPP_ARG_TYPE(System::TypeInitializationException, "System", "TypeInitializationException");
