#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Security::Claims {
class ClaimsIdentity;
}
// Forward declare root types
namespace System::Security::Claims {
class Claim;
}
// Type: System.Security.Claims::Claim
namespace System::Security::Claims {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3004))
// CS Name: System.Security.Claims.Claim
class CORDL_TYPE Claim : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~Claim() = default;

// Ctor Parameters [CppParam { name: "", ty: "Claim", modifiers: " const&", def_value: None }]
constexpr Claim(Claim const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Claim", modifiers: "&&", def_value: None }]
constexpr Claim(Claim&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Claim(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Claim& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Claim& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Claim& operator=(Claim&& o) noexcept = default;
  constexpr Claim& operator=(Claim const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_issuer, put=__set_m_issuer))  m_issuer;

constexpr void __set_m_issuer(::StringW value) ;

constexpr ::StringW __get_m_issuer() const;

 ::StringW __declspec(property(get=__get_m_originalIssuer, put=__set_m_originalIssuer))  m_originalIssuer;

constexpr void __set_m_originalIssuer(::StringW value) ;

constexpr ::StringW __get_m_originalIssuer() const;

 ::StringW __declspec(property(get=__get_m_type, put=__set_m_type))  m_type;

constexpr void __set_m_type(::StringW value) ;

constexpr ::StringW __get_m_type() const;

 ::StringW __declspec(property(get=__get_m_value, put=__set_m_value))  m_value;

constexpr void __set_m_value(::StringW value) ;

constexpr ::StringW __get_m_value() const;

 ::StringW __declspec(property(get=__get_m_valueType, put=__set_m_valueType))  m_valueType;

constexpr void __set_m_valueType(::StringW value) ;

constexpr ::StringW __get_m_valueType() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_m_userSerializationData, put=__set_m_userSerializationData))  m_userSerializationData;

constexpr void __set_m_userSerializationData(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_m_userSerializationData() const;

 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW> __declspec(property(get=__get_m_properties, put=__set_m_properties))  m_properties;

constexpr void __set_m_properties(::System::Collections::Generic::Dictionary_2<::StringW,::StringW> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW> __get_m_properties() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_m_propertyLock, put=__set_m_propertyLock))  m_propertyLock;

constexpr void __set_m_propertyLock(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_m_propertyLock() const;

 ::System::Security::Claims::ClaimsIdentity __declspec(property(get=__get_m_subject, put=__set_m_subject))  m_subject;

constexpr void __set_m_subject(::System::Security::Claims::ClaimsIdentity value) ;

constexpr ::System::Security::Claims::ClaimsIdentity __get_m_subject() const;


// Properties

 ::System::Collections::Generic::IDictionary_2<::StringW,::StringW> __declspec(property(get=get_Properties))  Properties;

 ::System::Security::Claims::ClaimsIdentity __declspec(property(get=get_Subject, put=set_Subject))  Subject;

 ::StringW __declspec(property(get=get_Type))  Type;

 ::StringW __declspec(property(get=get_Value))  Value;


// Methods

// Ctor Parameters [CppParam { name: "type", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "valueType", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "issuer", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "originalIssuer", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "subject", ty: "::System::Security::Claims::ClaimsIdentity", modifiers: "", def_value: None }]
explicit Claim(::StringW type, ::StringW value, ::StringW valueType, ::StringW issuer, ::StringW originalIssuer, ::System::Security::Claims::ClaimsIdentity subject) ;

/// @brief Method .ctor addr 0x230b7e4 size 0x20 virtual false final false
 void _ctor(::StringW type, ::StringW value, ::StringW valueType, ::StringW issuer, ::StringW originalIssuer, ::System::Security::Claims::ClaimsIdentity subject) ;

// Ctor Parameters [CppParam { name: "type", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "valueType", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "issuer", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "originalIssuer", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "subject", ty: "::System::Security::Claims::ClaimsIdentity", modifiers: "", def_value: None }, CppParam { name: "propertyKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "propertyValue", ty: "::StringW", modifiers: "", def_value: None }]
explicit Claim(::StringW type, ::StringW value, ::StringW valueType, ::StringW issuer, ::StringW originalIssuer, ::System::Security::Claims::ClaimsIdentity subject, ::StringW propertyKey, ::StringW propertyValue) ;

/// @brief Method .ctor addr 0x2310538 size 0x258 virtual false final false
 void _ctor(::StringW type, ::StringW value, ::StringW valueType, ::StringW issuer, ::StringW originalIssuer, ::System::Security::Claims::ClaimsIdentity subject, ::StringW propertyKey, ::StringW propertyValue) ;

// Ctor Parameters [CppParam { name: "other", ty: "::System::Security::Claims::Claim", modifiers: "", def_value: None }, CppParam { name: "subject", ty: "::System::Security::Claims::ClaimsIdentity", modifiers: "", def_value: None }]
explicit Claim(::System::Security::Claims::Claim other, ::System::Security::Claims::ClaimsIdentity subject) ;

/// @brief Method .ctor addr 0x23108c8 size 0x314 virtual false final false
 void _ctor(::System::Security::Claims::Claim other, ::System::Security::Claims::ClaimsIdentity subject) ;

/// @brief Method OnDeserializedMethod addr 0x2310bdc size 0x60 virtual false final false
 void OnDeserializedMethod(::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_Properties addr 0x2310790 size 0x138 virtual false final false
 ::System::Collections::Generic::IDictionary_2<::StringW,::StringW> get_Properties() ;

/// @brief Method get_Subject addr 0x2310c3c size 0x8 virtual false final false
 ::System::Security::Claims::ClaimsIdentity get_Subject() ;

/// @brief Method set_Subject addr 0x2310c44 size 0x8 virtual false final false
 void set_Subject(::System::Security::Claims::ClaimsIdentity value) ;

/// @brief Method get_Type addr 0x2310c4c size 0x8 virtual false final false
 ::StringW get_Type() ;

/// @brief Method get_Value addr 0x2310c54 size 0x8 virtual false final false
 ::StringW get_Value() ;

/// @brief Method Clone addr 0x2310c5c size 0x70 virtual true final false
 ::System::Security::Claims::Claim Clone(::System::Security::Claims::ClaimsIdentity identity) ;

/// @brief Method ToString addr 0x2310ccc size 0x78 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Claims
} // end anonymous namespace
NEED_NO_BOX(::System::Security::Claims::Claim);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Claims::Claim, "System.Security.Claims", "Claim");
