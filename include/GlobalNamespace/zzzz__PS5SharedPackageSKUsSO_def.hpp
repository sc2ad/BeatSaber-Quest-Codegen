#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion;
}
namespace GlobalNamespace {
struct GlobalNamespace__PS5SharedPackageSKUsSO__BuildType;
}
namespace GlobalNamespace {
class PS5PublisherSKUSettingsSO;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__PS5SharedPackageSKUsSO__BuildType;
}
namespace GlobalNamespace {
class GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion;
}
namespace GlobalNamespace {
class PS5SharedPackageSKUsSO;
}
// Type: ::BuildType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4654))
// CS Name: PS5SharedPackageSKUsSO::BuildType
struct CORDL_TYPE GlobalNamespace__PS5SharedPackageSKUsSO__BuildType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__PS5SharedPackageSKUsSO__BuildType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__PS5SharedPackageSKUsSO__BuildType(GlobalNamespace__PS5SharedPackageSKUsSO__BuildType const&) = default;
                    constexpr GlobalNamespace__PS5SharedPackageSKUsSO__BuildType(GlobalNamespace__PS5SharedPackageSKUsSO__BuildType&&) = default;
                    constexpr GlobalNamespace__PS5SharedPackageSKUsSO__BuildType& operator=(GlobalNamespace__PS5SharedPackageSKUsSO__BuildType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__PS5SharedPackageSKUsSO__BuildType& operator=(GlobalNamespace__PS5SharedPackageSKUsSO__BuildType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PS5SharedPackageSKUsSO__BuildType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__PS5SharedPackageSKUsSO__BuildType_Unwrapped : int32_t {
__Application = 0,
__RemasterPatch = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__PS5SharedPackageSKUsSO__BuildType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__PS5SharedPackageSKUsSO__BuildType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Application offset 0
static GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__BuildType const Application;

/// @brief Field RemasterPatch offset 0
static GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__BuildType const RemasterPatch;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PS5BuildVersion
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4655))
// CS Name: PS5SharedPackageSKUsSO::PS5BuildVersion
class CORDL_TYPE GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion(GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion(GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion& operator=(GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion&& o) noexcept = default;
  constexpr GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion& operator=(GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__masterVersion, put=__set__masterVersion))  _masterVersion;

constexpr void __set__masterVersion(::StringW value) ;

constexpr ::StringW __get__masterVersion() const;

 ::StringW __declspec(property(get=__get__contentVersion, put=__set__contentVersion))  _contentVersion;

constexpr void __set__contentVersion(::StringW value) ;

constexpr ::StringW __get__contentVersion() const;


// Properties

 ::StringW __declspec(property(get=get_masterVersion))  masterVersion;

 ::StringW __declspec(property(get=get_contentVersion))  contentVersion;


// Methods

/// @brief Method get_masterVersion addr 0x221a8b0 size 0x8 virtual false final false
 ::StringW get_masterVersion() ;

/// @brief Method get_contentVersion addr 0x221a8b8 size 0x8 virtual false final false
 ::StringW get_contentVersion() ;

static GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion New_ctor() ;

/// @brief Method .ctor addr 0x221a8c0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PS5SharedPackageSKUsSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4656))
// CS Name: PS5SharedPackageSKUsSO
class CORDL_TYPE PS5SharedPackageSKUsSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
using PS5BuildVersion = GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion;

using BuildType = GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__BuildType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~PS5SharedPackageSKUsSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "PS5SharedPackageSKUsSO", modifiers: " const&", def_value: None }]
constexpr PS5SharedPackageSKUsSO(PS5SharedPackageSKUsSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PS5SharedPackageSKUsSO", modifiers: "&&", def_value: None }]
constexpr PS5SharedPackageSKUsSO(PS5SharedPackageSKUsSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PS5SharedPackageSKUsSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr PS5SharedPackageSKUsSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PS5SharedPackageSKUsSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PS5SharedPackageSKUsSO& operator=(PS5SharedPackageSKUsSO&& o) noexcept = default;
  constexpr PS5SharedPackageSKUsSO& operator=(PS5SharedPackageSKUsSO const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::PS5PublisherSKUSettingsSO> __declspec(property(get=__get__availableSKUs, put=__set__availableSKUs))  _availableSKUs;

constexpr void __set__availableSKUs(::ArrayW<GlobalNamespace::PS5PublisherSKUSettingsSO> value) ;

constexpr ::ArrayW<GlobalNamespace::PS5PublisherSKUSettingsSO> __get__availableSKUs() const;

 ::StringW __declspec(property(get=__get__conceptId, put=__set__conceptId))  _conceptId;

constexpr void __set__conceptId(::StringW value) ;

constexpr ::StringW __get__conceptId() const;

 GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__BuildType __declspec(property(get=__get__buildType, put=__set__buildType))  _buildType;

constexpr void __set__buildType(GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__BuildType value) ;

constexpr GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__BuildType __get__buildType() const;

 GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion __declspec(property(get=__get__buildVersion, put=__set__buildVersion))  _buildVersion;

constexpr void __set__buildVersion(GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion value) ;

constexpr GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion __get__buildVersion() const;

 GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion __declspec(property(get=__get__latestBuildVersion, put=__set__latestBuildVersion))  _latestBuildVersion;

constexpr void __set__latestBuildVersion(GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion value) ;

constexpr GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion __get__latestBuildVersion() const;


// Properties

 ::ArrayW<GlobalNamespace::PS5PublisherSKUSettingsSO> __declspec(property(get=get_availableSKUs))  availableSKUs;

 ::StringW __declspec(property(get=get_conceptId))  conceptId;

 GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__BuildType __declspec(property(get=get_buildType))  buildType;

 GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion __declspec(property(get=get_buildVersion))  buildVersion;

 GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion __declspec(property(get=get_latestBuildVersion))  latestBuildVersion;


// Methods

/// @brief Method get_availableSKUs addr 0x221a85c size 0x8 virtual false final false
 ::ArrayW<GlobalNamespace::PS5PublisherSKUSettingsSO> get_availableSKUs() ;

/// @brief Method get_conceptId addr 0x221a864 size 0x8 virtual false final false
 ::StringW get_conceptId() ;

/// @brief Method get_buildType addr 0x221a86c size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__BuildType get_buildType() ;

/// @brief Method get_buildVersion addr 0x221a874 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion get_buildVersion() ;

/// @brief Method get_latestBuildVersion addr 0x221a87c size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion get_latestBuildVersion() ;

/// @brief Method GetPrimarySKU addr 0x221a884 size 0x24 virtual false final false
 GlobalNamespace::PS5PublisherSKUSettingsSO GetPrimarySKU() ;

static GlobalNamespace::PS5SharedPackageSKUsSO New_ctor() ;

/// @brief Method .ctor addr 0x221a8a8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__BuildType, "", "PS5SharedPackageSKUsSO/BuildType");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion, "", "PS5SharedPackageSKUsSO/PS5BuildVersion");
NEED_NO_BOX(GlobalNamespace::PS5SharedPackageSKUsSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PS5SharedPackageSKUsSO, "", "PS5SharedPackageSKUsSO");
