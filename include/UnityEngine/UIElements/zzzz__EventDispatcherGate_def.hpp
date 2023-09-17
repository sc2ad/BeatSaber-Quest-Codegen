#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::UIElements {
class EventDispatcher;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct EventDispatcherGate;
}
// Type: UnityEngine.UIElements::EventDispatcherGate
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6999))
// CS Name: UnityEngine.UIElements.EventDispatcherGate
struct CORDL_TYPE EventDispatcherGate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const;

/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::UIElements::EventDispatcherGate>
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::EventDispatcherGate>() const;

// Ctor Parameters [CppParam { name: "m_Dispatcher", ty: "::UnityEngine::UIElements::EventDispatcher", modifiers: "", def_value: None }]
constexpr EventDispatcherGate(::UnityEngine::UIElements::EventDispatcher m_Dispatcher) noexcept;


                    constexpr EventDispatcherGate(EventDispatcherGate const&) = default;
                    constexpr EventDispatcherGate(EventDispatcherGate&&) = default;
                    constexpr EventDispatcherGate& operator=(EventDispatcherGate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EventDispatcherGate& operator=(EventDispatcherGate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EventDispatcherGate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::UIElements::EventDispatcher __declspec(property(get=__get_m_Dispatcher, put=__set_m_Dispatcher))  m_Dispatcher;

constexpr void __set_m_Dispatcher(::UnityEngine::UIElements::EventDispatcher value) ;

constexpr ::UnityEngine::UIElements::EventDispatcher __get_m_Dispatcher() const;


// Methods

/// @brief Method .ctor addr 0x2c89bac size 0x6c virtual false final false
 void _ctor(::UnityEngine::UIElements::EventDispatcher d) ;

/// @brief Method Dispose addr 0x2c89c28 size 0x18 virtual true final true
 void Dispose() ;

/// @brief Method Equals addr 0x2c89cc8 size 0xc virtual true final true
 bool Equals(::UnityEngine::UIElements::EventDispatcherGate other) ;

/// @brief Method Equals addr 0x2c89cd4 size 0x7c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2c89d50 size 0x18 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EventDispatcherGate, "UnityEngine.UIElements", "EventDispatcherGate");
