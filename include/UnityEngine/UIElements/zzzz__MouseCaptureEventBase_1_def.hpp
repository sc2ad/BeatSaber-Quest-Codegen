#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__PointerCaptureEventBase_1_def.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class MouseCaptureEventBase_1;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type T>
class MouseCaptureEventBase_1<T>;
}
// Type: UnityEngine.UIElements::MouseCaptureEventBase`1
// Type: UnityEngine.UIElements::MouseCaptureEventBase`1
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7249)), TypeDefinitionIndex(TypeDefinitionIndex(7252)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7249), inst: 4498 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7252), inst: 2 })
// CS Name: UnityEngine.UIElements.MouseCaptureEventBase`1
class CORDL_TYPE MouseCaptureEventBase_1<T> : public ::UnityEngine::UIElements::PointerCaptureEventBase_1<T> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~MouseCaptureEventBase_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "MouseCaptureEventBase_1", modifiers: " const&", def_value: None }]
constexpr MouseCaptureEventBase_1(MouseCaptureEventBase_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MouseCaptureEventBase_1", modifiers: "&&", def_value: None }]
constexpr MouseCaptureEventBase_1(MouseCaptureEventBase_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MouseCaptureEventBase_1(void* ptr) noexcept : ::UnityEngine::UIElements::PointerCaptureEventBase_1<T>(ptr) {
}


  constexpr MouseCaptureEventBase_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MouseCaptureEventBase_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MouseCaptureEventBase_1& operator=(MouseCaptureEventBase_1&& o) noexcept = default;
  constexpr MouseCaptureEventBase_1& operator=(MouseCaptureEventBase_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init() ;

// Ctor Parameters []
explicit MouseCaptureEventBase_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::MouseCaptureEventBase_1, "UnityEngine.UIElements", "MouseCaptureEventBase`1");
