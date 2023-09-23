#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Claims/zzzz__ClaimsIdentity_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Security::Principal {
class WindowsImpersonationContext;
}
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
namespace System::Security::Principal {
struct WindowsAccountType;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Security::Principal {
class IIdentity;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Security::Claims {
class ClaimsIdentity;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Security::Principal {
class WindowsIdentity;
}
// Type: System.Security.Principal::WindowsIdentity
namespace System::Security::Principal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3006))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3002))
// CS Name: System.Security.Principal.WindowsIdentity
class CORDL_TYPE WindowsIdentity : public System::Security::Claims::ClaimsIdentity {
public:
// Declarations
/// @brief Convert operator to System::Security::Principal::IIdentity
constexpr operator  System::Security::Principal::IIdentity() const noexcept;

/// @brief Convert operator to System::Runtime::Serialization::IDeserializationCallback
constexpr operator  System::Runtime::Serialization::IDeserializationCallback() const noexcept;

/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~WindowsIdentity() = default;

// Ctor Parameters [CppParam { name: "", ty: "WindowsIdentity", modifiers: " const&", def_value: None }]
constexpr WindowsIdentity(WindowsIdentity const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WindowsIdentity", modifiers: "&&", def_value: None }]
constexpr WindowsIdentity(WindowsIdentity&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WindowsIdentity(void* ptr) noexcept : System::Security::Claims::ClaimsIdentity(ptr) {
}


  constexpr WindowsIdentity& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WindowsIdentity& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WindowsIdentity& operator=(WindowsIdentity&& o) noexcept = default;
  constexpr WindowsIdentity& operator=(WindowsIdentity const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get__token, put=__set__token))  _token;

constexpr void __set__token(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get__token() const;

 ::StringW __declspec(property(get=__get__type, put=__set__type))  _type;

constexpr void __set__type(::StringW value) ;

constexpr ::StringW __get__type() const;

 System::Security::Principal::WindowsAccountType __declspec(property(get=__get__account, put=__set__account))  _account;

constexpr void __set__account(System::Security::Principal::WindowsAccountType value) ;

constexpr System::Security::Principal::WindowsAccountType __get__account() const;

 bool __declspec(property(get=__get__authenticated, put=__set__authenticated))  _authenticated;

constexpr void __set__authenticated(bool value) ;

constexpr bool __get__authenticated() const;

 ::StringW __declspec(property(get=__get__name, put=__set__name))  _name;

constexpr void __set__name(::StringW value) ;

constexpr ::StringW __get__name() const;

 System::Runtime::Serialization::SerializationInfo __declspec(property(get=__get__info, put=__set__info))  _info;

constexpr void __set__info(System::Runtime::Serialization::SerializationInfo value) ;

constexpr System::Runtime::Serialization::SerializationInfo __get__info() const;

static ::cordl_internals::intptr_t __declspec(property(get=__get_invalidWindows, put=__set_invalidWindows))  invalidWindows;

static void __set_invalidWindows(::cordl_internals::intptr_t value) ;

static ::cordl_internals::intptr_t __get_invalidWindows() ;


// Properties

 ::StringW __declspec(property(get=get_AuthenticationType))  AuthenticationType;

 ::StringW __declspec(property(get=get_Name))  Name;


// Methods

// Ctor Parameters [CppParam { name: "userToken", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "acctType", ty: "System::Security::Principal::WindowsAccountType", modifiers: "", def_value: None }, CppParam { name: "isAuthenticated", ty: "bool", modifiers: "", def_value: None }]
explicit WindowsIdentity(::cordl_internals::intptr_t userToken, ::StringW type, System::Security::Principal::WindowsAccountType acctType, bool isAuthenticated) ;

/// @brief Method .ctor addr 0x230f970 size 0x64 virtual false final false
 void _ctor(::cordl_internals::intptr_t userToken, ::StringW type, System::Security::Principal::WindowsAccountType acctType, bool isAuthenticated) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit WindowsIdentity(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x230fb34 size 0x3c virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

// Ctor Parameters [CppParam { name: "claimsIdentity", ty: "System::Security::Claims::ClaimsIdentity", modifiers: "", def_value: None }, CppParam { name: "userToken", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit WindowsIdentity(System::Security::Claims::ClaimsIdentity claimsIdentity, ::cordl_internals::intptr_t userToken) ;

/// @brief Method .ctor addr 0x230fb70 size 0xa4 virtual false final false
 void _ctor(System::Security::Claims::ClaimsIdentity claimsIdentity, ::cordl_internals::intptr_t userToken) ;

/// @brief Method Dispose addr 0x230fc14 size 0x50 virtual true final true
 void Dispose() ;

/// @brief Method GetCurrent addr 0x230fc64 size 0x84 virtual false final false
static System::Security::Principal::WindowsIdentity GetCurrent() ;

/// @brief Method Impersonate addr 0x230fcec size 0x64 virtual true final false
 System::Security::Principal::WindowsImpersonationContext Impersonate() ;

/// @brief Method get_AuthenticationType addr 0x230fddc size 0x8 virtual true final true
 ::StringW get_AuthenticationType() ;

/// @brief Method get_Name addr 0x230fde4 size 0x68 virtual true final false
 ::StringW get_Name() ;

/// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization addr 0x230fe50 size 0x2d8 virtual true final true
 void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x2310128 size 0x168 virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method CloneAsBase addr 0x2310290 size 0x4 virtual false final false
 System::Security::Claims::ClaimsIdentity CloneAsBase() ;

/// @brief Method GetTokenInternal addr 0x23103e4 size 0x8 virtual false final false
 ::cordl_internals::intptr_t GetTokenInternal() ;

/// @brief Method SetToken addr 0x230f9d4 size 0x160 virtual false final false
 void SetToken(::cordl_internals::intptr_t token) ;

/// @brief Method GetCurrentToken addr 0x230fce8 size 0x4 virtual false final false
static ::cordl_internals::intptr_t GetCurrentToken() ;

/// @brief Method GetTokenName addr 0x230fe4c size 0x4 virtual false final false
static ::StringW GetTokenName(::cordl_internals::intptr_t token) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Principal
NEED_NO_BOX(System::Security::Principal::WindowsIdentity);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Principal::WindowsIdentity, "System.Security.Principal", "WindowsIdentity");
