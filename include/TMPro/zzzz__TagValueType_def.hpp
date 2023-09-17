#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace TMPro {
struct TagValueType;
}
// Type: TMPro::TagValueType
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12351))
// CS Name: TMPro.TagValueType
struct CORDL_TYPE TagValueType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TagValueType(int32_t value__) noexcept;


                    constexpr TagValueType(TagValueType const&) = default;
                    constexpr TagValueType(TagValueType&&) = default;
                    constexpr TagValueType& operator=(TagValueType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TagValueType& operator=(TagValueType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TagValueType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TagValueType_Unwrapped : int32_t {
__None = 0,
__NumericalValue = 1,
__StringValue = 2,
__ColorValue = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TagValueType_Unwrapped () const noexcept {
return std::bit_cast<__TagValueType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::TMPro::TagValueType const None;

/// @brief Field NumericalValue offset 0
static ::TMPro::TagValueType const NumericalValue;

/// @brief Field StringValue offset 0
static ::TMPro::TagValueType const StringValue;

/// @brief Field ColorValue offset 0
static ::TMPro::TagValueType const ColorValue;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TagValueType, "TMPro", "TagValueType");
