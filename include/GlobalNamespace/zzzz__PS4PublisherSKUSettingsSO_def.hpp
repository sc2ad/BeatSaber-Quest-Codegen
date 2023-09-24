#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SonyPublisherSKUSettingsSO_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace GlobalNamespace {
class GlobalNamespace__PS4PublisherSKUSettingsSO__PS4BuildVersion;
}
namespace GlobalNamespace {
struct PS4ApplicationCategory;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__PS4PublisherSKUSettingsSO__PS4BuildVersion;
}
namespace GlobalNamespace {
class PS4PublisherSKUSettingsSO;
}
// Type: ::PS4BuildVersion
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4642))
// CS Name: PS4PublisherSKUSettingsSO::PS4BuildVersion
class CORDL_TYPE GlobalNamespace__PS4PublisherSKUSettingsSO__PS4BuildVersion : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__PS4PublisherSKUSettingsSO__PS4BuildVersion() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PS4PublisherSKUSettingsSO__PS4BuildVersion", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PS4PublisherSKUSettingsSO__PS4BuildVersion(GlobalNamespace__PS4PublisherSKUSettingsSO__PS4BuildVersion const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PS4PublisherSKUSettingsSO__PS4BuildVersion", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PS4PublisherSKUSettingsSO__PS4BuildVersion(GlobalNamespace__PS4PublisherSKUSettingsSO__PS4BuildVersion&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PS4PublisherSKUSettingsSO__PS4BuildVersion(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PS4PublisherSKUSettingsSO__PS4BuildVersion& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PS4PublisherSKUSettingsSO__PS4BuildVersion& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PS4PublisherSKUSettingsSO__PS4BuildVersion& operator=(GlobalNamespace__PS4PublisherSKUSettingsSO__PS4BuildVersion&& o) noexcept = default;
  constexpr GlobalNamespace__PS4PublisherSKUSettingsSO__PS4BuildVersion& operator=(GlobalNamespace__PS4PublisherSKUSettingsSO__PS4BuildVersion const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__masterVersion, put=__set__masterVersion))  _masterVersion;

constexpr void __set__masterVersion(::StringW value) ;

constexpr ::StringW __get__masterVersion() const;

 ::StringW __declspec(property(get=__get__applicationVersion, put=__set__applicationVersion))  _applicationVersion;

constexpr void __set__applicationVersion(::StringW value) ;

constexpr ::StringW __get__applicationVersion() const;


// Properties

 ::StringW __declspec(property(get=get_masterVersion))  masterVersion;

 ::StringW __declspec(property(get=get_applicationVersion))  applicationVersion;


// Methods

/// @brief Method get_masterVersion addr 0x221a784 size 0x8 virtual false final false
 ::StringW get_masterVersion() ;

/// @brief Method get_applicationVersion addr 0x221a78c size 0x8 virtual false final false
 ::StringW get_applicationVersion() ;

static GlobalNamespace::GlobalNamespace__PS4PublisherSKUSettingsSO__PS4BuildVersion New_ctor() ;

/// @brief Method .ctor addr 0x221a794 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PS4PublisherSKUSettingsSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4689))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4643))
// CS Name: PS4PublisherSKUSettingsSO
class CORDL_TYPE PS4PublisherSKUSettingsSO : public GlobalNamespace::SonyPublisherSKUSettingsSO {
public:
// Declarations
using PS4BuildVersion = GlobalNamespace::GlobalNamespace__PS4PublisherSKUSettingsSO__PS4BuildVersion;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~PS4PublisherSKUSettingsSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "PS4PublisherSKUSettingsSO", modifiers: " const&", def_value: None }]
constexpr PS4PublisherSKUSettingsSO(PS4PublisherSKUSettingsSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PS4PublisherSKUSettingsSO", modifiers: "&&", def_value: None }]
constexpr PS4PublisherSKUSettingsSO(PS4PublisherSKUSettingsSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PS4PublisherSKUSettingsSO(void* ptr) noexcept : GlobalNamespace::SonyPublisherSKUSettingsSO(ptr) {
}


  constexpr PS4PublisherSKUSettingsSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PS4PublisherSKUSettingsSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PS4PublisherSKUSettingsSO& operator=(PS4PublisherSKUSettingsSO&& o) noexcept = default;
  constexpr PS4PublisherSKUSettingsSO& operator=(PS4PublisherSKUSettingsSO const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__PS4PublisherSKUSettingsSO__PS4BuildVersion __declspec(property(get=__get__buildVersion, put=__set__buildVersion))  _buildVersion;

constexpr void __set__buildVersion(GlobalNamespace::GlobalNamespace__PS4PublisherSKUSettingsSO__PS4BuildVersion value) ;

constexpr GlobalNamespace::GlobalNamespace__PS4PublisherSKUSettingsSO__PS4BuildVersion __get__buildVersion() const;

 GlobalNamespace::GlobalNamespace__PS4PublisherSKUSettingsSO__PS4BuildVersion __declspec(property(get=__get__latestBuildVersion, put=__set__latestBuildVersion))  _latestBuildVersion;

constexpr void __set__latestBuildVersion(GlobalNamespace::GlobalNamespace__PS4PublisherSKUSettingsSO__PS4BuildVersion value) ;

constexpr GlobalNamespace::GlobalNamespace__PS4PublisherSKUSettingsSO__PS4BuildVersion __get__latestBuildVersion() const;

 int32_t __declspec(property(get=__get__parentalLockLevel, put=__set__parentalLockLevel))  _parentalLockLevel;

constexpr void __set__parentalLockLevel(int32_t value) ;

constexpr int32_t __get__parentalLockLevel() const;

 ::StringW __declspec(property(get=__get__npTitleFilenamePath, put=__set__npTitleFilenamePath))  _npTitleFilenamePath;

constexpr void __set__npTitleFilenamePath(::StringW value) ;

constexpr ::StringW __get__npTitleFilenamePath() const;

 int32_t __declspec(property(get=__get__defaultAgeRestriction, put=__set__defaultAgeRestriction))  _defaultAgeRestriction;

constexpr void __set__defaultAgeRestriction(int32_t value) ;

constexpr int32_t __get__defaultAgeRestriction() const;

 GlobalNamespace::PS4ApplicationCategory __declspec(property(get=__get__applicationCategory, put=__set__applicationCategory))  _applicationCategory;

constexpr void __set__applicationCategory(GlobalNamespace::PS4ApplicationCategory value) ;

constexpr GlobalNamespace::PS4ApplicationCategory __get__applicationCategory() const;


// Properties

 GlobalNamespace::GlobalNamespace__PS4PublisherSKUSettingsSO__PS4BuildVersion __declspec(property(get=get_buildVersion))  buildVersion;

 GlobalNamespace::GlobalNamespace__PS4PublisherSKUSettingsSO__PS4BuildVersion __declspec(property(get=get_latestBuildVersion))  latestBuildVersion;

 int32_t __declspec(property(get=get_parentalLockLevel))  parentalLockLevel;

 ::StringW __declspec(property(get=get_npTitleFilenamePath))  npTitleFilenamePath;

 int32_t __declspec(property(get=get_defaultAgeRestriction))  defaultAgeRestriction;

 GlobalNamespace::PS4ApplicationCategory __declspec(property(get=get_applicationCategory))  applicationCategory;


// Methods

/// @brief Method get_buildVersion addr 0x221a744 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__PS4PublisherSKUSettingsSO__PS4BuildVersion get_buildVersion() ;

/// @brief Method get_latestBuildVersion addr 0x221a74c size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__PS4PublisherSKUSettingsSO__PS4BuildVersion get_latestBuildVersion() ;

/// @brief Method get_parentalLockLevel addr 0x221a754 size 0x8 virtual false final false
 int32_t get_parentalLockLevel() ;

/// @brief Method get_npTitleFilenamePath addr 0x221a75c size 0x8 virtual false final false
 ::StringW get_npTitleFilenamePath() ;

/// @brief Method get_defaultAgeRestriction addr 0x221a764 size 0x8 virtual false final false
 int32_t get_defaultAgeRestriction() ;

/// @brief Method get_applicationCategory addr 0x221a76c size 0x8 virtual false final false
 GlobalNamespace::PS4ApplicationCategory get_applicationCategory() ;

static GlobalNamespace::PS4PublisherSKUSettingsSO New_ctor() ;

/// @brief Method .ctor addr 0x221a774 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PS4PublisherSKUSettingsSO__PS4BuildVersion);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PS4PublisherSKUSettingsSO__PS4BuildVersion, "", "PS4PublisherSKUSettingsSO/PS4BuildVersion");
NEED_NO_BOX(GlobalNamespace::PS4PublisherSKUSettingsSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PS4PublisherSKUSettingsSO, "", "PS4PublisherSKUSettingsSO");
