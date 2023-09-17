#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace TMPro {
struct TMP_TextElementType;
}
// Type: TMPro::TMP_TextElementType
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12375))
// CS Name: TMPro.TMP_TextElementType
struct CORDL_TYPE TMP_TextElementType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TMP_TextElementType(int32_t value__) noexcept;


                    constexpr TMP_TextElementType(TMP_TextElementType const&) = default;
                    constexpr TMP_TextElementType(TMP_TextElementType&&) = default;
                    constexpr TMP_TextElementType& operator=(TMP_TextElementType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TMP_TextElementType& operator=(TMP_TextElementType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TMP_TextElementType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TMP_TextElementType_Unwrapped : int32_t {
__Character = 0,
__Sprite = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TMP_TextElementType_Unwrapped () const noexcept {
return std::bit_cast<__TMP_TextElementType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Character offset 0
static ::TMPro::TMP_TextElementType const Character;

/// @brief Field Sprite offset 0
static ::TMPro::TMP_TextElementType const Sprite;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_TextElementType, "TMPro", "TMP_TextElementType");
