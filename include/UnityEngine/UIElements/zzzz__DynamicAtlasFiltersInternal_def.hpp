#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::UIElements {
struct DynamicAtlasFiltersInternal;
}
// Type: UnityEngine.UIElements::DynamicAtlasFiltersInternal
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7109))
// CS Name: UnityEngine.UIElements.DynamicAtlasFiltersInternal
struct CORDL_TYPE DynamicAtlasFiltersInternal : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DynamicAtlasFiltersInternal(int32_t value__) noexcept;


                    constexpr DynamicAtlasFiltersInternal(DynamicAtlasFiltersInternal const&) = default;
                    constexpr DynamicAtlasFiltersInternal(DynamicAtlasFiltersInternal&&) = default;
                    constexpr DynamicAtlasFiltersInternal& operator=(DynamicAtlasFiltersInternal const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DynamicAtlasFiltersInternal& operator=(DynamicAtlasFiltersInternal&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DynamicAtlasFiltersInternal(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __DynamicAtlasFiltersInternal_Unwrapped : int32_t {
__None = 0,
__Readability = 1,
__Size = 2,
__Format = 4,
__ColorSpace = 8,
__FilterMode = 16,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DynamicAtlasFiltersInternal_Unwrapped () const noexcept {
return std::bit_cast<__DynamicAtlasFiltersInternal_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::UIElements::DynamicAtlasFiltersInternal const None;

/// @brief Field Readability offset 0
static UnityEngine::UIElements::DynamicAtlasFiltersInternal const Readability;

/// @brief Field Size offset 0
static UnityEngine::UIElements::DynamicAtlasFiltersInternal const Size;

/// @brief Field Format offset 0
static UnityEngine::UIElements::DynamicAtlasFiltersInternal const Format;

/// @brief Field ColorSpace offset 0
static UnityEngine::UIElements::DynamicAtlasFiltersInternal const ColorSpace;

/// @brief Field FilterMode offset 0
static UnityEngine::UIElements::DynamicAtlasFiltersInternal const FilterMode;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::DynamicAtlasFiltersInternal, "UnityEngine.UIElements", "DynamicAtlasFiltersInternal");
