#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
class Type;
}
namespace UnityEngine::LowLevel {
class ____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction;
}
// Forward declare root types
namespace UnityEngine::LowLevel {
struct PlayerLoopSystemInternal;
}
// Type: UnityEngine.LowLevel::PlayerLoopSystemInternal
namespace UnityEngine::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10408))
// CS Name: UnityEngine.LowLevel.PlayerLoopSystemInternal
struct CORDL_TYPE PlayerLoopSystemInternal : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "type", ty: "::System::Type", modifiers: "", def_value: None }, CppParam { name: "updateDelegate", ty: "::UnityEngine::LowLevel::____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction", modifiers: "", def_value: None }, CppParam { name: "updateFunction", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "loopConditionFunction", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "numSubSystems", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PlayerLoopSystemInternal(::System::Type type, ::UnityEngine::LowLevel::____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction updateDelegate, ::cordl_internals::intptr_t updateFunction, ::cordl_internals::intptr_t loopConditionFunction, int32_t numSubSystems) noexcept;


                    constexpr PlayerLoopSystemInternal(PlayerLoopSystemInternal const&) = default;
                    constexpr PlayerLoopSystemInternal(PlayerLoopSystemInternal&&) = default;
                    constexpr PlayerLoopSystemInternal& operator=(PlayerLoopSystemInternal const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PlayerLoopSystemInternal& operator=(PlayerLoopSystemInternal&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PlayerLoopSystemInternal(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Type __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(::System::Type value) ;

constexpr ::System::Type __get_type() const;

 ::UnityEngine::LowLevel::____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction __declspec(property(get=__get_updateDelegate, put=__set_updateDelegate))  updateDelegate;

constexpr void __set_updateDelegate(::UnityEngine::LowLevel::____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction value) ;

constexpr ::UnityEngine::LowLevel::____UnityEngine__LowLevel__PlayerLoopSystem__UpdateFunction __get_updateDelegate() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_updateFunction, put=__set_updateFunction))  updateFunction;

constexpr void __set_updateFunction(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_updateFunction() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_loopConditionFunction, put=__set_loopConditionFunction))  loopConditionFunction;

constexpr void __set_loopConditionFunction(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_loopConditionFunction() const;

 int32_t __declspec(property(get=__get_numSubSystems, put=__set_numSubSystems))  numSubSystems;

constexpr void __set_numSubSystems(int32_t value) ;

constexpr int32_t __get_numSubSystems() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::LowLevel
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LowLevel::PlayerLoopSystemInternal, "UnityEngine.LowLevel", "PlayerLoopSystemInternal");
