#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__TextElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine::UIElements {
class UxmlChildElementDescription;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerable;
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
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__PopupWindow__UxmlFactory;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__PopupWindow__UxmlTraits;
}
namespace GlobalNamespace {
class UnityEngine__UIElements__PopupWindow__UxmlTraits___get_uxmlChildElementsDescription_d__1;
}
// Forward declare root types
namespace GlobalNamespace {
class UnityEngine__UIElements__PopupWindow__UxmlTraits___get_uxmlChildElementsDescription_d__1;
}
namespace UnityEngine::UIElements {
class PopupWindow;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__PopupWindow__UxmlFactory;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__PopupWindow__UxmlTraits;
}
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6899))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7122))
// CS Name: UnityEngine.UIElements.PopupWindow::UxmlTraits
class CORDL_TYPE UnityEngine__UIElements__PopupWindow__UxmlTraits : public UnityEngine::UIElements::UnityEngine__UIElements__TextElement__UxmlTraits {
public:
// Declarations
using _get_uxmlChildElementsDescription_d__1 = GlobalNamespace::UnityEngine__UIElements__PopupWindow__UxmlTraits___get_uxmlChildElementsDescription_d__1;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~UnityEngine__UIElements__PopupWindow__UxmlTraits() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__PopupWindow__UxmlTraits", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__PopupWindow__UxmlTraits(UnityEngine__UIElements__PopupWindow__UxmlTraits const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__PopupWindow__UxmlTraits", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__PopupWindow__UxmlTraits(UnityEngine__UIElements__PopupWindow__UxmlTraits&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__PopupWindow__UxmlTraits(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__TextElement__UxmlTraits(ptr) {
}


  constexpr UnityEngine__UIElements__PopupWindow__UxmlTraits& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__PopupWindow__UxmlTraits& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__PopupWindow__UxmlTraits& operator=(UnityEngine__UIElements__PopupWindow__UxmlTraits&& o) noexcept = default;
  constexpr UnityEngine__UIElements__PopupWindow__UxmlTraits& operator=(UnityEngine__UIElements__PopupWindow__UxmlTraits const& o) noexcept = default;
                


// Properties

 System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UxmlChildElementDescription> __declspec(property(get=get_uxmlChildElementsDescription))  uxmlChildElementsDescription;


// Methods

/// @brief Method get_uxmlChildElementsDescription addr 0x2ca2dd8 size 0x64 virtual true final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UxmlChildElementDescription> get_uxmlChildElementsDescription() ;

static UnityEngine::UIElements::UnityEngine__UIElements__PopupWindow__UxmlTraits New_ctor() ;

/// @brief Method .ctor addr 0x2ca2e80 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::PopupWindow
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6900))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7123))
// CS Name: UnityEngine.UIElements.PopupWindow
class CORDL_TYPE PopupWindow : public UnityEngine::UIElements::TextElement {
public:
// Declarations
using UxmlTraits = UnityEngine::UIElements::UnityEngine__UIElements__PopupWindow__UxmlTraits;

using UxmlFactory = UnityEngine::UIElements::UnityEngine__UIElements__PopupWindow__UxmlFactory;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x480};

virtual ~PopupWindow() = default;

// Ctor Parameters [CppParam { name: "", ty: "PopupWindow", modifiers: " const&", def_value: None }]
constexpr PopupWindow(PopupWindow const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PopupWindow", modifiers: "&&", def_value: None }]
constexpr PopupWindow(PopupWindow&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PopupWindow(void* ptr) noexcept : UnityEngine::UIElements::TextElement(ptr) {
}


  constexpr PopupWindow& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PopupWindow& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PopupWindow& operator=(PopupWindow&& o) noexcept = default;
  constexpr PopupWindow& operator=(PopupWindow const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_ContentContainer, put=__set_m_ContentContainer))  m_ContentContainer;

constexpr void __set_m_ContentContainer(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_m_ContentContainer() const;

static ::StringW __declspec(property(get=__get_ussClassName, put=__set_ussClassName))  ussClassName;

static void __set_ussClassName(::StringW value) ;

static ::StringW __get_ussClassName() ;

static ::StringW __declspec(property(get=__get_contentUssClassName, put=__set_contentUssClassName))  contentUssClassName;

static void __set_contentUssClassName(::StringW value) ;

static ::StringW __get_contentUssClassName() ;


// Properties

 UnityEngine::UIElements::VisualElement __declspec(property(get=get_contentContainer))  contentContainer;


// Methods

static UnityEngine::UIElements::PopupWindow New_ctor() ;

/// @brief Method .ctor addr 0x2ca2c04 size 0x12c virtual false final false
 void _ctor() ;

/// @brief Method get_contentContainer addr 0x2ca2d30 size 0x8 virtual true final false
 UnityEngine::UIElements::VisualElement get_contentContainer() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::UxmlFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7123)), TypeDefinitionIndex(TypeDefinitionIndex(7089)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7089), inst: 5096 }), TypeDefinitionIndex(TypeDefinitionIndex(7122))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7120))
// CS Name: UnityEngine.UIElements.PopupWindow::UxmlFactory
class CORDL_TYPE UnityEngine__UIElements__PopupWindow__UxmlFactory : public UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::PopupWindow,UnityEngine::UIElements::UnityEngine__UIElements__PopupWindow__UxmlTraits> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnityEngine__UIElements__PopupWindow__UxmlFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__PopupWindow__UxmlFactory", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__PopupWindow__UxmlFactory(UnityEngine__UIElements__PopupWindow__UxmlFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__PopupWindow__UxmlFactory", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__PopupWindow__UxmlFactory(UnityEngine__UIElements__PopupWindow__UxmlFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__PopupWindow__UxmlFactory(void* ptr) noexcept : UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::PopupWindow,UnityEngine::UIElements::UnityEngine__UIElements__PopupWindow__UxmlTraits>(ptr) {
}


  constexpr UnityEngine__UIElements__PopupWindow__UxmlFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__PopupWindow__UxmlFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__PopupWindow__UxmlFactory& operator=(UnityEngine__UIElements__PopupWindow__UxmlFactory&& o) noexcept = default;
  constexpr UnityEngine__UIElements__PopupWindow__UxmlFactory& operator=(UnityEngine__UIElements__PopupWindow__UxmlFactory const& o) noexcept = default;
                


// Methods

static UnityEngine::UIElements::UnityEngine__UIElements__PopupWindow__UxmlFactory New_ctor() ;

/// @brief Method .ctor addr 0x2c9a454 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::<get_uxmlChildElementsDescription>d__1
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7121))
// CS Name: UnityEngine.UIElements.PopupWindow::UxmlTraits::<get_uxmlChildElementsDescription>d__1
class CORDL_TYPE UnityEngine__UIElements__PopupWindow__UxmlTraits___get_uxmlChildElementsDescription_d__1 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~UnityEngine__UIElements__PopupWindow__UxmlTraits___get_uxmlChildElementsDescription_d__1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__PopupWindow__UxmlTraits___get_uxmlChildElementsDescription_d__1", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__PopupWindow__UxmlTraits___get_uxmlChildElementsDescription_d__1(UnityEngine__UIElements__PopupWindow__UxmlTraits___get_uxmlChildElementsDescription_d__1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__PopupWindow__UxmlTraits___get_uxmlChildElementsDescription_d__1", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__PopupWindow__UxmlTraits___get_uxmlChildElementsDescription_d__1(UnityEngine__UIElements__PopupWindow__UxmlTraits___get_uxmlChildElementsDescription_d__1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__PopupWindow__UxmlTraits___get_uxmlChildElementsDescription_d__1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__PopupWindow__UxmlTraits___get_uxmlChildElementsDescription_d__1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__PopupWindow__UxmlTraits___get_uxmlChildElementsDescription_d__1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__PopupWindow__UxmlTraits___get_uxmlChildElementsDescription_d__1& operator=(UnityEngine__UIElements__PopupWindow__UxmlTraits___get_uxmlChildElementsDescription_d__1&& o) noexcept = default;
  constexpr UnityEngine__UIElements__PopupWindow__UxmlTraits___get_uxmlChildElementsDescription_d__1& operator=(UnityEngine__UIElements__PopupWindow__UxmlTraits___get_uxmlChildElementsDescription_d__1 const& o) noexcept = default;
                


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

 UnityEngine::UIElements::UnityEngine__UIElements__PopupWindow__UxmlTraits __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(UnityEngine::UIElements::UnityEngine__UIElements__PopupWindow__UxmlTraits value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__PopupWindow__UxmlTraits __get___4__this() const;


// Properties

 UnityEngine::UIElements::UxmlChildElementDescription __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__get_Current))  System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static GlobalNamespace::UnityEngine__UIElements__PopupWindow__UxmlTraits___get_uxmlChildElementsDescription_d__1 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2ca2e3c size 0x44 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2ca2e88 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2ca2e8c size 0xe0 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.UIElements.UxmlChildElementDescription>.get_Current addr 0x2ca2f6c size 0x8 virtual true final true
 UnityEngine::UIElements::UxmlChildElementDescription System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2ca2f74 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2ca2fb4 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.UIElements.UxmlChildElementDescription>.GetEnumerator addr 0x2ca2fbc size 0xa0 virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UxmlChildElementDescription> System_Collections_Generic_IEnumerable_UnityEngine_UIElements_UxmlChildElementDescription__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2ca305c size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::UnityEngine__UIElements__PopupWindow__UxmlTraits___get_uxmlChildElementsDescription_d__1);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityEngine__UIElements__PopupWindow__UxmlTraits___get_uxmlChildElementsDescription_d__1, "UnityEngine.UIElements", "PopupWindow/UxmlTraits/<get_uxmlChildElementsDescription>d__1");
NEED_NO_BOX(UnityEngine::UIElements::PopupWindow);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::PopupWindow, "UnityEngine.UIElements", "PopupWindow");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__PopupWindow__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__PopupWindow__UxmlFactory, "UnityEngine.UIElements", "PopupWindow/UxmlFactory");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__PopupWindow__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__PopupWindow__UxmlTraits, "UnityEngine.UIElements", "PopupWindow/UxmlTraits");
