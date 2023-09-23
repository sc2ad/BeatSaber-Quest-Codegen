#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace TMPro {
struct VertexSortingOrder;
}
// Type: TMPro::VertexSortingOrder
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12346))
// CS Name: TMPro.VertexSortingOrder
struct CORDL_TYPE VertexSortingOrder : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VertexSortingOrder(int32_t value__) noexcept;


                    constexpr VertexSortingOrder(VertexSortingOrder const&) = default;
                    constexpr VertexSortingOrder(VertexSortingOrder&&) = default;
                    constexpr VertexSortingOrder& operator=(VertexSortingOrder const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VertexSortingOrder& operator=(VertexSortingOrder&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VertexSortingOrder(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __VertexSortingOrder_Unwrapped : int32_t {
__Normal = 0,
__Reverse = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VertexSortingOrder_Unwrapped () const noexcept {
return std::bit_cast<__VertexSortingOrder_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Normal offset 0
static TMPro::VertexSortingOrder const Normal;

/// @brief Field Reverse offset 0
static TMPro::VertexSortingOrder const Reverse;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(TMPro::VertexSortingOrder, "TMPro", "VertexSortingOrder");
