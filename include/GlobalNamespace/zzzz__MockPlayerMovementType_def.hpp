#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
struct MockPlayerMovementType;
}
// Type: ::MockPlayerMovementType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5283))
// CS Name: MockPlayerMovementType
struct CORDL_TYPE MockPlayerMovementType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MockPlayerMovementType(int32_t value__) noexcept;


                    constexpr MockPlayerMovementType(MockPlayerMovementType const&) = default;
                    constexpr MockPlayerMovementType(MockPlayerMovementType&&) = default;
                    constexpr MockPlayerMovementType& operator=(MockPlayerMovementType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MockPlayerMovementType& operator=(MockPlayerMovementType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MockPlayerMovementType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __MockPlayerMovementType_Unwrapped : int32_t {
__AI = 0,
__MirrorPlayer = 1,
__Recording = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MockPlayerMovementType_Unwrapped () const noexcept {
return std::bit_cast<__MockPlayerMovementType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field AI offset 0
static GlobalNamespace::MockPlayerMovementType const AI;

/// @brief Field MirrorPlayer offset 0
static GlobalNamespace::MockPlayerMovementType const MirrorPlayer;

/// @brief Field Recording offset 0
static GlobalNamespace::MockPlayerMovementType const Recording;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockPlayerMovementType, "", "MockPlayerMovementType");
