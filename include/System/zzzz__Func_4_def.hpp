#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Touch;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace System {
struct Int32Enum;
}
namespace UnityEngine::UIElements::Experimental {
struct StyleValues;
}
// Forward declare root types
namespace System {
template<typename T1,typename T2,typename T3,typename TResult>
class Func_4;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type TResult>
class Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::UnityEngine::Touch,TResult>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1>
class Func_4<T1,double_t,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T3,::cordl_internals::il2cpp_reference_type TResult>
class Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,T3,TResult>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T3,::cordl_internals::il2cpp_reference_type TResult>
class Func_4<T1,int32_t,T3,TResult>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type TResult>
class Func_4<T1,T2,bool,TResult>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type TResult>
class Func_4<T1,T2,::System::Int32Enum,TResult>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type T3,::cordl_internals::il2cpp_reference_type TResult>
class Func_4<T1,T2,T3,TResult>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type TResult>
class Func_4<T1,T2,float_t,TResult>;
}
namespace System {
template<>
class Func_4<::UnityEngine::UIElements::Experimental::StyleValues,::UnityEngine::UIElements::Experimental::StyleValues,float_t,::UnityEngine::UIElements::Experimental::StyleValues>;
}
// Type: System::Func`4
// Type: System::Func`4
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2334)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2334), inst: 5711 })
// CS Name: System.Func`4
class CORDL_TYPE Func_4<::UnityEngine::UIElements::Experimental::StyleValues,::UnityEngine::UIElements::Experimental::StyleValues,float_t,::UnityEngine::UIElements::Experimental::StyleValues> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_4", modifiers: " const&", def_value: None }]
constexpr Func_4(Func_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_4", modifiers: "&&", def_value: None }]
constexpr Func_4(Func_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_4(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Func_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_4& operator=(Func_4&& o) noexcept = default;
  constexpr Func_4& operator=(Func_4 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_4(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::UIElements::Experimental::StyleValues Invoke(::UnityEngine::UIElements::Experimental::StyleValues arg1, ::UnityEngine::UIElements::Experimental::StyleValues arg2, float_t arg3) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`4
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type T3,::cordl_internals::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2334)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2334), inst: 5937 })
// CS Name: System.Func`4
class CORDL_TYPE Func_4<T1,T2,T3,TResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_4", modifiers: " const&", def_value: None }]
constexpr Func_4(Func_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_4", modifiers: "&&", def_value: None }]
constexpr Func_4(Func_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_4(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Func_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_4& operator=(Func_4&& o) noexcept = default;
  constexpr Func_4& operator=(Func_4 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_4(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 TResult Invoke(T1 arg1, T2 arg2, T3 arg3) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`4
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2334))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2334), inst: 7444 })
// CS Name: System.Func`4
class CORDL_TYPE Func_4<T1,double_t,::UnityEngine::InputSystem::LowLevel::InputEventPtr,bool> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_4", modifiers: " const&", def_value: None }]
constexpr Func_4(Func_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_4", modifiers: "&&", def_value: None }]
constexpr Func_4(Func_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_4(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Func_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_4& operator=(Func_4&& o) noexcept = default;
  constexpr Func_4& operator=(Func_4 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_4(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(T1 arg1, double_t arg2, ::UnityEngine::InputSystem::LowLevel::InputEventPtr arg3) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`4
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T3,::cordl_internals::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2334))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2334), inst: 7445 })
// CS Name: System.Func`4
class CORDL_TYPE Func_4<T1,int32_t,T3,TResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_4", modifiers: " const&", def_value: None }]
constexpr Func_4(Func_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_4", modifiers: "&&", def_value: None }]
constexpr Func_4(Func_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_4(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Func_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_4& operator=(Func_4&& o) noexcept = default;
  constexpr Func_4& operator=(Func_4 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_4(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 TResult Invoke(T1 arg1, int32_t arg2, T3 arg3) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`4
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2334)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2334), inst: 7446 })
// CS Name: System.Func`4
class CORDL_TYPE Func_4<T1,T2,bool,TResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_4", modifiers: " const&", def_value: None }]
constexpr Func_4(Func_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_4", modifiers: "&&", def_value: None }]
constexpr Func_4(Func_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_4(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Func_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_4& operator=(Func_4&& o) noexcept = default;
  constexpr Func_4& operator=(Func_4 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_4(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 TResult Invoke(T1 arg1, T2 arg2, bool arg3) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`4
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2334)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2334), inst: 7447 })
// CS Name: System.Func`4
class CORDL_TYPE Func_4<T1,T2,::System::Int32Enum,TResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_4", modifiers: " const&", def_value: None }]
constexpr Func_4(Func_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_4", modifiers: "&&", def_value: None }]
constexpr Func_4(Func_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_4(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Func_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_4& operator=(Func_4&& o) noexcept = default;
  constexpr Func_4& operator=(Func_4 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_4(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 TResult Invoke(T1 arg1, T2 arg2, ::System::Int32Enum arg3) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`4
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2334))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2334), inst: 7448 })
// CS Name: System.Func`4
class CORDL_TYPE Func_4<T1,T2,float_t,TResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_4", modifiers: " const&", def_value: None }]
constexpr Func_4(Func_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_4", modifiers: "&&", def_value: None }]
constexpr Func_4(Func_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_4(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Func_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_4& operator=(Func_4&& o) noexcept = default;
  constexpr Func_4& operator=(Func_4 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_4(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 TResult Invoke(T1 arg1, T2 arg2, float_t arg3) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`4
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T3,::cordl_internals::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2334)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2334), inst: 7449 })
// CS Name: System.Func`4
class CORDL_TYPE Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,T3,TResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_4", modifiers: " const&", def_value: None }]
constexpr Func_4(Func_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_4", modifiers: "&&", def_value: None }]
constexpr Func_4(Func_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_4(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Func_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_4& operator=(Func_4&& o) noexcept = default;
  constexpr Func_4& operator=(Func_4 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_4(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 TResult Invoke(::UnityEngine::Vector3 arg1, ::UnityEngine::Vector3 arg2, T3 arg3) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`4
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2334)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2334), inst: 7450 })
// CS Name: System.Func`4
class CORDL_TYPE Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::UnityEngine::Touch,TResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_4", modifiers: " const&", def_value: None }]
constexpr Func_4(Func_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_4", modifiers: "&&", def_value: None }]
constexpr Func_4(Func_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_4(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Func_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_4& operator=(Func_4&& o) noexcept = default;
  constexpr Func_4& operator=(Func_4 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_4(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 TResult Invoke(::UnityEngine::Vector3 arg1, ::UnityEngine::Vector3 arg2, ::UnityEngine::Touch arg3) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Func_4, "System", "Func`4");
