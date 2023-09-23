#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename TValueType,typename TValueUxmlAttributeType>
class BaseFieldTraits_2;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type TValueUxmlAttributeType>
class BaseFieldTraits_2<int32_t,TValueUxmlAttributeType>;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type TValueType,::cordl_internals::il2cpp_reference_type TValueUxmlAttributeType>
class BaseFieldTraits_2<TValueType,TValueUxmlAttributeType>;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type TValueUxmlAttributeType>
class BaseFieldTraits_2<float_t,TValueUxmlAttributeType>;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type TValueUxmlAttributeType>
class BaseFieldTraits_2<bool,TValueUxmlAttributeType>;
}
// Type: UnityEngine.UIElements::BaseFieldTraits`2
// Type: UnityEngine.UIElements::BaseFieldTraits`2
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValueType,::cordl_internals::il2cpp_reference_type TValueUxmlAttributeType>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7227)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7227), inst: 5041 }), TypeDefinitionIndex(TypeDefinitionIndex(7229))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7229), inst: 80 })
// CS Name: UnityEngine.UIElements.BaseFieldTraits`2
class CORDL_TYPE BaseFieldTraits_2<TValueType,TValueUxmlAttributeType> : public UnityEngine::UIElements::UnityEngine__UIElements__BaseField_1__UxmlTraits<TValueType> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~BaseFieldTraits_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseFieldTraits_2", modifiers: " const&", def_value: None }]
constexpr BaseFieldTraits_2(BaseFieldTraits_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseFieldTraits_2", modifiers: "&&", def_value: None }]
constexpr BaseFieldTraits_2(BaseFieldTraits_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseFieldTraits_2(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__BaseField_1__UxmlTraits<TValueType>(ptr) {
}


  constexpr BaseFieldTraits_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseFieldTraits_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseFieldTraits_2& operator=(BaseFieldTraits_2&& o) noexcept = default;
  constexpr BaseFieldTraits_2& operator=(BaseFieldTraits_2 const& o) noexcept = default;
                


// Fields

 TValueUxmlAttributeType __declspec(property(get=__get_m_Value, put=__set_m_Value))  m_Value;

constexpr void __set_m_Value(TValueUxmlAttributeType value) ;

constexpr TValueUxmlAttributeType __get_m_Value() const;


// Methods

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc) ;

// Ctor Parameters []
explicit BaseFieldTraits_2() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::BaseFieldTraits`2
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValueUxmlAttributeType>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7227)), TypeDefinitionIndex(TypeDefinitionIndex(7229)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7227), inst: 5041 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7229), inst: 1532 })
// CS Name: UnityEngine.UIElements.BaseFieldTraits`2
class CORDL_TYPE BaseFieldTraits_2<int32_t,TValueUxmlAttributeType> : public UnityEngine::UIElements::UnityEngine__UIElements__BaseField_1__UxmlTraits<int32_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~BaseFieldTraits_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseFieldTraits_2", modifiers: " const&", def_value: None }]
constexpr BaseFieldTraits_2(BaseFieldTraits_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseFieldTraits_2", modifiers: "&&", def_value: None }]
constexpr BaseFieldTraits_2(BaseFieldTraits_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseFieldTraits_2(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__BaseField_1__UxmlTraits<int32_t>(ptr) {
}


  constexpr BaseFieldTraits_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseFieldTraits_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseFieldTraits_2& operator=(BaseFieldTraits_2&& o) noexcept = default;
  constexpr BaseFieldTraits_2& operator=(BaseFieldTraits_2 const& o) noexcept = default;
                


// Fields

 TValueUxmlAttributeType __declspec(property(get=__get_m_Value, put=__set_m_Value))  m_Value;

constexpr void __set_m_Value(TValueUxmlAttributeType value) ;

constexpr TValueUxmlAttributeType __get_m_Value() const;


// Methods

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc) ;

// Ctor Parameters []
explicit BaseFieldTraits_2() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::BaseFieldTraits`2
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValueUxmlAttributeType>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7229)), TypeDefinitionIndex(TypeDefinitionIndex(7227)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7227), inst: 5041 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7229), inst: 1568 })
// CS Name: UnityEngine.UIElements.BaseFieldTraits`2
class CORDL_TYPE BaseFieldTraits_2<float_t,TValueUxmlAttributeType> : public UnityEngine::UIElements::UnityEngine__UIElements__BaseField_1__UxmlTraits<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~BaseFieldTraits_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseFieldTraits_2", modifiers: " const&", def_value: None }]
constexpr BaseFieldTraits_2(BaseFieldTraits_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseFieldTraits_2", modifiers: "&&", def_value: None }]
constexpr BaseFieldTraits_2(BaseFieldTraits_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseFieldTraits_2(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__BaseField_1__UxmlTraits<float_t>(ptr) {
}


  constexpr BaseFieldTraits_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseFieldTraits_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseFieldTraits_2& operator=(BaseFieldTraits_2&& o) noexcept = default;
  constexpr BaseFieldTraits_2& operator=(BaseFieldTraits_2 const& o) noexcept = default;
                


// Fields

 TValueUxmlAttributeType __declspec(property(get=__get_m_Value, put=__set_m_Value))  m_Value;

constexpr void __set_m_Value(TValueUxmlAttributeType value) ;

constexpr TValueUxmlAttributeType __get_m_Value() const;


// Methods

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc) ;

// Ctor Parameters []
explicit BaseFieldTraits_2() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::BaseFieldTraits`2
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValueUxmlAttributeType>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7229)), TypeDefinitionIndex(TypeDefinitionIndex(7227)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7227), inst: 5041 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7229), inst: 5137 })
// CS Name: UnityEngine.UIElements.BaseFieldTraits`2
class CORDL_TYPE BaseFieldTraits_2<bool,TValueUxmlAttributeType> : public UnityEngine::UIElements::UnityEngine__UIElements__BaseField_1__UxmlTraits<bool> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~BaseFieldTraits_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseFieldTraits_2", modifiers: " const&", def_value: None }]
constexpr BaseFieldTraits_2(BaseFieldTraits_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseFieldTraits_2", modifiers: "&&", def_value: None }]
constexpr BaseFieldTraits_2(BaseFieldTraits_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseFieldTraits_2(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__BaseField_1__UxmlTraits<bool>(ptr) {
}


  constexpr BaseFieldTraits_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseFieldTraits_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseFieldTraits_2& operator=(BaseFieldTraits_2&& o) noexcept = default;
  constexpr BaseFieldTraits_2& operator=(BaseFieldTraits_2 const& o) noexcept = default;
                


// Fields

 TValueUxmlAttributeType __declspec(property(get=__get_m_Value, put=__set_m_Value))  m_Value;

constexpr void __set_m_Value(TValueUxmlAttributeType value) ;

constexpr TValueUxmlAttributeType __get_m_Value() const;


// Methods

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc) ;

// Ctor Parameters []
explicit BaseFieldTraits_2() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::UIElements::BaseFieldTraits_2, "UnityEngine.UIElements", "BaseFieldTraits`2");
