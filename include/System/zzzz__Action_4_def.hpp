#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace System {
struct Int32Enum;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace System {
struct Guid;
}
namespace GlobalNamespace {
struct OVRSpace;
}
// Forward declare root types
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
class Action_4;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T4>
class Action_4<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,System::Int32Enum,int32_t,T4>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T4>
class Action_4<T1,float_t,float_t,T4>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type T3,::cordl_internals::il2cpp_reference_type T4>
class Action_4<T1,T2,T3,T4>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1>
class Action_4<T1,UnityEngine::Color,System::Int32Enum,int32_t>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type T4>
class Action_4<int32_t,T2,bool,T4>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1>
class Action_4<T1,double_t,int64_t,int32_t>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T2>
class Action_4<int32_t,T2,int32_t,int32_t>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type T3>
class Action_4<T1,T2,T3,float_t>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1>
class Action_4<T1,double_t,UnityEngine::InputSystem::LowLevel::InputEventPtr,int64_t>;
}
namespace System {
template<>
class Action_4<int32_t,int32_t,float_t,int32_t>;
}
namespace System {
template<>
class Action_4<uint64_t,GlobalNamespace::OVRSpace,bool,System::Guid>;
}
namespace System {
template<>
class Action_4<uint64_t,bool,GlobalNamespace::OVRSpace,System::Guid>;
}
namespace System {
template<>
class Action_4<uint64_t,bool,System::Guid,System::Int32Enum>;
}
// Type: System::Action`4
// Type: System::Action`4
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2326))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2326), inst: 674 })
// CS Name: System.Action`4
class CORDL_TYPE Action_4<uint64_t,bool,GlobalNamespace::OVRSpace,System::Guid> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: " const&", def_value: None }]
constexpr Action_4(Action_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: "&&", def_value: None }]
constexpr Action_4(Action_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_4(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_4& operator=(Action_4&& o) noexcept = default;
  constexpr Action_4& operator=(Action_4 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Action_4(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(uint64_t arg1, bool arg2, GlobalNamespace::OVRSpace arg3, System::Guid arg4) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`4
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2326))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2326), inst: 675 })
// CS Name: System.Action`4
class CORDL_TYPE Action_4<uint64_t,GlobalNamespace::OVRSpace,bool,System::Guid> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: " const&", def_value: None }]
constexpr Action_4(Action_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: "&&", def_value: None }]
constexpr Action_4(Action_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_4(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_4& operator=(Action_4&& o) noexcept = default;
  constexpr Action_4& operator=(Action_4 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Action_4(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(uint64_t arg1, GlobalNamespace::OVRSpace arg2, bool arg3, System::Guid arg4) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`4
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2326))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2326), inst: 5437 })
// CS Name: System.Action`4
class CORDL_TYPE Action_4<int32_t,int32_t,float_t,int32_t> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: " const&", def_value: None }]
constexpr Action_4(Action_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: "&&", def_value: None }]
constexpr Action_4(Action_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_4(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_4& operator=(Action_4&& o) noexcept = default;
  constexpr Action_4& operator=(Action_4 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Action_4(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(int32_t arg1, int32_t arg2, float_t arg3, int32_t arg4) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`4
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type T3,::cordl_internals::il2cpp_reference_type T4>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2326)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2326), inst: 5937 })
// CS Name: System.Action`4
class CORDL_TYPE Action_4<T1,T2,T3,T4> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: " const&", def_value: None }]
constexpr Action_4(Action_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: "&&", def_value: None }]
constexpr Action_4(Action_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_4(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_4& operator=(Action_4&& o) noexcept = default;
  constexpr Action_4& operator=(Action_4 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Action_4(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, T2 arg2, T3 arg3, T4 arg4) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`4
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T4>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2326))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2326), inst: 6280 })
// CS Name: System.Action`4
class CORDL_TYPE Action_4<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,System::Int32Enum,int32_t,T4> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: " const&", def_value: None }]
constexpr Action_4(Action_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: "&&", def_value: None }]
constexpr Action_4(Action_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_4(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_4& operator=(Action_4&& o) noexcept = default;
  constexpr Action_4& operator=(Action_4 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Action_4(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle arg1, System::Int32Enum arg2, int32_t arg3, T4 arg4) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`4
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type T4>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2326))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2326), inst: 6281 })
// CS Name: System.Action`4
class CORDL_TYPE Action_4<int32_t,T2,bool,T4> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: " const&", def_value: None }]
constexpr Action_4(Action_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: "&&", def_value: None }]
constexpr Action_4(Action_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_4(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_4& operator=(Action_4&& o) noexcept = default;
  constexpr Action_4& operator=(Action_4 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Action_4(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(int32_t arg1, T2 arg2, bool arg3, T4 arg4) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`4
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2326)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2326), inst: 6282 })
// CS Name: System.Action`4
class CORDL_TYPE Action_4<int32_t,T2,int32_t,int32_t> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: " const&", def_value: None }]
constexpr Action_4(Action_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: "&&", def_value: None }]
constexpr Action_4(Action_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_4(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_4& operator=(Action_4&& o) noexcept = default;
  constexpr Action_4& operator=(Action_4 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Action_4(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(int32_t arg1, T2 arg2, int32_t arg3, int32_t arg4) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`4
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2326))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2326), inst: 6283 })
// CS Name: System.Action`4
class CORDL_TYPE Action_4<T1,UnityEngine::Color,System::Int32Enum,int32_t> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: " const&", def_value: None }]
constexpr Action_4(Action_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: "&&", def_value: None }]
constexpr Action_4(Action_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_4(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_4& operator=(Action_4&& o) noexcept = default;
  constexpr Action_4& operator=(Action_4 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Action_4(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, UnityEngine::Color arg2, System::Int32Enum arg3, int32_t arg4) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`4
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2326)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2326), inst: 6284 })
// CS Name: System.Action`4
class CORDL_TYPE Action_4<T1,double_t,UnityEngine::InputSystem::LowLevel::InputEventPtr,int64_t> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: " const&", def_value: None }]
constexpr Action_4(Action_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: "&&", def_value: None }]
constexpr Action_4(Action_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_4(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_4& operator=(Action_4&& o) noexcept = default;
  constexpr Action_4& operator=(Action_4 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Action_4(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, double_t arg2, UnityEngine::InputSystem::LowLevel::InputEventPtr arg3, int64_t arg4) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`4
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2326)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2326), inst: 6285 })
// CS Name: System.Action`4
class CORDL_TYPE Action_4<T1,double_t,int64_t,int32_t> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: " const&", def_value: None }]
constexpr Action_4(Action_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: "&&", def_value: None }]
constexpr Action_4(Action_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_4(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_4& operator=(Action_4&& o) noexcept = default;
  constexpr Action_4& operator=(Action_4 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Action_4(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, double_t arg2, int64_t arg3, int32_t arg4) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`4
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type T3>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2326))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2326), inst: 6286 })
// CS Name: System.Action`4
class CORDL_TYPE Action_4<T1,T2,T3,float_t> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: " const&", def_value: None }]
constexpr Action_4(Action_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: "&&", def_value: None }]
constexpr Action_4(Action_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_4(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_4& operator=(Action_4&& o) noexcept = default;
  constexpr Action_4& operator=(Action_4 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Action_4(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, T2 arg2, T3 arg3, float_t arg4) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`4
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T4>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2326)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2326), inst: 6287 })
// CS Name: System.Action`4
class CORDL_TYPE Action_4<T1,float_t,float_t,T4> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: " const&", def_value: None }]
constexpr Action_4(Action_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: "&&", def_value: None }]
constexpr Action_4(Action_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_4(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_4& operator=(Action_4&& o) noexcept = default;
  constexpr Action_4& operator=(Action_4 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Action_4(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, float_t arg2, float_t arg3, T4 arg4) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`4
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2326)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2326), inst: 6288 })
// CS Name: System.Action`4
class CORDL_TYPE Action_4<uint64_t,bool,System::Guid,System::Int32Enum> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: " const&", def_value: None }]
constexpr Action_4(Action_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_4", modifiers: "&&", def_value: None }]
constexpr Action_4(Action_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_4(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_4& operator=(Action_4&& o) noexcept = default;
  constexpr Action_4& operator=(Action_4 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Action_4(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(uint64_t arg1, bool arg2, System::Guid arg3, System::Int32Enum arg4) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Action_4, "System", "Action`4");
