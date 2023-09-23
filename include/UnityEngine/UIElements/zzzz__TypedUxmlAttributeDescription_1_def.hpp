#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlAttributeDescription_def.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace System {
struct Int32Enum;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class TypedUxmlAttributeDescription_1;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type T>
class TypedUxmlAttributeDescription_1<T>;
}
namespace UnityEngine::UIElements {
template<>
class TypedUxmlAttributeDescription_1<System::Int32Enum>;
}
namespace UnityEngine::UIElements {
template<>
class TypedUxmlAttributeDescription_1<bool>;
}
namespace UnityEngine::UIElements {
template<>
class TypedUxmlAttributeDescription_1<float_t>;
}
namespace UnityEngine::UIElements {
template<>
class TypedUxmlAttributeDescription_1<int32_t>;
}
namespace UnityEngine::UIElements {
template<>
class TypedUxmlAttributeDescription_1<int64_t>;
}
// Type: UnityEngine.UIElements::TypedUxmlAttributeDescription`1
// Type: UnityEngine.UIElements::TypedUxmlAttributeDescription`1
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7072)), TypeDefinitionIndex(TypeDefinitionIndex(7073))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7073), inst: 2 })
// CS Name: UnityEngine.UIElements.TypedUxmlAttributeDescription`1
class CORDL_TYPE TypedUxmlAttributeDescription_1<T> : public UnityEngine::UIElements::UxmlAttributeDescription {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~TypedUxmlAttributeDescription_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "TypedUxmlAttributeDescription_1", modifiers: " const&", def_value: None }]
constexpr TypedUxmlAttributeDescription_1(TypedUxmlAttributeDescription_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TypedUxmlAttributeDescription_1", modifiers: "&&", def_value: None }]
constexpr TypedUxmlAttributeDescription_1(TypedUxmlAttributeDescription_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TypedUxmlAttributeDescription_1(void* ptr) noexcept : UnityEngine::UIElements::UxmlAttributeDescription(ptr) {
}


  constexpr TypedUxmlAttributeDescription_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TypedUxmlAttributeDescription_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TypedUxmlAttributeDescription_1& operator=(TypedUxmlAttributeDescription_1&& o) noexcept = default;
  constexpr TypedUxmlAttributeDescription_1& operator=(TypedUxmlAttributeDescription_1 const& o) noexcept = default;
                


// Fields

 T __declspec(property(get=__get__defaultValue_k__BackingField, put=__set__defaultValue_k__BackingField))  _defaultValue_k__BackingField;

constexpr void __set__defaultValue_k__BackingField(T value) ;

constexpr T __get__defaultValue_k__BackingField() const;


// Properties

 T __declspec(property(get=get_defaultValue, put=set_defaultValue))  defaultValue;


// Methods

/// @brief Method GetValueFromBag addr 0x0 size 0xffffffffffffffff virtual true final false
 T GetValueFromBag(UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc) ;

/// @brief Method get_defaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
 T get_defaultValue() ;

/// @brief Method set_defaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_defaultValue(T value) ;

// Ctor Parameters []
explicit TypedUxmlAttributeDescription_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::TypedUxmlAttributeDescription`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7073)), TypeDefinitionIndex(TypeDefinitionIndex(7072))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7073), inst: 92 })
// CS Name: UnityEngine.UIElements.TypedUxmlAttributeDescription`1
class CORDL_TYPE TypedUxmlAttributeDescription_1<int32_t> : public UnityEngine::UIElements::UxmlAttributeDescription {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~TypedUxmlAttributeDescription_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "TypedUxmlAttributeDescription_1", modifiers: " const&", def_value: None }]
constexpr TypedUxmlAttributeDescription_1(TypedUxmlAttributeDescription_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TypedUxmlAttributeDescription_1", modifiers: "&&", def_value: None }]
constexpr TypedUxmlAttributeDescription_1(TypedUxmlAttributeDescription_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TypedUxmlAttributeDescription_1(void* ptr) noexcept : UnityEngine::UIElements::UxmlAttributeDescription(ptr) {
}


  constexpr TypedUxmlAttributeDescription_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TypedUxmlAttributeDescription_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TypedUxmlAttributeDescription_1& operator=(TypedUxmlAttributeDescription_1&& o) noexcept = default;
  constexpr TypedUxmlAttributeDescription_1& operator=(TypedUxmlAttributeDescription_1 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__defaultValue_k__BackingField, put=__set__defaultValue_k__BackingField))  _defaultValue_k__BackingField;

constexpr void __set__defaultValue_k__BackingField(int32_t value) ;

constexpr int32_t __get__defaultValue_k__BackingField() const;


// Properties

 int32_t __declspec(property(get=get_defaultValue, put=set_defaultValue))  defaultValue;


// Methods

/// @brief Method GetValueFromBag addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetValueFromBag(UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc) ;

/// @brief Method get_defaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_defaultValue() ;

/// @brief Method set_defaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_defaultValue(int32_t value) ;

// Ctor Parameters []
explicit TypedUxmlAttributeDescription_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::TypedUxmlAttributeDescription`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7073)), TypeDefinitionIndex(TypeDefinitionIndex(7072))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7073), inst: 99 })
// CS Name: UnityEngine.UIElements.TypedUxmlAttributeDescription`1
class CORDL_TYPE TypedUxmlAttributeDescription_1<bool> : public UnityEngine::UIElements::UxmlAttributeDescription {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~TypedUxmlAttributeDescription_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "TypedUxmlAttributeDescription_1", modifiers: " const&", def_value: None }]
constexpr TypedUxmlAttributeDescription_1(TypedUxmlAttributeDescription_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TypedUxmlAttributeDescription_1", modifiers: "&&", def_value: None }]
constexpr TypedUxmlAttributeDescription_1(TypedUxmlAttributeDescription_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TypedUxmlAttributeDescription_1(void* ptr) noexcept : UnityEngine::UIElements::UxmlAttributeDescription(ptr) {
}


  constexpr TypedUxmlAttributeDescription_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TypedUxmlAttributeDescription_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TypedUxmlAttributeDescription_1& operator=(TypedUxmlAttributeDescription_1&& o) noexcept = default;
  constexpr TypedUxmlAttributeDescription_1& operator=(TypedUxmlAttributeDescription_1 const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__defaultValue_k__BackingField, put=__set__defaultValue_k__BackingField))  _defaultValue_k__BackingField;

constexpr void __set__defaultValue_k__BackingField(bool value) ;

constexpr bool __get__defaultValue_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_defaultValue, put=set_defaultValue))  defaultValue;


// Methods

/// @brief Method GetValueFromBag addr 0x0 size 0xffffffffffffffff virtual true final false
 bool GetValueFromBag(UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc) ;

/// @brief Method get_defaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_defaultValue() ;

/// @brief Method set_defaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_defaultValue(bool value) ;

// Ctor Parameters []
explicit TypedUxmlAttributeDescription_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::TypedUxmlAttributeDescription`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7072)), TypeDefinitionIndex(TypeDefinitionIndex(7073))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7073), inst: 374 })
// CS Name: UnityEngine.UIElements.TypedUxmlAttributeDescription`1
class CORDL_TYPE TypedUxmlAttributeDescription_1<float_t> : public UnityEngine::UIElements::UxmlAttributeDescription {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~TypedUxmlAttributeDescription_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "TypedUxmlAttributeDescription_1", modifiers: " const&", def_value: None }]
constexpr TypedUxmlAttributeDescription_1(TypedUxmlAttributeDescription_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TypedUxmlAttributeDescription_1", modifiers: "&&", def_value: None }]
constexpr TypedUxmlAttributeDescription_1(TypedUxmlAttributeDescription_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TypedUxmlAttributeDescription_1(void* ptr) noexcept : UnityEngine::UIElements::UxmlAttributeDescription(ptr) {
}


  constexpr TypedUxmlAttributeDescription_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TypedUxmlAttributeDescription_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TypedUxmlAttributeDescription_1& operator=(TypedUxmlAttributeDescription_1&& o) noexcept = default;
  constexpr TypedUxmlAttributeDescription_1& operator=(TypedUxmlAttributeDescription_1 const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__defaultValue_k__BackingField, put=__set__defaultValue_k__BackingField))  _defaultValue_k__BackingField;

constexpr void __set__defaultValue_k__BackingField(float_t value) ;

constexpr float_t __get__defaultValue_k__BackingField() const;


// Properties

 float_t __declspec(property(get=get_defaultValue, put=set_defaultValue))  defaultValue;


// Methods

/// @brief Method GetValueFromBag addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t GetValueFromBag(UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc) ;

/// @brief Method get_defaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t get_defaultValue() ;

/// @brief Method set_defaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_defaultValue(float_t value) ;

// Ctor Parameters []
explicit TypedUxmlAttributeDescription_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::TypedUxmlAttributeDescription`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7073)), TypeDefinitionIndex(TypeDefinitionIndex(7072))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7073), inst: 830 })
// CS Name: UnityEngine.UIElements.TypedUxmlAttributeDescription`1
class CORDL_TYPE TypedUxmlAttributeDescription_1<int64_t> : public UnityEngine::UIElements::UxmlAttributeDescription {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~TypedUxmlAttributeDescription_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "TypedUxmlAttributeDescription_1", modifiers: " const&", def_value: None }]
constexpr TypedUxmlAttributeDescription_1(TypedUxmlAttributeDescription_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TypedUxmlAttributeDescription_1", modifiers: "&&", def_value: None }]
constexpr TypedUxmlAttributeDescription_1(TypedUxmlAttributeDescription_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TypedUxmlAttributeDescription_1(void* ptr) noexcept : UnityEngine::UIElements::UxmlAttributeDescription(ptr) {
}


  constexpr TypedUxmlAttributeDescription_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TypedUxmlAttributeDescription_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TypedUxmlAttributeDescription_1& operator=(TypedUxmlAttributeDescription_1&& o) noexcept = default;
  constexpr TypedUxmlAttributeDescription_1& operator=(TypedUxmlAttributeDescription_1 const& o) noexcept = default;
                


// Fields

 int64_t __declspec(property(get=__get__defaultValue_k__BackingField, put=__set__defaultValue_k__BackingField))  _defaultValue_k__BackingField;

constexpr void __set__defaultValue_k__BackingField(int64_t value) ;

constexpr int64_t __get__defaultValue_k__BackingField() const;


// Properties

 int64_t __declspec(property(get=get_defaultValue, put=set_defaultValue))  defaultValue;


// Methods

/// @brief Method GetValueFromBag addr 0x0 size 0xffffffffffffffff virtual true final false
 int64_t GetValueFromBag(UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc) ;

/// @brief Method get_defaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
 int64_t get_defaultValue() ;

/// @brief Method set_defaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_defaultValue(int64_t value) ;

// Ctor Parameters []
explicit TypedUxmlAttributeDescription_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::TypedUxmlAttributeDescription`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7072)), TypeDefinitionIndex(TypeDefinitionIndex(7073))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7073), inst: 4825 })
// CS Name: UnityEngine.UIElements.TypedUxmlAttributeDescription`1
class CORDL_TYPE TypedUxmlAttributeDescription_1<System::Int32Enum> : public UnityEngine::UIElements::UxmlAttributeDescription {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~TypedUxmlAttributeDescription_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "TypedUxmlAttributeDescription_1", modifiers: " const&", def_value: None }]
constexpr TypedUxmlAttributeDescription_1(TypedUxmlAttributeDescription_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TypedUxmlAttributeDescription_1", modifiers: "&&", def_value: None }]
constexpr TypedUxmlAttributeDescription_1(TypedUxmlAttributeDescription_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TypedUxmlAttributeDescription_1(void* ptr) noexcept : UnityEngine::UIElements::UxmlAttributeDescription(ptr) {
}


  constexpr TypedUxmlAttributeDescription_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TypedUxmlAttributeDescription_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TypedUxmlAttributeDescription_1& operator=(TypedUxmlAttributeDescription_1&& o) noexcept = default;
  constexpr TypedUxmlAttributeDescription_1& operator=(TypedUxmlAttributeDescription_1 const& o) noexcept = default;
                


// Fields

 System::Int32Enum __declspec(property(get=__get__defaultValue_k__BackingField, put=__set__defaultValue_k__BackingField))  _defaultValue_k__BackingField;

constexpr void __set__defaultValue_k__BackingField(System::Int32Enum value) ;

constexpr System::Int32Enum __get__defaultValue_k__BackingField() const;


// Properties

 System::Int32Enum __declspec(property(get=get_defaultValue, put=set_defaultValue))  defaultValue;


// Methods

/// @brief Method GetValueFromBag addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Int32Enum GetValueFromBag(UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc) ;

/// @brief Method get_defaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Int32Enum get_defaultValue() ;

/// @brief Method set_defaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_defaultValue(System::Int32Enum value) ;

// Ctor Parameters []
explicit TypedUxmlAttributeDescription_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::UIElements::TypedUxmlAttributeDescription_1, "UnityEngine.UIElements", "TypedUxmlAttributeDescription`1");
