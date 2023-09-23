#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements {
class EventBase;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct EventDebuggerLogExecuteDefaultAction;
}
// Type: UnityEngine.UIElements::EventDebuggerLogExecuteDefaultAction
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7453))
// CS Name: UnityEngine.UIElements.EventDebuggerLogExecuteDefaultAction
struct CORDL_TYPE EventDebuggerLogExecuteDefaultAction : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;


                    constexpr EventDebuggerLogExecuteDefaultAction(EventDebuggerLogExecuteDefaultAction const&) = default;
                    constexpr EventDebuggerLogExecuteDefaultAction(EventDebuggerLogExecuteDefaultAction&&) = default;
                    constexpr EventDebuggerLogExecuteDefaultAction& operator=(EventDebuggerLogExecuteDefaultAction const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EventDebuggerLogExecuteDefaultAction& operator=(EventDebuggerLogExecuteDefaultAction&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EventDebuggerLogExecuteDefaultAction(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Methods

/// @brief Method .ctor addr 0x2d0d308 size 0x4 virtual false final false
 void _ctor(UnityEngine::UIElements::EventBase evt) ;

/// @brief Method Dispose addr 0x2d0d30c size 0x4 virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::EventDebuggerLogExecuteDefaultAction, "UnityEngine.UIElements", "EventDebuggerLogExecuteDefaultAction");
