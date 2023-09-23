#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace JetBrains::Annotations {
struct ImplicitUseTargetFlags;
}
// Type: JetBrains.Annotations::ImplicitUseTargetFlags
namespace JetBrains::Annotations {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9971))
// CS Name: JetBrains.Annotations.ImplicitUseTargetFlags
struct CORDL_TYPE ImplicitUseTargetFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ImplicitUseTargetFlags(int32_t value__) noexcept;


                    constexpr ImplicitUseTargetFlags(ImplicitUseTargetFlags const&) = default;
                    constexpr ImplicitUseTargetFlags(ImplicitUseTargetFlags&&) = default;
                    constexpr ImplicitUseTargetFlags& operator=(ImplicitUseTargetFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ImplicitUseTargetFlags& operator=(ImplicitUseTargetFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ImplicitUseTargetFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ImplicitUseTargetFlags_Unwrapped : int32_t {
__Default = 1,
__Itself = 1,
__Members = 2,
__WithMembers = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ImplicitUseTargetFlags_Unwrapped () const noexcept {
return std::bit_cast<__ImplicitUseTargetFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Default offset 0
static JetBrains::Annotations::ImplicitUseTargetFlags const Default;

/// @brief Field Itself offset 0
static JetBrains::Annotations::ImplicitUseTargetFlags const Itself;

/// @brief Field Members offset 0
static JetBrains::Annotations::ImplicitUseTargetFlags const Members;

/// @brief Field WithMembers offset 0
static JetBrains::Annotations::ImplicitUseTargetFlags const WithMembers;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::ImplicitUseTargetFlags, "JetBrains.Annotations", "ImplicitUseTargetFlags");
