#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__Signal_def.hpp"
#include <cmath>
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class GenericSignal_1;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class GenericSignal_1<T>;
}
namespace GlobalNamespace {
template<>
class GenericSignal_1<UnityEngine::Color>;
}
namespace GlobalNamespace {
template<>
class GenericSignal_1<bool>;
}
namespace GlobalNamespace {
template<>
class GenericSignal_1<float_t>;
}
// Type: ::GenericSignal`1
// Type: ::GenericSignal`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13881)), TypeDefinitionIndex(TypeDefinitionIndex(13882))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13881), inst: 2 })
// CS Name: GenericSignal`1
class CORDL_TYPE GenericSignal_1<T> : public GlobalNamespace::Signal {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GenericSignal_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericSignal_1", modifiers: " const&", def_value: None }]
constexpr GenericSignal_1(GenericSignal_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericSignal_1", modifiers: "&&", def_value: None }]
constexpr GenericSignal_1(GenericSignal_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericSignal_1(void* ptr) noexcept : GlobalNamespace::Signal(ptr) {
}


  constexpr GenericSignal_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericSignal_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericSignal_1& operator=(GenericSignal_1&& o) noexcept = default;
  constexpr GenericSignal_1& operator=(GenericSignal_1 const& o) noexcept = default;
                


// Fields

 System::Action_1<T> __declspec(property(get=__get__floatEvent, put=__set__floatEvent))  _floatEvent;

constexpr void __set__floatEvent(System::Action_1<T> value) ;

constexpr System::Action_1<T> __get__floatEvent() const;


// Methods

/// @brief Method Raise addr 0x0 size 0xffffffffffffffff virtual true final false
 void Raise() ;

/// @brief Method Raise addr 0x0 size 0xffffffffffffffff virtual false final false
 void Raise(T f) ;

/// @brief Method Subscribe addr 0x0 size 0xffffffffffffffff virtual false final false
 void Subscribe(System::Action_1<T> foo) ;

/// @brief Method Unsubscribe addr 0x0 size 0xffffffffffffffff virtual false final false
 void Unsubscribe(System::Action_1<T> foo) ;

// Ctor Parameters []
explicit GenericSignal_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GenericSignal`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13881)), TypeDefinitionIndex(TypeDefinitionIndex(13882))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13881), inst: 99 })
// CS Name: GenericSignal`1
class CORDL_TYPE GenericSignal_1<bool> : public GlobalNamespace::Signal {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GenericSignal_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericSignal_1", modifiers: " const&", def_value: None }]
constexpr GenericSignal_1(GenericSignal_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericSignal_1", modifiers: "&&", def_value: None }]
constexpr GenericSignal_1(GenericSignal_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericSignal_1(void* ptr) noexcept : GlobalNamespace::Signal(ptr) {
}


  constexpr GenericSignal_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericSignal_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericSignal_1& operator=(GenericSignal_1&& o) noexcept = default;
  constexpr GenericSignal_1& operator=(GenericSignal_1 const& o) noexcept = default;
                


// Fields

 System::Action_1<bool> __declspec(property(get=__get__floatEvent, put=__set__floatEvent))  _floatEvent;

constexpr void __set__floatEvent(System::Action_1<bool> value) ;

constexpr System::Action_1<bool> __get__floatEvent() const;


// Methods

/// @brief Method Raise addr 0x0 size 0xffffffffffffffff virtual true final false
 void Raise() ;

/// @brief Method Raise addr 0x0 size 0xffffffffffffffff virtual false final false
 void Raise(bool f) ;

/// @brief Method Subscribe addr 0x0 size 0xffffffffffffffff virtual false final false
 void Subscribe(System::Action_1<bool> foo) ;

/// @brief Method Unsubscribe addr 0x0 size 0xffffffffffffffff virtual false final false
 void Unsubscribe(System::Action_1<bool> foo) ;

// Ctor Parameters []
explicit GenericSignal_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GenericSignal`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13881)), TypeDefinitionIndex(TypeDefinitionIndex(13882))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13881), inst: 280 })
// CS Name: GenericSignal`1
class CORDL_TYPE GenericSignal_1<UnityEngine::Color> : public GlobalNamespace::Signal {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GenericSignal_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericSignal_1", modifiers: " const&", def_value: None }]
constexpr GenericSignal_1(GenericSignal_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericSignal_1", modifiers: "&&", def_value: None }]
constexpr GenericSignal_1(GenericSignal_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericSignal_1(void* ptr) noexcept : GlobalNamespace::Signal(ptr) {
}


  constexpr GenericSignal_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericSignal_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericSignal_1& operator=(GenericSignal_1&& o) noexcept = default;
  constexpr GenericSignal_1& operator=(GenericSignal_1 const& o) noexcept = default;
                


// Fields

 System::Action_1<UnityEngine::Color> __declspec(property(get=__get__floatEvent, put=__set__floatEvent))  _floatEvent;

constexpr void __set__floatEvent(System::Action_1<UnityEngine::Color> value) ;

constexpr System::Action_1<UnityEngine::Color> __get__floatEvent() const;


// Methods

/// @brief Method Raise addr 0x0 size 0xffffffffffffffff virtual true final false
 void Raise() ;

/// @brief Method Raise addr 0x0 size 0xffffffffffffffff virtual false final false
 void Raise(UnityEngine::Color f) ;

/// @brief Method Subscribe addr 0x0 size 0xffffffffffffffff virtual false final false
 void Subscribe(System::Action_1<UnityEngine::Color> foo) ;

/// @brief Method Unsubscribe addr 0x0 size 0xffffffffffffffff virtual false final false
 void Unsubscribe(System::Action_1<UnityEngine::Color> foo) ;

// Ctor Parameters []
explicit GenericSignal_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GenericSignal`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13881)), TypeDefinitionIndex(TypeDefinitionIndex(13882))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13881), inst: 374 })
// CS Name: GenericSignal`1
class CORDL_TYPE GenericSignal_1<float_t> : public GlobalNamespace::Signal {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GenericSignal_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericSignal_1", modifiers: " const&", def_value: None }]
constexpr GenericSignal_1(GenericSignal_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericSignal_1", modifiers: "&&", def_value: None }]
constexpr GenericSignal_1(GenericSignal_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericSignal_1(void* ptr) noexcept : GlobalNamespace::Signal(ptr) {
}


  constexpr GenericSignal_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericSignal_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericSignal_1& operator=(GenericSignal_1&& o) noexcept = default;
  constexpr GenericSignal_1& operator=(GenericSignal_1 const& o) noexcept = default;
                


// Fields

 System::Action_1<float_t> __declspec(property(get=__get__floatEvent, put=__set__floatEvent))  _floatEvent;

constexpr void __set__floatEvent(System::Action_1<float_t> value) ;

constexpr System::Action_1<float_t> __get__floatEvent() const;


// Methods

/// @brief Method Raise addr 0x0 size 0xffffffffffffffff virtual true final false
 void Raise() ;

/// @brief Method Raise addr 0x0 size 0xffffffffffffffff virtual false final false
 void Raise(float_t f) ;

/// @brief Method Subscribe addr 0x0 size 0xffffffffffffffff virtual false final false
 void Subscribe(System::Action_1<float_t> foo) ;

/// @brief Method Unsubscribe addr 0x0 size 0xffffffffffffffff virtual false final false
 void Unsubscribe(System::Action_1<float_t> foo) ;

// Ctor Parameters []
explicit GenericSignal_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::GenericSignal_1, "", "GenericSignal`1");
