#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngineInternal {
struct TypeInferenceRules;
}
// Type: UnityEngineInternal::TypeInferenceRules
namespace UnityEngineInternal {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9903))
// CS Name: UnityEngineInternal.TypeInferenceRules
struct CORDL_TYPE TypeInferenceRules : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TypeInferenceRules(int32_t value__) noexcept;


                    constexpr TypeInferenceRules(TypeInferenceRules const&) = default;
                    constexpr TypeInferenceRules(TypeInferenceRules&&) = default;
                    constexpr TypeInferenceRules& operator=(TypeInferenceRules const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TypeInferenceRules& operator=(TypeInferenceRules&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TypeInferenceRules(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TypeInferenceRules_Unwrapped : int32_t {
__TypeReferencedByFirstArgument = 0,
__TypeReferencedBySecondArgument = 1,
__ArrayOfTypeReferencedByFirstArgument = 2,
__TypeOfFirstArgument = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TypeInferenceRules_Unwrapped () const noexcept {
return std::bit_cast<__TypeInferenceRules_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field TypeReferencedByFirstArgument offset 0
static UnityEngineInternal::TypeInferenceRules const TypeReferencedByFirstArgument;

/// @brief Field TypeReferencedBySecondArgument offset 0
static UnityEngineInternal::TypeInferenceRules const TypeReferencedBySecondArgument;

/// @brief Field ArrayOfTypeReferencedByFirstArgument offset 0
static UnityEngineInternal::TypeInferenceRules const ArrayOfTypeReferencedByFirstArgument;

/// @brief Field TypeOfFirstArgument offset 0
static UnityEngineInternal::TypeInferenceRules const TypeOfFirstArgument;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngineInternal
DEFINE_IL2CPP_ARG_TYPE(UnityEngineInternal::TypeInferenceRules, "UnityEngineInternal", "TypeInferenceRules");
