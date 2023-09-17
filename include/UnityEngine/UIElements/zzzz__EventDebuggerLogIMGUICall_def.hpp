#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace {
namespace UnityEngine::UIElements {
class EventBase;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct EventDebuggerLogIMGUICall;
}
// Type: UnityEngine.UIElements::EventDebuggerLogIMGUICall
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7452))
// CS Name: UnityEngine.UIElements.EventDebuggerLogIMGUICall
struct CORDL_TYPE EventDebuggerLogIMGUICall : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const;


                    constexpr EventDebuggerLogIMGUICall(EventDebuggerLogIMGUICall const&) = default;
                    constexpr EventDebuggerLogIMGUICall(EventDebuggerLogIMGUICall&&) = default;
                    constexpr EventDebuggerLogIMGUICall& operator=(EventDebuggerLogIMGUICall const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EventDebuggerLogIMGUICall& operator=(EventDebuggerLogIMGUICall&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EventDebuggerLogIMGUICall(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Methods

/// @brief Method .ctor addr 0x2d0d300 size 0x4 virtual false final false
 void _ctor(::UnityEngine::UIElements::EventBase evt) ;

/// @brief Method Dispose addr 0x2d0d304 size 0x4 virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EventDebuggerLogIMGUICall, "UnityEngine.UIElements", "EventDebuggerLogIMGUICall");
