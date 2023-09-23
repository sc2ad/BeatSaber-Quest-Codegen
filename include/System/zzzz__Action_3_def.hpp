#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace System {
struct Int32Enum;
}
namespace UnityEngine::InputSystem::Users {
struct InputUser;
}
namespace UnityEngine {
struct Color;
}
namespace System {
struct ByteEnum;
}
namespace UnityEngine {
struct Vector2;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData;
}
namespace UnityEngine::Profiling::Experimental {
struct DebugScreenCapture;
}
// Forward declare root types
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T3>
class Action_3<UnityEngine::InputSystem::Users::InputUser,System::Int32Enum,T3>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1>
class Action_3<T1,UnityEngine::Color,System::Int32Enum>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1>
class Action_3<T1,int32_t,int32_t>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2>
class Action_3<T1,T2,System::Int32Enum>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2>
class Action_3<T1,T2,float_t>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2>
class Action_3<T1,T2,System::ByteEnum>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T3>
class Action_3<T1,int32_t,T3>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1>
class Action_3<T1,UnityEngine::Vector2,System::Int32Enum>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type T3>
class Action_3<float_t,T2,T3>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1>
class Action_3<T1,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData,float_t>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2>
class Action_3<T1,T2,UnityEngine::Playables::Playable>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type T3>
class Action_3<T1,T2,T3>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1>
class Action_3<T1,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData,float_t>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1>
class Action_3<T1,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData,float_t>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1>
class Action_3<T1,bool,UnityEngine::Profiling::Experimental::DebugScreenCapture>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T3>
class Action_3<T1,System::Int32Enum,T3>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2>
class Action_3<T1,T2,int32_t>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1>
class Action_3<T1,float_t,System::Int32Enum>;
}
// Type: System::Action`3
// Type: System::Action`3
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2325)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2325), inst: 5153 })
// CS Name: System.Action`3
class CORDL_TYPE Action_3<T1,int32_t,int32_t> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: " const&", def_value: None }]
constexpr Action_3(Action_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "&&", def_value: None }]
constexpr Action_3(Action_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_3& operator=(Action_3&& o) noexcept = default;
  constexpr Action_3& operator=(Action_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Action_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, int32_t arg2, int32_t arg3) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`3
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2325)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2325), inst: 5154 })
// CS Name: System.Action`3
class CORDL_TYPE Action_3<T1,T2,int32_t> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: " const&", def_value: None }]
constexpr Action_3(Action_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "&&", def_value: None }]
constexpr Action_3(Action_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_3& operator=(Action_3&& o) noexcept = default;
  constexpr Action_3& operator=(Action_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Action_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, T2 arg2, int32_t arg3) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`3
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type T3>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2325)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2325), inst: 5155 })
// CS Name: System.Action`3
class CORDL_TYPE Action_3<T1,T2,T3> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: " const&", def_value: None }]
constexpr Action_3(Action_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "&&", def_value: None }]
constexpr Action_3(Action_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_3& operator=(Action_3&& o) noexcept = default;
  constexpr Action_3& operator=(Action_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Action_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, T2 arg2, T3 arg3) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`3
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T3>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2325)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2325), inst: 5954 })
// CS Name: System.Action`3
class CORDL_TYPE Action_3<T1,System::Int32Enum,T3> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: " const&", def_value: None }]
constexpr Action_3(Action_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "&&", def_value: None }]
constexpr Action_3(Action_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_3& operator=(Action_3&& o) noexcept = default;
  constexpr Action_3& operator=(Action_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Action_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, System::Int32Enum arg2, T3 arg3) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`3
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T3>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2325)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2325), inst: 6097 })
// CS Name: System.Action`3
class CORDL_TYPE Action_3<T1,int32_t,T3> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: " const&", def_value: None }]
constexpr Action_3(Action_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "&&", def_value: None }]
constexpr Action_3(Action_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_3& operator=(Action_3&& o) noexcept = default;
  constexpr Action_3& operator=(Action_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Action_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, int32_t arg2, T3 arg3) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`3
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2325))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2325), inst: 6102 })
// CS Name: System.Action`3
class CORDL_TYPE Action_3<T1,T2,System::Int32Enum> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: " const&", def_value: None }]
constexpr Action_3(Action_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "&&", def_value: None }]
constexpr Action_3(Action_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_3& operator=(Action_3&& o) noexcept = default;
  constexpr Action_3& operator=(Action_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Action_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, T2 arg2, System::Int32Enum arg3) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`3
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2325)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2325), inst: 6104 })
// CS Name: System.Action`3
class CORDL_TYPE Action_3<T1,T2,float_t> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: " const&", def_value: None }]
constexpr Action_3(Action_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "&&", def_value: None }]
constexpr Action_3(Action_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_3& operator=(Action_3&& o) noexcept = default;
  constexpr Action_3& operator=(Action_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Action_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, T2 arg2, float_t arg3) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`3
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T2,::cordl_internals::il2cpp_reference_type T3>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2325)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2325), inst: 6118 })
// CS Name: System.Action`3
class CORDL_TYPE Action_3<float_t,T2,T3> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: " const&", def_value: None }]
constexpr Action_3(Action_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "&&", def_value: None }]
constexpr Action_3(Action_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_3& operator=(Action_3&& o) noexcept = default;
  constexpr Action_3& operator=(Action_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Action_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(float_t arg1, T2 arg2, T3 arg3) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`3
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T3>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2325)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2325), inst: 6270 })
// CS Name: System.Action`3
class CORDL_TYPE Action_3<UnityEngine::InputSystem::Users::InputUser,System::Int32Enum,T3> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: " const&", def_value: None }]
constexpr Action_3(Action_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "&&", def_value: None }]
constexpr Action_3(Action_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_3& operator=(Action_3&& o) noexcept = default;
  constexpr Action_3& operator=(Action_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Action_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(UnityEngine::InputSystem::Users::InputUser arg1, System::Int32Enum arg2, T3 arg3) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`3
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2325))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2325), inst: 6271 })
// CS Name: System.Action`3
class CORDL_TYPE Action_3<T1,bool,UnityEngine::Profiling::Experimental::DebugScreenCapture> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: " const&", def_value: None }]
constexpr Action_3(Action_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "&&", def_value: None }]
constexpr Action_3(Action_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_3& operator=(Action_3&& o) noexcept = default;
  constexpr Action_3& operator=(Action_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Action_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, bool arg2, UnityEngine::Profiling::Experimental::DebugScreenCapture arg3) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`3
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2325)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2325), inst: 6272 })
// CS Name: System.Action`3
class CORDL_TYPE Action_3<T1,UnityEngine::Color,System::Int32Enum> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: " const&", def_value: None }]
constexpr Action_3(Action_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "&&", def_value: None }]
constexpr Action_3(Action_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_3& operator=(Action_3&& o) noexcept = default;
  constexpr Action_3& operator=(Action_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Action_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, UnityEngine::Color arg2, System::Int32Enum arg3) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`3
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2325)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2325), inst: 6273 })
// CS Name: System.Action`3
class CORDL_TYPE Action_3<T1,T2,System::ByteEnum> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: " const&", def_value: None }]
constexpr Action_3(Action_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "&&", def_value: None }]
constexpr Action_3(Action_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_3& operator=(Action_3&& o) noexcept = default;
  constexpr Action_3& operator=(Action_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Action_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, T2 arg2, System::ByteEnum arg3) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`3
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2325)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2325), inst: 6274 })
// CS Name: System.Action`3
class CORDL_TYPE Action_3<T1,T2,UnityEngine::Playables::Playable> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: " const&", def_value: None }]
constexpr Action_3(Action_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "&&", def_value: None }]
constexpr Action_3(Action_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_3& operator=(Action_3&& o) noexcept = default;
  constexpr Action_3& operator=(Action_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Action_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, T2 arg2, UnityEngine::Playables::Playable arg3) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`3
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2325))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2325), inst: 6275 })
// CS Name: System.Action`3
class CORDL_TYPE Action_3<T1,float_t,System::Int32Enum> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: " const&", def_value: None }]
constexpr Action_3(Action_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "&&", def_value: None }]
constexpr Action_3(Action_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_3& operator=(Action_3&& o) noexcept = default;
  constexpr Action_3& operator=(Action_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Action_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, float_t arg2, System::Int32Enum arg3) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`3
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2325)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2325), inst: 6276 })
// CS Name: System.Action`3
class CORDL_TYPE Action_3<T1,UnityEngine::Vector2,System::Int32Enum> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: " const&", def_value: None }]
constexpr Action_3(Action_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "&&", def_value: None }]
constexpr Action_3(Action_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_3& operator=(Action_3&& o) noexcept = default;
  constexpr Action_3& operator=(Action_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Action_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, UnityEngine::Vector2 arg2, System::Int32Enum arg3) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`3
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2325))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2325), inst: 6277 })
// CS Name: System.Action`3
class CORDL_TYPE Action_3<T1,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData,float_t> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: " const&", def_value: None }]
constexpr Action_3(Action_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "&&", def_value: None }]
constexpr Action_3(Action_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_3& operator=(Action_3&& o) noexcept = default;
  constexpr Action_3& operator=(Action_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Action_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData arg2, float_t arg3) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`3
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2325))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2325), inst: 6278 })
// CS Name: System.Action`3
class CORDL_TYPE Action_3<T1,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData,float_t> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: " const&", def_value: None }]
constexpr Action_3(Action_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "&&", def_value: None }]
constexpr Action_3(Action_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_3& operator=(Action_3&& o) noexcept = default;
  constexpr Action_3& operator=(Action_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Action_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData arg2, float_t arg3) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`3
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2325))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2325), inst: 6279 })
// CS Name: System.Action`3
class CORDL_TYPE Action_3<T1,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData,float_t> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: " const&", def_value: None }]
constexpr Action_3(Action_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_3", modifiers: "&&", def_value: None }]
constexpr Action_3(Action_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_3(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_3& operator=(Action_3&& o) noexcept = default;
  constexpr Action_3& operator=(Action_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Action_3(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData arg2, float_t arg3) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Action_3, "System", "Action`3");
