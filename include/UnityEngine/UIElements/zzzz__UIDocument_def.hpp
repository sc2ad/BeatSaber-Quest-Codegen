#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::UIElements {
class PanelSettings;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class VisualTreeAsset;
}
namespace UnityEngine::UIElements {
class UIDocumentList;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UIDocument;
}
// Type: UnityEngine.UIElements::UIDocument
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7108))
// CS Name: UnityEngine.UIElements.UIDocument
class CORDL_TYPE UIDocument : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~UIDocument() = default;

// Ctor Parameters [CppParam { name: "", ty: "UIDocument", modifiers: " const&", def_value: None }]
constexpr UIDocument(UIDocument const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UIDocument", modifiers: "&&", def_value: None }]
constexpr UIDocument(UIDocument&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UIDocument(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr UIDocument& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UIDocument& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UIDocument& operator=(UIDocument&& o) noexcept = default;
  constexpr UIDocument& operator=(UIDocument const& o) noexcept = default;
                


// Fields

/// @brief Field k_RootStyleClassName offset 0
static constexpr ::ConstString  k_RootStyleClassName{u"unity-ui-document__root"};

/// @brief Field k_VisualElementNameSuffix offset 0
static constexpr ::ConstString  k_VisualElementNameSuffix{u"-container"};

/// @brief Field k_DefaultSortingOrder offset 0
static constexpr int32_t  k_DefaultSortingOrder{0};

static int32_t __declspec(property(get=__get_s_CurrentUIDocumentCounter, put=__set_s_CurrentUIDocumentCounter))  s_CurrentUIDocumentCounter;

static void __set_s_CurrentUIDocumentCounter(int32_t value) ;

static int32_t __get_s_CurrentUIDocumentCounter() ;

 int32_t __declspec(property(get=__get_m_UIDocumentCreationIndex, put=__set_m_UIDocumentCreationIndex))  m_UIDocumentCreationIndex;

constexpr void __set_m_UIDocumentCreationIndex(int32_t value) ;

constexpr int32_t __get_m_UIDocumentCreationIndex() const;

 UnityEngine::UIElements::PanelSettings __declspec(property(get=__get_m_PanelSettings, put=__set_m_PanelSettings))  m_PanelSettings;

constexpr void __set_m_PanelSettings(UnityEngine::UIElements::PanelSettings value) ;

constexpr UnityEngine::UIElements::PanelSettings __get_m_PanelSettings() const;

 UnityEngine::UIElements::PanelSettings __declspec(property(get=__get_m_PreviousPanelSettings, put=__set_m_PreviousPanelSettings))  m_PreviousPanelSettings;

constexpr void __set_m_PreviousPanelSettings(UnityEngine::UIElements::PanelSettings value) ;

constexpr UnityEngine::UIElements::PanelSettings __get_m_PreviousPanelSettings() const;

 UnityEngine::UIElements::UIDocument __declspec(property(get=__get_m_ParentUI, put=__set_m_ParentUI))  m_ParentUI;

constexpr void __set_m_ParentUI(UnityEngine::UIElements::UIDocument value) ;

constexpr UnityEngine::UIElements::UIDocument __get_m_ParentUI() const;

 UnityEngine::UIElements::UIDocumentList __declspec(property(get=__get_m_ChildrenContent, put=__set_m_ChildrenContent))  m_ChildrenContent;

constexpr void __set_m_ChildrenContent(UnityEngine::UIElements::UIDocumentList value) ;

constexpr UnityEngine::UIElements::UIDocumentList __get_m_ChildrenContent() const;

 System::Collections::Generic::List_1<UnityEngine::UIElements::UIDocument> __declspec(property(get=__get_m_ChildrenContentCopy, put=__set_m_ChildrenContentCopy))  m_ChildrenContentCopy;

constexpr void __set_m_ChildrenContentCopy(System::Collections::Generic::List_1<UnityEngine::UIElements::UIDocument> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::UIDocument> __get_m_ChildrenContentCopy() const;

 UnityEngine::UIElements::VisualTreeAsset __declspec(property(get=__get_sourceAsset, put=__set_sourceAsset))  sourceAsset;

constexpr void __set_sourceAsset(UnityEngine::UIElements::VisualTreeAsset value) ;

constexpr UnityEngine::UIElements::VisualTreeAsset __get_sourceAsset() const;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_RootVisualElement, put=__set_m_RootVisualElement))  m_RootVisualElement;

constexpr void __set_m_RootVisualElement(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_m_RootVisualElement() const;

 int32_t __declspec(property(get=__get_m_FirstChildInsertIndex, put=__set_m_FirstChildInsertIndex))  m_FirstChildInsertIndex;

constexpr void __set_m_FirstChildInsertIndex(int32_t value) ;

constexpr int32_t __get_m_FirstChildInsertIndex() const;

 float_t __declspec(property(get=__get_m_SortingOrder, put=__set_m_SortingOrder))  m_SortingOrder;

constexpr void __set_m_SortingOrder(float_t value) ;

constexpr float_t __get_m_SortingOrder() const;


// Properties

 UnityEngine::UIElements::PanelSettings __declspec(property(get=get_panelSettings, put=set_panelSettings))  panelSettings;

 UnityEngine::UIElements::UIDocument __declspec(property(get=get_parentUI, put=set_parentUI))  parentUI;

 UnityEngine::UIElements::VisualTreeAsset __declspec(property(get=get_visualTreeAsset, put=set_visualTreeAsset))  visualTreeAsset;

 UnityEngine::UIElements::VisualElement __declspec(property(get=get_rootVisualElement))  rootVisualElement;

 int32_t __declspec(property(get=get_firstChildInserIndex))  firstChildInserIndex;

 float_t __declspec(property(get=get_sortingOrder, put=set_sortingOrder))  sortingOrder;


// Methods

/// @brief Method get_panelSettings addr 0x2c9e4e8 size 0x8 virtual false final false
 UnityEngine::UIElements::PanelSettings get_panelSettings() ;

/// @brief Method set_panelSettings addr 0x2c9e4f0 size 0x29c virtual false final false
 void set_panelSettings(UnityEngine::UIElements::PanelSettings value) ;

/// @brief Method get_parentUI addr 0x2c9e89c size 0x8 virtual false final false
 UnityEngine::UIElements::UIDocument get_parentUI() ;

/// @brief Method set_parentUI addr 0x2c9e8a4 size 0x8 virtual false final false
 void set_parentUI(UnityEngine::UIElements::UIDocument value) ;

/// @brief Method get_visualTreeAsset addr 0x2c9e8ac size 0x8 virtual false final false
 UnityEngine::UIElements::VisualTreeAsset get_visualTreeAsset() ;

/// @brief Method set_visualTreeAsset addr 0x2c9e8b4 size 0x8 virtual false final false
 void set_visualTreeAsset(UnityEngine::UIElements::VisualTreeAsset value) ;

/// @brief Method get_rootVisualElement addr 0x2c9e110 size 0x8 virtual false final false
 UnityEngine::UIElements::VisualElement get_rootVisualElement() ;

/// @brief Method get_firstChildInserIndex addr 0x2c9ecc0 size 0x8 virtual false final false
 int32_t get_firstChildInserIndex() ;

/// @brief Method get_sortingOrder addr 0x2c9ecc8 size 0x8 virtual false final false
 float_t get_sortingOrder() ;

/// @brief Method set_sortingOrder addr 0x2c9ecd0 size 0x18 virtual false final false
 void set_sortingOrder(float_t value) ;

/// @brief Method ApplySortingOrder addr 0x2c9ece8 size 0x4 virtual false final false
 void ApplySortingOrder() ;

// Ctor Parameters []
explicit UIDocument() ;

/// @brief Method .ctor addr 0x2c9edc0 size 0x70 virtual false final false
 void _ctor() ;

/// @brief Method Awake addr 0x2c9ee30 size 0x4 virtual false final false
 void Awake() ;

/// @brief Method OnEnable addr 0x2c9eec4 size 0xc0 virtual false final false
 void OnEnable() ;

/// @brief Method SetupFromHierarchy addr 0x2c9ee34 size 0x90 virtual false final false
 void SetupFromHierarchy() ;

/// @brief Method FindUIDocumentParent addr 0x2c9ef94 size 0xd0 virtual false final false
 UnityEngine::UIElements::UIDocument FindUIDocumentParent() ;

/// @brief Method Reset addr 0x2c9f064 size 0x104 virtual false final false
 void Reset() ;

/// @brief Method AddChildAndInsertContentToVisualTree addr 0x2c9f168 size 0x90 virtual false final false
 void AddChildAndInsertContentToVisualTree(UnityEngine::UIElements::UIDocument child) ;

/// @brief Method RemoveChild addr 0x2c9ef84 size 0x10 virtual false final false
 void RemoveChild(UnityEngine::UIElements::UIDocument child) ;

/// @brief Method RecreateUI addr 0x2c9e8bc size 0x404 virtual false final false
 void RecreateUI() ;

/// @brief Method SetupRootClassList addr 0x2c9f2c4 size 0x9c virtual false final false
 void SetupRootClassList() ;

/// @brief Method AddRootVisualElementToTree addr 0x2c9ecec size 0xd4 virtual false final false
 void AddRootVisualElementToTree() ;

/// @brief Method RemoveFromHierarchy addr 0x2c9f1f8 size 0xcc virtual false final false
 void RemoveFromHierarchy() ;

/// @brief Method OnDisable addr 0x2c9f360 size 0x20 virtual false final false
 void OnDisable() ;

/// @brief Method OnTransformChildrenChanged addr 0x2c9f380 size 0x210 virtual false final false
 void OnTransformChildrenChanged() ;

/// @brief Method OnTransformParentChanged addr 0x2c9f634 size 0x4 virtual false final false
 void OnTransformParentChanged() ;

/// @brief Method ReactToHierarchyChanged addr 0x2c9f590 size 0xa4 virtual false final false
 void ReactToHierarchyChanged() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::UIDocument);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIDocument, "UnityEngine.UIElements", "UIDocument");
