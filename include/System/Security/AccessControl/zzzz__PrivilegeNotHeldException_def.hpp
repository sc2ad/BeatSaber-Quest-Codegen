#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__UnauthorizedAccessException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Security::AccessControl {
class PrivilegeNotHeldException;
}
// Type: System.Security.AccessControl::PrivilegeNotHeldException
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2500))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3008))
// CS Name: System.Security.AccessControl.PrivilegeNotHeldException
class CORDL_TYPE PrivilegeNotHeldException : public ::System::UnauthorizedAccessException {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::Serialization::ISerializable
constexpr operator  ::System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~PrivilegeNotHeldException() = default;

// Ctor Parameters [CppParam { name: "", ty: "PrivilegeNotHeldException", modifiers: " const&", def_value: None }]
constexpr PrivilegeNotHeldException(PrivilegeNotHeldException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PrivilegeNotHeldException", modifiers: "&&", def_value: None }]
constexpr PrivilegeNotHeldException(PrivilegeNotHeldException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PrivilegeNotHeldException(void* ptr) noexcept : ::System::UnauthorizedAccessException(ptr) {
}


  constexpr PrivilegeNotHeldException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PrivilegeNotHeldException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PrivilegeNotHeldException& operator=(PrivilegeNotHeldException&& o) noexcept = default;
  constexpr PrivilegeNotHeldException& operator=(PrivilegeNotHeldException const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__privilegeName, put=__set__privilegeName))  _privilegeName;

constexpr void __set__privilegeName(::StringW value) ;

constexpr ::StringW __get__privilegeName() const;


// Methods

// Ctor Parameters []
explicit PrivilegeNotHeldException() ;

/// @brief Method .ctor addr 0x23152f4 size 0x4c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit PrivilegeNotHeldException(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2315340 size 0x88 virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetObjectData addr 0x23153c8 size 0xdc virtual true final false
 void GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::AccessControl
} // end anonymous namespace
NEED_NO_BOX(::System::Security::AccessControl::PrivilegeNotHeldException);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::PrivilegeNotHeldException, "System.Security.AccessControl", "PrivilegeNotHeldException");
