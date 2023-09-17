#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Security::Principal {
class IIdentity;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Security::Claims {
class Claim;
}
namespace System::Collections::ObjectModel {
template<typename T>
class Collection_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
// Forward declare root types
namespace System::Security::Claims {
class ClaimsIdentity;
}
namespace System::Security::Claims {
class ____System__Security__Claims__ClaimsIdentity___get_Claims_d__51;
}
// Type: ::<get_Claims>d__51
namespace System::Security::Claims {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3005))
// CS Name: System.Security.Claims.ClaimsIdentity::<get_Claims>d__51
class CORDL_TYPE ____System__Security__Claims__ClaimsIdentity___get_Claims_d__51 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::System::Security::Claims::Claim>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Security::Claims::Claim>() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~____System__Security__Claims__ClaimsIdentity___get_Claims_d__51() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Security__Claims__ClaimsIdentity___get_Claims_d__51", modifiers: " const&", def_value: None }]
constexpr ____System__Security__Claims__ClaimsIdentity___get_Claims_d__51(____System__Security__Claims__ClaimsIdentity___get_Claims_d__51 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Security__Claims__ClaimsIdentity___get_Claims_d__51", modifiers: "&&", def_value: None }]
constexpr ____System__Security__Claims__ClaimsIdentity___get_Claims_d__51(____System__Security__Claims__ClaimsIdentity___get_Claims_d__51&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Security__Claims__ClaimsIdentity___get_Claims_d__51(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Security__Claims__ClaimsIdentity___get_Claims_d__51& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Security__Claims__ClaimsIdentity___get_Claims_d__51& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Security__Claims__ClaimsIdentity___get_Claims_d__51& operator=(____System__Security__Claims__ClaimsIdentity___get_Claims_d__51&& o) noexcept = default;
  constexpr ____System__Security__Claims__ClaimsIdentity___get_Claims_d__51& operator=(____System__Security__Claims__ClaimsIdentity___get_Claims_d__51 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::Security::Claims::Claim __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::System::Security::Claims::Claim value) ;

constexpr ::System::Security::Claims::Claim __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 ::System::Security::Claims::ClaimsIdentity __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::System::Security::Claims::ClaimsIdentity value) ;

constexpr ::System::Security::Claims::ClaimsIdentity __get___4__this() const;

 int32_t __declspec(property(get=__get__i_5__2, put=__set__i_5__2))  _i_5__2;

constexpr void __set__i_5__2(int32_t value) ;

constexpr int32_t __get__i_5__2() const;

 ::System::Collections::Generic::IEnumerator_1<::System::Security::Claims::Claim> __declspec(property(get=__get___7__wrap2, put=__set___7__wrap2))  __7__wrap2;

constexpr void __set___7__wrap2(::System::Collections::Generic::IEnumerator_1<::System::Security::Claims::Claim> value) ;

constexpr ::System::Collections::Generic::IEnumerator_1<::System::Security::Claims::Claim> __get___7__wrap2() const;


// Properties

 ::System::Security::Claims::Claim __declspec(property(get=System_Collections_Generic_IEnumerator_System_Security_Claims_Claim__get_Current))  System_Collections_Generic_IEnumerator_System_Security_Claims_Claim__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____System__Security__Claims__ClaimsIdentity___get_Claims_d__51(int32_t __1__state) ;

/// @brief Method .ctor addr 0x231234c size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2313474 size 0x1c virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2313490 size 0x3f8 virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x2313888 size 0xb0 virtual false final false
 void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Security.Claims.Claim>.get_Current addr 0x2313938 size 0x8 virtual true final true
 ::System::Security::Claims::Claim System_Collections_Generic_IEnumerator_System_Security_Claims_Claim__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2313940 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2313980 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<System.Security.Claims.Claim>.GetEnumerator addr 0x2313988 size 0xa4 virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::System::Security::Claims::Claim> System_Collections_Generic_IEnumerable_System_Security_Claims_Claim__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2313a2c size 0x4 virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Claims
// Type: System.Security.Claims::ClaimsIdentity
namespace System::Security::Claims {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3006))
// CS Name: System.Security.Claims.ClaimsIdentity
class CORDL_TYPE ClaimsIdentity : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _get_Claims_d__51 = ::System::Security::Claims::____System__Security__Claims__ClaimsIdentity___get_Claims_d__51;

/// @brief Convert operator to ::System::Security::Principal::IIdentity
constexpr operator  ::System::Security::Principal::IIdentity() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~ClaimsIdentity() = default;

// Ctor Parameters [CppParam { name: "", ty: "ClaimsIdentity", modifiers: " const&", def_value: None }]
constexpr ClaimsIdentity(ClaimsIdentity const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ClaimsIdentity", modifiers: "&&", def_value: None }]
constexpr ClaimsIdentity(ClaimsIdentity&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ClaimsIdentity(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ClaimsIdentity& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ClaimsIdentity& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ClaimsIdentity& operator=(ClaimsIdentity&& o) noexcept = default;
  constexpr ClaimsIdentity& operator=(ClaimsIdentity const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_m_userSerializationData, put=__set_m_userSerializationData))  m_userSerializationData;

constexpr void __set_m_userSerializationData(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_m_userSerializationData() const;

 ::System::Collections::Generic::List_1<::System::Security::Claims::Claim> __declspec(property(get=__get_m_instanceClaims, put=__set_m_instanceClaims))  m_instanceClaims;

constexpr void __set_m_instanceClaims(::System::Collections::Generic::List_1<::System::Security::Claims::Claim> value) ;

constexpr ::System::Collections::Generic::List_1<::System::Security::Claims::Claim> __get_m_instanceClaims() const;

 ::System::Collections::ObjectModel::Collection_1<::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim>> __declspec(property(get=__get_m_externalClaims, put=__set_m_externalClaims))  m_externalClaims;

constexpr void __set_m_externalClaims(::System::Collections::ObjectModel::Collection_1<::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim>> value) ;

constexpr ::System::Collections::ObjectModel::Collection_1<::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim>> __get_m_externalClaims() const;

 ::StringW __declspec(property(get=__get_m_nameType, put=__set_m_nameType))  m_nameType;

constexpr void __set_m_nameType(::StringW value) ;

constexpr ::StringW __get_m_nameType() const;

 ::StringW __declspec(property(get=__get_m_roleType, put=__set_m_roleType))  m_roleType;

constexpr void __set_m_roleType(::StringW value) ;

constexpr ::StringW __get_m_roleType() const;

 ::StringW __declspec(property(get=__get_m_version, put=__set_m_version))  m_version;

constexpr void __set_m_version(::StringW value) ;

constexpr ::StringW __get_m_version() const;

 ::System::Security::Claims::ClaimsIdentity __declspec(property(get=__get_m_actor, put=__set_m_actor))  m_actor;

constexpr void __set_m_actor(::System::Security::Claims::ClaimsIdentity value) ;

constexpr ::System::Security::Claims::ClaimsIdentity __get_m_actor() const;

 ::StringW __declspec(property(get=__get_m_authenticationType, put=__set_m_authenticationType))  m_authenticationType;

constexpr void __set_m_authenticationType(::StringW value) ;

constexpr ::StringW __get_m_authenticationType() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_m_bootstrapContext, put=__set_m_bootstrapContext))  m_bootstrapContext;

constexpr void __set_m_bootstrapContext(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_m_bootstrapContext() const;

 ::StringW __declspec(property(get=__get_m_label, put=__set_m_label))  m_label;

constexpr void __set_m_label(::StringW value) ;

constexpr ::StringW __get_m_label() const;

 ::StringW __declspec(property(get=__get_m_serializedNameType, put=__set_m_serializedNameType))  m_serializedNameType;

constexpr void __set_m_serializedNameType(::StringW value) ;

constexpr ::StringW __get_m_serializedNameType() const;

 ::StringW __declspec(property(get=__get_m_serializedRoleType, put=__set_m_serializedRoleType))  m_serializedRoleType;

constexpr void __set_m_serializedRoleType(::StringW value) ;

constexpr ::StringW __get_m_serializedRoleType() const;

 ::StringW __declspec(property(get=__get_m_serializedClaims, put=__set_m_serializedClaims))  m_serializedClaims;

constexpr void __set_m_serializedClaims(::StringW value) ;

constexpr ::StringW __get_m_serializedClaims() const;


// Properties

 ::StringW __declspec(property(get=get_AuthenticationType))  AuthenticationType;

 ::System::Security::Claims::ClaimsIdentity __declspec(property(get=get_Actor, put=set_Actor))  Actor;

 ::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim> __declspec(property(get=get_Claims))  Claims;

 ::StringW __declspec(property(get=get_Name))  Name;

 ::StringW __declspec(property(get=get_NameClaimType))  NameClaimType;


// Methods

// Ctor Parameters []
explicit ClaimsIdentity() ;

/// @brief Method .ctor addr 0x230b3c8 size 0x1c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "claims", ty: "::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim>", modifiers: "", def_value: None }]
explicit ClaimsIdentity(::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim> claims) ;

/// @brief Method .ctor addr 0x2310d44 size 0x1c virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim> claims) ;

// Ctor Parameters [CppParam { name: "identity", ty: "::System::Security::Principal::IIdentity", modifiers: "", def_value: None }, CppParam { name: "claims", ty: "::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim>", modifiers: "", def_value: None }, CppParam { name: "authenticationType", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "nameType", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "roleType", ty: "::StringW", modifiers: "", def_value: None }]
explicit ClaimsIdentity(::System::Security::Principal::IIdentity identity, ::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim> claims, ::StringW authenticationType, ::StringW nameType, ::StringW roleType) ;

/// @brief Method .ctor addr 0x2310d60 size 0x8 virtual false final false
 void _ctor(::System::Security::Principal::IIdentity identity, ::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim> claims, ::StringW authenticationType, ::StringW nameType, ::StringW roleType) ;

// Ctor Parameters [CppParam { name: "identity", ty: "::System::Security::Principal::IIdentity", modifiers: "", def_value: None }, CppParam { name: "claims", ty: "::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim>", modifiers: "", def_value: None }, CppParam { name: "authenticationType", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "nameType", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "roleType", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "checkAuthType", ty: "bool", modifiers: "", def_value: None }]
explicit ClaimsIdentity(::System::Security::Principal::IIdentity identity, ::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim> claims, ::StringW authenticationType, ::StringW nameType, ::StringW roleType, bool checkAuthType) ;

/// @brief Method .ctor addr 0x2310d68 size 0x67c virtual false final false
 void _ctor(::System::Security::Principal::IIdentity identity, ::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim> claims, ::StringW authenticationType, ::StringW nameType, ::StringW roleType, bool checkAuthType) ;

// Ctor Parameters [CppParam { name: "other", ty: "::System::Security::Claims::ClaimsIdentity", modifiers: "", def_value: None }]
explicit ClaimsIdentity(::System::Security::Claims::ClaimsIdentity other) ;

/// @brief Method .ctor addr 0x230b508 size 0x1f0 virtual false final false
 void _ctor(::System::Security::Claims::ClaimsIdentity other) ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit ClaimsIdentity(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2311934 size 0x19c virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_AuthenticationType addr 0x23122ac size 0x8 virtual true final false
 ::StringW get_AuthenticationType() ;

/// @brief Method get_Actor addr 0x23122b4 size 0x8 virtual false final false
 ::System::Security::Claims::ClaimsIdentity get_Actor() ;

/// @brief Method set_Actor addr 0x23122bc size 0x90 virtual false final false
 void set_Actor(::System::Security::Claims::ClaimsIdentity value) ;

/// @brief Method get_Claims addr 0x230b75c size 0x78 virtual true final false
 ::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim> get_Claims() ;

/// @brief Method get_Name addr 0x2312380 size 0x24 virtual true final false
 ::StringW get_Name() ;

/// @brief Method get_NameClaimType addr 0x23123a4 size 0x8 virtual false final false
 ::StringW get_NameClaimType() ;

/// @brief Method Clone addr 0x2310294 size 0x150 virtual true final false
 ::System::Security::Claims::ClaimsIdentity Clone() ;

/// @brief Method AddClaim addr 0x230b804 size 0x178 virtual true final false
 void AddClaim(::System::Security::Claims::Claim claim) ;

/// @brief Method SafeAddClaims addr 0x231141c size 0x3ec virtual false final false
 void SafeAddClaims(::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim> claims) ;

/// @brief Method SafeAddClaim addr 0x2311808 size 0x12c virtual false final false
 void SafeAddClaim(::System::Security::Claims::Claim claim) ;

/// @brief Method FindFirst addr 0x23123ac size 0x37c virtual true final false
 ::System::Security::Claims::Claim FindFirst(::StringW type) ;

/// @brief Method OnSerializingMethod addr 0x2312728 size 0x64 virtual false final false
 void OnSerializingMethod(::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method OnDeserializedMethod addr 0x23129d8 size 0xdc virtual false final false
 void OnDeserializedMethod(::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method OnDeserializingMethod addr 0x2312dec size 0xdc virtual false final false
 void OnDeserializingMethod(::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetObjectData addr 0x2312ec8 size 0x5ac virtual true final false
 void GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method DeserializeClaims addr 0x2312ab4 size 0x338 virtual false final false
 void DeserializeClaims(::StringW serializedClaims) ;

/// @brief Method SerializeClaims addr 0x231278c size 0x24c virtual false final false
 ::StringW SerializeClaims() ;

/// @brief Method IsCircular addr 0x23113e4 size 0x38 virtual false final false
 bool IsCircular(::System::Security::Claims::ClaimsIdentity subject) ;

/// @brief Method Deserialize addr 0x2311ad0 size 0x7dc virtual false final false
 void Deserialize(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context, bool useContext) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Claims
} // end anonymous namespace
NEED_NO_BOX(::System::Security::Claims::ClaimsIdentity);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Claims::ClaimsIdentity, "System.Security.Claims", "ClaimsIdentity");
NEED_NO_BOX(::System::Security::Claims::____System__Security__Claims__ClaimsIdentity___get_Claims_d__51);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Claims::____System__Security__Claims__ClaimsIdentity___get_Claims_d__51, "System.Security.Claims", "ClaimsIdentity/<get_Claims>d__51");
