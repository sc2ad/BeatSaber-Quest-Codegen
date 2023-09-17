#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Events/zzzz__BaseInvokableCall_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine::Events {
template<typename T0>
class UnityAction_1;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
struct Int32Enum;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputAction__CallbackContext;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Events {
template<typename T1>
class InvokableCall_1;
}
namespace UnityEngine::Events {
template<::cordl_internals::il2cpp_reference_type T1>
class InvokableCall_1<T1>;
}
namespace UnityEngine::Events {
template<>
class InvokableCall_1<::System::Int32Enum>;
}
namespace UnityEngine::Events {
template<>
class InvokableCall_1<::UnityEngine::Color>;
}
namespace UnityEngine::Events {
template<>
class InvokableCall_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext>;
}
namespace UnityEngine::Events {
template<>
class InvokableCall_1<::UnityEngine::Vector2>;
}
namespace UnityEngine::Events {
template<>
class InvokableCall_1<bool>;
}
namespace UnityEngine::Events {
template<>
class InvokableCall_1<float_t>;
}
namespace UnityEngine::Events {
template<>
class InvokableCall_1<int32_t>;
}
// Type: UnityEngine.Events::InvokableCall`1
// Type: UnityEngine.Events::InvokableCall`1
namespace UnityEngine::Events {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10388)), TypeDefinitionIndex(TypeDefinitionIndex(10386))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10388), inst: 2 })
// CS Name: UnityEngine.Events.InvokableCall`1
class CORDL_TYPE InvokableCall_1<T1> : public ::UnityEngine::Events::BaseInvokableCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~InvokableCall_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_1", modifiers: " const&", def_value: None }]
constexpr InvokableCall_1(InvokableCall_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_1", modifiers: "&&", def_value: None }]
constexpr InvokableCall_1(InvokableCall_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InvokableCall_1(void* ptr) noexcept : ::UnityEngine::Events::BaseInvokableCall(ptr) {
}


  constexpr InvokableCall_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InvokableCall_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InvokableCall_1& operator=(InvokableCall_1&& o) noexcept = default;
  constexpr InvokableCall_1& operator=(InvokableCall_1 const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Events::UnityAction_1<T1> __declspec(property(get=__get_Delegate, put=__set_Delegate))  Delegate;

constexpr void __set_Delegate(::UnityEngine::Events::UnityAction_1<T1> value) ;

constexpr ::UnityEngine::Events::UnityAction_1<T1> __get_Delegate() const;


// Methods

/// @brief Method add_Delegate addr 0x0 size 0xffffffffffffffff virtual false final false
 void add_Delegate(::UnityEngine::Events::UnityAction_1<T1> value) ;

/// @brief Method remove_Delegate addr 0x0 size 0xffffffffffffffff virtual false final false
 void remove_Delegate(::UnityEngine::Events::UnityAction_1<T1> value) ;

// Ctor Parameters [CppParam { name: "target", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "theFunction", ty: "::System::Reflection::MethodInfo", modifiers: "", def_value: None }]
explicit InvokableCall_1(::bs_hook::Il2CppWrapperType target, ::System::Reflection::MethodInfo theFunction) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType target, ::System::Reflection::MethodInfo theFunction) ;

// Ctor Parameters [CppParam { name: "action", ty: "::UnityEngine::Events::UnityAction_1<T1>", modifiers: "", def_value: None }]
explicit InvokableCall_1(::UnityEngine::Events::UnityAction_1<T1> action) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::UnityEngine::Events::UnityAction_1<T1> action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 args0) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Find(::bs_hook::Il2CppWrapperType targetObj, ::System::Reflection::MethodInfo method) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::InvokableCall`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10386)), TypeDefinitionIndex(TypeDefinitionIndex(10388))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10388), inst: 92 })
// CS Name: UnityEngine.Events.InvokableCall`1
class CORDL_TYPE InvokableCall_1<int32_t> : public ::UnityEngine::Events::BaseInvokableCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~InvokableCall_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_1", modifiers: " const&", def_value: None }]
constexpr InvokableCall_1(InvokableCall_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_1", modifiers: "&&", def_value: None }]
constexpr InvokableCall_1(InvokableCall_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InvokableCall_1(void* ptr) noexcept : ::UnityEngine::Events::BaseInvokableCall(ptr) {
}


  constexpr InvokableCall_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InvokableCall_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InvokableCall_1& operator=(InvokableCall_1&& o) noexcept = default;
  constexpr InvokableCall_1& operator=(InvokableCall_1 const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Events::UnityAction_1<int32_t> __declspec(property(get=__get_Delegate, put=__set_Delegate))  Delegate;

constexpr void __set_Delegate(::UnityEngine::Events::UnityAction_1<int32_t> value) ;

constexpr ::UnityEngine::Events::UnityAction_1<int32_t> __get_Delegate() const;


// Methods

/// @brief Method add_Delegate addr 0x0 size 0xffffffffffffffff virtual false final false
 void add_Delegate(::UnityEngine::Events::UnityAction_1<int32_t> value) ;

/// @brief Method remove_Delegate addr 0x0 size 0xffffffffffffffff virtual false final false
 void remove_Delegate(::UnityEngine::Events::UnityAction_1<int32_t> value) ;

// Ctor Parameters [CppParam { name: "target", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "theFunction", ty: "::System::Reflection::MethodInfo", modifiers: "", def_value: None }]
explicit InvokableCall_1(::bs_hook::Il2CppWrapperType target, ::System::Reflection::MethodInfo theFunction) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType target, ::System::Reflection::MethodInfo theFunction) ;

// Ctor Parameters [CppParam { name: "action", ty: "::UnityEngine::Events::UnityAction_1<int32_t>", modifiers: "", def_value: None }]
explicit InvokableCall_1(::UnityEngine::Events::UnityAction_1<int32_t> action) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::UnityEngine::Events::UnityAction_1<int32_t> action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(int32_t args0) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Find(::bs_hook::Il2CppWrapperType targetObj, ::System::Reflection::MethodInfo method) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::InvokableCall`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10386)), TypeDefinitionIndex(TypeDefinitionIndex(10388))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10388), inst: 99 })
// CS Name: UnityEngine.Events.InvokableCall`1
class CORDL_TYPE InvokableCall_1<bool> : public ::UnityEngine::Events::BaseInvokableCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~InvokableCall_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_1", modifiers: " const&", def_value: None }]
constexpr InvokableCall_1(InvokableCall_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_1", modifiers: "&&", def_value: None }]
constexpr InvokableCall_1(InvokableCall_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InvokableCall_1(void* ptr) noexcept : ::UnityEngine::Events::BaseInvokableCall(ptr) {
}


  constexpr InvokableCall_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InvokableCall_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InvokableCall_1& operator=(InvokableCall_1&& o) noexcept = default;
  constexpr InvokableCall_1& operator=(InvokableCall_1 const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Events::UnityAction_1<bool> __declspec(property(get=__get_Delegate, put=__set_Delegate))  Delegate;

constexpr void __set_Delegate(::UnityEngine::Events::UnityAction_1<bool> value) ;

constexpr ::UnityEngine::Events::UnityAction_1<bool> __get_Delegate() const;


// Methods

/// @brief Method add_Delegate addr 0x0 size 0xffffffffffffffff virtual false final false
 void add_Delegate(::UnityEngine::Events::UnityAction_1<bool> value) ;

/// @brief Method remove_Delegate addr 0x0 size 0xffffffffffffffff virtual false final false
 void remove_Delegate(::UnityEngine::Events::UnityAction_1<bool> value) ;

// Ctor Parameters [CppParam { name: "target", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "theFunction", ty: "::System::Reflection::MethodInfo", modifiers: "", def_value: None }]
explicit InvokableCall_1(::bs_hook::Il2CppWrapperType target, ::System::Reflection::MethodInfo theFunction) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType target, ::System::Reflection::MethodInfo theFunction) ;

// Ctor Parameters [CppParam { name: "action", ty: "::UnityEngine::Events::UnityAction_1<bool>", modifiers: "", def_value: None }]
explicit InvokableCall_1(::UnityEngine::Events::UnityAction_1<bool> action) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::UnityEngine::Events::UnityAction_1<bool> action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(bool args0) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Find(::bs_hook::Il2CppWrapperType targetObj, ::System::Reflection::MethodInfo method) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::InvokableCall`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10386)), TypeDefinitionIndex(TypeDefinitionIndex(10388))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10388), inst: 280 })
// CS Name: UnityEngine.Events.InvokableCall`1
class CORDL_TYPE InvokableCall_1<::UnityEngine::Color> : public ::UnityEngine::Events::BaseInvokableCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~InvokableCall_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_1", modifiers: " const&", def_value: None }]
constexpr InvokableCall_1(InvokableCall_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_1", modifiers: "&&", def_value: None }]
constexpr InvokableCall_1(InvokableCall_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InvokableCall_1(void* ptr) noexcept : ::UnityEngine::Events::BaseInvokableCall(ptr) {
}


  constexpr InvokableCall_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InvokableCall_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InvokableCall_1& operator=(InvokableCall_1&& o) noexcept = default;
  constexpr InvokableCall_1& operator=(InvokableCall_1 const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Events::UnityAction_1<::UnityEngine::Color> __declspec(property(get=__get_Delegate, put=__set_Delegate))  Delegate;

constexpr void __set_Delegate(::UnityEngine::Events::UnityAction_1<::UnityEngine::Color> value) ;

constexpr ::UnityEngine::Events::UnityAction_1<::UnityEngine::Color> __get_Delegate() const;


// Methods

/// @brief Method add_Delegate addr 0x0 size 0xffffffffffffffff virtual false final false
 void add_Delegate(::UnityEngine::Events::UnityAction_1<::UnityEngine::Color> value) ;

/// @brief Method remove_Delegate addr 0x0 size 0xffffffffffffffff virtual false final false
 void remove_Delegate(::UnityEngine::Events::UnityAction_1<::UnityEngine::Color> value) ;

// Ctor Parameters [CppParam { name: "target", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "theFunction", ty: "::System::Reflection::MethodInfo", modifiers: "", def_value: None }]
explicit InvokableCall_1(::bs_hook::Il2CppWrapperType target, ::System::Reflection::MethodInfo theFunction) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType target, ::System::Reflection::MethodInfo theFunction) ;

// Ctor Parameters [CppParam { name: "action", ty: "::UnityEngine::Events::UnityAction_1<::UnityEngine::Color>", modifiers: "", def_value: None }]
explicit InvokableCall_1(::UnityEngine::Events::UnityAction_1<::UnityEngine::Color> action) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::UnityEngine::Events::UnityAction_1<::UnityEngine::Color> action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(::UnityEngine::Color args0) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Find(::bs_hook::Il2CppWrapperType targetObj, ::System::Reflection::MethodInfo method) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::InvokableCall`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10386)), TypeDefinitionIndex(TypeDefinitionIndex(10388))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10388), inst: 374 })
// CS Name: UnityEngine.Events.InvokableCall`1
class CORDL_TYPE InvokableCall_1<float_t> : public ::UnityEngine::Events::BaseInvokableCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~InvokableCall_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_1", modifiers: " const&", def_value: None }]
constexpr InvokableCall_1(InvokableCall_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_1", modifiers: "&&", def_value: None }]
constexpr InvokableCall_1(InvokableCall_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InvokableCall_1(void* ptr) noexcept : ::UnityEngine::Events::BaseInvokableCall(ptr) {
}


  constexpr InvokableCall_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InvokableCall_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InvokableCall_1& operator=(InvokableCall_1&& o) noexcept = default;
  constexpr InvokableCall_1& operator=(InvokableCall_1 const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Events::UnityAction_1<float_t> __declspec(property(get=__get_Delegate, put=__set_Delegate))  Delegate;

constexpr void __set_Delegate(::UnityEngine::Events::UnityAction_1<float_t> value) ;

constexpr ::UnityEngine::Events::UnityAction_1<float_t> __get_Delegate() const;


// Methods

/// @brief Method add_Delegate addr 0x0 size 0xffffffffffffffff virtual false final false
 void add_Delegate(::UnityEngine::Events::UnityAction_1<float_t> value) ;

/// @brief Method remove_Delegate addr 0x0 size 0xffffffffffffffff virtual false final false
 void remove_Delegate(::UnityEngine::Events::UnityAction_1<float_t> value) ;

// Ctor Parameters [CppParam { name: "target", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "theFunction", ty: "::System::Reflection::MethodInfo", modifiers: "", def_value: None }]
explicit InvokableCall_1(::bs_hook::Il2CppWrapperType target, ::System::Reflection::MethodInfo theFunction) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType target, ::System::Reflection::MethodInfo theFunction) ;

// Ctor Parameters [CppParam { name: "action", ty: "::UnityEngine::Events::UnityAction_1<float_t>", modifiers: "", def_value: None }]
explicit InvokableCall_1(::UnityEngine::Events::UnityAction_1<float_t> action) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::UnityEngine::Events::UnityAction_1<float_t> action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(float_t args0) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Find(::bs_hook::Il2CppWrapperType targetObj, ::System::Reflection::MethodInfo method) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::InvokableCall`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10388)), TypeDefinitionIndex(TypeDefinitionIndex(10386))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10388), inst: 393 })
// CS Name: UnityEngine.Events.InvokableCall`1
class CORDL_TYPE InvokableCall_1<::UnityEngine::Vector2> : public ::UnityEngine::Events::BaseInvokableCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~InvokableCall_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_1", modifiers: " const&", def_value: None }]
constexpr InvokableCall_1(InvokableCall_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_1", modifiers: "&&", def_value: None }]
constexpr InvokableCall_1(InvokableCall_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InvokableCall_1(void* ptr) noexcept : ::UnityEngine::Events::BaseInvokableCall(ptr) {
}


  constexpr InvokableCall_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InvokableCall_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InvokableCall_1& operator=(InvokableCall_1&& o) noexcept = default;
  constexpr InvokableCall_1& operator=(InvokableCall_1 const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2> __declspec(property(get=__get_Delegate, put=__set_Delegate))  Delegate;

constexpr void __set_Delegate(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2> value) ;

constexpr ::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2> __get_Delegate() const;


// Methods

/// @brief Method add_Delegate addr 0x0 size 0xffffffffffffffff virtual false final false
 void add_Delegate(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2> value) ;

/// @brief Method remove_Delegate addr 0x0 size 0xffffffffffffffff virtual false final false
 void remove_Delegate(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2> value) ;

// Ctor Parameters [CppParam { name: "target", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "theFunction", ty: "::System::Reflection::MethodInfo", modifiers: "", def_value: None }]
explicit InvokableCall_1(::bs_hook::Il2CppWrapperType target, ::System::Reflection::MethodInfo theFunction) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType target, ::System::Reflection::MethodInfo theFunction) ;

// Ctor Parameters [CppParam { name: "action", ty: "::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>", modifiers: "", def_value: None }]
explicit InvokableCall_1(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2> action) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2> action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(::UnityEngine::Vector2 args0) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Find(::bs_hook::Il2CppWrapperType targetObj, ::System::Reflection::MethodInfo method) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::InvokableCall`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10386)), TypeDefinitionIndex(TypeDefinitionIndex(10388))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10388), inst: 408 })
// CS Name: UnityEngine.Events.InvokableCall`1
class CORDL_TYPE InvokableCall_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> : public ::UnityEngine::Events::BaseInvokableCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~InvokableCall_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_1", modifiers: " const&", def_value: None }]
constexpr InvokableCall_1(InvokableCall_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_1", modifiers: "&&", def_value: None }]
constexpr InvokableCall_1(InvokableCall_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InvokableCall_1(void* ptr) noexcept : ::UnityEngine::Events::BaseInvokableCall(ptr) {
}


  constexpr InvokableCall_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InvokableCall_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InvokableCall_1& operator=(InvokableCall_1&& o) noexcept = default;
  constexpr InvokableCall_1& operator=(InvokableCall_1 const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Events::UnityAction_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> __declspec(property(get=__get_Delegate, put=__set_Delegate))  Delegate;

constexpr void __set_Delegate(::UnityEngine::Events::UnityAction_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> value) ;

constexpr ::UnityEngine::Events::UnityAction_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> __get_Delegate() const;


// Methods

/// @brief Method add_Delegate addr 0x0 size 0xffffffffffffffff virtual false final false
 void add_Delegate(::UnityEngine::Events::UnityAction_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> value) ;

/// @brief Method remove_Delegate addr 0x0 size 0xffffffffffffffff virtual false final false
 void remove_Delegate(::UnityEngine::Events::UnityAction_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> value) ;

// Ctor Parameters [CppParam { name: "target", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "theFunction", ty: "::System::Reflection::MethodInfo", modifiers: "", def_value: None }]
explicit InvokableCall_1(::bs_hook::Il2CppWrapperType target, ::System::Reflection::MethodInfo theFunction) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType target, ::System::Reflection::MethodInfo theFunction) ;

// Ctor Parameters [CppParam { name: "action", ty: "::UnityEngine::Events::UnityAction_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext>", modifiers: "", def_value: None }]
explicit InvokableCall_1(::UnityEngine::Events::UnityAction_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> action) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::UnityEngine::Events::UnityAction_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext args0) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Find(::bs_hook::Il2CppWrapperType targetObj, ::System::Reflection::MethodInfo method) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::InvokableCall`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10386)), TypeDefinitionIndex(TypeDefinitionIndex(10388))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10388), inst: 4825 })
// CS Name: UnityEngine.Events.InvokableCall`1
class CORDL_TYPE InvokableCall_1<::System::Int32Enum> : public ::UnityEngine::Events::BaseInvokableCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~InvokableCall_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_1", modifiers: " const&", def_value: None }]
constexpr InvokableCall_1(InvokableCall_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCall_1", modifiers: "&&", def_value: None }]
constexpr InvokableCall_1(InvokableCall_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InvokableCall_1(void* ptr) noexcept : ::UnityEngine::Events::BaseInvokableCall(ptr) {
}


  constexpr InvokableCall_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InvokableCall_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InvokableCall_1& operator=(InvokableCall_1&& o) noexcept = default;
  constexpr InvokableCall_1& operator=(InvokableCall_1 const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Events::UnityAction_1<::System::Int32Enum> __declspec(property(get=__get_Delegate, put=__set_Delegate))  Delegate;

constexpr void __set_Delegate(::UnityEngine::Events::UnityAction_1<::System::Int32Enum> value) ;

constexpr ::UnityEngine::Events::UnityAction_1<::System::Int32Enum> __get_Delegate() const;


// Methods

/// @brief Method add_Delegate addr 0x0 size 0xffffffffffffffff virtual false final false
 void add_Delegate(::UnityEngine::Events::UnityAction_1<::System::Int32Enum> value) ;

/// @brief Method remove_Delegate addr 0x0 size 0xffffffffffffffff virtual false final false
 void remove_Delegate(::UnityEngine::Events::UnityAction_1<::System::Int32Enum> value) ;

// Ctor Parameters [CppParam { name: "target", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "theFunction", ty: "::System::Reflection::MethodInfo", modifiers: "", def_value: None }]
explicit InvokableCall_1(::bs_hook::Il2CppWrapperType target, ::System::Reflection::MethodInfo theFunction) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType target, ::System::Reflection::MethodInfo theFunction) ;

// Ctor Parameters [CppParam { name: "action", ty: "::UnityEngine::Events::UnityAction_1<::System::Int32Enum>", modifiers: "", def_value: None }]
explicit InvokableCall_1(::UnityEngine::Events::UnityAction_1<::System::Int32Enum> action) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::UnityEngine::Events::UnityAction_1<::System::Int32Enum> action) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(::System::Int32Enum args0) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Find(::bs_hook::Il2CppWrapperType targetObj, ::System::Reflection::MethodInfo method) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Events::InvokableCall_1, "UnityEngine.Events", "InvokableCall`1");
