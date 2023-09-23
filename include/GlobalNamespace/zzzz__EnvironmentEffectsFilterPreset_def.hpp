#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
struct EnvironmentEffectsFilterPreset;
}
// Type: ::EnvironmentEffectsFilterPreset
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4731))
// CS Name: EnvironmentEffectsFilterPreset
struct CORDL_TYPE EnvironmentEffectsFilterPreset : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EnvironmentEffectsFilterPreset(int32_t value__) noexcept;


                    constexpr EnvironmentEffectsFilterPreset(EnvironmentEffectsFilterPreset const&) = default;
                    constexpr EnvironmentEffectsFilterPreset(EnvironmentEffectsFilterPreset&&) = default;
                    constexpr EnvironmentEffectsFilterPreset& operator=(EnvironmentEffectsFilterPreset const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EnvironmentEffectsFilterPreset& operator=(EnvironmentEffectsFilterPreset&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EnvironmentEffectsFilterPreset(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EnvironmentEffectsFilterPreset_Unwrapped : int32_t {
__AllEffects = 0,
__StrobeFilter = 1,
__NoEffects = 10,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EnvironmentEffectsFilterPreset_Unwrapped () const noexcept {
return std::bit_cast<__EnvironmentEffectsFilterPreset_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field AllEffects offset 0
static GlobalNamespace::EnvironmentEffectsFilterPreset const AllEffects;

/// @brief Field StrobeFilter offset 0
static GlobalNamespace::EnvironmentEffectsFilterPreset const StrobeFilter;

/// @brief Field NoEffects offset 0
static GlobalNamespace::EnvironmentEffectsFilterPreset const NoEffects;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnvironmentEffectsFilterPreset, "", "EnvironmentEffectsFilterPreset");
