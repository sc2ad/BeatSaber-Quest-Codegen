#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename TEventType>
class EventCallback_1;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type TEventType>
class EventCallback_1<TEventType>;
}
// Type: UnityEngine.UIElements::EventCallback`1
// Type: UnityEngine.UIElements::EventCallback`1
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type TEventType>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7281)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7281), inst: 2 })
// CS Name: UnityEngine.UIElements.EventCallback`1
class CORDL_TYPE EventCallback_1<TEventType> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~EventCallback_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EventCallback_1", modifiers: " const&", def_value: None }]
constexpr EventCallback_1(EventCallback_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EventCallback_1", modifiers: "&&", def_value: None }]
constexpr EventCallback_1(EventCallback_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EventCallback_1(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr EventCallback_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EventCallback_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EventCallback_1& operator=(EventCallback_1&& o) noexcept = default;
  constexpr EventCallback_1& operator=(EventCallback_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit EventCallback_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(TEventType evt) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::EventCallback_1, "UnityEngine.UIElements", "EventCallback`1");
