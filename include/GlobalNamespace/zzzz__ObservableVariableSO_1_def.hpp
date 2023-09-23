#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class IObservableChange;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
template<typename T>
class IValue_1;
}
namespace System {
struct Int32Enum;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class ObservableVariableSO_1;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class ObservableVariableSO_1<T>;
}
namespace GlobalNamespace {
template<>
class ObservableVariableSO_1<System::Int32Enum>;
}
namespace GlobalNamespace {
template<>
class ObservableVariableSO_1<UnityEngine::Vector2Int>;
}
namespace GlobalNamespace {
template<>
class ObservableVariableSO_1<UnityEngine::Vector3>;
}
namespace GlobalNamespace {
template<>
class ObservableVariableSO_1<bool>;
}
namespace GlobalNamespace {
template<>
class ObservableVariableSO_1<double_t>;
}
namespace GlobalNamespace {
template<>
class ObservableVariableSO_1<float_t>;
}
namespace GlobalNamespace {
template<>
class ObservableVariableSO_1<int32_t>;
}
// Type: ::ObservableVariableSO`1
// Type: ::ObservableVariableSO`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816)), TypeDefinitionIndex(TypeDefinitionIndex(13904))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13904), inst: 2 })
// CS Name: ObservableVariableSO`1
class CORDL_TYPE ObservableVariableSO_1<T> : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IValue_1<T>
constexpr operator  GlobalNamespace::IValue_1<T>() const noexcept;

/// @brief Convert operator to GlobalNamespace::IObservableChange
constexpr operator  GlobalNamespace::IObservableChange() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ObservableVariableSO_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObservableVariableSO_1", modifiers: " const&", def_value: None }]
constexpr ObservableVariableSO_1(ObservableVariableSO_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObservableVariableSO_1", modifiers: "&&", def_value: None }]
constexpr ObservableVariableSO_1(ObservableVariableSO_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObservableVariableSO_1(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr ObservableVariableSO_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObservableVariableSO_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObservableVariableSO_1& operator=(ObservableVariableSO_1&& o) noexcept = default;
  constexpr ObservableVariableSO_1& operator=(ObservableVariableSO_1 const& o) noexcept = default;
                


// Fields

 System::Action __declspec(property(get=__get_didChangeEvent, put=__set_didChangeEvent))  didChangeEvent;

constexpr void __set_didChangeEvent(System::Action value) ;

constexpr System::Action __get_didChangeEvent() const;

 T __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(T value) ;

constexpr T __get__value() const;


// Properties

 T __declspec(property(get=get_value, put=set_value))  value;


// Methods

/// @brief Method add_didChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final true
 void add_didChangeEvent(System::Action value) ;

/// @brief Method remove_didChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final true
 void remove_didChangeEvent(System::Action value) ;

/// @brief Method set_value addr 0x0 size 0xffffffffffffffff virtual true final true
 void set_value(T value) ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual true final true
 T get_value() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static T op_Implicit_T(GlobalNamespace::ObservableVariableSO_1<T> obj) ;

// Ctor Parameters []
explicit ObservableVariableSO_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ObservableVariableSO`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816)), TypeDefinitionIndex(TypeDefinitionIndex(13904))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13904), inst: 92 })
// CS Name: ObservableVariableSO`1
class CORDL_TYPE ObservableVariableSO_1<int32_t> : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IValue_1<int32_t>
constexpr operator  GlobalNamespace::IValue_1<int32_t>() const noexcept;

/// @brief Convert operator to GlobalNamespace::IObservableChange
constexpr operator  GlobalNamespace::IObservableChange() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ObservableVariableSO_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObservableVariableSO_1", modifiers: " const&", def_value: None }]
constexpr ObservableVariableSO_1(ObservableVariableSO_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObservableVariableSO_1", modifiers: "&&", def_value: None }]
constexpr ObservableVariableSO_1(ObservableVariableSO_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObservableVariableSO_1(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr ObservableVariableSO_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObservableVariableSO_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObservableVariableSO_1& operator=(ObservableVariableSO_1&& o) noexcept = default;
  constexpr ObservableVariableSO_1& operator=(ObservableVariableSO_1 const& o) noexcept = default;
                


// Fields

 System::Action __declspec(property(get=__get_didChangeEvent, put=__set_didChangeEvent))  didChangeEvent;

constexpr void __set_didChangeEvent(System::Action value) ;

constexpr System::Action __get_didChangeEvent() const;

 int32_t __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(int32_t value) ;

constexpr int32_t __get__value() const;


// Properties

 int32_t __declspec(property(get=get_value, put=set_value))  value;


// Methods

/// @brief Method add_didChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final true
 void add_didChangeEvent(System::Action value) ;

/// @brief Method remove_didChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final true
 void remove_didChangeEvent(System::Action value) ;

/// @brief Method set_value addr 0x0 size 0xffffffffffffffff virtual true final true
 void set_value(int32_t value) ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_value() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static int32_t op_Implicit_int32_t(GlobalNamespace::ObservableVariableSO_1<int32_t> obj) ;

// Ctor Parameters []
explicit ObservableVariableSO_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ObservableVariableSO`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13904)), TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13904), inst: 99 })
// CS Name: ObservableVariableSO`1
class CORDL_TYPE ObservableVariableSO_1<bool> : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IValue_1<bool>
constexpr operator  GlobalNamespace::IValue_1<bool>() const noexcept;

/// @brief Convert operator to GlobalNamespace::IObservableChange
constexpr operator  GlobalNamespace::IObservableChange() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ObservableVariableSO_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObservableVariableSO_1", modifiers: " const&", def_value: None }]
constexpr ObservableVariableSO_1(ObservableVariableSO_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObservableVariableSO_1", modifiers: "&&", def_value: None }]
constexpr ObservableVariableSO_1(ObservableVariableSO_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObservableVariableSO_1(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr ObservableVariableSO_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObservableVariableSO_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObservableVariableSO_1& operator=(ObservableVariableSO_1&& o) noexcept = default;
  constexpr ObservableVariableSO_1& operator=(ObservableVariableSO_1 const& o) noexcept = default;
                


// Fields

 System::Action __declspec(property(get=__get_didChangeEvent, put=__set_didChangeEvent))  didChangeEvent;

constexpr void __set_didChangeEvent(System::Action value) ;

constexpr System::Action __get_didChangeEvent() const;

 bool __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(bool value) ;

constexpr bool __get__value() const;


// Properties

 bool __declspec(property(get=get_value, put=set_value))  value;


// Methods

/// @brief Method add_didChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final true
 void add_didChangeEvent(System::Action value) ;

/// @brief Method remove_didChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final true
 void remove_didChangeEvent(System::Action value) ;

/// @brief Method set_value addr 0x0 size 0xffffffffffffffff virtual true final true
 void set_value(bool value) ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_value() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static bool op_Implicit_bool(GlobalNamespace::ObservableVariableSO_1<bool> obj) ;

// Ctor Parameters []
explicit ObservableVariableSO_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ObservableVariableSO`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13904)), TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13904), inst: 374 })
// CS Name: ObservableVariableSO`1
class CORDL_TYPE ObservableVariableSO_1<float_t> : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IValue_1<float_t>
constexpr operator  GlobalNamespace::IValue_1<float_t>() const noexcept;

/// @brief Convert operator to GlobalNamespace::IObservableChange
constexpr operator  GlobalNamespace::IObservableChange() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ObservableVariableSO_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObservableVariableSO_1", modifiers: " const&", def_value: None }]
constexpr ObservableVariableSO_1(ObservableVariableSO_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObservableVariableSO_1", modifiers: "&&", def_value: None }]
constexpr ObservableVariableSO_1(ObservableVariableSO_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObservableVariableSO_1(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr ObservableVariableSO_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObservableVariableSO_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObservableVariableSO_1& operator=(ObservableVariableSO_1&& o) noexcept = default;
  constexpr ObservableVariableSO_1& operator=(ObservableVariableSO_1 const& o) noexcept = default;
                


// Fields

 System::Action __declspec(property(get=__get_didChangeEvent, put=__set_didChangeEvent))  didChangeEvent;

constexpr void __set_didChangeEvent(System::Action value) ;

constexpr System::Action __get_didChangeEvent() const;

 float_t __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(float_t value) ;

constexpr float_t __get__value() const;


// Properties

 float_t __declspec(property(get=get_value, put=set_value))  value;


// Methods

/// @brief Method add_didChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final true
 void add_didChangeEvent(System::Action value) ;

/// @brief Method remove_didChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final true
 void remove_didChangeEvent(System::Action value) ;

/// @brief Method set_value addr 0x0 size 0xffffffffffffffff virtual true final true
 void set_value(float_t value) ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual true final true
 float_t get_value() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static float_t op_Implicit_float_t(GlobalNamespace::ObservableVariableSO_1<float_t> obj) ;

// Ctor Parameters []
explicit ObservableVariableSO_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ObservableVariableSO`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13904)), TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13904), inst: 394 })
// CS Name: ObservableVariableSO`1
class CORDL_TYPE ObservableVariableSO_1<UnityEngine::Vector3> : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IValue_1<UnityEngine::Vector3>
constexpr operator  GlobalNamespace::IValue_1<UnityEngine::Vector3>() const noexcept;

/// @brief Convert operator to GlobalNamespace::IObservableChange
constexpr operator  GlobalNamespace::IObservableChange() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ObservableVariableSO_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObservableVariableSO_1", modifiers: " const&", def_value: None }]
constexpr ObservableVariableSO_1(ObservableVariableSO_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObservableVariableSO_1", modifiers: "&&", def_value: None }]
constexpr ObservableVariableSO_1(ObservableVariableSO_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObservableVariableSO_1(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr ObservableVariableSO_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObservableVariableSO_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObservableVariableSO_1& operator=(ObservableVariableSO_1&& o) noexcept = default;
  constexpr ObservableVariableSO_1& operator=(ObservableVariableSO_1 const& o) noexcept = default;
                


// Fields

 System::Action __declspec(property(get=__get_didChangeEvent, put=__set_didChangeEvent))  didChangeEvent;

constexpr void __set_didChangeEvent(System::Action value) ;

constexpr System::Action __get_didChangeEvent() const;

 UnityEngine::Vector3 __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__value() const;


// Properties

 UnityEngine::Vector3 __declspec(property(get=get_value, put=set_value))  value;


// Methods

/// @brief Method add_didChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final true
 void add_didChangeEvent(System::Action value) ;

/// @brief Method remove_didChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final true
 void remove_didChangeEvent(System::Action value) ;

/// @brief Method set_value addr 0x0 size 0xffffffffffffffff virtual true final true
 void set_value(UnityEngine::Vector3 value) ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::Vector3 get_value() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::Vector3 op_Implicit_UnityEngine__Vector3(GlobalNamespace::ObservableVariableSO_1<UnityEngine::Vector3> obj) ;

// Ctor Parameters []
explicit ObservableVariableSO_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ObservableVariableSO`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816)), TypeDefinitionIndex(TypeDefinitionIndex(13904))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13904), inst: 2598 })
// CS Name: ObservableVariableSO`1
class CORDL_TYPE ObservableVariableSO_1<double_t> : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IValue_1<double_t>
constexpr operator  GlobalNamespace::IValue_1<double_t>() const noexcept;

/// @brief Convert operator to GlobalNamespace::IObservableChange
constexpr operator  GlobalNamespace::IObservableChange() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ObservableVariableSO_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObservableVariableSO_1", modifiers: " const&", def_value: None }]
constexpr ObservableVariableSO_1(ObservableVariableSO_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObservableVariableSO_1", modifiers: "&&", def_value: None }]
constexpr ObservableVariableSO_1(ObservableVariableSO_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObservableVariableSO_1(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr ObservableVariableSO_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObservableVariableSO_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObservableVariableSO_1& operator=(ObservableVariableSO_1&& o) noexcept = default;
  constexpr ObservableVariableSO_1& operator=(ObservableVariableSO_1 const& o) noexcept = default;
                


// Fields

 System::Action __declspec(property(get=__get_didChangeEvent, put=__set_didChangeEvent))  didChangeEvent;

constexpr void __set_didChangeEvent(System::Action value) ;

constexpr System::Action __get_didChangeEvent() const;

 double_t __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(double_t value) ;

constexpr double_t __get__value() const;


// Properties

 double_t __declspec(property(get=get_value, put=set_value))  value;


// Methods

/// @brief Method add_didChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final true
 void add_didChangeEvent(System::Action value) ;

/// @brief Method remove_didChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final true
 void remove_didChangeEvent(System::Action value) ;

/// @brief Method set_value addr 0x0 size 0xffffffffffffffff virtual true final true
 void set_value(double_t value) ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual true final true
 double_t get_value() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static double_t op_Implicit_double_t(GlobalNamespace::ObservableVariableSO_1<double_t> obj) ;

// Ctor Parameters []
explicit ObservableVariableSO_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ObservableVariableSO`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816)), TypeDefinitionIndex(TypeDefinitionIndex(13904))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13904), inst: 3257 })
// CS Name: ObservableVariableSO`1
class CORDL_TYPE ObservableVariableSO_1<UnityEngine::Vector2Int> : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IValue_1<UnityEngine::Vector2Int>
constexpr operator  GlobalNamespace::IValue_1<UnityEngine::Vector2Int>() const noexcept;

/// @brief Convert operator to GlobalNamespace::IObservableChange
constexpr operator  GlobalNamespace::IObservableChange() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ObservableVariableSO_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObservableVariableSO_1", modifiers: " const&", def_value: None }]
constexpr ObservableVariableSO_1(ObservableVariableSO_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObservableVariableSO_1", modifiers: "&&", def_value: None }]
constexpr ObservableVariableSO_1(ObservableVariableSO_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObservableVariableSO_1(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr ObservableVariableSO_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObservableVariableSO_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObservableVariableSO_1& operator=(ObservableVariableSO_1&& o) noexcept = default;
  constexpr ObservableVariableSO_1& operator=(ObservableVariableSO_1 const& o) noexcept = default;
                


// Fields

 System::Action __declspec(property(get=__get_didChangeEvent, put=__set_didChangeEvent))  didChangeEvent;

constexpr void __set_didChangeEvent(System::Action value) ;

constexpr System::Action __get_didChangeEvent() const;

 UnityEngine::Vector2Int __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(UnityEngine::Vector2Int value) ;

constexpr UnityEngine::Vector2Int __get__value() const;


// Properties

 UnityEngine::Vector2Int __declspec(property(get=get_value, put=set_value))  value;


// Methods

/// @brief Method add_didChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final true
 void add_didChangeEvent(System::Action value) ;

/// @brief Method remove_didChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final true
 void remove_didChangeEvent(System::Action value) ;

/// @brief Method set_value addr 0x0 size 0xffffffffffffffff virtual true final true
 void set_value(UnityEngine::Vector2Int value) ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::Vector2Int get_value() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::Vector2Int op_Implicit_UnityEngine__Vector2Int(GlobalNamespace::ObservableVariableSO_1<UnityEngine::Vector2Int> obj) ;

// Ctor Parameters []
explicit ObservableVariableSO_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ObservableVariableSO`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816)), TypeDefinitionIndex(TypeDefinitionIndex(13904))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13904), inst: 4825 })
// CS Name: ObservableVariableSO`1
class CORDL_TYPE ObservableVariableSO_1<System::Int32Enum> : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IValue_1<System::Int32Enum>
constexpr operator  GlobalNamespace::IValue_1<System::Int32Enum>() const noexcept;

/// @brief Convert operator to GlobalNamespace::IObservableChange
constexpr operator  GlobalNamespace::IObservableChange() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ObservableVariableSO_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObservableVariableSO_1", modifiers: " const&", def_value: None }]
constexpr ObservableVariableSO_1(ObservableVariableSO_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObservableVariableSO_1", modifiers: "&&", def_value: None }]
constexpr ObservableVariableSO_1(ObservableVariableSO_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObservableVariableSO_1(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr ObservableVariableSO_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObservableVariableSO_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObservableVariableSO_1& operator=(ObservableVariableSO_1&& o) noexcept = default;
  constexpr ObservableVariableSO_1& operator=(ObservableVariableSO_1 const& o) noexcept = default;
                


// Fields

 System::Action __declspec(property(get=__get_didChangeEvent, put=__set_didChangeEvent))  didChangeEvent;

constexpr void __set_didChangeEvent(System::Action value) ;

constexpr System::Action __get_didChangeEvent() const;

 System::Int32Enum __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(System::Int32Enum value) ;

constexpr System::Int32Enum __get__value() const;


// Properties

 System::Int32Enum __declspec(property(get=get_value, put=set_value))  value;


// Methods

/// @brief Method add_didChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final true
 void add_didChangeEvent(System::Action value) ;

/// @brief Method remove_didChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final true
 void remove_didChangeEvent(System::Action value) ;

/// @brief Method set_value addr 0x0 size 0xffffffffffffffff virtual true final true
 void set_value(System::Int32Enum value) ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Int32Enum get_value() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static System::Int32Enum op_Implicit_System__Int32Enum(GlobalNamespace::ObservableVariableSO_1<System::Int32Enum> obj) ;

// Ctor Parameters []
explicit ObservableVariableSO_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::ObservableVariableSO_1, "", "ObservableVariableSO`1");
