#pragma once
#include "../cordl_internals/cordl_internals.hpp"
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
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7>
class Action_7;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T3,::cordl_internals::il2cpp_reference_type T7>
class Action_7<::UnityEngine::Color,::UnityEngine::Color,T3,float_t,::System::Int32Enum,float_t,T7>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T3,::cordl_internals::il2cpp_reference_type T7>
class Action_7<float_t,float_t,T3,float_t,::System::Int32Enum,float_t,T7>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type T3,::cordl_internals::il2cpp_reference_type T4,::cordl_internals::il2cpp_reference_type T5,::cordl_internals::il2cpp_reference_type T6,::cordl_internals::il2cpp_reference_type T7>
class Action_7<T1,T2,T3,T4,T5,T6,T7>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T3,::cordl_internals::il2cpp_reference_type T7>
class Action_7<::UnityEngine::Vector2,::UnityEngine::Vector2,T3,float_t,::System::Int32Enum,float_t,T7>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T3,::cordl_internals::il2cpp_reference_type T7>
class Action_7<::UnityEngine::Vector3,::UnityEngine::Vector3,T3,float_t,::System::Int32Enum,float_t,T7>;
}
// Type: System::Action`7
// Type: System::Action`7
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type T3,::cordl_internals::il2cpp_reference_type T4,::cordl_internals::il2cpp_reference_type T5,::cordl_internals::il2cpp_reference_type T6,::cordl_internals::il2cpp_reference_type T7>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2329))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2329), inst: 5940 })
// CS Name: System.Action`7
class CORDL_TYPE Action_7<T1,T2,T3,T4,T5,T6,T7> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_7() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_7", modifiers: " const&", def_value: None }]
constexpr Action_7(Action_7 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_7", modifiers: "&&", def_value: None }]
constexpr Action_7(Action_7&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_7(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Action_7& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_7& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_7& operator=(Action_7&& o) noexcept = default;
  constexpr Action_7& operator=(Action_7 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Action_7(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`7
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T3,::cordl_internals::il2cpp_reference_type T7>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2329)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2329), inst: 6290 })
// CS Name: System.Action`7
class CORDL_TYPE Action_7<::UnityEngine::Color,::UnityEngine::Color,T3,float_t,::System::Int32Enum,float_t,T7> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_7() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_7", modifiers: " const&", def_value: None }]
constexpr Action_7(Action_7 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_7", modifiers: "&&", def_value: None }]
constexpr Action_7(Action_7&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_7(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Action_7& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_7& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_7& operator=(Action_7&& o) noexcept = default;
  constexpr Action_7& operator=(Action_7 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Action_7(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(::UnityEngine::Color arg1, ::UnityEngine::Color arg2, T3 arg3, float_t arg4, ::System::Int32Enum arg5, float_t arg6, T7 arg7) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`7
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T3,::cordl_internals::il2cpp_reference_type T7>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2329)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2329), inst: 6291 })
// CS Name: System.Action`7
class CORDL_TYPE Action_7<float_t,float_t,T3,float_t,::System::Int32Enum,float_t,T7> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_7() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_7", modifiers: " const&", def_value: None }]
constexpr Action_7(Action_7 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_7", modifiers: "&&", def_value: None }]
constexpr Action_7(Action_7&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_7(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Action_7& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_7& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_7& operator=(Action_7&& o) noexcept = default;
  constexpr Action_7& operator=(Action_7 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Action_7(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(float_t arg1, float_t arg2, T3 arg3, float_t arg4, ::System::Int32Enum arg5, float_t arg6, T7 arg7) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`7
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T3,::cordl_internals::il2cpp_reference_type T7>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2329))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2329), inst: 6292 })
// CS Name: System.Action`7
class CORDL_TYPE Action_7<::UnityEngine::Vector2,::UnityEngine::Vector2,T3,float_t,::System::Int32Enum,float_t,T7> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_7() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_7", modifiers: " const&", def_value: None }]
constexpr Action_7(Action_7 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_7", modifiers: "&&", def_value: None }]
constexpr Action_7(Action_7&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_7(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Action_7& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_7& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_7& operator=(Action_7&& o) noexcept = default;
  constexpr Action_7& operator=(Action_7 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Action_7(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(::UnityEngine::Vector2 arg1, ::UnityEngine::Vector2 arg2, T3 arg3, float_t arg4, ::System::Int32Enum arg5, float_t arg6, T7 arg7) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`7
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T3,::cordl_internals::il2cpp_reference_type T7>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2329))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2329), inst: 6293 })
// CS Name: System.Action`7
class CORDL_TYPE Action_7<::UnityEngine::Vector3,::UnityEngine::Vector3,T3,float_t,::System::Int32Enum,float_t,T7> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_7() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_7", modifiers: " const&", def_value: None }]
constexpr Action_7(Action_7 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_7", modifiers: "&&", def_value: None }]
constexpr Action_7(Action_7&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_7(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Action_7& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_7& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_7& operator=(Action_7&& o) noexcept = default;
  constexpr Action_7& operator=(Action_7 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Action_7(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(::UnityEngine::Vector3 arg1, ::UnityEngine::Vector3 arg2, T3 arg3, float_t arg4, ::System::Int32Enum arg5, float_t arg6, T7 arg7) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Action_7, "System", "Action`7");
