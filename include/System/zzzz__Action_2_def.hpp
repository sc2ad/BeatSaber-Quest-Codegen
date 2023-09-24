#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
struct GlobalNamespace__OVRSpatialAnchor__UnboundAnchor;
}
namespace System {
struct Int32Enum;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::UIElements::Experimental {
struct StyleValues;
}
namespace UnityEngine::UIElements::StyleSheets {
struct MatchResultInfo;
}
namespace UnityEngine {
struct Vector2;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine {
struct PhysicsScene;
}
namespace UnityEngine {
struct ModifiableContactPair;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace GlobalNamespace {
struct CreateServerFormData;
}
// Forward declare root types
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<>
class Action_2<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor,bool>;
}
namespace System {
template<>
class Action_2<System::Int32Enum,System::Int32Enum>;
}
namespace System {
template<::cordl_internals::is_or_is_backed_by<int32_t> T2>
class Action_2<System::Int32Enum,T2>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T2>
class Action_2<System::Int32Enum,T2>;
}
namespace System {
template<>
class Action_2<System::Int32Enum,bool>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1>
class Action_2<T1,GlobalNamespace::SongPackMask>;
}
namespace System {
template<::cordl_internals::is_or_is_backed_by<uint64_t> T1>
class Action_2<T1,System::Int32Enum>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1>
class Action_2<T1,System::Int32Enum>;
}
namespace System {
template<::cordl_internals::is_or_is_backed_by<int32_t> T1>
class Action_2<T1,System::Int32Enum>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::is_or_is_backed_by<uint16_t> T2>
class Action_2<T1,T2>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::is_or_is_backed_by<uint8_t> T2>
class Action_2<T1,T2>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::is_or_is_backed_by<uint32_t> T2>
class Action_2<T1,T2>;
}
namespace System {
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::cordl_internals::il2cpp_reference_type T2>
class Action_2<T1,T2>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::is_or_is_backed_by<int32_t> T2>
class Action_2<T1,T2>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::is_or_is_backed_by<uint64_t> T2>
class Action_2<T1,T2>;
}
namespace System {
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::cordl_internals::is_or_is_backed_by<int32_t> T2>
class Action_2<T1,T2>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::is_or_is_backed_by<int8_t> T2>
class Action_2<T1,T2>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::is_or_is_backed_by<int16_t> T2>
class Action_2<T1,T2>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2>
class Action_2<T1,T2>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::is_or_is_backed_by<int64_t> T2>
class Action_2<T1,T2>;
}
namespace System {
template<::cordl_internals::is_or_is_backed_by<uint64_t> T1,::cordl_internals::il2cpp_reference_type T2>
class Action_2<T1,T2>;
}
namespace System {
template<::cordl_internals::is_or_is_backed_by<int32_t> T1>
class Action_2<T1,UnityEngine::Color>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1>
class Action_2<T1,UnityEngine::InputSystem::LowLevel::InputEventPtr>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1>
class Action_2<T1,UnityEngine::UIElements::Experimental::StyleValues>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1>
class Action_2<T1,UnityEngine::UIElements::StyleSheets::MatchResultInfo>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1>
class Action_2<T1,UnityEngine::Vector2>;
}
namespace System {
template<::cordl_internals::is_or_is_backed_by<uint64_t> T1>
class Action_2<T1,bool>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1>
class Action_2<T1,bool>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1>
class Action_2<T1,char16_t>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1>
class Action_2<T1,double_t>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T1>
class Action_2<T1,float_t>;
}
namespace System {
template<::cordl_internals::is_or_is_backed_by<int32_t> T1>
class Action_2<T1,float_t>;
}
namespace System {
template<>
class Action_2<UnityEngine::Color,System::Int32Enum>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T2>
class Action_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,T2>;
}
namespace System {
template<>
class Action_2<UnityEngine::PhysicsScene,Unity::Collections::NativeArray_1<UnityEngine::ModifiableContactPair>>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T2>
class Action_2<UnityEngine::Rendering::ScriptableRenderContext,T2>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T2>
class Action_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,T2>;
}
namespace System {
template<>
class Action_2<bool,GlobalNamespace::CreateServerFormData>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T2>
class Action_2<bool,T2>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T2>
class Action_2<float_t,T2>;
}
namespace System {
template<>
class Action_2<float_t,float_t>;
}
// Type: System::Action`2
// Type: System::Action`2
namespace System {
// cpp template
template<::cordl_internals::is_or_is_backed_by<uint64_t> T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 6269 })
// CS Name: System.Action`2
class CORDL_TYPE Action_2<T1,System::Int32Enum> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: " const&", def_value: None }]
constexpr Action_2(Action_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
constexpr Action_2(Action_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_2& operator=(Action_2&& o) noexcept = default;
  constexpr Action_2& operator=(Action_2 const& o) noexcept = default;
                


// Methods

static System::Action_2<T1,System::Int32Enum> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, System::Int32Enum arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 6268 })
// CS Name: System.Action`2
class CORDL_TYPE Action_2<UnityEngine::Rendering::ScriptableRenderContext,T2> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: " const&", def_value: None }]
constexpr Action_2(Action_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
constexpr Action_2(Action_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_2& operator=(Action_2&& o) noexcept = default;
  constexpr Action_2& operator=(Action_2 const& o) noexcept = default;
                


// Methods

static System::Action_2<UnityEngine::Rendering::ScriptableRenderContext,T2> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(UnityEngine::Rendering::ScriptableRenderContext arg1, T2 arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::is_or_is_backed_by<uint64_t> T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 6267 })
// CS Name: System.Action`2
class CORDL_TYPE Action_2<T1,T2> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: " const&", def_value: None }]
constexpr Action_2(Action_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
constexpr Action_2(Action_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_2& operator=(Action_2&& o) noexcept = default;
  constexpr Action_2& operator=(Action_2 const& o) noexcept = default;
                


// Methods

static System::Action_2<T1,T2> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, T2 arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::is_or_is_backed_by<uint16_t> T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 6266 })
// CS Name: System.Action`2
class CORDL_TYPE Action_2<T1,T2> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: " const&", def_value: None }]
constexpr Action_2(Action_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
constexpr Action_2(Action_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_2& operator=(Action_2&& o) noexcept = default;
  constexpr Action_2& operator=(Action_2 const& o) noexcept = default;
                


// Methods

static System::Action_2<T1,T2> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, T2 arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 6265 })
// CS Name: System.Action`2
class CORDL_TYPE Action_2<T1,UnityEngine::UIElements::Experimental::StyleValues> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: " const&", def_value: None }]
constexpr Action_2(Action_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
constexpr Action_2(Action_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_2& operator=(Action_2&& o) noexcept = default;
  constexpr Action_2& operator=(Action_2 const& o) noexcept = default;
                


// Methods

static System::Action_2<T1,UnityEngine::UIElements::Experimental::StyleValues> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, UnityEngine::UIElements::Experimental::StyleValues arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::is_or_is_backed_by<int8_t> T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 6264 })
// CS Name: System.Action`2
class CORDL_TYPE Action_2<T1,T2> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: " const&", def_value: None }]
constexpr Action_2(Action_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
constexpr Action_2(Action_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_2& operator=(Action_2&& o) noexcept = default;
  constexpr Action_2& operator=(Action_2 const& o) noexcept = default;
                


// Methods

static System::Action_2<T1,T2> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, T2 arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2324))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 6263 })
// CS Name: System.Action`2
class CORDL_TYPE Action_2<T1,UnityEngine::UIElements::StyleSheets::MatchResultInfo> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: " const&", def_value: None }]
constexpr Action_2(Action_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
constexpr Action_2(Action_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_2& operator=(Action_2&& o) noexcept = default;
  constexpr Action_2& operator=(Action_2 const& o) noexcept = default;
                


// Methods

static System::Action_2<T1,UnityEngine::UIElements::StyleSheets::MatchResultInfo> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, UnityEngine::UIElements::StyleSheets::MatchResultInfo arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::is_or_is_backed_by<int16_t> T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 6262 })
// CS Name: System.Action`2
class CORDL_TYPE Action_2<T1,T2> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: " const&", def_value: None }]
constexpr Action_2(Action_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
constexpr Action_2(Action_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_2& operator=(Action_2&& o) noexcept = default;
  constexpr Action_2& operator=(Action_2 const& o) noexcept = default;
                


// Methods

static System::Action_2<T1,T2> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, T2 arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 6261 })
// CS Name: System.Action`2
class CORDL_TYPE Action_2<T1,UnityEngine::InputSystem::LowLevel::InputEventPtr> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: " const&", def_value: None }]
constexpr Action_2(Action_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
constexpr Action_2(Action_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_2& operator=(Action_2&& o) noexcept = default;
  constexpr Action_2& operator=(Action_2 const& o) noexcept = default;
                


// Methods

static System::Action_2<T1,UnityEngine::InputSystem::LowLevel::InputEventPtr> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, UnityEngine::InputSystem::LowLevel::InputEventPtr arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 6260 })
// CS Name: System.Action`2
class CORDL_TYPE Action_2<T1,double_t> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: " const&", def_value: None }]
constexpr Action_2(Action_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
constexpr Action_2(Action_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_2& operator=(Action_2&& o) noexcept = default;
  constexpr Action_2& operator=(Action_2 const& o) noexcept = default;
                


// Methods

static System::Action_2<T1,double_t> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, double_t arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 6259 })
// CS Name: System.Action`2
class CORDL_TYPE Action_2<T1,char16_t> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: " const&", def_value: None }]
constexpr Action_2(Action_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
constexpr Action_2(Action_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_2& operator=(Action_2&& o) noexcept = default;
  constexpr Action_2& operator=(Action_2 const& o) noexcept = default;
                


// Methods

static System::Action_2<T1,char16_t> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, char16_t arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 6258 })
// CS Name: System.Action`2
class CORDL_TYPE Action_2<System::Int32Enum,bool> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: " const&", def_value: None }]
constexpr Action_2(Action_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
constexpr Action_2(Action_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_2& operator=(Action_2&& o) noexcept = default;
  constexpr Action_2& operator=(Action_2 const& o) noexcept = default;
                


// Methods

static System::Action_2<System::Int32Enum,bool> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(System::Int32Enum arg1, bool arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 6257 })
// CS Name: System.Action`2
class CORDL_TYPE Action_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,T2> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: " const&", def_value: None }]
constexpr Action_2(Action_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
constexpr Action_2(Action_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_2& operator=(Action_2&& o) noexcept = default;
  constexpr Action_2& operator=(Action_2 const& o) noexcept = default;
                


// Methods

static System::Action_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,T2> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(UnityEngine::InputSystem::LowLevel::InputEventPtr arg1, T2 arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 6256 })
// CS Name: System.Action`2
class CORDL_TYPE Action_2<UnityEngine::Color,System::Int32Enum> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: " const&", def_value: None }]
constexpr Action_2(Action_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
constexpr Action_2(Action_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_2& operator=(Action_2&& o) noexcept = default;
  constexpr Action_2& operator=(Action_2 const& o) noexcept = default;
                


// Methods

static System::Action_2<UnityEngine::Color,System::Int32Enum> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(UnityEngine::Color arg1, System::Int32Enum arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 6255 })
// CS Name: System.Action`2
class CORDL_TYPE Action_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,T2> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: " const&", def_value: None }]
constexpr Action_2(Action_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
constexpr Action_2(Action_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_2& operator=(Action_2&& o) noexcept = default;
  constexpr Action_2& operator=(Action_2 const& o) noexcept = default;
                


// Methods

static System::Action_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,T2> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle arg1, T2 arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2324))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 5137 })
// CS Name: System.Action`2
class CORDL_TYPE Action_2<bool,T2> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: " const&", def_value: None }]
constexpr Action_2(Action_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
constexpr Action_2(Action_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_2& operator=(Action_2&& o) noexcept = default;
  constexpr Action_2& operator=(Action_2 const& o) noexcept = default;
                


// Methods

static System::Action_2<bool,T2> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(bool arg1, T2 arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::cordl_internals::is_or_is_backed_by<uint64_t> T1,::cordl_internals::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 1579 })
// CS Name: System.Action`2
class CORDL_TYPE Action_2<T1,T2> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: " const&", def_value: None }]
constexpr Action_2(Action_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
constexpr Action_2(Action_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_2& operator=(Action_2&& o) noexcept = default;
  constexpr Action_2& operator=(Action_2 const& o) noexcept = default;
                


// Methods

static System::Action_2<T1,T2> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, T2 arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 1568 })
// CS Name: System.Action`2
class CORDL_TYPE Action_2<float_t,T2> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: " const&", def_value: None }]
constexpr Action_2(Action_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
constexpr Action_2(Action_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_2& operator=(Action_2&& o) noexcept = default;
  constexpr Action_2& operator=(Action_2 const& o) noexcept = default;
                


// Methods

static System::Action_2<float_t,T2> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(float_t arg1, T2 arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 1558 })
// CS Name: System.Action`2
class CORDL_TYPE Action_2<T1,UnityEngine::Vector2> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: " const&", def_value: None }]
constexpr Action_2(Action_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
constexpr Action_2(Action_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_2& operator=(Action_2&& o) noexcept = default;
  constexpr Action_2& operator=(Action_2 const& o) noexcept = default;
                


// Methods

static System::Action_2<T1,UnityEngine::Vector2> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, UnityEngine::Vector2 arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::is_or_is_backed_by<uint32_t> T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2324))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 1557 })
// CS Name: System.Action`2
class CORDL_TYPE Action_2<T1,T2> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: " const&", def_value: None }]
constexpr Action_2(Action_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
constexpr Action_2(Action_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_2& operator=(Action_2&& o) noexcept = default;
  constexpr Action_2& operator=(Action_2 const& o) noexcept = default;
                


// Methods

static System::Action_2<T1,T2> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, T2 arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2324))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 1554 })
// CS Name: System.Action`2
class CORDL_TYPE Action_2<T1,GlobalNamespace::SongPackMask> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: " const&", def_value: None }]
constexpr Action_2(Action_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
constexpr Action_2(Action_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_2& operator=(Action_2&& o) noexcept = default;
  constexpr Action_2& operator=(Action_2 const& o) noexcept = default;
                


// Methods

static System::Action_2<T1,GlobalNamespace::SongPackMask> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, GlobalNamespace::SongPackMask arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2324))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 1553 })
// CS Name: System.Action`2
class CORDL_TYPE Action_2<T1,float_t> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: " const&", def_value: None }]
constexpr Action_2(Action_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
constexpr Action_2(Action_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_2& operator=(Action_2&& o) noexcept = default;
  constexpr Action_2& operator=(Action_2 const& o) noexcept = default;
                


// Methods

static System::Action_2<T1,float_t> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, float_t arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::is_or_is_backed_by<int64_t> T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2324))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 1550 })
// CS Name: System.Action`2
class CORDL_TYPE Action_2<T1,T2> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: " const&", def_value: None }]
constexpr Action_2(Action_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
constexpr Action_2(Action_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_2& operator=(Action_2&& o) noexcept = default;
  constexpr Action_2& operator=(Action_2 const& o) noexcept = default;
                


// Methods

static System::Action_2<T1,T2> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, T2 arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 1549 })
// CS Name: System.Action`2
class CORDL_TYPE Action_2<T1,System::Int32Enum> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: " const&", def_value: None }]
constexpr Action_2(Action_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
constexpr Action_2(Action_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_2& operator=(Action_2&& o) noexcept = default;
  constexpr Action_2& operator=(Action_2 const& o) noexcept = default;
                


// Methods

static System::Action_2<T1,System::Int32Enum> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, System::Int32Enum arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::is_or_is_backed_by<int32_t> T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 1548 })
// CS Name: System.Action`2
class CORDL_TYPE Action_2<T1,T2> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: " const&", def_value: None }]
constexpr Action_2(Action_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
constexpr Action_2(Action_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_2& operator=(Action_2&& o) noexcept = default;
  constexpr Action_2& operator=(Action_2 const& o) noexcept = default;
                


// Methods

static System::Action_2<T1,T2> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, T2 arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::is_or_is_backed_by<uint8_t> T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 1545 })
// CS Name: System.Action`2
class CORDL_TYPE Action_2<T1,T2> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: " const&", def_value: None }]
constexpr Action_2(Action_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
constexpr Action_2(Action_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_2& operator=(Action_2&& o) noexcept = default;
  constexpr Action_2& operator=(Action_2 const& o) noexcept = default;
                


// Methods

static System::Action_2<T1,T2> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, T2 arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 1544 })
// CS Name: System.Action`2
class CORDL_TYPE Action_2<T1,bool> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: " const&", def_value: None }]
constexpr Action_2(Action_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
constexpr Action_2(Action_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_2& operator=(Action_2&& o) noexcept = default;
  constexpr Action_2& operator=(Action_2 const& o) noexcept = default;
                


// Methods

static System::Action_2<T1,bool> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, bool arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2324))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 1536 })
// CS Name: System.Action`2
class CORDL_TYPE Action_2<System::Int32Enum,T2> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: " const&", def_value: None }]
constexpr Action_2(Action_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
constexpr Action_2(Action_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_2& operator=(Action_2&& o) noexcept = default;
  constexpr Action_2& operator=(Action_2 const& o) noexcept = default;
                


// Methods

static System::Action_2<System::Int32Enum,T2> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(System::Int32Enum arg1, T2 arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2324))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 1535 })
// CS Name: System.Action`2
class CORDL_TYPE Action_2<System::Int32Enum,System::Int32Enum> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: " const&", def_value: None }]
constexpr Action_2(Action_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
constexpr Action_2(Action_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_2& operator=(Action_2&& o) noexcept = default;
  constexpr Action_2& operator=(Action_2 const& o) noexcept = default;
                


// Methods

static System::Action_2<System::Int32Enum,System::Int32Enum> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(System::Int32Enum arg1, System::Int32Enum arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2324))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 1534 })
// CS Name: System.Action`2
class CORDL_TYPE Action_2<System::Int32Enum,T2> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: " const&", def_value: None }]
constexpr Action_2(Action_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
constexpr Action_2(Action_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_2& operator=(Action_2&& o) noexcept = default;
  constexpr Action_2& operator=(Action_2 const& o) noexcept = default;
                


// Methods

static System::Action_2<System::Int32Enum,T2> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(System::Int32Enum arg1, T2 arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::cordl_internals::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 1532 })
// CS Name: System.Action`2
class CORDL_TYPE Action_2<T1,T2> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: " const&", def_value: None }]
constexpr Action_2(Action_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
constexpr Action_2(Action_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_2& operator=(Action_2&& o) noexcept = default;
  constexpr Action_2& operator=(Action_2 const& o) noexcept = default;
                


// Methods

static System::Action_2<T1,T2> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, T2 arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 1531 })
// CS Name: System.Action`2
class CORDL_TYPE Action_2<T1,System::Int32Enum> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: " const&", def_value: None }]
constexpr Action_2(Action_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
constexpr Action_2(Action_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_2& operator=(Action_2&& o) noexcept = default;
  constexpr Action_2& operator=(Action_2 const& o) noexcept = default;
                


// Methods

static System::Action_2<T1,System::Int32Enum> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, System::Int32Enum arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2324))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 604 })
// CS Name: System.Action`2
class CORDL_TYPE Action_2<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor,bool> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: " const&", def_value: None }]
constexpr Action_2(Action_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
constexpr Action_2(Action_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_2& operator=(Action_2&& o) noexcept = default;
  constexpr Action_2& operator=(Action_2 const& o) noexcept = default;
                


// Methods

static System::Action_2<GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor,bool> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(GlobalNamespace::GlobalNamespace__OVRSpatialAnchor__UnboundAnchor arg1, bool arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::cordl_internals::is_or_is_backed_by<uint64_t> T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2324))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 595 })
// CS Name: System.Action`2
class CORDL_TYPE Action_2<T1,bool> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: " const&", def_value: None }]
constexpr Action_2(Action_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
constexpr Action_2(Action_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_2& operator=(Action_2&& o) noexcept = default;
  constexpr Action_2& operator=(Action_2 const& o) noexcept = default;
                


// Methods

static System::Action_2<T1,bool> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, bool arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 561 })
// CS Name: System.Action`2
class CORDL_TYPE Action_2<float_t,float_t> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: " const&", def_value: None }]
constexpr Action_2(Action_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
constexpr Action_2(Action_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_2& operator=(Action_2&& o) noexcept = default;
  constexpr Action_2& operator=(Action_2 const& o) noexcept = default;
                


// Methods

static System::Action_2<float_t,float_t> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(float_t arg1, float_t arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 547 })
// CS Name: System.Action`2
class CORDL_TYPE Action_2<UnityEngine::PhysicsScene,Unity::Collections::NativeArray_1<UnityEngine::ModifiableContactPair>> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: " const&", def_value: None }]
constexpr Action_2(Action_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
constexpr Action_2(Action_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_2& operator=(Action_2&& o) noexcept = default;
  constexpr Action_2& operator=(Action_2 const& o) noexcept = default;
                


// Methods

static System::Action_2<UnityEngine::PhysicsScene,Unity::Collections::NativeArray_1<UnityEngine::ModifiableContactPair>> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(UnityEngine::PhysicsScene arg1, Unity::Collections::NativeArray_1<UnityEngine::ModifiableContactPair> arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2324))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 512 })
// CS Name: System.Action`2
class CORDL_TYPE Action_2<T1,float_t> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: " const&", def_value: None }]
constexpr Action_2(Action_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
constexpr Action_2(Action_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_2& operator=(Action_2&& o) noexcept = default;
  constexpr Action_2& operator=(Action_2 const& o) noexcept = default;
                


// Methods

static System::Action_2<T1,float_t> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, float_t arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T1,::cordl_internals::is_or_is_backed_by<int32_t> T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 511 })
// CS Name: System.Action`2
class CORDL_TYPE Action_2<T1,T2> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: " const&", def_value: None }]
constexpr Action_2(Action_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
constexpr Action_2(Action_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_2& operator=(Action_2&& o) noexcept = default;
  constexpr Action_2& operator=(Action_2 const& o) noexcept = default;
                


// Methods

static System::Action_2<T1,T2> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, T2 arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2324)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 510 })
// CS Name: System.Action`2
class CORDL_TYPE Action_2<T1,UnityEngine::Color> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: " const&", def_value: None }]
constexpr Action_2(Action_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
constexpr Action_2(Action_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_2& operator=(Action_2&& o) noexcept = default;
  constexpr Action_2& operator=(Action_2 const& o) noexcept = default;
                


// Methods

static System::Action_2<T1,UnityEngine::Color> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, UnityEngine::Color arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2324))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 473 })
// CS Name: System.Action`2
class CORDL_TYPE Action_2<bool,GlobalNamespace::CreateServerFormData> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: " const&", def_value: None }]
constexpr Action_2(Action_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
constexpr Action_2(Action_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_2& operator=(Action_2&& o) noexcept = default;
  constexpr Action_2& operator=(Action_2 const& o) noexcept = default;
                


// Methods

static System::Action_2<bool,GlobalNamespace::CreateServerFormData> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(bool arg1, GlobalNamespace::CreateServerFormData arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Action`2
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T1,::cordl_internals::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2324))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2324), inst: 80 })
// CS Name: System.Action`2
class CORDL_TYPE Action_2<T1,T2> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Action_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: " const&", def_value: None }]
constexpr Action_2(Action_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Action_2", modifiers: "&&", def_value: None }]
constexpr Action_2(Action_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Action_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Action_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Action_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Action_2& operator=(Action_2&& o) noexcept = default;
  constexpr Action_2& operator=(Action_2 const& o) noexcept = default;
                


// Methods

static System::Action_2<T1,T2> New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(T1 arg1, T2 arg2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Action_2, "System", "Action`2");
