#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::AddressableAssets {
struct AddressablesPlatform;
}
// Type: UnityEngine.AddressableAssets::AddressablesPlatform
namespace UnityEngine::AddressableAssets {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14379))
// CS Name: UnityEngine.AddressableAssets.AddressablesPlatform
struct CORDL_TYPE AddressablesPlatform : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AddressablesPlatform(int32_t value__) noexcept;


                    constexpr AddressablesPlatform(AddressablesPlatform const&) = default;
                    constexpr AddressablesPlatform(AddressablesPlatform&&) = default;
                    constexpr AddressablesPlatform& operator=(AddressablesPlatform const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AddressablesPlatform& operator=(AddressablesPlatform&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AddressablesPlatform(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AddressablesPlatform_Unwrapped : int32_t {
__Unknown = 0,
__Windows = 1,
__OSX = 2,
__Linux = 3,
__PS4 = 4,
__Switch = 5,
__XboxOne = 6,
__WebGL = 7,
__iOS = 8,
__Android = 9,
__WindowsUniversal = 10,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AddressablesPlatform_Unwrapped () const noexcept {
return std::bit_cast<__AddressablesPlatform_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static ::UnityEngine::AddressableAssets::AddressablesPlatform const Unknown;

/// @brief Field Windows offset 0
static ::UnityEngine::AddressableAssets::AddressablesPlatform const Windows;

/// @brief Field OSX offset 0
static ::UnityEngine::AddressableAssets::AddressablesPlatform const OSX;

/// @brief Field Linux offset 0
static ::UnityEngine::AddressableAssets::AddressablesPlatform const Linux;

/// @brief Field PS4 offset 0
static ::UnityEngine::AddressableAssets::AddressablesPlatform const PS4;

/// @brief Field Switch offset 0
static ::UnityEngine::AddressableAssets::AddressablesPlatform const Switch;

/// @brief Field XboxOne offset 0
static ::UnityEngine::AddressableAssets::AddressablesPlatform const XboxOne;

/// @brief Field WebGL offset 0
static ::UnityEngine::AddressableAssets::AddressablesPlatform const WebGL;

/// @brief Field iOS offset 0
static ::UnityEngine::AddressableAssets::AddressablesPlatform const iOS;

/// @brief Field Android offset 0
static ::UnityEngine::AddressableAssets::AddressablesPlatform const Android;

/// @brief Field WindowsUniversal offset 0
static ::UnityEngine::AddressableAssets::AddressablesPlatform const WindowsUniversal;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::AddressableAssets
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::AddressablesPlatform, "UnityEngine.AddressableAssets", "AddressablesPlatform");
