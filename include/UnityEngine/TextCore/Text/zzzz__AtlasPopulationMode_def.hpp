#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct AtlasPopulationMode;
}
// Type: UnityEngine.TextCore.Text::AtlasPopulationMode
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13493))
// CS Name: UnityEngine.TextCore.Text.AtlasPopulationMode
struct CORDL_TYPE AtlasPopulationMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AtlasPopulationMode(int32_t value__) noexcept;


                    constexpr AtlasPopulationMode(AtlasPopulationMode const&) = default;
                    constexpr AtlasPopulationMode(AtlasPopulationMode&&) = default;
                    constexpr AtlasPopulationMode& operator=(AtlasPopulationMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AtlasPopulationMode& operator=(AtlasPopulationMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AtlasPopulationMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AtlasPopulationMode_Unwrapped : int32_t {
__Static = 0,
__Dynamic = 1,
__DynamicOS = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AtlasPopulationMode_Unwrapped () const noexcept {
return std::bit_cast<__AtlasPopulationMode_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Static offset 0
static UnityEngine::TextCore::Text::AtlasPopulationMode const Static;

/// @brief Field Dynamic offset 0
static UnityEngine::TextCore::Text::AtlasPopulationMode const Dynamic;

/// @brief Field DynamicOS offset 0
static UnityEngine::TextCore::Text::AtlasPopulationMode const DynamicOS;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::Text::AtlasPopulationMode, "UnityEngine.TextCore.Text", "AtlasPopulationMode");
