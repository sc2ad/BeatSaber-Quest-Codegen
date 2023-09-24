#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements::Experimental {
struct StyleValues;
}
namespace UnityEngine::UIElements::Experimental {
template<typename T>
class ValueAnimation_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::UIElements {
template<typename TEventType>
class EventCallback_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ReusableCollectionItem;
}
// Type: UnityEngine.UIElements::ReusableCollectionItem
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7472))
// CS Name: UnityEngine.UIElements.ReusableCollectionItem
class CORDL_TYPE ReusableCollectionItem : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~ReusableCollectionItem() = default;

// Ctor Parameters [CppParam { name: "", ty: "ReusableCollectionItem", modifiers: " const&", def_value: None }]
constexpr ReusableCollectionItem(ReusableCollectionItem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ReusableCollectionItem", modifiers: "&&", def_value: None }]
constexpr ReusableCollectionItem(ReusableCollectionItem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ReusableCollectionItem(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ReusableCollectionItem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ReusableCollectionItem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ReusableCollectionItem& operator=(ReusableCollectionItem&& o) noexcept = default;
  constexpr ReusableCollectionItem& operator=(ReusableCollectionItem const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get__bindableElement_k__BackingField, put=__set__bindableElement_k__BackingField))  _bindableElement_k__BackingField;

constexpr void __set__bindableElement_k__BackingField(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get__bindableElement_k__BackingField() const;

 UnityEngine::UIElements::Experimental::ValueAnimation_1<UnityEngine::UIElements::Experimental::StyleValues> __declspec(property(get=__get__animator_k__BackingField, put=__set__animator_k__BackingField))  _animator_k__BackingField;

constexpr void __set__animator_k__BackingField(UnityEngine::UIElements::Experimental::ValueAnimation_1<UnityEngine::UIElements::Experimental::StyleValues> value) ;

constexpr UnityEngine::UIElements::Experimental::ValueAnimation_1<UnityEngine::UIElements::Experimental::StyleValues> __get__animator_k__BackingField() const;

 int32_t __declspec(property(get=__get__index_k__BackingField, put=__set__index_k__BackingField))  _index_k__BackingField;

constexpr void __set__index_k__BackingField(int32_t value) ;

constexpr int32_t __get__index_k__BackingField() const;

 int32_t __declspec(property(get=__get__id_k__BackingField, put=__set__id_k__BackingField))  _id_k__BackingField;

constexpr void __set__id_k__BackingField(int32_t value) ;

constexpr int32_t __get__id_k__BackingField() const;

 System::Action_1<UnityEngine::UIElements::ReusableCollectionItem> __declspec(property(get=__get_onGeometryChanged, put=__set_onGeometryChanged))  onGeometryChanged;

constexpr void __set_onGeometryChanged(System::Action_1<UnityEngine::UIElements::ReusableCollectionItem> value) ;

constexpr System::Action_1<UnityEngine::UIElements::ReusableCollectionItem> __get_onGeometryChanged() const;

 UnityEngine::UIElements::EventCallback_1<UnityEngine::UIElements::GeometryChangedEvent> __declspec(property(get=__get_m_GeometryChangedEventCallback, put=__set_m_GeometryChangedEventCallback))  m_GeometryChangedEventCallback;

constexpr void __set_m_GeometryChangedEventCallback(UnityEngine::UIElements::EventCallback_1<UnityEngine::UIElements::GeometryChangedEvent> value) ;

constexpr UnityEngine::UIElements::EventCallback_1<UnityEngine::UIElements::GeometryChangedEvent> __get_m_GeometryChangedEventCallback() const;


// Properties

 UnityEngine::UIElements::VisualElement __declspec(property(get=get_rootElement))  rootElement;

 UnityEngine::UIElements::VisualElement __declspec(property(get=get_bindableElement, put=set_bindableElement))  bindableElement;

 UnityEngine::UIElements::Experimental::ValueAnimation_1<UnityEngine::UIElements::Experimental::StyleValues> __declspec(property(get=get_animator, put=set_animator))  animator;

 int32_t __declspec(property(get=get_index, put=set_index))  index;

 int32_t __declspec(property(get=get_id, put=set_id))  id;


// Methods

/// @brief Method get_rootElement addr 0x2d119cc size 0x8 virtual true final false
 UnityEngine::UIElements::VisualElement get_rootElement() ;

/// @brief Method get_bindableElement addr 0x2d119d4 size 0x8 virtual false final false
 UnityEngine::UIElements::VisualElement get_bindableElement() ;

/// @brief Method set_bindableElement addr 0x2d119dc size 0x8 virtual false final false
 void set_bindableElement(UnityEngine::UIElements::VisualElement value) ;

/// @brief Method get_animator addr 0x2d119e4 size 0x8 virtual false final false
 UnityEngine::UIElements::Experimental::ValueAnimation_1<UnityEngine::UIElements::Experimental::StyleValues> get_animator() ;

/// @brief Method set_animator addr 0x2d119ec size 0x8 virtual false final false
 void set_animator(UnityEngine::UIElements::Experimental::ValueAnimation_1<UnityEngine::UIElements::Experimental::StyleValues> value) ;

/// @brief Method get_index addr 0x2d119f4 size 0x8 virtual false final false
 int32_t get_index() ;

/// @brief Method set_index addr 0x2d119fc size 0x8 virtual false final false
 void set_index(int32_t value) ;

/// @brief Method get_id addr 0x2d11a04 size 0x8 virtual false final false
 int32_t get_id() ;

/// @brief Method set_id addr 0x2d11a0c size 0x8 virtual false final false
 void set_id(int32_t value) ;

/// @brief Method add_onGeometryChanged addr 0x2d11a14 size 0xb0 virtual false final false
 void add_onGeometryChanged(System::Action_1<UnityEngine::UIElements::ReusableCollectionItem> value) ;

/// @brief Method remove_onGeometryChanged addr 0x2d11ac4 size 0xb0 virtual false final false
 void remove_onGeometryChanged(System::Action_1<UnityEngine::UIElements::ReusableCollectionItem> value) ;

static UnityEngine::UIElements::ReusableCollectionItem New_ctor() ;

/// @brief Method .ctor addr 0x2d11914 size 0x90 virtual false final false
 void _ctor() ;

/// @brief Method Init addr 0x2d113c8 size 0x8 virtual true final false
 void Init(UnityEngine::UIElements::VisualElement item) ;

/// @brief Method PreAttachElement addr 0x2d116d0 size 0xbc virtual true final false
 void PreAttachElement() ;

/// @brief Method DetachElement addr 0x2d11818 size 0xf8 virtual true final false
 void DetachElement() ;

/// @brief Method SetSelected addr 0x2d11b74 size 0xf0 virtual true final false
 void SetSelected(bool selected) ;

/// @brief Method OnGeometryChanged addr 0x2d11c64 size 0x20 virtual false final false
 void OnGeometryChanged(UnityEngine::UIElements::GeometryChangedEvent evt) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::ReusableCollectionItem);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::ReusableCollectionItem, "UnityEngine.UIElements", "ReusableCollectionItem");
