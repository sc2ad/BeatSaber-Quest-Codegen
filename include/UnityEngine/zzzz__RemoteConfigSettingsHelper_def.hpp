#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct UnityEngine__RemoteConfigSettingsHelper__Tag;
}
namespace UnityEngine {
class RemoteConfigSettingsHelper;
}
namespace {
// Type: ::Tag
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2557))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15934))
// CS Name: UnityEngine.RemoteConfigSettingsHelper::Tag
struct CORDL_TYPE UnityEngine__RemoteConfigSettingsHelper__Tag : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__RemoteConfigSettingsHelper__Tag(int32_t value__) noexcept;


                    constexpr UnityEngine__RemoteConfigSettingsHelper__Tag(UnityEngine__RemoteConfigSettingsHelper__Tag const&) = default;
                    constexpr UnityEngine__RemoteConfigSettingsHelper__Tag(UnityEngine__RemoteConfigSettingsHelper__Tag&&) = default;
                    constexpr UnityEngine__RemoteConfigSettingsHelper__Tag& operator=(UnityEngine__RemoteConfigSettingsHelper__Tag const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__RemoteConfigSettingsHelper__Tag& operator=(UnityEngine__RemoteConfigSettingsHelper__Tag&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__RemoteConfigSettingsHelper__Tag(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__RemoteConfigSettingsHelper__Tag_Unwrapped : int32_t {
__kUnknown = 0,
__kIntVal = 1,
__kInt64Val = 2,
__kUInt64Val = 3,
__kDoubleVal = 4,
__kBoolVal = 5,
__kStringVal = 6,
__kArrayVal = 7,
__kMixedArrayVal = 8,
__kMapVal = 9,
__kMaxTags = 10,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__RemoteConfigSettingsHelper__Tag_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__RemoteConfigSettingsHelper__Tag_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field kUnknown offset 0
static UnityEngine::UnityEngine__RemoteConfigSettingsHelper__Tag const kUnknown;

/// @brief Field kIntVal offset 0
static UnityEngine::UnityEngine__RemoteConfigSettingsHelper__Tag const kIntVal;

/// @brief Field kInt64Val offset 0
static UnityEngine::UnityEngine__RemoteConfigSettingsHelper__Tag const kInt64Val;

/// @brief Field kUInt64Val offset 0
static UnityEngine::UnityEngine__RemoteConfigSettingsHelper__Tag const kUInt64Val;

/// @brief Field kDoubleVal offset 0
static UnityEngine::UnityEngine__RemoteConfigSettingsHelper__Tag const kDoubleVal;

/// @brief Field kBoolVal offset 0
static UnityEngine::UnityEngine__RemoteConfigSettingsHelper__Tag const kBoolVal;

/// @brief Field kStringVal offset 0
static UnityEngine::UnityEngine__RemoteConfigSettingsHelper__Tag const kStringVal;

/// @brief Field kArrayVal offset 0
static UnityEngine::UnityEngine__RemoteConfigSettingsHelper__Tag const kArrayVal;

/// @brief Field kMixedArrayVal offset 0
static UnityEngine::UnityEngine__RemoteConfigSettingsHelper__Tag const kMixedArrayVal;

/// @brief Field kMapVal offset 0
static UnityEngine::UnityEngine__RemoteConfigSettingsHelper__Tag const kMapVal;

/// @brief Field kMaxTags offset 0
static UnityEngine::UnityEngine__RemoteConfigSettingsHelper__Tag const kMaxTags;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: UnityEngine::RemoteConfigSettingsHelper
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15935))
// CS Name: UnityEngine.RemoteConfigSettingsHelper
class CORDL_TYPE RemoteConfigSettingsHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Tag = UnityEngine::UnityEngine__RemoteConfigSettingsHelper__Tag;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~RemoteConfigSettingsHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteConfigSettingsHelper", modifiers: " const&", def_value: None }]
constexpr RemoteConfigSettingsHelper(RemoteConfigSettingsHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteConfigSettingsHelper", modifiers: "&&", def_value: None }]
constexpr RemoteConfigSettingsHelper(RemoteConfigSettingsHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RemoteConfigSettingsHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RemoteConfigSettingsHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RemoteConfigSettingsHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RemoteConfigSettingsHelper& operator=(RemoteConfigSettingsHelper&& o) noexcept = default;
  constexpr RemoteConfigSettingsHelper& operator=(RemoteConfigSettingsHelper const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UnityEngine__RemoteConfigSettingsHelper__Tag, "UnityEngine", "RemoteConfigSettingsHelper/Tag");
NEED_NO_BOX(::UnityEngine::RemoteConfigSettingsHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RemoteConfigSettingsHelper, "UnityEngine", "RemoteConfigSettingsHelper");
} // end anonymous namespace
