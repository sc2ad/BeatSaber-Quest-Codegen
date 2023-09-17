#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::ComponentModel {
struct ListChangedType;
}
// Type: System.ComponentModel::ListChangedType
namespace System::ComponentModel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8292))
// CS Name: System.ComponentModel.ListChangedType
struct CORDL_TYPE ListChangedType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ListChangedType(int32_t value__) noexcept;


                    constexpr ListChangedType(ListChangedType const&) = default;
                    constexpr ListChangedType(ListChangedType&&) = default;
                    constexpr ListChangedType& operator=(ListChangedType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ListChangedType& operator=(ListChangedType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ListChangedType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ListChangedType_Unwrapped : int32_t {
__Reset = 0,
__ItemAdded = 1,
__ItemDeleted = 2,
__ItemMoved = 3,
__ItemChanged = 4,
__PropertyDescriptorAdded = 5,
__PropertyDescriptorDeleted = 6,
__PropertyDescriptorChanged = 7,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ListChangedType_Unwrapped () const noexcept {
return std::bit_cast<__ListChangedType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Reset offset 0
static ::System::ComponentModel::ListChangedType const Reset;

/// @brief Field ItemAdded offset 0
static ::System::ComponentModel::ListChangedType const ItemAdded;

/// @brief Field ItemDeleted offset 0
static ::System::ComponentModel::ListChangedType const ItemDeleted;

/// @brief Field ItemMoved offset 0
static ::System::ComponentModel::ListChangedType const ItemMoved;

/// @brief Field ItemChanged offset 0
static ::System::ComponentModel::ListChangedType const ItemChanged;

/// @brief Field PropertyDescriptorAdded offset 0
static ::System::ComponentModel::ListChangedType const PropertyDescriptorAdded;

/// @brief Field PropertyDescriptorDeleted offset 0
static ::System::ComponentModel::ListChangedType const PropertyDescriptorDeleted;

/// @brief Field PropertyDescriptorChanged offset 0
static ::System::ComponentModel::ListChangedType const PropertyDescriptorChanged;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::ComponentModel
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ListChangedType, "System.ComponentModel", "ListChangedType");
