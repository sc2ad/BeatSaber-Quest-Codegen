#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Events/zzzz__UnityEventBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System {
struct Int32Enum;
}
namespace System::Reflection {
class MethodInfo;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityAction_1;
}
namespace UnityEngine::Events {
class BaseInvokableCall;
}
namespace System {
class Type;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::InputSystem {
struct UnityEngine__InputSystem__InputAction__CallbackContext;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
template<>
class UnityEvent_1<System::Int32Enum>;
}
namespace UnityEngine::Events {
template<::cordl_internals::il2cpp_reference_type T0>
class UnityEvent_1<T0>;
}
namespace UnityEngine::Events {
template<::cordl_internals::is_or_is_backed_by<int32_t> T0>
class UnityEvent_1<T0>;
}
namespace UnityEngine::Events {
template<>
class UnityEvent_1<UnityEngine::Color>;
}
namespace UnityEngine::Events {
template<>
class UnityEvent_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext>;
}
namespace UnityEngine::Events {
template<>
class UnityEvent_1<UnityEngine::Vector2>;
}
namespace UnityEngine::Events {
template<>
class UnityEvent_1<bool>;
}
namespace UnityEngine::Events {
template<>
class UnityEvent_1<float_t>;
}
// Type: UnityEngine.Events::UnityEvent`1
// Type: UnityEngine.Events::UnityEvent`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10401)), TypeDefinitionIndex(TypeDefinitionIndex(10397))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10401), inst: 4825 })
// CS Name: UnityEngine.Events.UnityEvent`1
class CORDL_TYPE UnityEvent_1<System::Int32Enum> : public UnityEngine::Events::UnityEventBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEvent_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_1", modifiers: " const&", def_value: None }]
constexpr UnityEvent_1(UnityEvent_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_1", modifiers: "&&", def_value: None }]
constexpr UnityEvent_1(UnityEvent_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEvent_1(void* ptr) noexcept : UnityEngine::Events::UnityEventBase(ptr) {
}


  constexpr UnityEvent_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEvent_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEvent_1& operator=(UnityEvent_1&& o) noexcept = default;
  constexpr UnityEvent_1& operator=(UnityEvent_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_m_InvokeArray, put=__set_m_InvokeArray))  m_InvokeArray;

constexpr void __set_m_InvokeArray(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get_m_InvokeArray() const;


// Methods

static UnityEngine::Events::UnityEvent_1<System::Int32Enum> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method AddListener addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddListener(UnityEngine::Events::UnityAction_1<System::Int32Enum> call) ;

/// @brief Method RemoveListener addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveListener(UnityEngine::Events::UnityAction_1<System::Int32Enum> call) ;

/// @brief Method FindMethod_Impl addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Reflection::MethodInfo FindMethod_Impl(::StringW name, System::Type targetObjType) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Events::BaseInvokableCall GetDelegate(::bs_hook::Il2CppWrapperType target, System::Reflection::MethodInfo theFunction) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::Events::BaseInvokableCall GetDelegate(UnityEngine::Events::UnityAction_1<System::Int32Enum> action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
 void Invoke(System::Int32Enum arg0) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::UnityEvent`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10397)), TypeDefinitionIndex(TypeDefinitionIndex(10401))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10401), inst: 408 })
// CS Name: UnityEngine.Events.UnityEvent`1
class CORDL_TYPE UnityEvent_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext> : public UnityEngine::Events::UnityEventBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEvent_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_1", modifiers: " const&", def_value: None }]
constexpr UnityEvent_1(UnityEvent_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_1", modifiers: "&&", def_value: None }]
constexpr UnityEvent_1(UnityEvent_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEvent_1(void* ptr) noexcept : UnityEngine::Events::UnityEventBase(ptr) {
}


  constexpr UnityEvent_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEvent_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEvent_1& operator=(UnityEvent_1&& o) noexcept = default;
  constexpr UnityEvent_1& operator=(UnityEvent_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_m_InvokeArray, put=__set_m_InvokeArray))  m_InvokeArray;

constexpr void __set_m_InvokeArray(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get_m_InvokeArray() const;


// Methods

static UnityEngine::Events::UnityEvent_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method AddListener addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddListener(UnityEngine::Events::UnityAction_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext> call) ;

/// @brief Method RemoveListener addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveListener(UnityEngine::Events::UnityAction_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext> call) ;

/// @brief Method FindMethod_Impl addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Reflection::MethodInfo FindMethod_Impl(::StringW name, System::Type targetObjType) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Events::BaseInvokableCall GetDelegate(::bs_hook::Il2CppWrapperType target, System::Reflection::MethodInfo theFunction) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::Events::BaseInvokableCall GetDelegate(UnityEngine::Events::UnityAction_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext> action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
 void Invoke(UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext arg0) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::UnityEvent`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10397)), TypeDefinitionIndex(TypeDefinitionIndex(10401))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10401), inst: 393 })
// CS Name: UnityEngine.Events.UnityEvent`1
class CORDL_TYPE UnityEvent_1<UnityEngine::Vector2> : public UnityEngine::Events::UnityEventBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEvent_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_1", modifiers: " const&", def_value: None }]
constexpr UnityEvent_1(UnityEvent_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_1", modifiers: "&&", def_value: None }]
constexpr UnityEvent_1(UnityEvent_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEvent_1(void* ptr) noexcept : UnityEngine::Events::UnityEventBase(ptr) {
}


  constexpr UnityEvent_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEvent_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEvent_1& operator=(UnityEvent_1&& o) noexcept = default;
  constexpr UnityEvent_1& operator=(UnityEvent_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_m_InvokeArray, put=__set_m_InvokeArray))  m_InvokeArray;

constexpr void __set_m_InvokeArray(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get_m_InvokeArray() const;


// Methods

static UnityEngine::Events::UnityEvent_1<UnityEngine::Vector2> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method AddListener addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddListener(UnityEngine::Events::UnityAction_1<UnityEngine::Vector2> call) ;

/// @brief Method RemoveListener addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveListener(UnityEngine::Events::UnityAction_1<UnityEngine::Vector2> call) ;

/// @brief Method FindMethod_Impl addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Reflection::MethodInfo FindMethod_Impl(::StringW name, System::Type targetObjType) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Events::BaseInvokableCall GetDelegate(::bs_hook::Il2CppWrapperType target, System::Reflection::MethodInfo theFunction) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::Events::BaseInvokableCall GetDelegate(UnityEngine::Events::UnityAction_1<UnityEngine::Vector2> action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
 void Invoke(UnityEngine::Vector2 arg0) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::UnityEvent`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10401)), TypeDefinitionIndex(TypeDefinitionIndex(10397))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10401), inst: 374 })
// CS Name: UnityEngine.Events.UnityEvent`1
class CORDL_TYPE UnityEvent_1<float_t> : public UnityEngine::Events::UnityEventBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEvent_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_1", modifiers: " const&", def_value: None }]
constexpr UnityEvent_1(UnityEvent_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_1", modifiers: "&&", def_value: None }]
constexpr UnityEvent_1(UnityEvent_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEvent_1(void* ptr) noexcept : UnityEngine::Events::UnityEventBase(ptr) {
}


  constexpr UnityEvent_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEvent_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEvent_1& operator=(UnityEvent_1&& o) noexcept = default;
  constexpr UnityEvent_1& operator=(UnityEvent_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_m_InvokeArray, put=__set_m_InvokeArray))  m_InvokeArray;

constexpr void __set_m_InvokeArray(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get_m_InvokeArray() const;


// Methods

static UnityEngine::Events::UnityEvent_1<float_t> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method AddListener addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddListener(UnityEngine::Events::UnityAction_1<float_t> call) ;

/// @brief Method RemoveListener addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveListener(UnityEngine::Events::UnityAction_1<float_t> call) ;

/// @brief Method FindMethod_Impl addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Reflection::MethodInfo FindMethod_Impl(::StringW name, System::Type targetObjType) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Events::BaseInvokableCall GetDelegate(::bs_hook::Il2CppWrapperType target, System::Reflection::MethodInfo theFunction) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::Events::BaseInvokableCall GetDelegate(UnityEngine::Events::UnityAction_1<float_t> action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
 void Invoke(float_t arg0) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::UnityEvent`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10401)), TypeDefinitionIndex(TypeDefinitionIndex(10397))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10401), inst: 280 })
// CS Name: UnityEngine.Events.UnityEvent`1
class CORDL_TYPE UnityEvent_1<UnityEngine::Color> : public UnityEngine::Events::UnityEventBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEvent_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_1", modifiers: " const&", def_value: None }]
constexpr UnityEvent_1(UnityEvent_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_1", modifiers: "&&", def_value: None }]
constexpr UnityEvent_1(UnityEvent_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEvent_1(void* ptr) noexcept : UnityEngine::Events::UnityEventBase(ptr) {
}


  constexpr UnityEvent_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEvent_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEvent_1& operator=(UnityEvent_1&& o) noexcept = default;
  constexpr UnityEvent_1& operator=(UnityEvent_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_m_InvokeArray, put=__set_m_InvokeArray))  m_InvokeArray;

constexpr void __set_m_InvokeArray(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get_m_InvokeArray() const;


// Methods

static UnityEngine::Events::UnityEvent_1<UnityEngine::Color> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method AddListener addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddListener(UnityEngine::Events::UnityAction_1<UnityEngine::Color> call) ;

/// @brief Method RemoveListener addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveListener(UnityEngine::Events::UnityAction_1<UnityEngine::Color> call) ;

/// @brief Method FindMethod_Impl addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Reflection::MethodInfo FindMethod_Impl(::StringW name, System::Type targetObjType) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Events::BaseInvokableCall GetDelegate(::bs_hook::Il2CppWrapperType target, System::Reflection::MethodInfo theFunction) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::Events::BaseInvokableCall GetDelegate(UnityEngine::Events::UnityAction_1<UnityEngine::Color> action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
 void Invoke(UnityEngine::Color arg0) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::UnityEvent`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10397)), TypeDefinitionIndex(TypeDefinitionIndex(10401))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10401), inst: 99 })
// CS Name: UnityEngine.Events.UnityEvent`1
class CORDL_TYPE UnityEvent_1<bool> : public UnityEngine::Events::UnityEventBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEvent_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_1", modifiers: " const&", def_value: None }]
constexpr UnityEvent_1(UnityEvent_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_1", modifiers: "&&", def_value: None }]
constexpr UnityEvent_1(UnityEvent_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEvent_1(void* ptr) noexcept : UnityEngine::Events::UnityEventBase(ptr) {
}


  constexpr UnityEvent_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEvent_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEvent_1& operator=(UnityEvent_1&& o) noexcept = default;
  constexpr UnityEvent_1& operator=(UnityEvent_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_m_InvokeArray, put=__set_m_InvokeArray))  m_InvokeArray;

constexpr void __set_m_InvokeArray(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get_m_InvokeArray() const;


// Methods

static UnityEngine::Events::UnityEvent_1<bool> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method AddListener addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddListener(UnityEngine::Events::UnityAction_1<bool> call) ;

/// @brief Method RemoveListener addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveListener(UnityEngine::Events::UnityAction_1<bool> call) ;

/// @brief Method FindMethod_Impl addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Reflection::MethodInfo FindMethod_Impl(::StringW name, System::Type targetObjType) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Events::BaseInvokableCall GetDelegate(::bs_hook::Il2CppWrapperType target, System::Reflection::MethodInfo theFunction) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::Events::BaseInvokableCall GetDelegate(UnityEngine::Events::UnityAction_1<bool> action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
 void Invoke(bool arg0) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::UnityEvent`1
namespace UnityEngine::Events {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T0>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10397)), TypeDefinitionIndex(TypeDefinitionIndex(10401))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10401), inst: 92 })
// CS Name: UnityEngine.Events.UnityEvent`1
class CORDL_TYPE UnityEvent_1<T0> : public UnityEngine::Events::UnityEventBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEvent_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_1", modifiers: " const&", def_value: None }]
constexpr UnityEvent_1(UnityEvent_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_1", modifiers: "&&", def_value: None }]
constexpr UnityEvent_1(UnityEvent_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEvent_1(void* ptr) noexcept : UnityEngine::Events::UnityEventBase(ptr) {
}


  constexpr UnityEvent_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEvent_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEvent_1& operator=(UnityEvent_1&& o) noexcept = default;
  constexpr UnityEvent_1& operator=(UnityEvent_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_m_InvokeArray, put=__set_m_InvokeArray))  m_InvokeArray;

constexpr void __set_m_InvokeArray(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get_m_InvokeArray() const;


// Methods

static UnityEngine::Events::UnityEvent_1<T0> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method AddListener addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddListener(UnityEngine::Events::UnityAction_1<T0> call) ;

/// @brief Method RemoveListener addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveListener(UnityEngine::Events::UnityAction_1<T0> call) ;

/// @brief Method FindMethod_Impl addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Reflection::MethodInfo FindMethod_Impl(::StringW name, System::Type targetObjType) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Events::BaseInvokableCall GetDelegate(::bs_hook::Il2CppWrapperType target, System::Reflection::MethodInfo theFunction) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::Events::BaseInvokableCall GetDelegate(UnityEngine::Events::UnityAction_1<T0> action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
 void Invoke(T0 arg0) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::UnityEvent`1
namespace UnityEngine::Events {
// cpp template
template<::cordl_internals::il2cpp_reference_type T0>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10401)), TypeDefinitionIndex(TypeDefinitionIndex(10397))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10401), inst: 2 })
// CS Name: UnityEngine.Events.UnityEvent`1
class CORDL_TYPE UnityEvent_1<T0> : public UnityEngine::Events::UnityEventBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEvent_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_1", modifiers: " const&", def_value: None }]
constexpr UnityEvent_1(UnityEvent_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent_1", modifiers: "&&", def_value: None }]
constexpr UnityEvent_1(UnityEvent_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEvent_1(void* ptr) noexcept : UnityEngine::Events::UnityEventBase(ptr) {
}


  constexpr UnityEvent_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEvent_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEvent_1& operator=(UnityEvent_1&& o) noexcept = default;
  constexpr UnityEvent_1& operator=(UnityEvent_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_m_InvokeArray, put=__set_m_InvokeArray))  m_InvokeArray;

constexpr void __set_m_InvokeArray(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get_m_InvokeArray() const;


// Methods

static UnityEngine::Events::UnityEvent_1<T0> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method AddListener addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddListener(UnityEngine::Events::UnityAction_1<T0> call) ;

/// @brief Method RemoveListener addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveListener(UnityEngine::Events::UnityAction_1<T0> call) ;

/// @brief Method FindMethod_Impl addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Reflection::MethodInfo FindMethod_Impl(::StringW name, System::Type targetObjType) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Events::BaseInvokableCall GetDelegate(::bs_hook::Il2CppWrapperType target, System::Reflection::MethodInfo theFunction) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::Events::BaseInvokableCall GetDelegate(UnityEngine::Events::UnityAction_1<T0> action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
 void Invoke(T0 arg0) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::Events::UnityEvent_1, "UnityEngine.Events", "UnityEvent`1");
