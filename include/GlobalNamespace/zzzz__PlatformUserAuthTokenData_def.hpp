#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
struct PlatformEnvironment;
}
// Forward declare root types
namespace GlobalNamespace {
class PlatformUserAuthTokenData;
}
// Type: ::PlatformUserAuthTokenData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4694))
// CS Name: PlatformUserAuthTokenData
class CORDL_TYPE PlatformUserAuthTokenData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PlatformUserAuthTokenData() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlatformUserAuthTokenData", modifiers: " const&", def_value: None }]
constexpr PlatformUserAuthTokenData(PlatformUserAuthTokenData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlatformUserAuthTokenData", modifiers: "&&", def_value: None }]
constexpr PlatformUserAuthTokenData(PlatformUserAuthTokenData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlatformUserAuthTokenData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PlatformUserAuthTokenData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlatformUserAuthTokenData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlatformUserAuthTokenData& operator=(PlatformUserAuthTokenData&& o) noexcept = default;
  constexpr PlatformUserAuthTokenData& operator=(PlatformUserAuthTokenData const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__token_k__BackingField, put=__set__token_k__BackingField))  _token_k__BackingField;

constexpr void __set__token_k__BackingField(::StringW value) ;

constexpr ::StringW __get__token_k__BackingField() const;

 GlobalNamespace::PlatformEnvironment __declspec(property(get=__get__validPlatformEnvironment_k__BackingField, put=__set__validPlatformEnvironment_k__BackingField))  _validPlatformEnvironment_k__BackingField;

constexpr void __set__validPlatformEnvironment_k__BackingField(GlobalNamespace::PlatformEnvironment value) ;

constexpr GlobalNamespace::PlatformEnvironment __get__validPlatformEnvironment_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_token, put=set_token))  token;

 GlobalNamespace::PlatformEnvironment __declspec(property(get=get_validPlatformEnvironment, put=set_validPlatformEnvironment))  validPlatformEnvironment;


// Methods

/// @brief Method get_token addr 0x221cd0c size 0x8 virtual false final false
 ::StringW get_token() ;

/// @brief Method set_token addr 0x221cd14 size 0x8 virtual false final false
 void set_token(::StringW value) ;

/// @brief Method get_validPlatformEnvironment addr 0x221cd1c size 0x8 virtual false final false
 GlobalNamespace::PlatformEnvironment get_validPlatformEnvironment() ;

/// @brief Method set_validPlatformEnvironment addr 0x221cd24 size 0x8 virtual false final false
 void set_validPlatformEnvironment(GlobalNamespace::PlatformEnvironment value) ;

// Ctor Parameters [CppParam { name: "token", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "validPlatformEnvironment", ty: "GlobalNamespace::PlatformEnvironment", modifiers: "", def_value: None }]
explicit PlatformUserAuthTokenData(::StringW token, GlobalNamespace::PlatformEnvironment validPlatformEnvironment) ;

/// @brief Method .ctor addr 0x221cd2c size 0x30 virtual false final false
 void _ctor(::StringW token, GlobalNamespace::PlatformEnvironment validPlatformEnvironment) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PlatformUserAuthTokenData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformUserAuthTokenData, "", "PlatformUserAuthTokenData");
