#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct EditLevel;
}
// Type: UnityEngine.ProBuilder::EditLevel
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12097))
// CS Name: UnityEngine.ProBuilder.EditLevel
struct CORDL_TYPE EditLevel : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EditLevel(int32_t value__) noexcept;


                    constexpr EditLevel(EditLevel const&) = default;
                    constexpr EditLevel(EditLevel&&) = default;
                    constexpr EditLevel& operator=(EditLevel const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EditLevel& operator=(EditLevel&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EditLevel(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EditLevel_Unwrapped : int32_t {
__Top = 0,
__Geometry = 1,
__Texture = 2,
__Plugin = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EditLevel_Unwrapped () const noexcept {
return std::bit_cast<__EditLevel_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Top offset 0
static UnityEngine::ProBuilder::EditLevel const Top;

/// @brief Field Geometry offset 0
static UnityEngine::ProBuilder::EditLevel const Geometry;

/// @brief Field Texture offset 0
static UnityEngine::ProBuilder::EditLevel const Texture;

/// @brief Field Plugin offset 0
static UnityEngine::ProBuilder::EditLevel const Plugin;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::EditLevel, "UnityEngine.ProBuilder", "EditLevel");
