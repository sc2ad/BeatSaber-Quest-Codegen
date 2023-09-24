#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_PDG_State;
}
// Type: HoudiniEngineUnity::HAPI_PDG_State
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9663))
// CS Name: HoudiniEngineUnity.HAPI_PDG_State
struct CORDL_TYPE HAPI_PDG_State : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_PDG_State(int32_t value__) noexcept;


                    constexpr HAPI_PDG_State(HAPI_PDG_State const&) = default;
                    constexpr HAPI_PDG_State(HAPI_PDG_State&&) = default;
                    constexpr HAPI_PDG_State& operator=(HAPI_PDG_State const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_PDG_State& operator=(HAPI_PDG_State&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_PDG_State(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HAPI_PDG_State_Unwrapped : int32_t {
__HAPI_PDG_STATE_READY = 0,
__HAPI_PDG_STATE_COOKING = 1,
__HAPI_PDG_STATE_MAX = 2,
__HAPI_PDG_STATE_MAX_READY_STATE = 0,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HAPI_PDG_State_Unwrapped () const noexcept {
return std::bit_cast<__HAPI_PDG_State_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field HAPI_PDG_STATE_READY offset 0
static HoudiniEngineUnity::HAPI_PDG_State const HAPI_PDG_STATE_READY;

/// @brief Field HAPI_PDG_STATE_COOKING offset 0
static HoudiniEngineUnity::HAPI_PDG_State const HAPI_PDG_STATE_COOKING;

/// @brief Field HAPI_PDG_STATE_MAX offset 0
static HoudiniEngineUnity::HAPI_PDG_State const HAPI_PDG_STATE_MAX;

/// @brief Field HAPI_PDG_STATE_MAX_READY_STATE offset 0
static HoudiniEngineUnity::HAPI_PDG_State const HAPI_PDG_STATE_MAX_READY_STATE;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_PDG_State, "HoudiniEngineUnity", "HAPI_PDG_State");
