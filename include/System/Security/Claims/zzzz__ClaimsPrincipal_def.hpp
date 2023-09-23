#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Security::Principal {
class IPrincipal;
}
namespace System::Security::Claims {
class ClaimsIdentity;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Security::Claims {
class ClaimsPrincipal;
}
// Type: System.Security.Claims::ClaimsPrincipal
namespace System::Security::Claims {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3007))
// CS Name: System.Security.Claims.ClaimsPrincipal
class CORDL_TYPE ClaimsPrincipal : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Security::Principal::IPrincipal
constexpr operator  System::Security::Principal::IPrincipal() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ClaimsPrincipal() = default;

// Ctor Parameters [CppParam { name: "", ty: "ClaimsPrincipal", modifiers: " const&", def_value: None }]
constexpr ClaimsPrincipal(ClaimsPrincipal const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ClaimsPrincipal", modifiers: "&&", def_value: None }]
constexpr ClaimsPrincipal(ClaimsPrincipal&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ClaimsPrincipal(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ClaimsPrincipal& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ClaimsPrincipal& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ClaimsPrincipal& operator=(ClaimsPrincipal&& o) noexcept = default;
  constexpr ClaimsPrincipal& operator=(ClaimsPrincipal const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_version, put=__set_m_version))  m_version;

constexpr void __set_m_version(::StringW value) ;

constexpr ::StringW __get_m_version() const;

 ::StringW __declspec(property(get=__get_m_serializedClaimsIdentities, put=__set_m_serializedClaimsIdentities))  m_serializedClaimsIdentities;

constexpr void __set_m_serializedClaimsIdentities(::StringW value) ;

constexpr ::StringW __get_m_serializedClaimsIdentities() const;

 System::Collections::Generic::List_1<System::Security::Claims::ClaimsIdentity> __declspec(property(get=__get_m_identities, put=__set_m_identities))  m_identities;

constexpr void __set_m_identities(System::Collections::Generic::List_1<System::Security::Claims::ClaimsIdentity> value) ;

constexpr System::Collections::Generic::List_1<System::Security::Claims::ClaimsIdentity> __get_m_identities() const;

static System::Func_2<System::Collections::Generic::IEnumerable_1<System::Security::Claims::ClaimsIdentity>,System::Security::Claims::ClaimsIdentity> __declspec(property(get=__get_s_identitySelector, put=__set_s_identitySelector))  s_identitySelector;

static void __set_s_identitySelector(System::Func_2<System::Collections::Generic::IEnumerable_1<System::Security::Claims::ClaimsIdentity>,System::Security::Claims::ClaimsIdentity> value) ;

static System::Func_2<System::Collections::Generic::IEnumerable_1<System::Security::Claims::ClaimsIdentity>,System::Security::Claims::ClaimsIdentity> __get_s_identitySelector() ;

static System::Func_1<System::Security::Claims::ClaimsPrincipal> __declspec(property(get=__get_s_principalSelector, put=__set_s_principalSelector))  s_principalSelector;

static void __set_s_principalSelector(System::Func_1<System::Security::Claims::ClaimsPrincipal> value) ;

static System::Func_1<System::Security::Claims::ClaimsPrincipal> __get_s_principalSelector() ;


// Properties

static System::Func_1<System::Security::Claims::ClaimsPrincipal> __declspec(property(get=get_ClaimsPrincipalSelector))  ClaimsPrincipalSelector;


// Methods

/// @brief Method SelectPrimaryIdentity addr 0x2313a30 size 0x380 virtual false final false
static System::Security::Claims::ClaimsIdentity SelectPrimaryIdentity(System::Collections::Generic::IEnumerable_1<System::Security::Claims::ClaimsIdentity> identities) ;

/// @brief Method get_ClaimsPrincipalSelector addr 0x2313db0 size 0x58 virtual false final false
static System::Func_1<System::Security::Claims::ClaimsPrincipal> get_ClaimsPrincipalSelector() ;

// Ctor Parameters []
explicit ClaimsPrincipal() ;

/// @brief Method .ctor addr 0x230bae4 size 0xa0 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit ClaimsPrincipal(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2313e08 size 0x100 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method OnSerializingMethod addr 0x231405c size 0x5c virtual false final false
 void OnSerializingMethod(System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method OnDeserializedMethod addr 0x2314acc size 0x60 virtual false final false
 void OnDeserializedMethod(System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method Deserialize addr 0x2313f08 size 0x154 virtual false final false
 void Deserialize(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method DeserializeIdentities addr 0x2314b2c size 0x6fc virtual false final false
 void DeserializeIdentities(::StringW identities) ;

/// @brief Method SerializeIdentities addr 0x23140b8 size 0xa14 virtual false final false
 ::StringW SerializeIdentities() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Claims
NEED_NO_BOX(System::Security::Claims::ClaimsPrincipal);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Claims::ClaimsPrincipal, "System.Security.Claims", "ClaimsPrincipal");
