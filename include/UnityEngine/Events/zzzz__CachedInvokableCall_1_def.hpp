#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Events/zzzz__InvokableCall_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
class Object;
}
namespace System::Reflection {
class MethodInfo;
}
// Forward declare root types
namespace UnityEngine::Events {
template<typename T>
class CachedInvokableCall_1;
}
namespace UnityEngine::Events {
template<::cordl_internals::il2cpp_reference_type T>
class CachedInvokableCall_1<T>;
}
namespace UnityEngine::Events {
template<>
class CachedInvokableCall_1<bool>;
}
namespace UnityEngine::Events {
template<>
class CachedInvokableCall_1<float_t>;
}
namespace UnityEngine::Events {
template<>
class CachedInvokableCall_1<int32_t>;
}
// Type: UnityEngine.Events::CachedInvokableCall`1
// Type: UnityEngine.Events::CachedInvokableCall`1
namespace UnityEngine::Events {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10388), inst: 3785 }), TypeDefinitionIndex(TypeDefinitionIndex(10392)), TypeDefinitionIndex(TypeDefinitionIndex(10388))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10392), inst: 2 })
// CS Name: UnityEngine.Events.CachedInvokableCall`1
class CORDL_TYPE CachedInvokableCall_1<T> : public ::UnityEngine::Events::InvokableCall_1<T> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CachedInvokableCall_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "CachedInvokableCall_1", modifiers: " const&", def_value: None }]
constexpr CachedInvokableCall_1(CachedInvokableCall_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CachedInvokableCall_1", modifiers: "&&", def_value: None }]
constexpr CachedInvokableCall_1(CachedInvokableCall_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CachedInvokableCall_1(void* ptr) noexcept : ::UnityEngine::Events::InvokableCall_1<T>(ptr) {
}


  constexpr CachedInvokableCall_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CachedInvokableCall_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CachedInvokableCall_1& operator=(CachedInvokableCall_1&& o) noexcept = default;
  constexpr CachedInvokableCall_1& operator=(CachedInvokableCall_1 const& o) noexcept = default;
                


// Fields

 T __declspec(property(get=__get_m_Arg1, put=__set_m_Arg1))  m_Arg1;

constexpr void __set_m_Arg1(T value) ;

constexpr T __get_m_Arg1() const;


// Methods

// Ctor Parameters [CppParam { name: "target", ty: "::UnityEngine::Object", modifiers: "", def_value: None }, CppParam { name: "theFunction", ty: "::System::Reflection::MethodInfo", modifiers: "", def_value: None }, CppParam { name: "argument", ty: "T", modifiers: "", def_value: None }]
explicit CachedInvokableCall_1(::UnityEngine::Object target, ::System::Reflection::MethodInfo theFunction, T argument) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::UnityEngine::Object target, ::System::Reflection::MethodInfo theFunction, T argument) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T arg0) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::CachedInvokableCall`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10392)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10388), inst: 3785 }), TypeDefinitionIndex(TypeDefinitionIndex(10388))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10392), inst: 92 })
// CS Name: UnityEngine.Events.CachedInvokableCall`1
class CORDL_TYPE CachedInvokableCall_1<int32_t> : public ::UnityEngine::Events::InvokableCall_1<int32_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CachedInvokableCall_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "CachedInvokableCall_1", modifiers: " const&", def_value: None }]
constexpr CachedInvokableCall_1(CachedInvokableCall_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CachedInvokableCall_1", modifiers: "&&", def_value: None }]
constexpr CachedInvokableCall_1(CachedInvokableCall_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CachedInvokableCall_1(void* ptr) noexcept : ::UnityEngine::Events::InvokableCall_1<int32_t>(ptr) {
}


  constexpr CachedInvokableCall_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CachedInvokableCall_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CachedInvokableCall_1& operator=(CachedInvokableCall_1&& o) noexcept = default;
  constexpr CachedInvokableCall_1& operator=(CachedInvokableCall_1 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_m_Arg1, put=__set_m_Arg1))  m_Arg1;

constexpr void __set_m_Arg1(int32_t value) ;

constexpr int32_t __get_m_Arg1() const;


// Methods

// Ctor Parameters [CppParam { name: "target", ty: "::UnityEngine::Object", modifiers: "", def_value: None }, CppParam { name: "theFunction", ty: "::System::Reflection::MethodInfo", modifiers: "", def_value: None }, CppParam { name: "argument", ty: "int32_t", modifiers: "", def_value: None }]
explicit CachedInvokableCall_1(::UnityEngine::Object target, ::System::Reflection::MethodInfo theFunction, int32_t argument) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::UnityEngine::Object target, ::System::Reflection::MethodInfo theFunction, int32_t argument) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(int32_t arg0) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::CachedInvokableCall`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10392)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10388), inst: 3785 }), TypeDefinitionIndex(TypeDefinitionIndex(10388))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10392), inst: 99 })
// CS Name: UnityEngine.Events.CachedInvokableCall`1
class CORDL_TYPE CachedInvokableCall_1<bool> : public ::UnityEngine::Events::InvokableCall_1<bool> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CachedInvokableCall_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "CachedInvokableCall_1", modifiers: " const&", def_value: None }]
constexpr CachedInvokableCall_1(CachedInvokableCall_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CachedInvokableCall_1", modifiers: "&&", def_value: None }]
constexpr CachedInvokableCall_1(CachedInvokableCall_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CachedInvokableCall_1(void* ptr) noexcept : ::UnityEngine::Events::InvokableCall_1<bool>(ptr) {
}


  constexpr CachedInvokableCall_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CachedInvokableCall_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CachedInvokableCall_1& operator=(CachedInvokableCall_1&& o) noexcept = default;
  constexpr CachedInvokableCall_1& operator=(CachedInvokableCall_1 const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_m_Arg1, put=__set_m_Arg1))  m_Arg1;

constexpr void __set_m_Arg1(bool value) ;

constexpr bool __get_m_Arg1() const;


// Methods

// Ctor Parameters [CppParam { name: "target", ty: "::UnityEngine::Object", modifiers: "", def_value: None }, CppParam { name: "theFunction", ty: "::System::Reflection::MethodInfo", modifiers: "", def_value: None }, CppParam { name: "argument", ty: "bool", modifiers: "", def_value: None }]
explicit CachedInvokableCall_1(::UnityEngine::Object target, ::System::Reflection::MethodInfo theFunction, bool argument) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::UnityEngine::Object target, ::System::Reflection::MethodInfo theFunction, bool argument) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(bool arg0) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::CachedInvokableCall`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10388)), TypeDefinitionIndex(TypeDefinitionIndex(10392)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10388), inst: 3785 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10392), inst: 374 })
// CS Name: UnityEngine.Events.CachedInvokableCall`1
class CORDL_TYPE CachedInvokableCall_1<float_t> : public ::UnityEngine::Events::InvokableCall_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CachedInvokableCall_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "CachedInvokableCall_1", modifiers: " const&", def_value: None }]
constexpr CachedInvokableCall_1(CachedInvokableCall_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CachedInvokableCall_1", modifiers: "&&", def_value: None }]
constexpr CachedInvokableCall_1(CachedInvokableCall_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CachedInvokableCall_1(void* ptr) noexcept : ::UnityEngine::Events::InvokableCall_1<float_t>(ptr) {
}


  constexpr CachedInvokableCall_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CachedInvokableCall_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CachedInvokableCall_1& operator=(CachedInvokableCall_1&& o) noexcept = default;
  constexpr CachedInvokableCall_1& operator=(CachedInvokableCall_1 const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_m_Arg1, put=__set_m_Arg1))  m_Arg1;

constexpr void __set_m_Arg1(float_t value) ;

constexpr float_t __get_m_Arg1() const;


// Methods

// Ctor Parameters [CppParam { name: "target", ty: "::UnityEngine::Object", modifiers: "", def_value: None }, CppParam { name: "theFunction", ty: "::System::Reflection::MethodInfo", modifiers: "", def_value: None }, CppParam { name: "argument", ty: "float_t", modifiers: "", def_value: None }]
explicit CachedInvokableCall_1(::UnityEngine::Object target, ::System::Reflection::MethodInfo theFunction, float_t argument) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::UnityEngine::Object target, ::System::Reflection::MethodInfo theFunction, float_t argument) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(float_t arg0) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Events::CachedInvokableCall_1, "UnityEngine.Events", "CachedInvokableCall`1");
