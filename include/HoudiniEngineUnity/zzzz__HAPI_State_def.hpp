#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_State;
}
// Type: HoudiniEngineUnity::HAPI_State
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9633))
// CS Name: HoudiniEngineUnity.HAPI_State
struct CORDL_TYPE HAPI_State : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_State(int32_t value__) noexcept;


                    constexpr HAPI_State(HAPI_State const&) = default;
                    constexpr HAPI_State(HAPI_State&&) = default;
                    constexpr HAPI_State& operator=(HAPI_State const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_State& operator=(HAPI_State&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_State(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HAPI_State_Unwrapped : int32_t {
__HAPI_STATE_READY = 0,
__HAPI_STATE_READY_WITH_FATAL_ERRORS = 1,
__HAPI_STATE_READY_WITH_COOK_ERRORS = 2,
__HAPI_STATE_STARTING_COOK = 3,
__HAPI_STATE_COOKING = 4,
__HAPI_STATE_STARTING_LOAD = 5,
__HAPI_STATE_LOADING = 6,
__HAPI_STATE_MAX = 7,
__HAPI_STATE_MAX_READY_STATE = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HAPI_State_Unwrapped () const noexcept {
return std::bit_cast<__HAPI_State_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field HAPI_STATE_READY offset 0
static ::HoudiniEngineUnity::HAPI_State const HAPI_STATE_READY;

/// @brief Field HAPI_STATE_READY_WITH_FATAL_ERRORS offset 0
static ::HoudiniEngineUnity::HAPI_State const HAPI_STATE_READY_WITH_FATAL_ERRORS;

/// @brief Field HAPI_STATE_READY_WITH_COOK_ERRORS offset 0
static ::HoudiniEngineUnity::HAPI_State const HAPI_STATE_READY_WITH_COOK_ERRORS;

/// @brief Field HAPI_STATE_STARTING_COOK offset 0
static ::HoudiniEngineUnity::HAPI_State const HAPI_STATE_STARTING_COOK;

/// @brief Field HAPI_STATE_COOKING offset 0
static ::HoudiniEngineUnity::HAPI_State const HAPI_STATE_COOKING;

/// @brief Field HAPI_STATE_STARTING_LOAD offset 0
static ::HoudiniEngineUnity::HAPI_State const HAPI_STATE_STARTING_LOAD;

/// @brief Field HAPI_STATE_LOADING offset 0
static ::HoudiniEngineUnity::HAPI_State const HAPI_STATE_LOADING;

/// @brief Field HAPI_STATE_MAX offset 0
static ::HoudiniEngineUnity::HAPI_State const HAPI_STATE_MAX;

/// @brief Field HAPI_STATE_MAX_READY_STATE offset 0
static ::HoudiniEngineUnity::HAPI_State const HAPI_STATE_MAX_READY_STATE;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_State, "HoudiniEngineUnity", "HAPI_State");
