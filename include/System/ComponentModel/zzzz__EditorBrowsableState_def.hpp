#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::ComponentModel {
struct EditorBrowsableState;
}
// Type: System.ComponentModel::EditorBrowsableState
namespace System::ComponentModel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8236))
// CS Name: System.ComponentModel.EditorBrowsableState
struct CORDL_TYPE EditorBrowsableState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EditorBrowsableState(int32_t value__) noexcept;


                    constexpr EditorBrowsableState(EditorBrowsableState const&) = default;
                    constexpr EditorBrowsableState(EditorBrowsableState&&) = default;
                    constexpr EditorBrowsableState& operator=(EditorBrowsableState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EditorBrowsableState& operator=(EditorBrowsableState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EditorBrowsableState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EditorBrowsableState_Unwrapped : int32_t {
__Always = 0,
__Never = 1,
__Advanced = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EditorBrowsableState_Unwrapped () const noexcept {
return std::bit_cast<__EditorBrowsableState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Always offset 0
static ::System::ComponentModel::EditorBrowsableState const Always;

/// @brief Field Never offset 0
static ::System::ComponentModel::EditorBrowsableState const Never;

/// @brief Field Advanced offset 0
static ::System::ComponentModel::EditorBrowsableState const Advanced;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::ComponentModel
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::EditorBrowsableState, "System.ComponentModel", "EditorBrowsableState");
