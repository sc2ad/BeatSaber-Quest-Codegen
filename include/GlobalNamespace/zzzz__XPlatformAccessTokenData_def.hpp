#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
struct PlatformEnvironment;
}
// Forward declare root types
namespace GlobalNamespace {
class XPlatformAccessTokenData;
}
// Type: ::XPlatformAccessTokenData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12864))
// CS Name: XPlatformAccessTokenData
class CORDL_TYPE XPlatformAccessTokenData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~XPlatformAccessTokenData() = default;

// Ctor Parameters [CppParam { name: "", ty: "XPlatformAccessTokenData", modifiers: " const&", def_value: None }]
constexpr XPlatformAccessTokenData(XPlatformAccessTokenData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XPlatformAccessTokenData", modifiers: "&&", def_value: None }]
constexpr XPlatformAccessTokenData(XPlatformAccessTokenData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XPlatformAccessTokenData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XPlatformAccessTokenData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XPlatformAccessTokenData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XPlatformAccessTokenData& operator=(XPlatformAccessTokenData&& o) noexcept = default;
  constexpr XPlatformAccessTokenData& operator=(XPlatformAccessTokenData const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__token_k__BackingField, put=__set__token_k__BackingField))  _token_k__BackingField;

constexpr void __set__token_k__BackingField(::StringW value) ;

constexpr ::StringW __get__token_k__BackingField() const;

 GlobalNamespace::PlatformEnvironment __declspec(property(get=__get__platformEnvironment_k__BackingField, put=__set__platformEnvironment_k__BackingField))  _platformEnvironment_k__BackingField;

constexpr void __set__platformEnvironment_k__BackingField(GlobalNamespace::PlatformEnvironment value) ;

constexpr GlobalNamespace::PlatformEnvironment __get__platformEnvironment_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_token, put=set_token))  token;

 GlobalNamespace::PlatformEnvironment __declspec(property(get=get_platformEnvironment, put=set_platformEnvironment))  platformEnvironment;


// Methods

/// @brief Method get_token addr 0xdc4c30 size 0x8 virtual false final false
 ::StringW get_token() ;

/// @brief Method set_token addr 0xdc4c38 size 0x8 virtual false final false
 void set_token(::StringW value) ;

/// @brief Method get_platformEnvironment addr 0xdc4c40 size 0x8 virtual false final false
 GlobalNamespace::PlatformEnvironment get_platformEnvironment() ;

/// @brief Method set_platformEnvironment addr 0xdc4c48 size 0x8 virtual false final false
 void set_platformEnvironment(GlobalNamespace::PlatformEnvironment value) ;

static GlobalNamespace::XPlatformAccessTokenData New_ctor(::StringW token, GlobalNamespace::PlatformEnvironment platformEnvironment) ;

/// @brief Method .ctor addr 0xdc4c50 size 0x30 virtual false final false
 void _ctor(::StringW token, GlobalNamespace::PlatformEnvironment platformEnvironment) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::XPlatformAccessTokenData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::XPlatformAccessTokenData, "", "XPlatformAccessTokenData");
