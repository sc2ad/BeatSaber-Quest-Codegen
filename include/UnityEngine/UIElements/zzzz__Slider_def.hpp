#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__BaseFieldTraits_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseSlider_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFloatAttributeDescription_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace UnityEngine::UIElements {
template<typename TValueType>
struct UnityEngine__UIElements__BaseSlider_1__SliderKey;
}
namespace UnityEngine::UIElements {
struct SliderDirection;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
template<typename T>
class UxmlEnumAttributeDescription_1;
}
namespace UnityEngine::UIElements {
class UxmlFloatAttributeDescription;
}
namespace UnityEngine::UIElements {
class UxmlBoolAttributeDescription;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Slider;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__Slider__UxmlFactory;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__Slider__UxmlTraits;
}
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7077)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7229), inst: 886 }), TypeDefinitionIndex(TypeDefinitionIndex(7229))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7134))
// CS Name: UnityEngine.UIElements.Slider::UxmlTraits
class CORDL_TYPE UnityEngine__UIElements__Slider__UxmlTraits : public UnityEngine::UIElements::BaseFieldTraits_2<float_t,UnityEngine::UIElements::UxmlFloatAttributeDescription> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb8};

virtual ~UnityEngine__UIElements__Slider__UxmlTraits() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__Slider__UxmlTraits", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__Slider__UxmlTraits(UnityEngine__UIElements__Slider__UxmlTraits const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__Slider__UxmlTraits", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__Slider__UxmlTraits(UnityEngine__UIElements__Slider__UxmlTraits&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__Slider__UxmlTraits(void* ptr) noexcept : UnityEngine::UIElements::BaseFieldTraits_2<float_t,UnityEngine::UIElements::UxmlFloatAttributeDescription>(ptr) {
}


  constexpr UnityEngine__UIElements__Slider__UxmlTraits& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__Slider__UxmlTraits& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__Slider__UxmlTraits& operator=(UnityEngine__UIElements__Slider__UxmlTraits&& o) noexcept = default;
  constexpr UnityEngine__UIElements__Slider__UxmlTraits& operator=(UnityEngine__UIElements__Slider__UxmlTraits const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::UxmlFloatAttributeDescription __declspec(property(get=__get_m_LowValue, put=__set_m_LowValue))  m_LowValue;

constexpr void __set_m_LowValue(UnityEngine::UIElements::UxmlFloatAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlFloatAttributeDescription __get_m_LowValue() const;

 UnityEngine::UIElements::UxmlFloatAttributeDescription __declspec(property(get=__get_m_HighValue, put=__set_m_HighValue))  m_HighValue;

constexpr void __set_m_HighValue(UnityEngine::UIElements::UxmlFloatAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlFloatAttributeDescription __get_m_HighValue() const;

 UnityEngine::UIElements::UxmlFloatAttributeDescription __declspec(property(get=__get_m_PageSize, put=__set_m_PageSize))  m_PageSize;

constexpr void __set_m_PageSize(UnityEngine::UIElements::UxmlFloatAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlFloatAttributeDescription __get_m_PageSize() const;

 UnityEngine::UIElements::UxmlBoolAttributeDescription __declspec(property(get=__get_m_ShowInputField, put=__set_m_ShowInputField))  m_ShowInputField;

constexpr void __set_m_ShowInputField(UnityEngine::UIElements::UxmlBoolAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlBoolAttributeDescription __get_m_ShowInputField() const;

 UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::SliderDirection> __declspec(property(get=__get_m_Direction, put=__set_m_Direction))  m_Direction;

constexpr void __set_m_Direction(UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::SliderDirection> value) ;

constexpr UnityEngine::UIElements::UxmlEnumAttributeDescription_1<UnityEngine::UIElements::SliderDirection> __get_m_Direction() const;

 UnityEngine::UIElements::UxmlBoolAttributeDescription __declspec(property(get=__get_m_Inverted, put=__set_m_Inverted))  m_Inverted;

constexpr void __set_m_Inverted(UnityEngine::UIElements::UxmlBoolAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlBoolAttributeDescription __get_m_Inverted() const;


// Methods

/// @brief Method Init addr 0x2ca7650 size 0x2b4 virtual true final false
 void Init(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc) ;

// Ctor Parameters []
explicit UnityEngine__UIElements__Slider__UxmlTraits() ;

/// @brief Method .ctor addr 0x2ca7904 size 0x21c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::Slider
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7199), inst: 374 }), TypeDefinitionIndex(TypeDefinitionIndex(7199))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7135))
// CS Name: UnityEngine.UIElements.Slider
class CORDL_TYPE Slider : public UnityEngine::UIElements::BaseSlider_1<float_t> {
public:
// Declarations
using UxmlTraits = UnityEngine::UIElements::UnityEngine__UIElements__Slider__UxmlTraits;

using UxmlFactory = UnityEngine::UIElements::UnityEngine__UIElements__Slider__UxmlFactory;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x458};

virtual ~Slider() = default;

// Ctor Parameters [CppParam { name: "", ty: "Slider", modifiers: " const&", def_value: None }]
constexpr Slider(Slider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Slider", modifiers: "&&", def_value: None }]
constexpr Slider(Slider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Slider(void* ptr) noexcept : UnityEngine::UIElements::BaseSlider_1<float_t>(ptr) {
}


  constexpr Slider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Slider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Slider& operator=(Slider&& o) noexcept = default;
  constexpr Slider& operator=(Slider const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_ussClassName, put=__set_ussClassName))  ussClassName;

static void __set_ussClassName(::StringW value) ;

static ::StringW __get_ussClassName() ;

static ::StringW __declspec(property(get=__get_labelUssClassName, put=__set_labelUssClassName))  labelUssClassName;

static void __set_labelUssClassName(::StringW value) ;

static ::StringW __get_labelUssClassName() ;

static ::StringW __declspec(property(get=__get_inputUssClassName, put=__set_inputUssClassName))  inputUssClassName;

static void __set_inputUssClassName(::StringW value) ;

static ::StringW __get_inputUssClassName() ;


// Methods

// Ctor Parameters []
explicit Slider() ;

/// @brief Method .ctor addr 0x2ca6e84 size 0x18 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "start", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "end", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "direction", ty: "UnityEngine::UIElements::SliderDirection", modifiers: "", def_value: None }, CppParam { name: "pageSize", ty: "float_t", modifiers: "", def_value: None }]
explicit Slider(float_t start, float_t end, UnityEngine::UIElements::SliderDirection direction, float_t pageSize) ;

/// @brief Method .ctor addr 0x2ca6fe8 size 0xc virtual false final false
 void _ctor(float_t start, float_t end, UnityEngine::UIElements::SliderDirection direction, float_t pageSize) ;

// Ctor Parameters [CppParam { name: "label", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "start", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "end", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "direction", ty: "UnityEngine::UIElements::SliderDirection", modifiers: "", def_value: None }, CppParam { name: "pageSize", ty: "float_t", modifiers: "", def_value: None }]
explicit Slider(::StringW label, float_t start, float_t end, UnityEngine::UIElements::SliderDirection direction, float_t pageSize) ;

/// @brief Method .ctor addr 0x2ca6e9c size 0x14c virtual false final false
 void _ctor(::StringW label, float_t start, float_t end, UnityEngine::UIElements::SliderDirection direction, float_t pageSize) ;

/// @brief Method SliderLerpUnclamped addr 0x2ca6ff4 size 0x2b0 virtual true final false
 float_t SliderLerpUnclamped(float_t a, float_t b, float_t interpolant) ;

/// @brief Method SliderNormalizeValue addr 0x2ca72a4 size 0x10 virtual true final false
 float_t SliderNormalizeValue(float_t currentValue, float_t lowerValue, float_t higherValue) ;

/// @brief Method ParseStringToValue addr 0x2ca72b4 size 0xd0 virtual true final false
 float_t ParseStringToValue(::StringW stringValue) ;

/// @brief Method ComputeValueFromKey addr 0x2ca7384 size 0x1fc virtual true final false
 void ComputeValueFromKey(UnityEngine::UIElements::UnityEngine__UIElements__BaseSlider_1__SliderKey<float_t> sliderKey, bool isShift) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::UxmlFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7089), inst: 5103 }), TypeDefinitionIndex(TypeDefinitionIndex(7089)), TypeDefinitionIndex(TypeDefinitionIndex(7135)), TypeDefinitionIndex(TypeDefinitionIndex(7134))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7133))
// CS Name: UnityEngine.UIElements.Slider::UxmlFactory
class CORDL_TYPE UnityEngine__UIElements__Slider__UxmlFactory : public UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::Slider,UnityEngine::UIElements::UnityEngine__UIElements__Slider__UxmlTraits> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnityEngine__UIElements__Slider__UxmlFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__Slider__UxmlFactory", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__Slider__UxmlFactory(UnityEngine__UIElements__Slider__UxmlFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__Slider__UxmlFactory", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__Slider__UxmlFactory(UnityEngine__UIElements__Slider__UxmlFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__Slider__UxmlFactory(void* ptr) noexcept : UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::Slider,UnityEngine::UIElements::UnityEngine__UIElements__Slider__UxmlTraits>(ptr) {
}


  constexpr UnityEngine__UIElements__Slider__UxmlFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__Slider__UxmlFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__Slider__UxmlFactory& operator=(UnityEngine__UIElements__Slider__UxmlFactory&& o) noexcept = default;
  constexpr UnityEngine__UIElements__Slider__UxmlFactory& operator=(UnityEngine__UIElements__Slider__UxmlFactory const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__Slider__UxmlFactory() ;

/// @brief Method .ctor addr 0x2c9a40c size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::Slider);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::Slider, "UnityEngine.UIElements", "Slider");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__Slider__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__Slider__UxmlFactory, "UnityEngine.UIElements", "Slider/UxmlFactory");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__Slider__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__Slider__UxmlTraits, "UnityEngine.UIElements", "Slider/UxmlTraits");
