#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::UIElements {
class UxmlChildElementDescription;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct TwoPaneSplitViewOrientation;
}
namespace UnityEngine::UIElements {
class TwoPaneSplitViewResizer;
}
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace UnityEngine::UIElements {
template<typename T>
class UxmlEnumAttributeDescription_1;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class UxmlIntAttributeDescription;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
// Forward declare root types
namespace GlobalNamespace {
class UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits___get_uxmlChildElementsDescription_d__4;
}
namespace UnityEngine::UIElements {
class TwoPaneSplitView;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__TwoPaneSplitView__UxmlFactory;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits;
}
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6821))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7236))
// CS Name: UnityEngine.UIElements.TwoPaneSplitView::UxmlTraits
class CORDL_TYPE UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits : public UnityEngine::UIElements::UnityEngine__UIElements__VisualElement__UxmlTraits {
public:
// Declarations
using _get_uxmlChildElementsDescription_d__4 = GlobalNamespace::UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits___get_uxmlChildElementsDescription_d__4;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits(UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits(UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__VisualElement__UxmlTraits(ptr) {
}


  constexpr UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits& operator=(UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits&& o) noexcept = default;
  constexpr UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits& operator=(UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::UxmlIntAttributeDescription __declspec(property(get=__get_m_FixedPaneIndex, put=__set_m_FixedPaneIndex))  m_FixedPaneIndex;

constexpr void __set_m_FixedPaneIndex(UnityEngine::UIElements::UxmlIntAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlIntAttributeDescription __get_m_FixedPaneIndex() const;

 UnityEngine::UIElements::UxmlIntAttributeDescription __declspec(property(get=__get_m_FixedPaneInitialDimension, put=__set_m_FixedPaneInitialDimension))  m_FixedPaneInitialDimension;

constexpr void __set_m_FixedPaneInitialDimension(UnityEngine::UIElements::UxmlIntAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlIntAttributeDescription __get_m_FixedPaneInitialDimension() const;

 UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::TwoPaneSplitViewOrientation> __declspec(property(get=__get_m_Orientation, put=__set_m_Orientation))  m_Orientation;

constexpr void __set_m_Orientation(UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::TwoPaneSplitViewOrientation> value) ;

constexpr UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::TwoPaneSplitViewOrientation> __get_m_Orientation() const;


// Properties

 System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UxmlChildElementDescription> __declspec(property(get=get_uxmlChildElementsDescription))  uxmlChildElementsDescription;


// Methods

/// @brief Method get_uxmlChildElementsDescription addr 0x2cc8208 size 0x64 virtual true final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UxmlChildElementDescription> get_uxmlChildElementsDescription() ;

/// @brief Method Init addr 0x2cc82b0 size 0x16c virtual true final false
 void Init(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc) ;

// Ctor Parameters []
explicit UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits() ;

/// @brief Method .ctor addr 0x2cc841c size 0x14c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::TwoPaneSplitView
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6828))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7237))
// CS Name: UnityEngine.UIElements.TwoPaneSplitView
class CORDL_TYPE TwoPaneSplitView : public UnityEngine::UIElements::VisualElement {
public:
// Declarations
using UxmlTraits = UnityEngine::UIElements::UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits;

using UxmlFactory = UnityEngine::UIElements::UnityEngine__UIElements__TwoPaneSplitView__UxmlFactory;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x410};

virtual ~TwoPaneSplitView() = default;

// Ctor Parameters [CppParam { name: "", ty: "TwoPaneSplitView", modifiers: " const&", def_value: None }]
constexpr TwoPaneSplitView(TwoPaneSplitView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TwoPaneSplitView", modifiers: "&&", def_value: None }]
constexpr TwoPaneSplitView(TwoPaneSplitView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TwoPaneSplitView(void* ptr) noexcept : UnityEngine::UIElements::VisualElement(ptr) {
}


  constexpr TwoPaneSplitView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TwoPaneSplitView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TwoPaneSplitView& operator=(TwoPaneSplitView&& o) noexcept = default;
  constexpr TwoPaneSplitView& operator=(TwoPaneSplitView const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_s_UssClassName, put=__set_s_UssClassName))  s_UssClassName;

static void __set_s_UssClassName(::StringW value) ;

static ::StringW __get_s_UssClassName() ;

static ::StringW __declspec(property(get=__get_s_ContentContainerClassName, put=__set_s_ContentContainerClassName))  s_ContentContainerClassName;

static void __set_s_ContentContainerClassName(::StringW value) ;

static ::StringW __get_s_ContentContainerClassName() ;

static ::StringW __declspec(property(get=__get_s_HandleDragLineClassName, put=__set_s_HandleDragLineClassName))  s_HandleDragLineClassName;

static void __set_s_HandleDragLineClassName(::StringW value) ;

static ::StringW __get_s_HandleDragLineClassName() ;

static ::StringW __declspec(property(get=__get_s_HandleDragLineVerticalClassName, put=__set_s_HandleDragLineVerticalClassName))  s_HandleDragLineVerticalClassName;

static void __set_s_HandleDragLineVerticalClassName(::StringW value) ;

static ::StringW __get_s_HandleDragLineVerticalClassName() ;

static ::StringW __declspec(property(get=__get_s_HandleDragLineHorizontalClassName, put=__set_s_HandleDragLineHorizontalClassName))  s_HandleDragLineHorizontalClassName;

static void __set_s_HandleDragLineHorizontalClassName(::StringW value) ;

static ::StringW __get_s_HandleDragLineHorizontalClassName() ;

static ::StringW __declspec(property(get=__get_s_HandleDragLineAnchorClassName, put=__set_s_HandleDragLineAnchorClassName))  s_HandleDragLineAnchorClassName;

static void __set_s_HandleDragLineAnchorClassName(::StringW value) ;

static ::StringW __get_s_HandleDragLineAnchorClassName() ;

static ::StringW __declspec(property(get=__get_s_HandleDragLineAnchorVerticalClassName, put=__set_s_HandleDragLineAnchorVerticalClassName))  s_HandleDragLineAnchorVerticalClassName;

static void __set_s_HandleDragLineAnchorVerticalClassName(::StringW value) ;

static ::StringW __get_s_HandleDragLineAnchorVerticalClassName() ;

static ::StringW __declspec(property(get=__get_s_HandleDragLineAnchorHorizontalClassName, put=__set_s_HandleDragLineAnchorHorizontalClassName))  s_HandleDragLineAnchorHorizontalClassName;

static void __set_s_HandleDragLineAnchorHorizontalClassName(::StringW value) ;

static ::StringW __get_s_HandleDragLineAnchorHorizontalClassName() ;

static ::StringW __declspec(property(get=__get_s_VerticalClassName, put=__set_s_VerticalClassName))  s_VerticalClassName;

static void __set_s_VerticalClassName(::StringW value) ;

static ::StringW __get_s_VerticalClassName() ;

static ::StringW __declspec(property(get=__get_s_HorizontalClassName, put=__set_s_HorizontalClassName))  s_HorizontalClassName;

static void __set_s_HorizontalClassName(::StringW value) ;

static ::StringW __get_s_HorizontalClassName() ;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_LeftPane, put=__set_m_LeftPane))  m_LeftPane;

constexpr void __set_m_LeftPane(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_m_LeftPane() const;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_RightPane, put=__set_m_RightPane))  m_RightPane;

constexpr void __set_m_RightPane(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_m_RightPane() const;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_FixedPane, put=__set_m_FixedPane))  m_FixedPane;

constexpr void __set_m_FixedPane(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_m_FixedPane() const;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_FlexedPane, put=__set_m_FlexedPane))  m_FlexedPane;

constexpr void __set_m_FlexedPane(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_m_FlexedPane() const;

 float_t __declspec(property(get=__get_m_FixedPaneDimension, put=__set_m_FixedPaneDimension))  m_FixedPaneDimension;

constexpr void __set_m_FixedPaneDimension(float_t value) ;

constexpr float_t __get_m_FixedPaneDimension() const;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_DragLine, put=__set_m_DragLine))  m_DragLine;

constexpr void __set_m_DragLine(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_m_DragLine() const;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_DragLineAnchor, put=__set_m_DragLineAnchor))  m_DragLineAnchor;

constexpr void __set_m_DragLineAnchor(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_m_DragLineAnchor() const;

 bool __declspec(property(get=__get_m_CollapseMode, put=__set_m_CollapseMode))  m_CollapseMode;

constexpr void __set_m_CollapseMode(bool value) ;

constexpr bool __get_m_CollapseMode() const;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_Content, put=__set_m_Content))  m_Content;

constexpr void __set_m_Content(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_m_Content() const;

 UnityEngine::UIElements::TwoPaneSplitViewOrientation __declspec(property(get=__get_m_Orientation, put=__set_m_Orientation))  m_Orientation;

constexpr void __set_m_Orientation(UnityEngine::UIElements::TwoPaneSplitViewOrientation value) ;

constexpr UnityEngine::UIElements::TwoPaneSplitViewOrientation __get_m_Orientation() const;

 int32_t __declspec(property(get=__get_m_FixedPaneIndex, put=__set_m_FixedPaneIndex))  m_FixedPaneIndex;

constexpr void __set_m_FixedPaneIndex(int32_t value) ;

constexpr int32_t __get_m_FixedPaneIndex() const;

 float_t __declspec(property(get=__get_m_FixedPaneInitialDimension, put=__set_m_FixedPaneInitialDimension))  m_FixedPaneInitialDimension;

constexpr void __set_m_FixedPaneInitialDimension(float_t value) ;

constexpr float_t __get_m_FixedPaneInitialDimension() const;

 UnityEngine::UIElements::TwoPaneSplitViewResizer __declspec(property(get=__get_m_Resizer, put=__set_m_Resizer))  m_Resizer;

constexpr void __set_m_Resizer(UnityEngine::UIElements::TwoPaneSplitViewResizer value) ;

constexpr UnityEngine::UIElements::TwoPaneSplitViewResizer __get_m_Resizer() const;


// Properties

 UnityEngine::UIElements::VisualElement __declspec(property(get=get_fixedPane))  fixedPane;

 UnityEngine::UIElements::VisualElement __declspec(property(get=get_flexedPane))  flexedPane;

 int32_t __declspec(property(get=get_fixedPaneIndex))  fixedPaneIndex;

 float_t __declspec(property(get=get_fixedPaneDimension, put=set_fixedPaneDimension))  fixedPaneDimension;

 UnityEngine::UIElements::VisualElement __declspec(property(get=get_contentContainer))  contentContainer;


// Methods

/// @brief Method get_fixedPane addr 0x2cc61f0 size 0x8 virtual false final false
 UnityEngine::UIElements::VisualElement get_fixedPane() ;

/// @brief Method get_flexedPane addr 0x2cc61f8 size 0x8 virtual false final false
 UnityEngine::UIElements::VisualElement get_flexedPane() ;

/// @brief Method get_fixedPaneIndex addr 0x2cc6200 size 0x8 virtual false final false
 int32_t get_fixedPaneIndex() ;

/// @brief Method get_fixedPaneDimension addr 0x2cc6208 size 0x34 virtual false final false
 float_t get_fixedPaneDimension() ;

/// @brief Method set_fixedPaneDimension addr 0x2cc623c size 0x1c virtual false final false
 void set_fixedPaneDimension(float_t value) ;

// Ctor Parameters []
explicit TwoPaneSplitView() ;

/// @brief Method .ctor addr 0x2cc6258 size 0x210 virtual false final false
 void _ctor() ;

/// @brief Method Init addr 0x2cc6468 size 0x2dc virtual false final false
 void Init(int32_t fixedPaneIndex, float_t fixedPaneInitialDimension, UnityEngine::UIElements::TwoPaneSplitViewOrientation orientation) ;

/// @brief Method OnPostDisplaySetup addr 0x2cc76b4 size 0x108 virtual false final false
 void OnPostDisplaySetup(UnityEngine::UIElements::GeometryChangedEvent evt) ;

/// @brief Method PostDisplaySetup addr 0x2cc6744 size 0xf70 virtual false final false
 void PostDisplaySetup() ;

/// @brief Method OnSizeChange addr 0x2cc77bc size 0x4 virtual false final false
 void OnSizeChange(UnityEngine::UIElements::GeometryChangedEvent evt) ;

/// @brief Method OnSizeChange addr 0x2cc77c0 size 0x5d0 virtual false final false
 void OnSizeChange() ;

/// @brief Method get_contentContainer addr 0x2cc7fe0 size 0x8 virtual true final false
 UnityEngine::UIElements::VisualElement get_contentContainer() ;

/// @brief Method OnViewDataReady addr 0x2cc7fe8 size 0x3c virtual true final false
 void OnViewDataReady() ;

/// @brief Method SetDragLineOffset addr 0x2cc7d90 size 0x128 virtual false final false
 void SetDragLineOffset(float_t offset) ;

/// @brief Method SetFixedPaneDimension addr 0x2cc7eb8 size 0x128 virtual false final false
 void SetFixedPaneDimension(float_t dimension) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::UxmlFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7089), inst: 5112 }), TypeDefinitionIndex(TypeDefinitionIndex(7236)), TypeDefinitionIndex(TypeDefinitionIndex(7089)), TypeDefinitionIndex(TypeDefinitionIndex(7237))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7234))
// CS Name: UnityEngine.UIElements.TwoPaneSplitView::UxmlFactory
class CORDL_TYPE UnityEngine__UIElements__TwoPaneSplitView__UxmlFactory : public UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::TwoPaneSplitView,UnityEngine::UIElements::UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnityEngine__UIElements__TwoPaneSplitView__UxmlFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__TwoPaneSplitView__UxmlFactory", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__TwoPaneSplitView__UxmlFactory(UnityEngine__UIElements__TwoPaneSplitView__UxmlFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__TwoPaneSplitView__UxmlFactory", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__TwoPaneSplitView__UxmlFactory(UnityEngine__UIElements__TwoPaneSplitView__UxmlFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__TwoPaneSplitView__UxmlFactory(void* ptr) noexcept : UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::TwoPaneSplitView,UnityEngine::UIElements::UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits>(ptr) {
}


  constexpr UnityEngine__UIElements__TwoPaneSplitView__UxmlFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__TwoPaneSplitView__UxmlFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__TwoPaneSplitView__UxmlFactory& operator=(UnityEngine__UIElements__TwoPaneSplitView__UxmlFactory&& o) noexcept = default;
  constexpr UnityEngine__UIElements__TwoPaneSplitView__UxmlFactory& operator=(UnityEngine__UIElements__TwoPaneSplitView__UxmlFactory const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__TwoPaneSplitView__UxmlFactory() ;

/// @brief Method .ctor addr 0x2cc81c0 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::<get_uxmlChildElementsDescription>d__4
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7235))
// CS Name: UnityEngine.UIElements.TwoPaneSplitView::UxmlTraits::<get_uxmlChildElementsDescription>d__4
class CORDL_TYPE UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits___get_uxmlChildElementsDescription_d__4 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UxmlChildElementDescription>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UxmlChildElementDescription>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UxmlChildElementDescription>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UxmlChildElementDescription>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits___get_uxmlChildElementsDescription_d__4() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits___get_uxmlChildElementsDescription_d__4", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits___get_uxmlChildElementsDescription_d__4(UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits___get_uxmlChildElementsDescription_d__4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits___get_uxmlChildElementsDescription_d__4", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits___get_uxmlChildElementsDescription_d__4(UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits___get_uxmlChildElementsDescription_d__4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits___get_uxmlChildElementsDescription_d__4(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits___get_uxmlChildElementsDescription_d__4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits___get_uxmlChildElementsDescription_d__4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits___get_uxmlChildElementsDescription_d__4& operator=(UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits___get_uxmlChildElementsDescription_d__4&& o) noexcept = default;
  constexpr UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits___get_uxmlChildElementsDescription_d__4& operator=(UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits___get_uxmlChildElementsDescription_d__4 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 UnityEngine::UIElements::UxmlChildElementDescription __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(UnityEngine::UIElements::UxmlChildElementDescription value) ;

constexpr UnityEngine::UIElements::UxmlChildElementDescription __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 UnityEngine::UIElements::UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(UnityEngine::UIElements::UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits __get___4__this() const;


// Properties

 UnityEngine::UIElements::UxmlChildElementDescription __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__get_Current))  System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits___get_uxmlChildElementsDescription_d__4(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2cc826c size 0x44 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2cc8568 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2cc856c size 0x18 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.UIElements.UxmlChildElementDescription>.get_Current addr 0x2cc8584 size 0x8 virtual true final true
 UnityEngine::UIElements::UxmlChildElementDescription System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2cc858c size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2cc85cc size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.UIElements.UxmlChildElementDescription>.GetEnumerator addr 0x2cc85d4 size 0xa0 virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UxmlChildElementDescription> System_Collections_Generic_IEnumerable_UnityEngine_UIElements_UxmlChildElementDescription__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2cc8674 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits___get_uxmlChildElementsDescription_d__4);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits___get_uxmlChildElementsDescription_d__4, "UnityEngine.UIElements", "TwoPaneSplitView/UxmlTraits/<get_uxmlChildElementsDescription>d__4");
NEED_NO_BOX(UnityEngine::UIElements::TwoPaneSplitView);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::TwoPaneSplitView, "UnityEngine.UIElements", "TwoPaneSplitView");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__TwoPaneSplitView__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__TwoPaneSplitView__UxmlFactory, "UnityEngine.UIElements", "TwoPaneSplitView/UxmlFactory");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__TwoPaneSplitView__UxmlTraits, "UnityEngine.UIElements", "TwoPaneSplitView/UxmlTraits");
