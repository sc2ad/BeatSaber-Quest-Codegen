#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
namespace UnityEngine::UIElements {
class INavigationEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class NavigationEventBase_1;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type T>
class NavigationEventBase_1<T>;
}
// Type: UnityEngine.UIElements::NavigationEventBase`1
// Type: UnityEngine.UIElements::NavigationEventBase`1
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7279), inst: 1632 }), TypeDefinitionIndex(TypeDefinitionIndex(7347)), TypeDefinitionIndex(TypeDefinitionIndex(7279))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7347), inst: 2 })
// CS Name: UnityEngine.UIElements.NavigationEventBase`1
class CORDL_TYPE NavigationEventBase_1<T> : public UnityEngine::UIElements::EventBase_1<T> {
public:
// Declarations
/// @brief Convert operator to UnityEngine::UIElements::INavigationEvent
constexpr operator  UnityEngine::UIElements::INavigationEvent() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~NavigationEventBase_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "NavigationEventBase_1", modifiers: " const&", def_value: None }]
constexpr NavigationEventBase_1(NavigationEventBase_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NavigationEventBase_1", modifiers: "&&", def_value: None }]
constexpr NavigationEventBase_1(NavigationEventBase_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NavigationEventBase_1(void* ptr) noexcept : UnityEngine::UIElements::EventBase_1<T>(ptr) {
}


  constexpr NavigationEventBase_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NavigationEventBase_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NavigationEventBase_1& operator=(NavigationEventBase_1&& o) noexcept = default;
  constexpr NavigationEventBase_1& operator=(NavigationEventBase_1 const& o) noexcept = default;
                


// Methods

static UnityEngine::UIElements::NavigationEventBase_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init() ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
 void LocalInit() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::UIElements::NavigationEventBase_1, "UnityEngine.UIElements", "NavigationEventBase`1");
