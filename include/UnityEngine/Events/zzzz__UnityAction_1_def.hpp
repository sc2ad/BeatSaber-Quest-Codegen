#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace System {
struct Int32Enum;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputAction__CallbackContext;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Events {
template<typename T0>
class UnityAction_1;
}
namespace UnityEngine::Events {
template<::cordl_internals::il2cpp_reference_type T0>
class UnityAction_1<T0>;
}
namespace UnityEngine::Events {
template<>
class UnityAction_1<::System::Int32Enum>;
}
namespace UnityEngine::Events {
template<>
class UnityAction_1<::UnityEngine::Color>;
}
namespace UnityEngine::Events {
template<>
class UnityAction_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext>;
}
namespace UnityEngine::Events {
template<>
class UnityAction_1<::UnityEngine::SceneManagement::Scene>;
}
namespace UnityEngine::Events {
template<>
class UnityAction_1<::UnityEngine::Vector2>;
}
namespace UnityEngine::Events {
template<>
class UnityAction_1<bool>;
}
namespace UnityEngine::Events {
template<>
class UnityAction_1<float_t>;
}
namespace UnityEngine::Events {
template<>
class UnityAction_1<int32_t>;
}
// Type: UnityEngine.Events::UnityAction`1
// Type: UnityEngine.Events::UnityAction`1
namespace UnityEngine::Events {
// cpp template
template<::cordl_internals::il2cpp_reference_type T0>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10400)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10400), inst: 2 })
// CS Name: UnityEngine.Events.UnityAction`1
class CORDL_TYPE UnityAction_1<T0> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityAction_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_1", modifiers: " const&", def_value: None }]
constexpr UnityAction_1(UnityAction_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_1", modifiers: "&&", def_value: None }]
constexpr UnityAction_1(UnityAction_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityAction_1(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr UnityAction_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityAction_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityAction_1& operator=(UnityAction_1&& o) noexcept = default;
  constexpr UnityAction_1& operator=(UnityAction_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UnityAction_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T0 arg0) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::UnityAction`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(10400))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10400), inst: 92 })
// CS Name: UnityEngine.Events.UnityAction`1
class CORDL_TYPE UnityAction_1<int32_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityAction_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_1", modifiers: " const&", def_value: None }]
constexpr UnityAction_1(UnityAction_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_1", modifiers: "&&", def_value: None }]
constexpr UnityAction_1(UnityAction_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityAction_1(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr UnityAction_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityAction_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityAction_1& operator=(UnityAction_1&& o) noexcept = default;
  constexpr UnityAction_1& operator=(UnityAction_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UnityAction_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(int32_t arg0) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::UnityAction`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10400)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10400), inst: 99 })
// CS Name: UnityEngine.Events.UnityAction`1
class CORDL_TYPE UnityAction_1<bool> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityAction_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_1", modifiers: " const&", def_value: None }]
constexpr UnityAction_1(UnityAction_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_1", modifiers: "&&", def_value: None }]
constexpr UnityAction_1(UnityAction_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityAction_1(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr UnityAction_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityAction_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityAction_1& operator=(UnityAction_1&& o) noexcept = default;
  constexpr UnityAction_1& operator=(UnityAction_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UnityAction_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(bool arg0) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::UnityAction`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(10400))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10400), inst: 280 })
// CS Name: UnityEngine.Events.UnityAction`1
class CORDL_TYPE UnityAction_1<::UnityEngine::Color> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityAction_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_1", modifiers: " const&", def_value: None }]
constexpr UnityAction_1(UnityAction_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_1", modifiers: "&&", def_value: None }]
constexpr UnityAction_1(UnityAction_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityAction_1(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr UnityAction_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityAction_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityAction_1& operator=(UnityAction_1&& o) noexcept = default;
  constexpr UnityAction_1& operator=(UnityAction_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UnityAction_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(::UnityEngine::Color arg0) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::UnityAction`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10400)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10400), inst: 374 })
// CS Name: UnityEngine.Events.UnityAction`1
class CORDL_TYPE UnityAction_1<float_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityAction_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_1", modifiers: " const&", def_value: None }]
constexpr UnityAction_1(UnityAction_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_1", modifiers: "&&", def_value: None }]
constexpr UnityAction_1(UnityAction_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityAction_1(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr UnityAction_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityAction_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityAction_1& operator=(UnityAction_1&& o) noexcept = default;
  constexpr UnityAction_1& operator=(UnityAction_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UnityAction_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(float_t arg0) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::UnityAction`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10400)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10400), inst: 393 })
// CS Name: UnityEngine.Events.UnityAction`1
class CORDL_TYPE UnityAction_1<::UnityEngine::Vector2> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityAction_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_1", modifiers: " const&", def_value: None }]
constexpr UnityAction_1(UnityAction_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_1", modifiers: "&&", def_value: None }]
constexpr UnityAction_1(UnityAction_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityAction_1(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr UnityAction_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityAction_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityAction_1& operator=(UnityAction_1&& o) noexcept = default;
  constexpr UnityAction_1& operator=(UnityAction_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UnityAction_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(::UnityEngine::Vector2 arg0) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::UnityAction`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(10400))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10400), inst: 408 })
// CS Name: UnityEngine.Events.UnityAction`1
class CORDL_TYPE UnityAction_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityAction_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_1", modifiers: " const&", def_value: None }]
constexpr UnityAction_1(UnityAction_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_1", modifiers: "&&", def_value: None }]
constexpr UnityAction_1(UnityAction_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityAction_1(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr UnityAction_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityAction_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityAction_1& operator=(UnityAction_1&& o) noexcept = default;
  constexpr UnityAction_1& operator=(UnityAction_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UnityAction_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext arg0) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::UnityAction`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10400)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10400), inst: 3012 })
// CS Name: UnityEngine.Events.UnityAction`1
class CORDL_TYPE UnityAction_1<::UnityEngine::SceneManagement::Scene> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityAction_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_1", modifiers: " const&", def_value: None }]
constexpr UnityAction_1(UnityAction_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_1", modifiers: "&&", def_value: None }]
constexpr UnityAction_1(UnityAction_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityAction_1(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr UnityAction_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityAction_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityAction_1& operator=(UnityAction_1&& o) noexcept = default;
  constexpr UnityAction_1& operator=(UnityAction_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UnityAction_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(::UnityEngine::SceneManagement::Scene arg0) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
// Type: UnityEngine.Events::UnityAction`1
namespace UnityEngine::Events {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10400)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10400), inst: 4825 })
// CS Name: UnityEngine.Events.UnityAction`1
class CORDL_TYPE UnityAction_1<::System::Int32Enum> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityAction_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_1", modifiers: " const&", def_value: None }]
constexpr UnityAction_1(UnityAction_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityAction_1", modifiers: "&&", def_value: None }]
constexpr UnityAction_1(UnityAction_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityAction_1(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr UnityAction_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityAction_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityAction_1& operator=(UnityAction_1&& o) noexcept = default;
  constexpr UnityAction_1& operator=(UnityAction_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UnityAction_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(::System::Int32Enum arg0) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Events::UnityAction_1, "UnityEngine.Events", "UnityAction`1");
