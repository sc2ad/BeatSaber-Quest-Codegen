#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct AssetLoadMode;
}
// Type: UnityEngine.ResourceManagement.ResourceProviders::AssetLoadMode
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14270))
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.AssetLoadMode
struct CORDL_TYPE AssetLoadMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AssetLoadMode(int32_t value__) noexcept;


                    constexpr AssetLoadMode(AssetLoadMode const&) = default;
                    constexpr AssetLoadMode(AssetLoadMode&&) = default;
                    constexpr AssetLoadMode& operator=(AssetLoadMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AssetLoadMode& operator=(AssetLoadMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AssetLoadMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AssetLoadMode_Unwrapped : int32_t {
__RequestedAssetAndDependencies = 0,
__AllPackedAssetsAndDependencies = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AssetLoadMode_Unwrapped () const noexcept {
return std::bit_cast<__AssetLoadMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field RequestedAssetAndDependencies offset 0
static UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode const RequestedAssetAndDependencies;

/// @brief Field AllPackedAssetsAndDependencies offset 0
static UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode const AllPackedAssetsAndDependencies;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode, "UnityEngine.ResourceManagement.ResourceProviders", "AssetLoadMode");
