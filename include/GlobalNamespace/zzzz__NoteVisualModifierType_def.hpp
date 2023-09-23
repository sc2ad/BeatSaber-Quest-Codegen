#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
struct NoteVisualModifierType;
}
// Type: ::NoteVisualModifierType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4865))
// CS Name: NoteVisualModifierType
struct CORDL_TYPE NoteVisualModifierType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NoteVisualModifierType(int32_t value__) noexcept;


                    constexpr NoteVisualModifierType(NoteVisualModifierType const&) = default;
                    constexpr NoteVisualModifierType(NoteVisualModifierType&&) = default;
                    constexpr NoteVisualModifierType& operator=(NoteVisualModifierType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NoteVisualModifierType& operator=(NoteVisualModifierType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NoteVisualModifierType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __NoteVisualModifierType_Unwrapped : int32_t {
__Normal = 0,
__DisappearingArrow = 1,
__Ghost = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NoteVisualModifierType_Unwrapped () const noexcept {
return std::bit_cast<__NoteVisualModifierType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Normal offset 0
static GlobalNamespace::NoteVisualModifierType const Normal;

/// @brief Field DisappearingArrow offset 0
static GlobalNamespace::NoteVisualModifierType const DisappearingArrow;

/// @brief Field Ghost offset 0
static GlobalNamespace::NoteVisualModifierType const Ghost;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteVisualModifierType, "", "NoteVisualModifierType");
