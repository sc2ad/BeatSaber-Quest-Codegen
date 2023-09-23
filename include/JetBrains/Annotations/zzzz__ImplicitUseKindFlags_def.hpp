#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace JetBrains::Annotations {
struct ImplicitUseKindFlags;
}
// Type: JetBrains.Annotations::ImplicitUseKindFlags
namespace JetBrains::Annotations {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15692))
// CS Name: JetBrains.Annotations.ImplicitUseKindFlags
struct CORDL_TYPE ImplicitUseKindFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ImplicitUseKindFlags(int32_t value__) noexcept;


                    constexpr ImplicitUseKindFlags(ImplicitUseKindFlags const&) = default;
                    constexpr ImplicitUseKindFlags(ImplicitUseKindFlags&&) = default;
                    constexpr ImplicitUseKindFlags& operator=(ImplicitUseKindFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ImplicitUseKindFlags& operator=(ImplicitUseKindFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ImplicitUseKindFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ImplicitUseKindFlags_Unwrapped : int32_t {
__Default = 7,
__Access = 1,
__Assign = 2,
__InstantiatedWithFixedConstructorSignature = 4,
__InstantiatedNoFixedConstructorSignature = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ImplicitUseKindFlags_Unwrapped () const noexcept {
return std::bit_cast<__ImplicitUseKindFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Default offset 0
static JetBrains::Annotations::ImplicitUseKindFlags const Default;

/// @brief Field Access offset 0
static JetBrains::Annotations::ImplicitUseKindFlags const Access;

/// @brief Field Assign offset 0
static JetBrains::Annotations::ImplicitUseKindFlags const Assign;

/// @brief Field InstantiatedWithFixedConstructorSignature offset 0
static JetBrains::Annotations::ImplicitUseKindFlags const InstantiatedWithFixedConstructorSignature;

/// @brief Field InstantiatedNoFixedConstructorSignature offset 0
static JetBrains::Annotations::ImplicitUseKindFlags const InstantiatedNoFixedConstructorSignature;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::ImplicitUseKindFlags, "JetBrains.Annotations", "ImplicitUseKindFlags");
