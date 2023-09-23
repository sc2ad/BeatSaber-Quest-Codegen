#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MissingMemberException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System {
class MissingFieldException;
}
// Type: System::MissingFieldException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2527))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2526))
// CS Name: System.MissingFieldException
class CORDL_TYPE MissingFieldException : public System::MissingMemberException {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~MissingFieldException() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissingFieldException", modifiers: " const&", def_value: None }]
constexpr MissingFieldException(MissingFieldException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissingFieldException", modifiers: "&&", def_value: None }]
constexpr MissingFieldException(MissingFieldException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissingFieldException(void* ptr) noexcept : System::MissingMemberException(ptr) {
}


  constexpr MissingFieldException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissingFieldException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissingFieldException& operator=(MissingFieldException&& o) noexcept = default;
  constexpr MissingFieldException& operator=(MissingFieldException const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(get=get_Message))  Message;


// Methods

// Ctor Parameters []
explicit MissingFieldException() ;

/// @brief Method .ctor addr 0x246334c size 0x5c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit MissingFieldException(::StringW message) ;

/// @brief Method .ctor addr 0x24633cc size 0x24 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "className", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "fieldName", ty: "::StringW", modifiers: "", def_value: None }]
explicit MissingFieldException(::StringW className, ::StringW fieldName) ;

/// @brief Method .ctor addr 0x24633f0 size 0x28 virtual false final false
 void _ctor(::StringW className, ::StringW fieldName) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit MissingFieldException(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2463474 size 0x4 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_Message addr 0x24635fc size 0x114 virtual true final false
 ::StringW get_Message() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::MissingFieldException);
DEFINE_IL2CPP_ARG_TYPE(System::MissingFieldException, "System", "MissingFieldException");
