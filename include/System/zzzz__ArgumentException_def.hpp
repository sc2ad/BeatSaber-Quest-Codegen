#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__SystemException_def.hpp"
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
class ArgumentException;
}
// Type: System::ArgumentException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2344))
// CS Name: System.ArgumentException
class CORDL_TYPE ArgumentException : public ::System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~ArgumentException() = default;

// Ctor Parameters [CppParam { name: "", ty: "ArgumentException", modifiers: " const&", def_value: None }]
constexpr ArgumentException(ArgumentException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ArgumentException", modifiers: "&&", def_value: None }]
constexpr ArgumentException(ArgumentException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ArgumentException(void* ptr) noexcept : ::System::SystemException(ptr) {
}


  constexpr ArgumentException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ArgumentException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ArgumentException& operator=(ArgumentException&& o) noexcept = default;
  constexpr ArgumentException& operator=(ArgumentException const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__paramName, put=__set__paramName))  _paramName;

constexpr void __set__paramName(::StringW value) ;

constexpr ::StringW __get__paramName() const;


// Properties

 ::StringW __declspec(property(get=get_Message))  Message;


// Methods

// Ctor Parameters []
explicit ArgumentException() ;

/// @brief Method .ctor addr 0x23b3eb4 size 0x5c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit ArgumentException(::StringW message) ;

/// @brief Method .ctor addr 0x23b2ca4 size 0x24 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "innerException", ty: "::System::Exception", modifiers: "", def_value: None }]
explicit ArgumentException(::StringW message, ::System::Exception innerException) ;

/// @brief Method .ctor addr 0x23b3f10 size 0x24 virtual false final false
 void _ctor(::StringW message, ::System::Exception innerException) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "paramName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "innerException", ty: "::System::Exception", modifiers: "", def_value: None }]
explicit ArgumentException(::StringW message, ::StringW paramName, ::System::Exception innerException) ;

/// @brief Method .ctor addr 0x23b3f34 size 0x38 virtual false final false
 void _ctor(::StringW message, ::StringW paramName, ::System::Exception innerException) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "paramName", ty: "::StringW", modifiers: "", def_value: None }]
explicit ArgumentException(::StringW message, ::StringW paramName) ;

/// @brief Method .ctor addr 0x23ac97c size 0x34 virtual false final false
 void _ctor(::StringW message, ::StringW paramName) ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit ArgumentException(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x23b3f6c size 0x88 virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetObjectData addr 0x23b3ff4 size 0xdc virtual true final false
 void GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_Message addr 0x23b40d0 size 0xa0 virtual true final false
 ::StringW get_Message() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::ArgumentException);
DEFINE_IL2CPP_ARG_TYPE(::System::ArgumentException, "System", "ArgumentException");
