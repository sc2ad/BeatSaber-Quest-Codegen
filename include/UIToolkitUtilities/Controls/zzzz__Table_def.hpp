#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace UnityEngine::UIElements {
class UxmlChildElementDescription;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
class ScrollView;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace UnityEngine::UIElements {
class UxmlBoolAttributeDescription;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
struct ScrollerVisibility;
}
namespace UnityEngine::UIElements {
template<typename T>
class UxmlEnumAttributeDescription_1;
}
namespace UnityEngine::UIElements {
class UxmlIntAttributeDescription;
}
// Forward declare root types
namespace GlobalNamespace {
class UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5;
}
namespace UIToolkitUtilities::Controls {
class Table;
}
namespace UIToolkitUtilities::Controls {
class UIToolkitUtilities__Controls__Table__RuntimeTableColumn;
}
namespace UIToolkitUtilities::Controls {
class UIToolkitUtilities__Controls__Table__TableColumn;
}
namespace UIToolkitUtilities::Controls {
class UIToolkitUtilities__Controls__Table__UxmlFactory;
}
namespace UIToolkitUtilities::Controls {
class UIToolkitUtilities__Controls__Table__UxmlTraits;
}
// Type: ::TableColumn
namespace UIToolkitUtilities::Controls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15942))
// CS Name: UIToolkitUtilities.Controls.Table::TableColumn
class CORDL_TYPE UIToolkitUtilities__Controls__Table__TableColumn : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~UIToolkitUtilities__Controls__Table__TableColumn() = default;

// Ctor Parameters [CppParam { name: "", ty: "UIToolkitUtilities__Controls__Table__TableColumn", modifiers: " const&", def_value: None }]
constexpr UIToolkitUtilities__Controls__Table__TableColumn(UIToolkitUtilities__Controls__Table__TableColumn const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UIToolkitUtilities__Controls__Table__TableColumn", modifiers: "&&", def_value: None }]
constexpr UIToolkitUtilities__Controls__Table__TableColumn(UIToolkitUtilities__Controls__Table__TableColumn&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UIToolkitUtilities__Controls__Table__TableColumn(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UIToolkitUtilities__Controls__Table__TableColumn& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UIToolkitUtilities__Controls__Table__TableColumn& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UIToolkitUtilities__Controls__Table__TableColumn& operator=(UIToolkitUtilities__Controls__Table__TableColumn&& o) noexcept = default;
  constexpr UIToolkitUtilities__Controls__Table__TableColumn& operator=(UIToolkitUtilities__Controls__Table__TableColumn const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 ::StringW __declspec(property(get=__get_headerTooltip, put=__set_headerTooltip))  headerTooltip;

constexpr void __set_headerTooltip(::StringW value) ;

constexpr ::StringW __get_headerTooltip() const;

 ::bs_hook::EnumTypeWrapper __declspec(property(get=__get_cellType, put=__set_cellType))  cellType;

constexpr void __set_cellType(::bs_hook::EnumTypeWrapper value) ;

constexpr ::bs_hook::EnumTypeWrapper __get_cellType() const;

 bool __declspec(property(get=__get_initialVisibility, put=__set_initialVisibility))  initialVisibility;

constexpr void __set_initialVisibility(bool value) ;

constexpr bool __get_initialVisibility() const;

 int32_t __declspec(property(get=__get_minWidth, put=__set_minWidth))  minWidth;

constexpr void __set_minWidth(int32_t value) ;

constexpr int32_t __get_minWidth() const;

 int32_t __declspec(property(get=__get_maxWidth, put=__set_maxWidth))  maxWidth;

constexpr void __set_maxWidth(int32_t value) ;

constexpr int32_t __get_maxWidth() const;


// Methods

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cellType", ty: "::bs_hook::EnumTypeWrapper", modifiers: "", def_value: None }]
explicit UIToolkitUtilities__Controls__Table__TableColumn(::StringW name, ::bs_hook::EnumTypeWrapper cellType) ;

/// @brief Method .ctor addr 0x287c7fc size 0x40 virtual false final false
 void _ctor(::StringW name, ::bs_hook::EnumTypeWrapper cellType) ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "headerTooltip", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cellType", ty: "::bs_hook::EnumTypeWrapper", modifiers: "", def_value: None }, CppParam { name: "visible", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "minWidth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxWidth", ty: "int32_t", modifiers: "", def_value: None }]
explicit UIToolkitUtilities__Controls__Table__TableColumn(::StringW name, ::StringW headerTooltip, ::bs_hook::EnumTypeWrapper cellType, bool visible, int32_t minWidth, int32_t maxWidth) ;

/// @brief Method .ctor addr 0x287c83c size 0x68 virtual false final false
 void _ctor(::StringW name, ::StringW headerTooltip, ::bs_hook::EnumTypeWrapper cellType, bool visible, int32_t minWidth, int32_t maxWidth) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UIToolkitUtilities::Controls
// Type: ::RuntimeTableColumn
namespace UIToolkitUtilities::Controls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15943))
// CS Name: UIToolkitUtilities.Controls.Table::RuntimeTableColumn
class CORDL_TYPE UIToolkitUtilities__Controls__Table__RuntimeTableColumn : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UIToolkitUtilities__Controls__Table__RuntimeTableColumn() = default;

// Ctor Parameters [CppParam { name: "", ty: "UIToolkitUtilities__Controls__Table__RuntimeTableColumn", modifiers: " const&", def_value: None }]
constexpr UIToolkitUtilities__Controls__Table__RuntimeTableColumn(UIToolkitUtilities__Controls__Table__RuntimeTableColumn const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UIToolkitUtilities__Controls__Table__RuntimeTableColumn", modifiers: "&&", def_value: None }]
constexpr UIToolkitUtilities__Controls__Table__RuntimeTableColumn(UIToolkitUtilities__Controls__Table__RuntimeTableColumn&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UIToolkitUtilities__Controls__Table__RuntimeTableColumn(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UIToolkitUtilities__Controls__Table__RuntimeTableColumn& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UIToolkitUtilities__Controls__Table__RuntimeTableColumn& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UIToolkitUtilities__Controls__Table__RuntimeTableColumn& operator=(UIToolkitUtilities__Controls__Table__RuntimeTableColumn&& o) noexcept = default;
  constexpr UIToolkitUtilities__Controls__Table__RuntimeTableColumn& operator=(UIToolkitUtilities__Controls__Table__RuntimeTableColumn const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_visibleColumnIndex, put=__set_visibleColumnIndex))  visibleColumnIndex;

constexpr void __set_visibleColumnIndex(int32_t value) ;

constexpr int32_t __get_visibleColumnIndex() const;

 bool __declspec(property(get=__get_visible, put=__set_visible))  visible;

constexpr void __set_visible(bool value) ;

constexpr bool __get_visible() const;


// Methods

// Ctor Parameters []
explicit UIToolkitUtilities__Controls__Table__RuntimeTableColumn() ;

/// @brief Method .ctor addr 0x287be20 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UIToolkitUtilities::Controls
// Type: ::UxmlTraits
namespace UIToolkitUtilities::Controls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6821))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15946))
// CS Name: UIToolkitUtilities.Controls.Table::UxmlTraits
class CORDL_TYPE UIToolkitUtilities__Controls__Table__UxmlTraits : public UnityEngine::UIElements::UnityEngine__UIElements__VisualElement__UxmlTraits {
public:
// Declarations
using _get_uxmlChildElementsDescription_d__5 = GlobalNamespace::UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~UIToolkitUtilities__Controls__Table__UxmlTraits() = default;

// Ctor Parameters [CppParam { name: "", ty: "UIToolkitUtilities__Controls__Table__UxmlTraits", modifiers: " const&", def_value: None }]
constexpr UIToolkitUtilities__Controls__Table__UxmlTraits(UIToolkitUtilities__Controls__Table__UxmlTraits const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UIToolkitUtilities__Controls__Table__UxmlTraits", modifiers: "&&", def_value: None }]
constexpr UIToolkitUtilities__Controls__Table__UxmlTraits(UIToolkitUtilities__Controls__Table__UxmlTraits&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UIToolkitUtilities__Controls__Table__UxmlTraits(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__VisualElement__UxmlTraits(ptr) {
}


  constexpr UIToolkitUtilities__Controls__Table__UxmlTraits& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UIToolkitUtilities__Controls__Table__UxmlTraits& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UIToolkitUtilities__Controls__Table__UxmlTraits& operator=(UIToolkitUtilities__Controls__Table__UxmlTraits&& o) noexcept = default;
  constexpr UIToolkitUtilities__Controls__Table__UxmlTraits& operator=(UIToolkitUtilities__Controls__Table__UxmlTraits const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::UxmlBoolAttributeDescription __declspec(property(get=__get__showHeader, put=__set__showHeader))  _showHeader;

constexpr void __set__showHeader(UnityEngine::UIElements::UxmlBoolAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlBoolAttributeDescription __get__showHeader() const;

 UnityEngine::UIElements::UxmlBoolAttributeDescription __declspec(property(get=__get__showFooter, put=__set__showFooter))  _showFooter;

constexpr void __set__showFooter(UnityEngine::UIElements::UxmlBoolAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlBoolAttributeDescription __get__showFooter() const;

 UnityEngine::UIElements::UxmlIntAttributeDescription __declspec(property(get=__get__numRows, put=__set__numRows))  _numRows;

constexpr void __set__numRows(UnityEngine::UIElements::UxmlIntAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlIntAttributeDescription __get__numRows() const;

 UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::ScrollerVisibility> __declspec(property(get=__get__verticalScrollerVisibility, put=__set__verticalScrollerVisibility))  _verticalScrollerVisibility;

constexpr void __set__verticalScrollerVisibility(UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::ScrollerVisibility> value) ;

constexpr UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::ScrollerVisibility> __get__verticalScrollerVisibility() const;


// Properties

 System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UxmlChildElementDescription> __declspec(property(get=get_uxmlChildElementsDescription))  uxmlChildElementsDescription;


// Methods

/// @brief Method get_uxmlChildElementsDescription addr 0x287c8ec size 0x70 virtual true final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UxmlChildElementDescription> get_uxmlChildElementsDescription() ;

/// @brief Method Init addr 0x287c990 size 0x1a8 virtual true final false
 void Init(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc) ;

// Ctor Parameters []
explicit UIToolkitUtilities__Controls__Table__UxmlTraits() ;

/// @brief Method .ctor addr 0x287cb38 size 0x170 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UIToolkitUtilities::Controls
// Type: UIToolkitUtilities.Controls::Table
namespace UIToolkitUtilities::Controls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6828))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15947))
// CS Name: UIToolkitUtilities.Controls.Table
class CORDL_TYPE Table : public UnityEngine::UIElements::VisualElement {
public:
// Declarations
using UxmlTraits = UIToolkitUtilities::Controls::UIToolkitUtilities__Controls__Table__UxmlTraits;

using UxmlFactory = UIToolkitUtilities::Controls::UIToolkitUtilities__Controls__Table__UxmlFactory;

using RuntimeTableColumn = UIToolkitUtilities::Controls::UIToolkitUtilities__Controls__Table__RuntimeTableColumn;

using TableColumn = UIToolkitUtilities::Controls::UIToolkitUtilities__Controls__Table__TableColumn;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x400};

virtual ~Table() = default;

// Ctor Parameters [CppParam { name: "", ty: "Table", modifiers: " const&", def_value: None }]
constexpr Table(Table const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Table", modifiers: "&&", def_value: None }]
constexpr Table(Table&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Table(void* ptr) noexcept : UnityEngine::UIElements::VisualElement(ptr) {
}


  constexpr Table& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Table& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Table& operator=(Table&& o) noexcept = default;
  constexpr Table& operator=(Table const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__showHeader_k__BackingField, put=__set__showHeader_k__BackingField))  _showHeader_k__BackingField;

constexpr void __set__showHeader_k__BackingField(bool value) ;

constexpr bool __get__showHeader_k__BackingField() const;

 bool __declspec(property(get=__get__showFooter_k__BackingField, put=__set__showFooter_k__BackingField))  _showFooter_k__BackingField;

constexpr void __set__showFooter_k__BackingField(bool value) ;

constexpr bool __get__showFooter_k__BackingField() const;

 int32_t __declspec(property(get=__get__numRows_k__BackingField, put=__set__numRows_k__BackingField))  _numRows_k__BackingField;

constexpr void __set__numRows_k__BackingField(int32_t value) ;

constexpr int32_t __get__numRows_k__BackingField() const;

 System::Action_3<::bs_hook::EnumTypeWrapper,int32_t,UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_fillCellEvent, put=__set_fillCellEvent))  fillCellEvent;

constexpr void __set_fillCellEvent(System::Action_3<::bs_hook::EnumTypeWrapper,int32_t,UnityEngine::UIElements::VisualElement> value) ;

constexpr System::Action_3<::bs_hook::EnumTypeWrapper,int32_t,UnityEngine::UIElements::VisualElement> __get_fillCellEvent() const;

 System::Action_2<::bs_hook::EnumTypeWrapper,UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_fillFooterCellEvent, put=__set_fillFooterCellEvent))  fillFooterCellEvent;

constexpr void __set_fillFooterCellEvent(System::Action_2<::bs_hook::EnumTypeWrapper,UnityEngine::UIElements::VisualElement> value) ;

constexpr System::Action_2<::bs_hook::EnumTypeWrapper,UnityEngine::UIElements::VisualElement> __get_fillFooterCellEvent() const;

 System::Action_2<int32_t,UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_fillRowEvent, put=__set_fillRowEvent))  fillRowEvent;

constexpr void __set_fillRowEvent(System::Action_2<int32_t,UnityEngine::UIElements::VisualElement> value) ;

constexpr System::Action_2<int32_t,UnityEngine::UIElements::VisualElement> __get_fillRowEvent() const;

 bool __declspec(property(get=__get__initialized_k__BackingField, put=__set__initialized_k__BackingField))  _initialized_k__BackingField;

constexpr void __set__initialized_k__BackingField(bool value) ;

constexpr bool __get__initialized_k__BackingField() const;

 System::Collections::Generic::List_1<UIToolkitUtilities::Controls::UIToolkitUtilities__Controls__Table__TableColumn> __declspec(property(get=__get_columnSetup, put=__set_columnSetup))  columnSetup;

constexpr void __set_columnSetup(System::Collections::Generic::List_1<UIToolkitUtilities::Controls::UIToolkitUtilities__Controls__Table__TableColumn> value) ;

constexpr System::Collections::Generic::List_1<UIToolkitUtilities::Controls::UIToolkitUtilities__Controls__Table__TableColumn> __get_columnSetup() const;

 System::Collections::Generic::List_1<UIToolkitUtilities::Controls::UIToolkitUtilities__Controls__Table__RuntimeTableColumn> __declspec(property(get=__get_runtimeColumnData, put=__set_runtimeColumnData))  runtimeColumnData;

constexpr void __set_runtimeColumnData(System::Collections::Generic::List_1<UIToolkitUtilities::Controls::UIToolkitUtilities__Controls__Table__RuntimeTableColumn> value) ;

constexpr System::Collections::Generic::List_1<UIToolkitUtilities::Controls::UIToolkitUtilities__Controls__Table__RuntimeTableColumn> __get_runtimeColumnData() const;

/// @brief Field altRowAdditionalStyle offset 0
static constexpr ::ConstString  altRowAdditionalStyle{u"bg-uitoolkit__table__row-alt"};

/// @brief Field headerCellStyle offset 0
static constexpr ::ConstString  headerCellStyle{u"bg-uitoolkit__table__cell-header"};

 UnityEngine::UIElements::ScrollView __declspec(property(get=__get_scrollView, put=__set_scrollView))  scrollView;

constexpr void __set_scrollView(UnityEngine::UIElements::ScrollView value) ;

constexpr UnityEngine::UIElements::ScrollView __get_scrollView() const;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_scrollViewContentContainer, put=__set_scrollViewContentContainer))  scrollViewContentContainer;

constexpr void __set_scrollViewContentContainer(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_scrollViewContentContainer() const;

 bool __declspec(property(get=__get_newRowIsAltStyle, put=__set_newRowIsAltStyle))  newRowIsAltStyle;

constexpr void __set_newRowIsAltStyle(bool value) ;

constexpr bool __get_newRowIsAltStyle() const;


// Properties

 bool __declspec(property(get=get_showHeader, put=set_showHeader))  showHeader;

 bool __declspec(property(get=get_showFooter, put=set_showFooter))  showFooter;

 int32_t __declspec(property(get=get_numRows, put=set_numRows))  numRows;

 bool __declspec(property(get=get_initialized, put=set_initialized))  initialized;


// Methods

/// @brief Method get_showHeader addr 0x287ba08 size 0x8 virtual false final false
 bool get_showHeader() ;

/// @brief Method set_showHeader addr 0x287ba10 size 0xc virtual false final false
 void set_showHeader(bool value) ;

/// @brief Method get_showFooter addr 0x287ba1c size 0x8 virtual false final false
 bool get_showFooter() ;

/// @brief Method set_showFooter addr 0x287ba24 size 0xc virtual false final false
 void set_showFooter(bool value) ;

/// @brief Method get_numRows addr 0x287ba30 size 0x8 virtual false final false
 int32_t get_numRows() ;

/// @brief Method set_numRows addr 0x287ba38 size 0x8 virtual false final false
 void set_numRows(int32_t value) ;

/// @brief Method get_initialized addr 0x287ba40 size 0x8 virtual false final false
 bool get_initialized() ;

/// @brief Method set_initialized addr 0x287ba48 size 0xc virtual false final false
 void set_initialized(bool value) ;

// Ctor Parameters []
explicit Table() ;

/// @brief Method .ctor addr 0x287ba54 size 0x1e4 virtual false final false
 void _ctor() ;

/// @brief Method Initialize addr 0x287bc38 size 0x1e8 virtual false final false
 void Initialize(System::Collections::Generic::List_1<UIToolkitUtilities::Controls::UIToolkitUtilities__Controls__Table__TableColumn> columnSetup) ;

/// @brief Method BuildTable addr 0x287be28 size 0x80 virtual true final false
 void BuildTable() ;

/// @brief Method ClearTable addr 0x287c158 size 0x14 virtual false final false
 void ClearTable() ;

/// @brief Method CreateRowSkeleton addr 0x287c16c size 0x480 virtual false final false
 UnityEngine::UIElements::VisualElement CreateRowSkeleton() ;

/// @brief Method CreateHeaderRow addr 0x287c5ec size 0x210 virtual true final false
 UnityEngine::UIElements::VisualElement CreateHeaderRow() ;

/// @brief Method CreateRow addr 0x287bea8 size 0x17c virtual false final false
 UnityEngine::UIElements::VisualElement CreateRow(int32_t rowIndex) ;

/// @brief Method CreateFooterRow addr 0x287c024 size 0x134 virtual false final false
 UnityEngine::UIElements::VisualElement CreateFooterRow() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UIToolkitUtilities::Controls
// Type: ::UxmlFactory
namespace UIToolkitUtilities::Controls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15947)), TypeDefinitionIndex(TypeDefinitionIndex(7089)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7089), inst: 5105 }), TypeDefinitionIndex(TypeDefinitionIndex(15946))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15944))
// CS Name: UIToolkitUtilities.Controls.Table::UxmlFactory
class CORDL_TYPE UIToolkitUtilities__Controls__Table__UxmlFactory : public UnityEngine::UIElements::UxmlFactory_2<UIToolkitUtilities::Controls::Table,UIToolkitUtilities::Controls::UIToolkitUtilities__Controls__Table__UxmlTraits> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UIToolkitUtilities__Controls__Table__UxmlFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "UIToolkitUtilities__Controls__Table__UxmlFactory", modifiers: " const&", def_value: None }]
constexpr UIToolkitUtilities__Controls__Table__UxmlFactory(UIToolkitUtilities__Controls__Table__UxmlFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UIToolkitUtilities__Controls__Table__UxmlFactory", modifiers: "&&", def_value: None }]
constexpr UIToolkitUtilities__Controls__Table__UxmlFactory(UIToolkitUtilities__Controls__Table__UxmlFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UIToolkitUtilities__Controls__Table__UxmlFactory(void* ptr) noexcept : UnityEngine::UIElements::UxmlFactory_2<UIToolkitUtilities::Controls::Table,UIToolkitUtilities::Controls::UIToolkitUtilities__Controls__Table__UxmlTraits>(ptr) {
}


  constexpr UIToolkitUtilities__Controls__Table__UxmlFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UIToolkitUtilities__Controls__Table__UxmlFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UIToolkitUtilities__Controls__Table__UxmlFactory& operator=(UIToolkitUtilities__Controls__Table__UxmlFactory&& o) noexcept = default;
  constexpr UIToolkitUtilities__Controls__Table__UxmlFactory& operator=(UIToolkitUtilities__Controls__Table__UxmlFactory const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UIToolkitUtilities__Controls__Table__UxmlFactory() ;

/// @brief Method .ctor addr 0x287c8a4 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UIToolkitUtilities::Controls
// Type: ::<get_uxmlChildElementsDescription>d__5
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15945))
// CS Name: UIToolkitUtilities.Controls.Table::UxmlTraits::<get_uxmlChildElementsDescription>d__5
class CORDL_TYPE UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5 : public ::bs_hook::Il2CppWrapperType {
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
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5() = default;

// Ctor Parameters [CppParam { name: "", ty: "UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5", modifiers: " const&", def_value: None }]
constexpr UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5(UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5", modifiers: "&&", def_value: None }]
constexpr UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5(UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5& operator=(UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5&& o) noexcept = default;
  constexpr UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5& operator=(UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5 const& o) noexcept = default;
                


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


// Properties

 UnityEngine::UIElements::UxmlChildElementDescription __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__get_Current))  System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5(int32_t __1__state) ;

/// @brief Method .ctor addr 0x287c95c size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x287cca8 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x287ccac size 0x18 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.UIElements.UxmlChildElementDescription>.get_Current addr 0x287ccc4 size 0x8 virtual true final true
 UnityEngine::UIElements::UxmlChildElementDescription System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x287cccc size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x287cd0c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.UIElements.UxmlChildElementDescription>.GetEnumerator addr 0x287cd14 size 0x98 virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UxmlChildElementDescription> System_Collections_Generic_IEnumerable_UnityEngine_UIElements_UxmlChildElementDescription__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x287cdac size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5, "UIToolkitUtilities.Controls", "Table/UxmlTraits/<get_uxmlChildElementsDescription>d__5");
NEED_NO_BOX(UIToolkitUtilities::Controls::Table);
DEFINE_IL2CPP_ARG_TYPE(UIToolkitUtilities::Controls::Table, "UIToolkitUtilities.Controls", "Table");
NEED_NO_BOX(UIToolkitUtilities::Controls::UIToolkitUtilities__Controls__Table__RuntimeTableColumn);
DEFINE_IL2CPP_ARG_TYPE(UIToolkitUtilities::Controls::UIToolkitUtilities__Controls__Table__RuntimeTableColumn, "UIToolkitUtilities.Controls", "Table/RuntimeTableColumn");
NEED_NO_BOX(UIToolkitUtilities::Controls::UIToolkitUtilities__Controls__Table__TableColumn);
DEFINE_IL2CPP_ARG_TYPE(UIToolkitUtilities::Controls::UIToolkitUtilities__Controls__Table__TableColumn, "UIToolkitUtilities.Controls", "Table/TableColumn");
NEED_NO_BOX(UIToolkitUtilities::Controls::UIToolkitUtilities__Controls__Table__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(UIToolkitUtilities::Controls::UIToolkitUtilities__Controls__Table__UxmlFactory, "UIToolkitUtilities.Controls", "Table/UxmlFactory");
NEED_NO_BOX(UIToolkitUtilities::Controls::UIToolkitUtilities__Controls__Table__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(UIToolkitUtilities::Controls::UIToolkitUtilities__Controls__Table__UxmlTraits, "UIToolkitUtilities.Controls", "Table/UxmlTraits");
