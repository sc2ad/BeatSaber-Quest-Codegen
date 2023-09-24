#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class ChangeEvent_1;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
class ChangeEvent_1<T>;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type T>
class ChangeEvent_1<T>;
}
namespace UnityEngine::UIElements {
template<>
class ChangeEvent_1<UnityEngine::Vector2>;
}
namespace UnityEngine::UIElements {
template<>
class ChangeEvent_1<bool>;
}
namespace UnityEngine::UIElements {
template<>
class ChangeEvent_1<float_t>;
}
// Type: UnityEngine.UIElements::ChangeEvent`1
// Type: UnityEngine.UIElements::ChangeEvent`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7280)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7279), inst: 1637 }), TypeDefinitionIndex(TypeDefinitionIndex(7279)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7280), inst: 980 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7280), inst: 393 })
// CS Name: UnityEngine.UIElements.ChangeEvent`1
class CORDL_TYPE ChangeEvent_1<UnityEngine::Vector2> : public UnityEngine::UIElements::EventBase_1<UnityEngine::UIElements::ChangeEvent_1<UnityEngine::Vector2>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~ChangeEvent_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ChangeEvent_1", modifiers: " const&", def_value: None }]
constexpr ChangeEvent_1(ChangeEvent_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ChangeEvent_1", modifiers: "&&", def_value: None }]
constexpr ChangeEvent_1(ChangeEvent_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ChangeEvent_1(void* ptr) noexcept : UnityEngine::UIElements::EventBase_1<UnityEngine::UIElements::ChangeEvent_1<UnityEngine::Vector2>>(ptr) {
}


  constexpr ChangeEvent_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ChangeEvent_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ChangeEvent_1& operator=(ChangeEvent_1&& o) noexcept = default;
  constexpr ChangeEvent_1& operator=(ChangeEvent_1 const& o) noexcept = default;
                


// Fields

 UnityEngine::Vector2 __declspec(property(get=__get__previousValue_k__BackingField, put=__set__previousValue_k__BackingField))  _previousValue_k__BackingField;

constexpr void __set__previousValue_k__BackingField(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get__previousValue_k__BackingField() const;

 UnityEngine::Vector2 __declspec(property(get=__get__newValue_k__BackingField, put=__set__newValue_k__BackingField))  _newValue_k__BackingField;

constexpr void __set__newValue_k__BackingField(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get__newValue_k__BackingField() const;


// Properties

 UnityEngine::Vector2 __declspec(property(get=get_previousValue, put=set_previousValue))  previousValue;

 UnityEngine::Vector2 __declspec(property(get=get_newValue, put=set_newValue))  newValue;


// Methods

/// @brief Method get_previousValue addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Vector2 get_previousValue() ;

/// @brief Method set_previousValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_previousValue(UnityEngine::Vector2 value) ;

/// @brief Method get_newValue addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Vector2 get_newValue() ;

/// @brief Method set_newValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_newValue(UnityEngine::Vector2 value) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init() ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
 void LocalInit() ;

/// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::UIElements::ChangeEvent_1<UnityEngine::Vector2> GetPooled(UnityEngine::Vector2 previousValue, UnityEngine::Vector2 newValue) ;

static UnityEngine::UIElements::ChangeEvent_1<UnityEngine::Vector2> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::ChangeEvent`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7279)), TypeDefinitionIndex(TypeDefinitionIndex(7280)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7279), inst: 1637 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7280), inst: 980 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7280), inst: 374 })
// CS Name: UnityEngine.UIElements.ChangeEvent`1
class CORDL_TYPE ChangeEvent_1<float_t> : public UnityEngine::UIElements::EventBase_1<UnityEngine::UIElements::ChangeEvent_1<float_t>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~ChangeEvent_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ChangeEvent_1", modifiers: " const&", def_value: None }]
constexpr ChangeEvent_1(ChangeEvent_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ChangeEvent_1", modifiers: "&&", def_value: None }]
constexpr ChangeEvent_1(ChangeEvent_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ChangeEvent_1(void* ptr) noexcept : UnityEngine::UIElements::EventBase_1<UnityEngine::UIElements::ChangeEvent_1<float_t>>(ptr) {
}


  constexpr ChangeEvent_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ChangeEvent_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ChangeEvent_1& operator=(ChangeEvent_1&& o) noexcept = default;
  constexpr ChangeEvent_1& operator=(ChangeEvent_1 const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__previousValue_k__BackingField, put=__set__previousValue_k__BackingField))  _previousValue_k__BackingField;

constexpr void __set__previousValue_k__BackingField(float_t value) ;

constexpr float_t __get__previousValue_k__BackingField() const;

 float_t __declspec(property(get=__get__newValue_k__BackingField, put=__set__newValue_k__BackingField))  _newValue_k__BackingField;

constexpr void __set__newValue_k__BackingField(float_t value) ;

constexpr float_t __get__newValue_k__BackingField() const;


// Properties

 float_t __declspec(property(get=get_previousValue, put=set_previousValue))  previousValue;

 float_t __declspec(property(get=get_newValue, put=set_newValue))  newValue;


// Methods

/// @brief Method get_previousValue addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t get_previousValue() ;

/// @brief Method set_previousValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_previousValue(float_t value) ;

/// @brief Method get_newValue addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t get_newValue() ;

/// @brief Method set_newValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_newValue(float_t value) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init() ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
 void LocalInit() ;

/// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::UIElements::ChangeEvent_1<float_t> GetPooled(float_t previousValue, float_t newValue) ;

static UnityEngine::UIElements::ChangeEvent_1<float_t> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::ChangeEvent`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7279)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7279), inst: 1637 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7280), inst: 980 }), TypeDefinitionIndex(TypeDefinitionIndex(7280))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7280), inst: 99 })
// CS Name: UnityEngine.UIElements.ChangeEvent`1
class CORDL_TYPE ChangeEvent_1<bool> : public UnityEngine::UIElements::EventBase_1<UnityEngine::UIElements::ChangeEvent_1<bool>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~ChangeEvent_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ChangeEvent_1", modifiers: " const&", def_value: None }]
constexpr ChangeEvent_1(ChangeEvent_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ChangeEvent_1", modifiers: "&&", def_value: None }]
constexpr ChangeEvent_1(ChangeEvent_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ChangeEvent_1(void* ptr) noexcept : UnityEngine::UIElements::EventBase_1<UnityEngine::UIElements::ChangeEvent_1<bool>>(ptr) {
}


  constexpr ChangeEvent_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ChangeEvent_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ChangeEvent_1& operator=(ChangeEvent_1&& o) noexcept = default;
  constexpr ChangeEvent_1& operator=(ChangeEvent_1 const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__previousValue_k__BackingField, put=__set__previousValue_k__BackingField))  _previousValue_k__BackingField;

constexpr void __set__previousValue_k__BackingField(bool value) ;

constexpr bool __get__previousValue_k__BackingField() const;

 bool __declspec(property(get=__get__newValue_k__BackingField, put=__set__newValue_k__BackingField))  _newValue_k__BackingField;

constexpr void __set__newValue_k__BackingField(bool value) ;

constexpr bool __get__newValue_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_previousValue, put=set_previousValue))  previousValue;

 bool __declspec(property(get=get_newValue, put=set_newValue))  newValue;


// Methods

/// @brief Method get_previousValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_previousValue() ;

/// @brief Method set_previousValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_previousValue(bool value) ;

/// @brief Method get_newValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_newValue() ;

/// @brief Method set_newValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_newValue(bool value) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init() ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
 void LocalInit() ;

/// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::UIElements::ChangeEvent_1<bool> GetPooled(bool previousValue, bool newValue) ;

static UnityEngine::UIElements::ChangeEvent_1<bool> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::ChangeEvent`1
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7279), inst: 1637 }), TypeDefinitionIndex(TypeDefinitionIndex(7279)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7280), inst: 980 }), TypeDefinitionIndex(TypeDefinitionIndex(7280))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7280), inst: 92 })
// CS Name: UnityEngine.UIElements.ChangeEvent`1
class CORDL_TYPE ChangeEvent_1<T> : public UnityEngine::UIElements::EventBase_1<UnityEngine::UIElements::ChangeEvent_1<T>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~ChangeEvent_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ChangeEvent_1", modifiers: " const&", def_value: None }]
constexpr ChangeEvent_1(ChangeEvent_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ChangeEvent_1", modifiers: "&&", def_value: None }]
constexpr ChangeEvent_1(ChangeEvent_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ChangeEvent_1(void* ptr) noexcept : UnityEngine::UIElements::EventBase_1<UnityEngine::UIElements::ChangeEvent_1<T>>(ptr) {
}


  constexpr ChangeEvent_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ChangeEvent_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ChangeEvent_1& operator=(ChangeEvent_1&& o) noexcept = default;
  constexpr ChangeEvent_1& operator=(ChangeEvent_1 const& o) noexcept = default;
                


// Fields

 T __declspec(property(get=__get__previousValue_k__BackingField, put=__set__previousValue_k__BackingField))  _previousValue_k__BackingField;

constexpr void __set__previousValue_k__BackingField(T value) ;

constexpr T __get__previousValue_k__BackingField() const;

 T __declspec(property(get=__get__newValue_k__BackingField, put=__set__newValue_k__BackingField))  _newValue_k__BackingField;

constexpr void __set__newValue_k__BackingField(T value) ;

constexpr T __get__newValue_k__BackingField() const;


// Properties

 T __declspec(property(get=get_previousValue, put=set_previousValue))  previousValue;

 T __declspec(property(get=get_newValue, put=set_newValue))  newValue;


// Methods

/// @brief Method get_previousValue addr 0x0 size 0xffffffffffffffff virtual false final false
 T get_previousValue() ;

/// @brief Method set_previousValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_previousValue(T value) ;

/// @brief Method get_newValue addr 0x0 size 0xffffffffffffffff virtual false final false
 T get_newValue() ;

/// @brief Method set_newValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_newValue(T value) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init() ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
 void LocalInit() ;

/// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::UIElements::ChangeEvent_1<T> GetPooled(T previousValue, T newValue) ;

static UnityEngine::UIElements::ChangeEvent_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::ChangeEvent`1
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7279), inst: 1637 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7280), inst: 980 }), TypeDefinitionIndex(TypeDefinitionIndex(7280)), TypeDefinitionIndex(TypeDefinitionIndex(7279))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7280), inst: 2 })
// CS Name: UnityEngine.UIElements.ChangeEvent`1
class CORDL_TYPE ChangeEvent_1<T> : public UnityEngine::UIElements::EventBase_1<UnityEngine::UIElements::ChangeEvent_1<T>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~ChangeEvent_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ChangeEvent_1", modifiers: " const&", def_value: None }]
constexpr ChangeEvent_1(ChangeEvent_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ChangeEvent_1", modifiers: "&&", def_value: None }]
constexpr ChangeEvent_1(ChangeEvent_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ChangeEvent_1(void* ptr) noexcept : UnityEngine::UIElements::EventBase_1<UnityEngine::UIElements::ChangeEvent_1<T>>(ptr) {
}


  constexpr ChangeEvent_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ChangeEvent_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ChangeEvent_1& operator=(ChangeEvent_1&& o) noexcept = default;
  constexpr ChangeEvent_1& operator=(ChangeEvent_1 const& o) noexcept = default;
                


// Fields

 T __declspec(property(get=__get__previousValue_k__BackingField, put=__set__previousValue_k__BackingField))  _previousValue_k__BackingField;

constexpr void __set__previousValue_k__BackingField(T value) ;

constexpr T __get__previousValue_k__BackingField() const;

 T __declspec(property(get=__get__newValue_k__BackingField, put=__set__newValue_k__BackingField))  _newValue_k__BackingField;

constexpr void __set__newValue_k__BackingField(T value) ;

constexpr T __get__newValue_k__BackingField() const;


// Properties

 T __declspec(property(get=get_previousValue, put=set_previousValue))  previousValue;

 T __declspec(property(get=get_newValue, put=set_newValue))  newValue;


// Methods

/// @brief Method get_previousValue addr 0x0 size 0xffffffffffffffff virtual false final false
 T get_previousValue() ;

/// @brief Method set_previousValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_previousValue(T value) ;

/// @brief Method get_newValue addr 0x0 size 0xffffffffffffffff virtual false final false
 T get_newValue() ;

/// @brief Method set_newValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_newValue(T value) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init() ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
 void LocalInit() ;

/// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::UIElements::ChangeEvent_1<T> GetPooled(T previousValue, T newValue) ;

static UnityEngine::UIElements::ChangeEvent_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::UIElements::ChangeEvent_1, "UnityEngine.UIElements", "ChangeEvent`1");
