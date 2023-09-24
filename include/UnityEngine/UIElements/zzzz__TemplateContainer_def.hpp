#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__BindableElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::UIElements {
class UxmlChildElementDescription;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__TemplateContainer__UxmlFactory;
}
namespace UnityEngine::UIElements {
class VisualTreeAsset;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__TemplateContainer__UxmlTraits;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace GlobalNamespace {
class UnityEngine__UIElements__TemplateContainer__UxmlTraits___get_uxmlChildElementsDescription_d__3;
}
// Forward declare root types
namespace GlobalNamespace {
class UnityEngine__UIElements__TemplateContainer__UxmlTraits___get_uxmlChildElementsDescription_d__3;
}
namespace UnityEngine::UIElements {
class TemplateContainer;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__TemplateContainer__UxmlFactory;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__TemplateContainer__UxmlTraits;
}
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6885))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6863))
// CS Name: UnityEngine.UIElements.TemplateContainer::UxmlTraits
class CORDL_TYPE UnityEngine__UIElements__TemplateContainer__UxmlTraits : public UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlTraits {
public:
// Declarations
using _get_uxmlChildElementsDescription_d__3 = GlobalNamespace::UnityEngine__UIElements__TemplateContainer__UxmlTraits___get_uxmlChildElementsDescription_d__3;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__UIElements__TemplateContainer__UxmlTraits() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__TemplateContainer__UxmlTraits", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__TemplateContainer__UxmlTraits(UnityEngine__UIElements__TemplateContainer__UxmlTraits const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__TemplateContainer__UxmlTraits", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__TemplateContainer__UxmlTraits(UnityEngine__UIElements__TemplateContainer__UxmlTraits&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__TemplateContainer__UxmlTraits(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlTraits(ptr) {
}


  constexpr UnityEngine__UIElements__TemplateContainer__UxmlTraits& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__TemplateContainer__UxmlTraits& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__TemplateContainer__UxmlTraits& operator=(UnityEngine__UIElements__TemplateContainer__UxmlTraits&& o) noexcept = default;
  constexpr UnityEngine__UIElements__TemplateContainer__UxmlTraits& operator=(UnityEngine__UIElements__TemplateContainer__UxmlTraits const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::UxmlStringAttributeDescription __declspec(property(get=__get_m_Template, put=__set_m_Template))  m_Template;

constexpr void __set_m_Template(UnityEngine::UIElements::UxmlStringAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlStringAttributeDescription __get_m_Template() const;


// Properties

 System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UxmlChildElementDescription> __declspec(property(get=get_uxmlChildElementsDescription))  uxmlChildElementsDescription;


// Methods

/// @brief Method get_uxmlChildElementsDescription addr 0x2c4030c size 0x64 virtual true final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UxmlChildElementDescription> get_uxmlChildElementsDescription() ;

/// @brief Method Init addr 0x2c403b4 size 0x39c virtual true final false
 void Init(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc) ;

static UnityEngine::UIElements::UnityEngine__UIElements__TemplateContainer__UxmlTraits New_ctor() ;

/// @brief Method .ctor addr 0x2c40884 size 0x88 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::TemplateContainer
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6886))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6864))
// CS Name: UnityEngine.UIElements.TemplateContainer
class CORDL_TYPE TemplateContainer : public UnityEngine::UIElements::BindableElement {
public:
// Declarations
using UxmlTraits = UnityEngine::UIElements::UnityEngine__UIElements__TemplateContainer__UxmlTraits;

using UxmlFactory = UnityEngine::UIElements::UnityEngine__UIElements__TemplateContainer__UxmlFactory;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x3d8};

virtual ~TemplateContainer() = default;

// Ctor Parameters [CppParam { name: "", ty: "TemplateContainer", modifiers: " const&", def_value: None }]
constexpr TemplateContainer(TemplateContainer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TemplateContainer", modifiers: "&&", def_value: None }]
constexpr TemplateContainer(TemplateContainer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TemplateContainer(void* ptr) noexcept : UnityEngine::UIElements::BindableElement(ptr) {
}


  constexpr TemplateContainer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TemplateContainer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TemplateContainer& operator=(TemplateContainer&& o) noexcept = default;
  constexpr TemplateContainer& operator=(TemplateContainer const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__templateId_k__BackingField, put=__set__templateId_k__BackingField))  _templateId_k__BackingField;

constexpr void __set__templateId_k__BackingField(::StringW value) ;

constexpr ::StringW __get__templateId_k__BackingField() const;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_ContentContainer, put=__set_m_ContentContainer))  m_ContentContainer;

constexpr void __set_m_ContentContainer(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_m_ContentContainer() const;

 UnityEngine::UIElements::VisualTreeAsset __declspec(property(get=__get_m_TemplateSource, put=__set_m_TemplateSource))  m_TemplateSource;

constexpr void __set_m_TemplateSource(UnityEngine::UIElements::VisualTreeAsset value) ;

constexpr UnityEngine::UIElements::VisualTreeAsset __get_m_TemplateSource() const;


// Properties

 ::StringW __declspec(property(get=get_templateId, put=set_templateId))  templateId;

 UnityEngine::UIElements::VisualTreeAsset __declspec(property(put=set_templateSource))  templateSource;

 UnityEngine::UIElements::VisualElement __declspec(property(get=get_contentContainer))  contentContainer;


// Methods

/// @brief Method get_templateId addr 0x2c4014c size 0x8 virtual false final false
 ::StringW get_templateId() ;

/// @brief Method set_templateId addr 0x2c40154 size 0x8 virtual false final false
 void set_templateId(::StringW value) ;

/// @brief Method set_templateSource addr 0x2c4015c size 0x8 virtual false final false
 void set_templateSource(UnityEngine::UIElements::VisualTreeAsset value) ;

static UnityEngine::UIElements::TemplateContainer New_ctor() ;

/// @brief Method .ctor addr 0x2c40164 size 0x1c virtual false final false
 void _ctor() ;

static UnityEngine::UIElements::TemplateContainer New_ctor(::StringW templateId) ;

/// @brief Method .ctor addr 0x2c40180 size 0x28 virtual false final false
 void _ctor(::StringW templateId) ;

/// @brief Method get_contentContainer addr 0x2c40200 size 0x8 virtual true final false
 UnityEngine::UIElements::VisualElement get_contentContainer() ;

/// @brief Method SetContentContainer addr 0x2c40208 size 0x8 virtual false final false
 void SetContentContainer(UnityEngine::UIElements::VisualElement content) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::UxmlFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7089), inst: 5106 }), TypeDefinitionIndex(TypeDefinitionIndex(6864)), TypeDefinitionIndex(TypeDefinitionIndex(6863)), TypeDefinitionIndex(TypeDefinitionIndex(7089))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6861))
// CS Name: UnityEngine.UIElements.TemplateContainer::UxmlFactory
class CORDL_TYPE UnityEngine__UIElements__TemplateContainer__UxmlFactory : public UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::TemplateContainer,UnityEngine::UIElements::UnityEngine__UIElements__TemplateContainer__UxmlTraits> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnityEngine__UIElements__TemplateContainer__UxmlFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__TemplateContainer__UxmlFactory", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__TemplateContainer__UxmlFactory(UnityEngine__UIElements__TemplateContainer__UxmlFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__TemplateContainer__UxmlFactory", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__TemplateContainer__UxmlFactory(UnityEngine__UIElements__TemplateContainer__UxmlFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__TemplateContainer__UxmlFactory(void* ptr) noexcept : UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::TemplateContainer,UnityEngine::UIElements::UnityEngine__UIElements__TemplateContainer__UxmlTraits>(ptr) {
}


  constexpr UnityEngine__UIElements__TemplateContainer__UxmlFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__TemplateContainer__UxmlFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__TemplateContainer__UxmlFactory& operator=(UnityEngine__UIElements__TemplateContainer__UxmlFactory&& o) noexcept = default;
  constexpr UnityEngine__UIElements__TemplateContainer__UxmlFactory& operator=(UnityEngine__UIElements__TemplateContainer__UxmlFactory const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(get=get_uxmlName))  uxmlName;

 ::StringW __declspec(property(get=get_uxmlQualifiedName))  uxmlQualifiedName;


// Methods

/// @brief Method get_uxmlName addr 0x2c40210 size 0x40 virtual true final false
 ::StringW get_uxmlName() ;

/// @brief Method get_uxmlQualifiedName addr 0x2c40250 size 0x74 virtual true final false
 ::StringW get_uxmlQualifiedName() ;

static UnityEngine::UIElements::UnityEngine__UIElements__TemplateContainer__UxmlFactory New_ctor() ;

/// @brief Method .ctor addr 0x2c402c4 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::<get_uxmlChildElementsDescription>d__3
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6862))
// CS Name: UnityEngine.UIElements.TemplateContainer::UxmlTraits::<get_uxmlChildElementsDescription>d__3
class CORDL_TYPE UnityEngine__UIElements__TemplateContainer__UxmlTraits___get_uxmlChildElementsDescription_d__3 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~UnityEngine__UIElements__TemplateContainer__UxmlTraits___get_uxmlChildElementsDescription_d__3() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__TemplateContainer__UxmlTraits___get_uxmlChildElementsDescription_d__3", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__TemplateContainer__UxmlTraits___get_uxmlChildElementsDescription_d__3(UnityEngine__UIElements__TemplateContainer__UxmlTraits___get_uxmlChildElementsDescription_d__3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__TemplateContainer__UxmlTraits___get_uxmlChildElementsDescription_d__3", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__TemplateContainer__UxmlTraits___get_uxmlChildElementsDescription_d__3(UnityEngine__UIElements__TemplateContainer__UxmlTraits___get_uxmlChildElementsDescription_d__3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__TemplateContainer__UxmlTraits___get_uxmlChildElementsDescription_d__3(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__TemplateContainer__UxmlTraits___get_uxmlChildElementsDescription_d__3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__TemplateContainer__UxmlTraits___get_uxmlChildElementsDescription_d__3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__TemplateContainer__UxmlTraits___get_uxmlChildElementsDescription_d__3& operator=(UnityEngine__UIElements__TemplateContainer__UxmlTraits___get_uxmlChildElementsDescription_d__3&& o) noexcept = default;
  constexpr UnityEngine__UIElements__TemplateContainer__UxmlTraits___get_uxmlChildElementsDescription_d__3& operator=(UnityEngine__UIElements__TemplateContainer__UxmlTraits___get_uxmlChildElementsDescription_d__3 const& o) noexcept = default;
                


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

 UnityEngine::UIElements::UnityEngine__UIElements__TemplateContainer__UxmlTraits __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(UnityEngine::UIElements::UnityEngine__UIElements__TemplateContainer__UxmlTraits value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__TemplateContainer__UxmlTraits __get___4__this() const;


// Properties

 UnityEngine::UIElements::UxmlChildElementDescription __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__get_Current))  System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static GlobalNamespace::UnityEngine__UIElements__TemplateContainer__UxmlTraits___get_uxmlChildElementsDescription_d__3 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2c40370 size 0x44 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2c40994 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2c40998 size 0x18 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.UIElements.UxmlChildElementDescription>.get_Current addr 0x2c409b0 size 0x8 virtual true final true
 UnityEngine::UIElements::UxmlChildElementDescription System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2c409b8 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2c409f8 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.UIElements.UxmlChildElementDescription>.GetEnumerator addr 0x2c40a00 size 0xa0 virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UxmlChildElementDescription> System_Collections_Generic_IEnumerable_UnityEngine_UIElements_UxmlChildElementDescription__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2c40aa0 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::UnityEngine__UIElements__TemplateContainer__UxmlTraits___get_uxmlChildElementsDescription_d__3);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityEngine__UIElements__TemplateContainer__UxmlTraits___get_uxmlChildElementsDescription_d__3, "UnityEngine.UIElements", "TemplateContainer/UxmlTraits/<get_uxmlChildElementsDescription>d__3");
NEED_NO_BOX(UnityEngine::UIElements::TemplateContainer);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::TemplateContainer, "UnityEngine.UIElements", "TemplateContainer");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__TemplateContainer__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__TemplateContainer__UxmlFactory, "UnityEngine.UIElements", "TemplateContainer/UxmlFactory");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__TemplateContainer__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__TemplateContainer__UxmlTraits, "UnityEngine.UIElements", "TemplateContainer/UxmlTraits");
