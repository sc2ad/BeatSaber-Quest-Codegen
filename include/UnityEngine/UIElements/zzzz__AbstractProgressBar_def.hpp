#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__BindableElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace UnityEngine::UIElements {
class Label;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
template<typename T>
class INotifyValueChanged_1;
}
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__AbstractProgressBar__UxmlTraits;
}
namespace UnityEngine::UIElements {
class UxmlFloatAttributeDescription;
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
// Forward declare root types
namespace UnityEngine::UIElements {
class AbstractProgressBar;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__AbstractProgressBar__UxmlTraits;
}
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6885))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7214))
// CS Name: UnityEngine.UIElements.AbstractProgressBar::UxmlTraits
class CORDL_TYPE UnityEngine__UIElements__AbstractProgressBar__UxmlTraits : public UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlTraits {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~UnityEngine__UIElements__AbstractProgressBar__UxmlTraits() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__AbstractProgressBar__UxmlTraits", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__AbstractProgressBar__UxmlTraits(UnityEngine__UIElements__AbstractProgressBar__UxmlTraits const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__AbstractProgressBar__UxmlTraits", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__AbstractProgressBar__UxmlTraits(UnityEngine__UIElements__AbstractProgressBar__UxmlTraits&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__AbstractProgressBar__UxmlTraits(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlTraits(ptr) {
}


  constexpr UnityEngine__UIElements__AbstractProgressBar__UxmlTraits& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__AbstractProgressBar__UxmlTraits& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__AbstractProgressBar__UxmlTraits& operator=(UnityEngine__UIElements__AbstractProgressBar__UxmlTraits&& o) noexcept = default;
  constexpr UnityEngine__UIElements__AbstractProgressBar__UxmlTraits& operator=(UnityEngine__UIElements__AbstractProgressBar__UxmlTraits const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::UxmlFloatAttributeDescription __declspec(property(get=__get_m_LowValue, put=__set_m_LowValue))  m_LowValue;

constexpr void __set_m_LowValue(UnityEngine::UIElements::UxmlFloatAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlFloatAttributeDescription __get_m_LowValue() const;

 UnityEngine::UIElements::UxmlFloatAttributeDescription __declspec(property(get=__get_m_HighValue, put=__set_m_HighValue))  m_HighValue;

constexpr void __set_m_HighValue(UnityEngine::UIElements::UxmlFloatAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlFloatAttributeDescription __get_m_HighValue() const;

 UnityEngine::UIElements::UxmlFloatAttributeDescription __declspec(property(get=__get_m_Value, put=__set_m_Value))  m_Value;

constexpr void __set_m_Value(UnityEngine::UIElements::UxmlFloatAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlFloatAttributeDescription __get_m_Value() const;

 UnityEngine::UIElements::UxmlStringAttributeDescription __declspec(property(get=__get_m_Title, put=__set_m_Title))  m_Title;

constexpr void __set_m_Title(UnityEngine::UIElements::UxmlStringAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlStringAttributeDescription __get_m_Title() const;


// Methods

/// @brief Method Init addr 0x2cc1f34 size 0x1e4 virtual true final false
 void Init(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc) ;

static UnityEngine::UIElements::UnityEngine__UIElements__AbstractProgressBar__UxmlTraits New_ctor() ;

/// @brief Method .ctor addr 0x2cc2118 size 0x164 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::AbstractProgressBar
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6886))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7215))
// CS Name: UnityEngine.UIElements.AbstractProgressBar
class CORDL_TYPE AbstractProgressBar : public UnityEngine::UIElements::BindableElement {
public:
// Declarations
using UxmlTraits = UnityEngine::UIElements::UnityEngine__UIElements__AbstractProgressBar__UxmlTraits;

/// @brief Convert operator to UnityEngine::UIElements::INotifyValueChanged_1<float_t>
constexpr operator  UnityEngine::UIElements::INotifyValueChanged_1<float_t>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x3e8};

virtual ~AbstractProgressBar() = default;

// Ctor Parameters [CppParam { name: "", ty: "AbstractProgressBar", modifiers: " const&", def_value: None }]
constexpr AbstractProgressBar(AbstractProgressBar const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AbstractProgressBar", modifiers: "&&", def_value: None }]
constexpr AbstractProgressBar(AbstractProgressBar&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AbstractProgressBar(void* ptr) noexcept : UnityEngine::UIElements::BindableElement(ptr) {
}


  constexpr AbstractProgressBar& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AbstractProgressBar& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AbstractProgressBar& operator=(AbstractProgressBar&& o) noexcept = default;
  constexpr AbstractProgressBar& operator=(AbstractProgressBar const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_ussClassName, put=__set_ussClassName))  ussClassName;

static void __set_ussClassName(::StringW value) ;

static ::StringW __get_ussClassName() ;

static ::StringW __declspec(property(get=__get_containerUssClassName, put=__set_containerUssClassName))  containerUssClassName;

static void __set_containerUssClassName(::StringW value) ;

static ::StringW __get_containerUssClassName() ;

static ::StringW __declspec(property(get=__get_titleUssClassName, put=__set_titleUssClassName))  titleUssClassName;

static void __set_titleUssClassName(::StringW value) ;

static ::StringW __get_titleUssClassName() ;

static ::StringW __declspec(property(get=__get_titleContainerUssClassName, put=__set_titleContainerUssClassName))  titleContainerUssClassName;

static void __set_titleContainerUssClassName(::StringW value) ;

static ::StringW __get_titleContainerUssClassName() ;

static ::StringW __declspec(property(get=__get_progressUssClassName, put=__set_progressUssClassName))  progressUssClassName;

static void __set_progressUssClassName(::StringW value) ;

static ::StringW __get_progressUssClassName() ;

static ::StringW __declspec(property(get=__get_backgroundUssClassName, put=__set_backgroundUssClassName))  backgroundUssClassName;

static void __set_backgroundUssClassName(::StringW value) ;

static ::StringW __get_backgroundUssClassName() ;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_Background, put=__set_m_Background))  m_Background;

constexpr void __set_m_Background(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_m_Background() const;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_Progress, put=__set_m_Progress))  m_Progress;

constexpr void __set_m_Progress(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_m_Progress() const;

 UnityEngine::UIElements::Label __declspec(property(get=__get_m_Title, put=__set_m_Title))  m_Title;

constexpr void __set_m_Title(UnityEngine::UIElements::Label value) ;

constexpr UnityEngine::UIElements::Label __get_m_Title() const;

 float_t __declspec(property(get=__get_m_LowValue, put=__set_m_LowValue))  m_LowValue;

constexpr void __set_m_LowValue(float_t value) ;

constexpr float_t __get_m_LowValue() const;

 float_t __declspec(property(get=__get_m_HighValue, put=__set_m_HighValue))  m_HighValue;

constexpr void __set_m_HighValue(float_t value) ;

constexpr float_t __get_m_HighValue() const;

 float_t __declspec(property(get=__get_m_Value, put=__set_m_Value))  m_Value;

constexpr void __set_m_Value(float_t value) ;

constexpr float_t __get_m_Value() const;


// Properties

 ::StringW __declspec(property(put=set_title))  title;

 float_t __declspec(property(get=get_lowValue, put=set_lowValue))  lowValue;

 float_t __declspec(property(get=get_highValue, put=set_highValue))  highValue;

 float_t __declspec(property(get=get_value, put=set_value))  value;


// Methods

/// @brief Method set_title addr 0x2cc15f8 size 0x24 virtual false final false
 void set_title(::StringW value) ;

/// @brief Method get_lowValue addr 0x2cc161c size 0x8 virtual false final false
 float_t get_lowValue() ;

/// @brief Method set_lowValue addr 0x2cc1624 size 0x10 virtual false final false
 void set_lowValue(float_t value) ;

/// @brief Method get_highValue addr 0x2cc1758 size 0x8 virtual false final false
 float_t get_highValue() ;

/// @brief Method set_highValue addr 0x2cc1760 size 0x10 virtual false final false
 void set_highValue(float_t value) ;

static UnityEngine::UIElements::AbstractProgressBar New_ctor() ;

/// @brief Method .ctor addr 0x2cc1770 size 0x2a0 virtual false final false
 void _ctor() ;

/// @brief Method OnGeometryChanged addr 0x2cc1a10 size 0x24 virtual false final false
 void OnGeometryChanged(UnityEngine::UIElements::GeometryChangedEvent e) ;

/// @brief Method get_value addr 0x2cc1a34 size 0x8 virtual true final false
 float_t get_value() ;

/// @brief Method set_value addr 0x2cc1a3c size 0x25c virtual true final false
 void set_value(float_t value) ;

/// @brief Method SetValueWithoutNotify addr 0x2cc1c98 size 0x28 virtual true final true
 void SetValueWithoutNotify(float_t newValue) ;

/// @brief Method SetProgress addr 0x2cc1634 size 0x124 virtual false final false
 void SetProgress(float_t p) ;

/// @brief Method CalculateProgressWidth addr 0x2cc1cc0 size 0x104 virtual false final false
 float_t CalculateProgressWidth(float_t width) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::AbstractProgressBar);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::AbstractProgressBar, "UnityEngine.UIElements", "AbstractProgressBar");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__AbstractProgressBar__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__AbstractProgressBar__UxmlTraits, "UnityEngine.UIElements", "AbstractProgressBar/UxmlTraits");
