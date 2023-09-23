#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets::Syntax {
struct DataType;
}
// Type: UnityEngine.UIElements.StyleSheets.Syntax::DataType
namespace UnityEngine::UIElements::StyleSheets::Syntax {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7594))
// CS Name: UnityEngine.UIElements.StyleSheets.Syntax.DataType
struct CORDL_TYPE DataType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DataType(int32_t value__) noexcept;


                    constexpr DataType(DataType const&) = default;
                    constexpr DataType(DataType&&) = default;
                    constexpr DataType& operator=(DataType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DataType& operator=(DataType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DataType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __DataType_Unwrapped : int32_t {
__None = 0,
__Number = 1,
__Integer = 2,
__Length = 3,
__Percentage = 4,
__Color = 5,
__Resource = 6,
__Url = 7,
__Time = 8,
__Angle = 9,
__CustomIdent = 10,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DataType_Unwrapped () const noexcept {
return std::bit_cast<__DataType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::DataType const None;

/// @brief Field Number offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::DataType const Number;

/// @brief Field Integer offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::DataType const Integer;

/// @brief Field Length offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::DataType const Length;

/// @brief Field Percentage offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::DataType const Percentage;

/// @brief Field Color offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::DataType const Color;

/// @brief Field Resource offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::DataType const Resource;

/// @brief Field Url offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::DataType const Url;

/// @brief Field Time offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::DataType const Time;

/// @brief Field Angle offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::DataType const Angle;

/// @brief Field CustomIdent offset 0
static UnityEngine::UIElements::StyleSheets::Syntax::DataType const CustomIdent;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::StyleSheets::Syntax
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleSheets::Syntax::DataType, "UnityEngine.UIElements.StyleSheets.Syntax", "DataType");
