#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct TagUnitType;
}
// Type: UnityEngine.TextCore.Text::TagUnitType
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13530))
// CS Name: UnityEngine.TextCore.Text.TagUnitType
struct CORDL_TYPE TagUnitType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TagUnitType(int32_t value__) noexcept;


                    constexpr TagUnitType(TagUnitType const&) = default;
                    constexpr TagUnitType(TagUnitType&&) = default;
                    constexpr TagUnitType& operator=(TagUnitType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TagUnitType& operator=(TagUnitType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TagUnitType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TagUnitType_Unwrapped : int32_t {
__Pixels = 0,
__FontUnits = 1,
__Percentage = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TagUnitType_Unwrapped () const noexcept {
return std::bit_cast<__TagUnitType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Pixels offset 0
static UnityEngine::TextCore::Text::TagUnitType const Pixels;

/// @brief Field FontUnits offset 0
static UnityEngine::TextCore::Text::TagUnitType const FontUnits;

/// @brief Field Percentage offset 0
static UnityEngine::TextCore::Text::TagUnitType const Percentage;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::Text::TagUnitType, "UnityEngine.TextCore.Text", "TagUnitType");
