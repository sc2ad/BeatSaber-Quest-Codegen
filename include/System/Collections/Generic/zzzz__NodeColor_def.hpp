#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Collections::Generic {
struct NodeColor;
}
// Type: System.Collections.Generic::NodeColor
namespace System::Collections::Generic {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8393))
// CS Name: System.Collections.Generic.NodeColor
struct CORDL_TYPE NodeColor : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr NodeColor(uint8_t value__) noexcept;


                    constexpr NodeColor(NodeColor const&) = default;
                    constexpr NodeColor(NodeColor&&) = default;
                    constexpr NodeColor& operator=(NodeColor const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NodeColor& operator=(NodeColor&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NodeColor(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __NodeColor_Unwrapped : uint8_t {
__Black = 0u,
__Red = 1u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NodeColor_Unwrapped () const noexcept {
return std::bit_cast<__NodeColor_Unwrapped>(__instance);
}


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field Black offset 0
static ::System::Collections::Generic::NodeColor const Black;

/// @brief Field Red offset 0
static ::System::Collections::Generic::NodeColor const Red;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Generic::NodeColor, "System.Collections.Generic", "NodeColor");
