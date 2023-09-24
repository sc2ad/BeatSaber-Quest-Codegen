#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::ComponentModel {
struct NotifyCollectionChangedAction;
}
// Type: System.ComponentModel::NotifyCollectionChangedAction
namespace System::ComponentModel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11731))
// CS Name: System.ComponentModel.NotifyCollectionChangedAction
struct CORDL_TYPE NotifyCollectionChangedAction : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NotifyCollectionChangedAction(int32_t value__) noexcept;


                    constexpr NotifyCollectionChangedAction(NotifyCollectionChangedAction const&) = default;
                    constexpr NotifyCollectionChangedAction(NotifyCollectionChangedAction&&) = default;
                    constexpr NotifyCollectionChangedAction& operator=(NotifyCollectionChangedAction const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NotifyCollectionChangedAction& operator=(NotifyCollectionChangedAction&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NotifyCollectionChangedAction(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __NotifyCollectionChangedAction_Unwrapped : int32_t {
__Add = 0,
__Remove = 1,
__Replace = 2,
__Move = 3,
__Reset = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NotifyCollectionChangedAction_Unwrapped () const noexcept {
return std::bit_cast<__NotifyCollectionChangedAction_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Add offset 0
static System::ComponentModel::NotifyCollectionChangedAction const Add;

/// @brief Field Remove offset 0
static System::ComponentModel::NotifyCollectionChangedAction const Remove;

/// @brief Field Replace offset 0
static System::ComponentModel::NotifyCollectionChangedAction const Replace;

/// @brief Field Move offset 0
static System::ComponentModel::NotifyCollectionChangedAction const Move;

/// @brief Field Reset offset 0
static System::ComponentModel::NotifyCollectionChangedAction const Reset;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::ComponentModel
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::NotifyCollectionChangedAction, "System.ComponentModel", "NotifyCollectionChangedAction");
