#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace Unity::XR::Oculus {
struct Unity__XR__Oculus__Development__UserDeveloperModeSettingCache;
}
// Forward declare root types
namespace Unity::XR::Oculus {
struct Unity__XR__Oculus__Development__UserDeveloperModeSettingCache;
}
namespace Unity::XR::Oculus {
class Development;
}
// Type: ::UserDeveloperModeSettingCache
namespace Unity::XR::Oculus {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15218))
// CS Name: Unity.XR.Oculus.Development::UserDeveloperModeSettingCache
struct CORDL_TYPE Unity__XR__Oculus__Development__UserDeveloperModeSettingCache : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Unity__XR__Oculus__Development__UserDeveloperModeSettingCache(int32_t value__) noexcept;


                    constexpr Unity__XR__Oculus__Development__UserDeveloperModeSettingCache(Unity__XR__Oculus__Development__UserDeveloperModeSettingCache const&) = default;
                    constexpr Unity__XR__Oculus__Development__UserDeveloperModeSettingCache(Unity__XR__Oculus__Development__UserDeveloperModeSettingCache&&) = default;
                    constexpr Unity__XR__Oculus__Development__UserDeveloperModeSettingCache& operator=(Unity__XR__Oculus__Development__UserDeveloperModeSettingCache const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__XR__Oculus__Development__UserDeveloperModeSettingCache& operator=(Unity__XR__Oculus__Development__UserDeveloperModeSettingCache&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__XR__Oculus__Development__UserDeveloperModeSettingCache(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Unity__XR__Oculus__Development__UserDeveloperModeSettingCache_Unwrapped : int32_t {
__NoUserSettingCached = 0,
__UserSettingFalse = 1,
__UserSettingTrue = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Unity__XR__Oculus__Development__UserDeveloperModeSettingCache_Unwrapped () const noexcept {
return std::bit_cast<__Unity__XR__Oculus__Development__UserDeveloperModeSettingCache_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NoUserSettingCached offset 0
static Unity::XR::Oculus::Unity__XR__Oculus__Development__UserDeveloperModeSettingCache const NoUserSettingCached;

/// @brief Field UserSettingFalse offset 0
static Unity::XR::Oculus::Unity__XR__Oculus__Development__UserDeveloperModeSettingCache const UserSettingFalse;

/// @brief Field UserSettingTrue offset 0
static Unity::XR::Oculus::Unity__XR__Oculus__Development__UserDeveloperModeSettingCache const UserSettingTrue;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::XR::Oculus
// Type: Unity.XR.Oculus::Development
namespace Unity::XR::Oculus {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15219))
// CS Name: Unity.XR.Oculus.Development
class CORDL_TYPE Development : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using UserDeveloperModeSettingCache = Unity::XR::Oculus::Unity__XR__Oculus__Development__UserDeveloperModeSettingCache;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Development() = default;

// Ctor Parameters [CppParam { name: "", ty: "Development", modifiers: " const&", def_value: None }]
constexpr Development(Development const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Development", modifiers: "&&", def_value: None }]
constexpr Development(Development&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Development(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Development& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Development& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Development& operator=(Development&& o) noexcept = default;
  constexpr Development& operator=(Development const& o) noexcept = default;
                


// Fields

static Unity::XR::Oculus::Unity__XR__Oculus__Development__UserDeveloperModeSettingCache __declspec(property(get=__get_s_CachedMode, put=__set_s_CachedMode))  s_CachedMode;

static void __set_s_CachedMode(Unity::XR::Oculus::Unity__XR__Oculus__Development__UserDeveloperModeSettingCache value) ;

static Unity::XR::Oculus::Unity__XR__Oculus__Development__UserDeveloperModeSettingCache __get_s_CachedMode() ;


// Methods

/// @brief Method TrySetDeveloperMode addr 0x2adecec size 0x58 virtual false final false
static void TrySetDeveloperMode(bool active) ;

/// @brief Method OverrideDeveloperModeStart addr 0x2aded44 size 0xcc virtual false final false
static void OverrideDeveloperModeStart() ;

/// @brief Method OverrideDeveloperModeStop addr 0x2adee18 size 0x74 virtual false final false
static void OverrideDeveloperModeStop() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::Oculus
DEFINE_IL2CPP_ARG_TYPE(Unity::XR::Oculus::Unity__XR__Oculus__Development__UserDeveloperModeSettingCache, "Unity.XR.Oculus", "Development/UserDeveloperModeSettingCache");
NEED_NO_BOX(Unity::XR::Oculus::Development);
DEFINE_IL2CPP_ARG_TYPE(Unity::XR::Oculus::Development, "Unity.XR.Oculus", "Development");
