#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
struct Int32Enum;
}
namespace System::Threading::Tasks {
struct VoidTaskResult;
}
namespace GlobalNamespace {
struct BitMask128;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::UIElements {
struct Background;
}
namespace UnityEngine::UIElements {
struct FontDefinition;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine::UIElements {
struct Rotate;
}
namespace UnityEngine::UIElements {
struct Scale;
}
namespace UnityEngine::UIElements {
struct TextShadow;
}
namespace UnityEngine::UIElements {
struct TransformOrigin;
}
namespace UnityEngine::UIElements {
struct Translate;
}
// Forward declare root types
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1>
class Func_3<T1,UnityEngine::InputSystem::LowLevel::InputEventPtr,bool>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type TResult>
class Func_3<T1,System::Threading::CancellationToken,TResult>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type TResult>
class Func_3<T1,System::Int32Enum,TResult>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1>
class Func_3<T1,int64_t,int64_t>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2>
class Func_3<T1,T2,bool>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1>
class Func_3<T1,UnityEngine::InputSystem::LowLevel::InputEventPtr,float_t>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1>
class Func_3<T1,System::Int32Enum,System::Int32Enum>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T2>
class Func_3<UnityEngine::InputSystem::LowLevel::InputEventPtr,T2,bool>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2>
class Func_3<T1,T2,int32_t>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2>
class Func_3<T1,T2,System::Threading::Tasks::VoidTaskResult>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1>
class Func_3<T1,float_t,float_t>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type TResult>
class Func_3<int32_t,T2,TResult>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1>
class Func_3<T1,int32_t,int32_t>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T2>
class Func_3<GlobalNamespace::BitMask128,T2,GlobalNamespace::BitMask128>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1>
class Func_3<T1,bool,bool>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type TResult>
class Func_3<T1,T2,TResult>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2>
class Func_3<T1,T2,System::Nullable_1<int32_t>>;
}
namespace System {
template<>
class Func_3<UnityEngine::Color,UnityEngine::Color,bool>;
}
namespace System {
template<>
class Func_3<UnityEngine::UIElements::Background,UnityEngine::UIElements::Background,bool>;
}
namespace System {
template<>
class Func_3<UnityEngine::UIElements::FontDefinition,UnityEngine::UIElements::FontDefinition,bool>;
}
namespace System {
template<>
class Func_3<UnityEngine::UIElements::Length,UnityEngine::UIElements::Length,bool>;
}
namespace System {
template<>
class Func_3<UnityEngine::UIElements::Rotate,UnityEngine::UIElements::Rotate,bool>;
}
namespace System {
template<>
class Func_3<UnityEngine::UIElements::Scale,UnityEngine::UIElements::Scale,bool>;
}
namespace System {
template<>
class Func_3<UnityEngine::UIElements::TextShadow,UnityEngine::UIElements::TextShadow,bool>;
}
namespace System {
template<>
class Func_3<UnityEngine::UIElements::TransformOrigin,UnityEngine::UIElements::TransformOrigin,bool>;
}
namespace System {
template<>
class Func_3<UnityEngine::UIElements::Translate,UnityEngine::UIElements::Translate,bool>;
}
namespace System {
template<>
class Func_3<float_t,float_t,bool>;
}
namespace System {
template<>
class Func_3<int32_t,::cordl_internals::intptr_t,bool>;
}
namespace System {
template<>
class Func_3<int32_t,int32_t,bool>;
}
// Type: System::Func`3
// Type: System::Func`3
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2333))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 2382 })
// CS Name: System.Func`3
class CORDL_TYPE Func_3<UnityEngine::Color,UnityEngine::Color,bool> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: " const&", def_value: None }]
constexpr Func_3(Func_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
constexpr Func_3(Func_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Func_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_3& operator=(Func_3&& o) noexcept = default;
  constexpr Func_3& operator=(Func_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(UnityEngine::Color arg1, UnityEngine::Color arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2333)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 2390 })
// CS Name: System.Func`3
class CORDL_TYPE Func_3<int32_t,int32_t,bool> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: " const&", def_value: None }]
constexpr Func_3(Func_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
constexpr Func_3(Func_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Func_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_3& operator=(Func_3&& o) noexcept = default;
  constexpr Func_3& operator=(Func_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(int32_t arg1, int32_t arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2333))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 2391 })
// CS Name: System.Func`3
class CORDL_TYPE Func_3<int32_t,::cordl_internals::intptr_t,bool> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: " const&", def_value: None }]
constexpr Func_3(Func_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
constexpr Func_3(Func_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Func_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_3& operator=(Func_3&& o) noexcept = default;
  constexpr Func_3& operator=(Func_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(int32_t arg1, ::cordl_internals::intptr_t arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2333)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 2394 })
// CS Name: System.Func`3
class CORDL_TYPE Func_3<UnityEngine::UIElements::Length,UnityEngine::UIElements::Length,bool> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: " const&", def_value: None }]
constexpr Func_3(Func_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
constexpr Func_3(Func_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Func_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_3& operator=(Func_3&& o) noexcept = default;
  constexpr Func_3& operator=(Func_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(UnityEngine::UIElements::Length arg1, UnityEngine::UIElements::Length arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2333))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 2395 })
// CS Name: System.Func`3
class CORDL_TYPE Func_3<UnityEngine::UIElements::Rotate,UnityEngine::UIElements::Rotate,bool> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: " const&", def_value: None }]
constexpr Func_3(Func_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
constexpr Func_3(Func_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Func_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_3& operator=(Func_3&& o) noexcept = default;
  constexpr Func_3& operator=(Func_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(UnityEngine::UIElements::Rotate arg1, UnityEngine::UIElements::Rotate arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2333)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 2396 })
// CS Name: System.Func`3
class CORDL_TYPE Func_3<UnityEngine::UIElements::Scale,UnityEngine::UIElements::Scale,bool> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: " const&", def_value: None }]
constexpr Func_3(Func_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
constexpr Func_3(Func_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Func_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_3& operator=(Func_3&& o) noexcept = default;
  constexpr Func_3& operator=(Func_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(UnityEngine::UIElements::Scale arg1, UnityEngine::UIElements::Scale arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2333)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 2397 })
// CS Name: System.Func`3
class CORDL_TYPE Func_3<float_t,float_t,bool> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: " const&", def_value: None }]
constexpr Func_3(Func_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
constexpr Func_3(Func_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Func_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_3& operator=(Func_3&& o) noexcept = default;
  constexpr Func_3& operator=(Func_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(float_t arg1, float_t arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2333))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 2408 })
// CS Name: System.Func`3
class CORDL_TYPE Func_3<UnityEngine::UIElements::TextShadow,UnityEngine::UIElements::TextShadow,bool> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: " const&", def_value: None }]
constexpr Func_3(Func_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
constexpr Func_3(Func_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Func_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_3& operator=(Func_3&& o) noexcept = default;
  constexpr Func_3& operator=(Func_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(UnityEngine::UIElements::TextShadow arg1, UnityEngine::UIElements::TextShadow arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2333))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 2409 })
// CS Name: System.Func`3
class CORDL_TYPE Func_3<UnityEngine::UIElements::TransformOrigin,UnityEngine::UIElements::TransformOrigin,bool> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: " const&", def_value: None }]
constexpr Func_3(Func_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
constexpr Func_3(Func_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Func_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_3& operator=(Func_3&& o) noexcept = default;
  constexpr Func_3& operator=(Func_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(UnityEngine::UIElements::TransformOrigin arg1, UnityEngine::UIElements::TransformOrigin arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2333))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 2410 })
// CS Name: System.Func`3
class CORDL_TYPE Func_3<UnityEngine::UIElements::Translate,UnityEngine::UIElements::Translate,bool> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: " const&", def_value: None }]
constexpr Func_3(Func_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
constexpr Func_3(Func_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Func_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_3& operator=(Func_3&& o) noexcept = default;
  constexpr Func_3& operator=(Func_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(UnityEngine::UIElements::Translate arg1, UnityEngine::UIElements::Translate arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2333)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 5153 })
// CS Name: System.Func`3
class CORDL_TYPE Func_3<T1,int32_t,int32_t> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: " const&", def_value: None }]
constexpr Func_3(Func_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
constexpr Func_3(Func_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Func_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_3& operator=(Func_3&& o) noexcept = default;
  constexpr Func_3& operator=(Func_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Invoke(T1 arg1, int32_t arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2333)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 5154 })
// CS Name: System.Func`3
class CORDL_TYPE Func_3<T1,T2,int32_t> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: " const&", def_value: None }]
constexpr Func_3(Func_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
constexpr Func_3(Func_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Func_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_3& operator=(Func_3&& o) noexcept = default;
  constexpr Func_3& operator=(Func_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Invoke(T1 arg1, T2 arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2333))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 5155 })
// CS Name: System.Func`3
class CORDL_TYPE Func_3<T1,T2,TResult> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: " const&", def_value: None }]
constexpr Func_3(Func_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
constexpr Func_3(Func_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Func_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_3& operator=(Func_3&& o) noexcept = default;
  constexpr Func_3& operator=(Func_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 TResult Invoke(T1 arg1, T2 arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2333)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 5954 })
// CS Name: System.Func`3
class CORDL_TYPE Func_3<T1,System::Int32Enum,TResult> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: " const&", def_value: None }]
constexpr Func_3(Func_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
constexpr Func_3(Func_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Func_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_3& operator=(Func_3&& o) noexcept = default;
  constexpr Func_3& operator=(Func_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 TResult Invoke(T1 arg1, System::Int32Enum arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2333)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 6046 })
// CS Name: System.Func`3
class CORDL_TYPE Func_3<int32_t,T2,TResult> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: " const&", def_value: None }]
constexpr Func_3(Func_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
constexpr Func_3(Func_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Func_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_3& operator=(Func_3&& o) noexcept = default;
  constexpr Func_3& operator=(Func_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 TResult Invoke(int32_t arg1, T2 arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2333))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 6099 })
// CS Name: System.Func`3
class CORDL_TYPE Func_3<T1,T2,System::Nullable_1<int32_t>> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: " const&", def_value: None }]
constexpr Func_3(Func_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
constexpr Func_3(Func_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Func_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_3& operator=(Func_3&& o) noexcept = default;
  constexpr Func_3& operator=(Func_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Nullable_1<int32_t> Invoke(T1 arg1, T2 arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2333)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 7431 })
// CS Name: System.Func`3
class CORDL_TYPE Func_3<UnityEngine::UIElements::Background,UnityEngine::UIElements::Background,bool> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: " const&", def_value: None }]
constexpr Func_3(Func_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
constexpr Func_3(Func_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Func_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_3& operator=(Func_3&& o) noexcept = default;
  constexpr Func_3& operator=(Func_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(UnityEngine::UIElements::Background arg1, UnityEngine::UIElements::Background arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2333)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 7432 })
// CS Name: System.Func`3
class CORDL_TYPE Func_3<GlobalNamespace::BitMask128,T2,GlobalNamespace::BitMask128> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: " const&", def_value: None }]
constexpr Func_3(Func_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
constexpr Func_3(Func_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Func_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_3& operator=(Func_3&& o) noexcept = default;
  constexpr Func_3& operator=(Func_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::BitMask128 Invoke(GlobalNamespace::BitMask128 arg1, T2 arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2333)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 7433 })
// CS Name: System.Func`3
class CORDL_TYPE Func_3<UnityEngine::UIElements::FontDefinition,UnityEngine::UIElements::FontDefinition,bool> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: " const&", def_value: None }]
constexpr Func_3(Func_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
constexpr Func_3(Func_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Func_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_3& operator=(Func_3&& o) noexcept = default;
  constexpr Func_3& operator=(Func_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(UnityEngine::UIElements::FontDefinition arg1, UnityEngine::UIElements::FontDefinition arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2333))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 7434 })
// CS Name: System.Func`3
class CORDL_TYPE Func_3<UnityEngine::InputSystem::LowLevel::InputEventPtr,T2,bool> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: " const&", def_value: None }]
constexpr Func_3(Func_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
constexpr Func_3(Func_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Func_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_3& operator=(Func_3&& o) noexcept = default;
  constexpr Func_3& operator=(Func_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(UnityEngine::InputSystem::LowLevel::InputEventPtr arg1, T2 arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2333)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 7435 })
// CS Name: System.Func`3
class CORDL_TYPE Func_3<T1,bool,bool> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: " const&", def_value: None }]
constexpr Func_3(Func_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
constexpr Func_3(Func_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Func_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_3& operator=(Func_3&& o) noexcept = default;
  constexpr Func_3& operator=(Func_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(T1 arg1, bool arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2333))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 7436 })
// CS Name: System.Func`3
class CORDL_TYPE Func_3<T1,System::Threading::CancellationToken,TResult> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: " const&", def_value: None }]
constexpr Func_3(Func_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
constexpr Func_3(Func_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Func_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_3& operator=(Func_3&& o) noexcept = default;
  constexpr Func_3& operator=(Func_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 TResult Invoke(T1 arg1, System::Threading::CancellationToken arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2333)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 7437 })
// CS Name: System.Func`3
class CORDL_TYPE Func_3<T1,UnityEngine::InputSystem::LowLevel::InputEventPtr,bool> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: " const&", def_value: None }]
constexpr Func_3(Func_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
constexpr Func_3(Func_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Func_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_3& operator=(Func_3&& o) noexcept = default;
  constexpr Func_3& operator=(Func_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(T1 arg1, UnityEngine::InputSystem::LowLevel::InputEventPtr arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2333)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 7438 })
// CS Name: System.Func`3
class CORDL_TYPE Func_3<T1,UnityEngine::InputSystem::LowLevel::InputEventPtr,float_t> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: " const&", def_value: None }]
constexpr Func_3(Func_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
constexpr Func_3(Func_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Func_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_3& operator=(Func_3&& o) noexcept = default;
  constexpr Func_3& operator=(Func_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t Invoke(T1 arg1, UnityEngine::InputSystem::LowLevel::InputEventPtr arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2333)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 7439 })
// CS Name: System.Func`3
class CORDL_TYPE Func_3<T1,System::Int32Enum,System::Int32Enum> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: " const&", def_value: None }]
constexpr Func_3(Func_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
constexpr Func_3(Func_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Func_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_3& operator=(Func_3&& o) noexcept = default;
  constexpr Func_3& operator=(Func_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Int32Enum Invoke(T1 arg1, System::Int32Enum arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2333))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 7440 })
// CS Name: System.Func`3
class CORDL_TYPE Func_3<T1,int64_t,int64_t> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: " const&", def_value: None }]
constexpr Func_3(Func_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
constexpr Func_3(Func_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Func_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_3& operator=(Func_3&& o) noexcept = default;
  constexpr Func_3& operator=(Func_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 int64_t Invoke(T1 arg1, int64_t arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2333))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 7441 })
// CS Name: System.Func`3
class CORDL_TYPE Func_3<T1,T2,bool> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: " const&", def_value: None }]
constexpr Func_3(Func_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
constexpr Func_3(Func_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Func_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_3& operator=(Func_3&& o) noexcept = default;
  constexpr Func_3& operator=(Func_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(T1 arg1, T2 arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2333)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 7442 })
// CS Name: System.Func`3
class CORDL_TYPE Func_3<T1,T2,System::Threading::Tasks::VoidTaskResult> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: " const&", def_value: None }]
constexpr Func_3(Func_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
constexpr Func_3(Func_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Func_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_3& operator=(Func_3&& o) noexcept = default;
  constexpr Func_3& operator=(Func_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Threading::Tasks::VoidTaskResult Invoke(T1 arg1, T2 arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Func`3
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2333)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2333), inst: 7443 })
// CS Name: System.Func`3
class CORDL_TYPE Func_3<T1,float_t,float_t> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Func_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: " const&", def_value: None }]
constexpr Func_3(Func_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Func_3", modifiers: "&&", def_value: None }]
constexpr Func_3(Func_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Func_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Func_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Func_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Func_3& operator=(Func_3&& o) noexcept = default;
  constexpr Func_3& operator=(Func_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Func_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t Invoke(T1 arg1, float_t arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Func_3, "System", "Func`3");
