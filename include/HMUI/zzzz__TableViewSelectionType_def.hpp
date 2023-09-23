#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace HMUI {
struct TableViewSelectionType;
}
// Type: HMUI::TableViewSelectionType
namespace HMUI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13710))
// CS Name: HMUI.TableViewSelectionType
struct CORDL_TYPE TableViewSelectionType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TableViewSelectionType(int32_t value__) noexcept;


                    constexpr TableViewSelectionType(TableViewSelectionType const&) = default;
                    constexpr TableViewSelectionType(TableViewSelectionType&&) = default;
                    constexpr TableViewSelectionType& operator=(TableViewSelectionType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TableViewSelectionType& operator=(TableViewSelectionType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TableViewSelectionType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TableViewSelectionType_Unwrapped : int32_t {
__None = 0,
__Single = 1,
__Multiple = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TableViewSelectionType_Unwrapped () const noexcept {
return std::bit_cast<__TableViewSelectionType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static HMUI::TableViewSelectionType const None;

/// @brief Field Single offset 0
static HMUI::TableViewSelectionType const Single;

/// @brief Field Multiple offset 0
static HMUI::TableViewSelectionType const Multiple;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HMUI
DEFINE_IL2CPP_ARG_TYPE(HMUI::TableViewSelectionType, "HMUI", "TableViewSelectionType");
