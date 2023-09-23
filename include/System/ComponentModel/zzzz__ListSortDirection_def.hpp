#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::ComponentModel {
struct ListSortDirection;
}
// Type: System.ComponentModel::ListSortDirection
namespace System::ComponentModel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8293))
// CS Name: System.ComponentModel.ListSortDirection
struct CORDL_TYPE ListSortDirection : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ListSortDirection(int32_t value__) noexcept;


                    constexpr ListSortDirection(ListSortDirection const&) = default;
                    constexpr ListSortDirection(ListSortDirection&&) = default;
                    constexpr ListSortDirection& operator=(ListSortDirection const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ListSortDirection& operator=(ListSortDirection&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ListSortDirection(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ListSortDirection_Unwrapped : int32_t {
__Ascending = 0,
__Descending = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ListSortDirection_Unwrapped () const noexcept {
return std::bit_cast<__ListSortDirection_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Ascending offset 0
static System::ComponentModel::ListSortDirection const Ascending;

/// @brief Field Descending offset 0
static System::ComponentModel::ListSortDirection const Descending;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::ComponentModel
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::ListSortDirection, "System.ComponentModel", "ListSortDirection");
