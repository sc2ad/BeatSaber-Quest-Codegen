#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_PDG_WorkitemState;
}
// Type: HoudiniEngineUnity::HAPI_PDG_WorkitemState
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9665))
// CS Name: HoudiniEngineUnity.HAPI_PDG_WorkitemState
struct CORDL_TYPE HAPI_PDG_WorkitemState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_PDG_WorkitemState(int32_t value__) noexcept;


                    constexpr HAPI_PDG_WorkitemState(HAPI_PDG_WorkitemState const&) = default;
                    constexpr HAPI_PDG_WorkitemState(HAPI_PDG_WorkitemState&&) = default;
                    constexpr HAPI_PDG_WorkitemState& operator=(HAPI_PDG_WorkitemState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_PDG_WorkitemState& operator=(HAPI_PDG_WorkitemState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_PDG_WorkitemState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HAPI_PDG_WorkitemState_Unwrapped : int32_t {
__HAPI_PDG_WORKITEM_UNDEFINED = 0,
__HAPI_PDG_WORKITEM_UNCOOKED = 1,
__HAPI_PDG_WORKITEM_WAITING = 2,
__HAPI_PDG_WORKITEM_SCHEDULED = 3,
__HAPI_PDG_WORKITEM_COOKING = 4,
__HAPI_PDG_WORKITEM_COOKED_SUCCESS = 5,
__HAPI_PDG_WORKITEM_COOKED_CACHE = 6,
__HAPI_PDG_WORKITEM_COOKED_FAIL = 7,
__HAPI_PDG_WORKITEM_COOKED_CANCEL = 8,
__HAPI_PDG_WORKITEM_DIRTY = 9,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HAPI_PDG_WorkitemState_Unwrapped () const noexcept {
return std::bit_cast<__HAPI_PDG_WorkitemState_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field HAPI_PDG_WORKITEM_UNDEFINED offset 0
static HoudiniEngineUnity::HAPI_PDG_WorkitemState const HAPI_PDG_WORKITEM_UNDEFINED;

/// @brief Field HAPI_PDG_WORKITEM_UNCOOKED offset 0
static HoudiniEngineUnity::HAPI_PDG_WorkitemState const HAPI_PDG_WORKITEM_UNCOOKED;

/// @brief Field HAPI_PDG_WORKITEM_WAITING offset 0
static HoudiniEngineUnity::HAPI_PDG_WorkitemState const HAPI_PDG_WORKITEM_WAITING;

/// @brief Field HAPI_PDG_WORKITEM_SCHEDULED offset 0
static HoudiniEngineUnity::HAPI_PDG_WorkitemState const HAPI_PDG_WORKITEM_SCHEDULED;

/// @brief Field HAPI_PDG_WORKITEM_COOKING offset 0
static HoudiniEngineUnity::HAPI_PDG_WorkitemState const HAPI_PDG_WORKITEM_COOKING;

/// @brief Field HAPI_PDG_WORKITEM_COOKED_SUCCESS offset 0
static HoudiniEngineUnity::HAPI_PDG_WorkitemState const HAPI_PDG_WORKITEM_COOKED_SUCCESS;

/// @brief Field HAPI_PDG_WORKITEM_COOKED_CACHE offset 0
static HoudiniEngineUnity::HAPI_PDG_WorkitemState const HAPI_PDG_WORKITEM_COOKED_CACHE;

/// @brief Field HAPI_PDG_WORKITEM_COOKED_FAIL offset 0
static HoudiniEngineUnity::HAPI_PDG_WorkitemState const HAPI_PDG_WORKITEM_COOKED_FAIL;

/// @brief Field HAPI_PDG_WORKITEM_COOKED_CANCEL offset 0
static HoudiniEngineUnity::HAPI_PDG_WorkitemState const HAPI_PDG_WORKITEM_COOKED_CANCEL;

/// @brief Field HAPI_PDG_WORKITEM_DIRTY offset 0
static HoudiniEngineUnity::HAPI_PDG_WorkitemState const HAPI_PDG_WORKITEM_DIRTY;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_PDG_WorkitemState, "HoudiniEngineUnity", "HAPI_PDG_WorkitemState");
