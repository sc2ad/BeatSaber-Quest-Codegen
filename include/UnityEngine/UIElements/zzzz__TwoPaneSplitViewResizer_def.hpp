#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__PointerManipulator_def.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::UIElements {
struct TwoPaneSplitViewOrientation;
}
namespace UnityEngine::UIElements {
class TwoPaneSplitView;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class PointerDownEvent;
}
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
namespace UnityEngine::UIElements {
class PointerUpEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TwoPaneSplitViewResizer;
}
// Type: UnityEngine.UIElements::TwoPaneSplitViewResizer
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6912))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7224))
// CS Name: UnityEngine.UIElements.TwoPaneSplitViewResizer
class CORDL_TYPE TwoPaneSplitViewResizer : public UnityEngine::UIElements::PointerManipulator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~TwoPaneSplitViewResizer() = default;

// Ctor Parameters [CppParam { name: "", ty: "TwoPaneSplitViewResizer", modifiers: " const&", def_value: None }]
constexpr TwoPaneSplitViewResizer(TwoPaneSplitViewResizer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TwoPaneSplitViewResizer", modifiers: "&&", def_value: None }]
constexpr TwoPaneSplitViewResizer(TwoPaneSplitViewResizer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TwoPaneSplitViewResizer(void* ptr) noexcept : UnityEngine::UIElements::PointerManipulator(ptr) {
}


  constexpr TwoPaneSplitViewResizer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TwoPaneSplitViewResizer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TwoPaneSplitViewResizer& operator=(TwoPaneSplitViewResizer&& o) noexcept = default;
  constexpr TwoPaneSplitViewResizer& operator=(TwoPaneSplitViewResizer const& o) noexcept = default;
                


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get_m_Start, put=__set_m_Start))  m_Start;

constexpr void __set_m_Start(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_Start() const;

 bool __declspec(property(get=__get_m_Active, put=__set_m_Active))  m_Active;

constexpr void __set_m_Active(bool value) ;

constexpr bool __get_m_Active() const;

 UnityEngine::UIElements::TwoPaneSplitView __declspec(property(get=__get_m_SplitView, put=__set_m_SplitView))  m_SplitView;

constexpr void __set_m_SplitView(UnityEngine::UIElements::TwoPaneSplitView value) ;

constexpr UnityEngine::UIElements::TwoPaneSplitView __get_m_SplitView() const;

 int32_t __declspec(property(get=__get_m_Direction, put=__set_m_Direction))  m_Direction;

constexpr void __set_m_Direction(int32_t value) ;

constexpr int32_t __get_m_Direction() const;

 UnityEngine::UIElements::TwoPaneSplitViewOrientation __declspec(property(get=__get_m_Orientation, put=__set_m_Orientation))  m_Orientation;

constexpr void __set_m_Orientation(UnityEngine::UIElements::TwoPaneSplitViewOrientation value) ;

constexpr UnityEngine::UIElements::TwoPaneSplitViewOrientation __get_m_Orientation() const;


// Properties

 UnityEngine::UIElements::VisualElement __declspec(property(get=get_fixedPane))  fixedPane;

 UnityEngine::UIElements::VisualElement __declspec(property(get=get_flexedPane))  flexedPane;

 float_t __declspec(property(get=get_fixedPaneMinDimension))  fixedPaneMinDimension;

 float_t __declspec(property(get=get_flexedPaneMinDimension))  flexedPaneMinDimension;


// Methods

/// @brief Method get_fixedPane addr 0x2cc36f4 size 0x1c virtual false final false
 UnityEngine::UIElements::VisualElement get_fixedPane() ;

/// @brief Method get_flexedPane addr 0x2cc3710 size 0x1c virtual false final false
 UnityEngine::UIElements::VisualElement get_flexedPane() ;

/// @brief Method get_fixedPaneMinDimension addr 0x2cc372c size 0x114 virtual false final false
 float_t get_fixedPaneMinDimension() ;

/// @brief Method get_flexedPaneMinDimension addr 0x2cc3840 size 0x114 virtual false final false
 float_t get_flexedPaneMinDimension() ;

static UnityEngine::UIElements::TwoPaneSplitViewResizer New_ctor(UnityEngine::UIElements::TwoPaneSplitView splitView, int32_t dir, UnityEngine::UIElements::TwoPaneSplitViewOrientation orientation) ;

/// @brief Method .ctor addr 0x2cc3954 size 0xd8 virtual false final false
 void _ctor(UnityEngine::UIElements::TwoPaneSplitView splitView, int32_t dir, UnityEngine::UIElements::TwoPaneSplitViewOrientation orientation) ;

/// @brief Method RegisterCallbacksOnTarget addr 0x2cc3a2c size 0x1cc virtual true final false
 void RegisterCallbacksOnTarget() ;

/// @brief Method UnregisterCallbacksFromTarget addr 0x2cc3bf8 size 0x1cc virtual true final false
 void UnregisterCallbacksFromTarget() ;

/// @brief Method ApplyDelta addr 0x2cc3dc4 size 0x600 virtual false final false
 void ApplyDelta(float_t delta) ;

/// @brief Method OnPointerDown addr 0x2cc43c4 size 0xc8 virtual false final false
 void OnPointerDown(UnityEngine::UIElements::PointerDownEvent e) ;

/// @brief Method OnPointerMove addr 0x2cc448c size 0xb8 virtual false final false
 void OnPointerMove(UnityEngine::UIElements::PointerMoveEvent e) ;

/// @brief Method OnPointerUp addr 0x2cc4544 size 0xac virtual false final false
 void OnPointerUp(UnityEngine::UIElements::PointerUpEvent e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::TwoPaneSplitViewResizer);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::TwoPaneSplitViewResizer, "UnityEngine.UIElements", "TwoPaneSplitViewResizer");
