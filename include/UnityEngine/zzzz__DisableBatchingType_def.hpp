#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct DisableBatchingType;
}
// Type: UnityEngine::DisableBatchingType
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10199))
// CS Name: UnityEngine.DisableBatchingType
struct CORDL_TYPE DisableBatchingType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DisableBatchingType(int32_t value__) noexcept;


                    constexpr DisableBatchingType(DisableBatchingType const&) = default;
                    constexpr DisableBatchingType(DisableBatchingType&&) = default;
                    constexpr DisableBatchingType& operator=(DisableBatchingType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DisableBatchingType& operator=(DisableBatchingType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DisableBatchingType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __DisableBatchingType_Unwrapped : int32_t {
__False = 0,
__True = 1,
__WhenLODFading = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DisableBatchingType_Unwrapped () const noexcept {
return std::bit_cast<__DisableBatchingType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field False offset 0
static UnityEngine::DisableBatchingType const False;

/// @brief Field True offset 0
static UnityEngine::DisableBatchingType const True;

/// @brief Field WhenLODFading offset 0
static UnityEngine::DisableBatchingType const WhenLODFading;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::DisableBatchingType, "UnityEngine", "DisableBatchingType");
