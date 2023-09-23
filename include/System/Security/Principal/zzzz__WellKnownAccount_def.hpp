#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Security::Principal {
struct WellKnownSidType;
}
// Forward declare root types
namespace System::Security::Principal {
class WellKnownAccount;
}
// Type: System.Security.Principal::WellKnownAccount
namespace System::Security::Principal {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2999))
// CS Name: System.Security.Principal.WellKnownAccount
class CORDL_TYPE WellKnownAccount : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~WellKnownAccount() = default;

// Ctor Parameters [CppParam { name: "", ty: "WellKnownAccount", modifiers: " const&", def_value: None }]
constexpr WellKnownAccount(WellKnownAccount const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WellKnownAccount", modifiers: "&&", def_value: None }]
constexpr WellKnownAccount(WellKnownAccount&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WellKnownAccount(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr WellKnownAccount& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WellKnownAccount& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WellKnownAccount& operator=(WellKnownAccount&& o) noexcept = default;
  constexpr WellKnownAccount& operator=(WellKnownAccount const& o) noexcept = default;
                


// Fields

 System::Security::Principal::WellKnownSidType __declspec(property(get=__get__WellKnownValue_k__BackingField, put=__set__WellKnownValue_k__BackingField))  _WellKnownValue_k__BackingField;

constexpr void __set__WellKnownValue_k__BackingField(System::Security::Principal::WellKnownSidType value) ;

constexpr System::Security::Principal::WellKnownSidType __get__WellKnownValue_k__BackingField() const;

 bool __declspec(property(get=__get__IsAbsolute_k__BackingField, put=__set__IsAbsolute_k__BackingField))  _IsAbsolute_k__BackingField;

constexpr void __set__IsAbsolute_k__BackingField(bool value) ;

constexpr bool __get__IsAbsolute_k__BackingField() const;

 ::StringW __declspec(property(get=__get__Sid_k__BackingField, put=__set__Sid_k__BackingField))  _Sid_k__BackingField;

constexpr void __set__Sid_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Sid_k__BackingField() const;

 ::StringW __declspec(property(get=__get__Rid_k__BackingField, put=__set__Rid_k__BackingField))  _Rid_k__BackingField;

constexpr void __set__Rid_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Rid_k__BackingField() const;

 ::StringW __declspec(property(get=__get__Name_k__BackingField, put=__set__Name_k__BackingField))  _Name_k__BackingField;

constexpr void __set__Name_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Name_k__BackingField() const;

 ::StringW __declspec(property(get=__get__SddlForm_k__BackingField, put=__set__SddlForm_k__BackingField))  _SddlForm_k__BackingField;

constexpr void __set__SddlForm_k__BackingField(::StringW value) ;

constexpr ::StringW __get__SddlForm_k__BackingField() const;

static ::ArrayW<System::Security::Principal::WellKnownAccount> __declspec(property(get=__get_accounts, put=__set_accounts))  accounts;

static void __set_accounts(::ArrayW<System::Security::Principal::WellKnownAccount> value) ;

static ::ArrayW<System::Security::Principal::WellKnownAccount> __get_accounts() ;


// Properties

 System::Security::Principal::WellKnownSidType __declspec(property(put=set_WellKnownValue))  WellKnownValue;

 bool __declspec(property(get=get_IsAbsolute, put=set_IsAbsolute))  IsAbsolute;

 ::StringW __declspec(property(get=get_Sid, put=set_Sid))  Sid;

 ::StringW __declspec(property(put=set_Rid))  Rid;

 ::StringW __declspec(property(get=get_Name, put=set_Name))  Name;

 ::StringW __declspec(property(get=get_SddlForm, put=set_SddlForm))  SddlForm;


// Methods

/// @brief Method set_WellKnownValue addr 0x230d564 size 0x8 virtual false final false
 void set_WellKnownValue(System::Security::Principal::WellKnownSidType value) ;

/// @brief Method get_IsAbsolute addr 0x230d56c size 0x8 virtual false final false
 bool get_IsAbsolute() ;

/// @brief Method set_IsAbsolute addr 0x230d574 size 0xc virtual false final false
 void set_IsAbsolute(bool value) ;

/// @brief Method get_Sid addr 0x230d580 size 0x8 virtual false final false
 ::StringW get_Sid() ;

/// @brief Method set_Sid addr 0x230d588 size 0x8 virtual false final false
 void set_Sid(::StringW value) ;

/// @brief Method set_Rid addr 0x230d590 size 0x8 virtual false final false
 void set_Rid(::StringW value) ;

/// @brief Method get_Name addr 0x230d598 size 0x8 virtual false final false
 ::StringW get_Name() ;

/// @brief Method set_Name addr 0x230d5a0 size 0x8 virtual false final false
 void set_Name(::StringW value) ;

/// @brief Method get_SddlForm addr 0x230d5a8 size 0x8 virtual false final false
 ::StringW get_SddlForm() ;

/// @brief Method set_SddlForm addr 0x230d5b0 size 0x8 virtual false final false
 void set_SddlForm(::StringW value) ;

/// @brief Method LookupBySid addr 0x230d1e4 size 0xc0 virtual false final false
static System::Security::Principal::WellKnownAccount LookupBySid(::StringW s) ;

/// @brief Method LookupByName addr 0x230c0a8 size 0xc0 virtual false final false
static System::Security::Principal::WellKnownAccount LookupByName(::StringW s) ;

/// @brief Method LookupBySddlForm addr 0x230d2a4 size 0xc0 virtual false final false
static System::Security::Principal::WellKnownAccount LookupBySddlForm(::StringW s) ;

// Ctor Parameters []
explicit WellKnownAccount() ;

/// @brief Method .ctor addr 0x230d5b8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Principal
NEED_NO_BOX(System::Security::Principal::WellKnownAccount);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Principal::WellKnownAccount, "System.Security.Principal", "WellKnownAccount");
