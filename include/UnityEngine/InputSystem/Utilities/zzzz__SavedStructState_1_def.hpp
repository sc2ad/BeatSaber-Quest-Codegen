#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace UnityEngine::InputSystem::EnhancedTouch {
struct UnityEngine__InputSystem__EnhancedTouch__Touch__GlobalState;
}
namespace UnityEngine::InputSystem::Utilities {
class ISavedState;
}
namespace System {
class Action;
}
namespace UnityEngine::InputSystem {
struct UnityEngine__InputSystem__InputActionState__GlobalState;
}
namespace UnityEngine::InputSystem::Users {
struct UnityEngine__InputSystem__Users__InputUser__GlobalState;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
template<typename T>
class SavedStructState_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename T>
class UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
class SavedStructState_1<UnityEngine::InputSystem::EnhancedTouch::UnityEngine__InputSystem__EnhancedTouch__Touch__GlobalState>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
class SavedStructState_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__GlobalState>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
class SavedStructState_1<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
class UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<UnityEngine::InputSystem::EnhancedTouch::UnityEngine__InputSystem__EnhancedTouch__Touch__GlobalState>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
class UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__GlobalState>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
class UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState>;
}
// Type: ::TypedRestore
// Type: UnityEngine.InputSystem.Utilities::SavedStructState`1
// Type: ::TypedRestore
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6787)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6787), inst: 5038 })
// CS Name: UnityEngine.InputSystem.Utilities.SavedStructState`1::TypedRestore
class CORDL_TYPE UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__GlobalState> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore(UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore(UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore& operator=(UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore& operator=(UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__GlobalState> state) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__GlobalState> state, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void EndInvoke(ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__GlobalState> state, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::TypedRestore
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6787)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6787), inst: 5039 })
// CS Name: UnityEngine.InputSystem.Utilities.SavedStructState`1::TypedRestore
class CORDL_TYPE UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore(UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore(UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore& operator=(UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore& operator=(UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(ByRef<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState> state) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(ByRef<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState> state, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void EndInvoke(ByRef<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState> state, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::TypedRestore
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6787)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6787), inst: 5040 })
// CS Name: UnityEngine.InputSystem.Utilities.SavedStructState`1::TypedRestore
class CORDL_TYPE UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<UnityEngine::InputSystem::EnhancedTouch::UnityEngine__InputSystem__EnhancedTouch__Touch__GlobalState> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore(UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore(UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore& operator=(UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore& operator=(UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(ByRef<UnityEngine::InputSystem::EnhancedTouch::UnityEngine__InputSystem__EnhancedTouch__Touch__GlobalState> state) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(ByRef<UnityEngine::InputSystem::EnhancedTouch::UnityEngine__InputSystem__EnhancedTouch__Touch__GlobalState> state, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void EndInvoke(ByRef<UnityEngine::InputSystem::EnhancedTouch::UnityEngine__InputSystem__EnhancedTouch__Touch__GlobalState> state, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::SavedStructState`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6788))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6788), inst: 5038 })
// CS Name: UnityEngine.InputSystem.Utilities.SavedStructState`1
class CORDL_TYPE SavedStructState_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__GlobalState> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using TypedRestore = UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__GlobalState>;

/// @brief Convert operator to UnityEngine::InputSystem::Utilities::ISavedState
constexpr operator  UnityEngine::InputSystem::Utilities::ISavedState() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SavedStructState_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "SavedStructState_1", modifiers: " const&", def_value: None }]
constexpr SavedStructState_1(SavedStructState_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SavedStructState_1", modifiers: "&&", def_value: None }]
constexpr SavedStructState_1(SavedStructState_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SavedStructState_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SavedStructState_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SavedStructState_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SavedStructState_1& operator=(SavedStructState_1&& o) noexcept = default;
  constexpr SavedStructState_1& operator=(SavedStructState_1 const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__GlobalState __declspec(property(get=__get_m_State, put=__set_m_State))  m_State;

constexpr void __set_m_State(UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__GlobalState value) ;

constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__GlobalState __get_m_State() const;

 UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__GlobalState> __declspec(property(get=__get_m_RestoreAction, put=__set_m_RestoreAction))  m_RestoreAction;

constexpr void __set_m_RestoreAction(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__GlobalState> value) ;

constexpr UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__GlobalState> __get_m_RestoreAction() const;

 System::Action __declspec(property(get=__get_m_StaticDisposeCurrentState, put=__set_m_StaticDisposeCurrentState))  m_StaticDisposeCurrentState;

constexpr void __set_m_StaticDisposeCurrentState(System::Action value) ;

constexpr System::Action __get_m_StaticDisposeCurrentState() const;


// Methods

// Ctor Parameters [CppParam { name: "state", ty: "ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__GlobalState>", modifiers: "", def_value: None }, CppParam { name: "restoreAction", ty: "UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__GlobalState>", modifiers: "", def_value: None }, CppParam { name: "staticDisposeCurrentState", ty: "System::Action", modifiers: "", def_value: None }]
explicit SavedStructState_1(ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__GlobalState> state, UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__GlobalState> restoreAction, System::Action staticDisposeCurrentState) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__GlobalState> state, UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__GlobalState> restoreAction, System::Action staticDisposeCurrentState) ;

/// @brief Method StaticDisposeCurrentState addr 0x0 size 0xffffffffffffffff virtual true final true
 void StaticDisposeCurrentState() ;

/// @brief Method RestoreSavedState addr 0x0 size 0xffffffffffffffff virtual true final true
 void RestoreSavedState() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::SavedStructState`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6788))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6788), inst: 5039 })
// CS Name: UnityEngine.InputSystem.Utilities.SavedStructState`1
class CORDL_TYPE SavedStructState_1<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using TypedRestore = UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState>;

/// @brief Convert operator to UnityEngine::InputSystem::Utilities::ISavedState
constexpr operator  UnityEngine::InputSystem::Utilities::ISavedState() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SavedStructState_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "SavedStructState_1", modifiers: " const&", def_value: None }]
constexpr SavedStructState_1(SavedStructState_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SavedStructState_1", modifiers: "&&", def_value: None }]
constexpr SavedStructState_1(SavedStructState_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SavedStructState_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SavedStructState_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SavedStructState_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SavedStructState_1& operator=(SavedStructState_1&& o) noexcept = default;
  constexpr SavedStructState_1& operator=(SavedStructState_1 const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState __declspec(property(get=__get_m_State, put=__set_m_State))  m_State;

constexpr void __set_m_State(UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState value) ;

constexpr UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState __get_m_State() const;

 UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState> __declspec(property(get=__get_m_RestoreAction, put=__set_m_RestoreAction))  m_RestoreAction;

constexpr void __set_m_RestoreAction(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState> value) ;

constexpr UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState> __get_m_RestoreAction() const;

 System::Action __declspec(property(get=__get_m_StaticDisposeCurrentState, put=__set_m_StaticDisposeCurrentState))  m_StaticDisposeCurrentState;

constexpr void __set_m_StaticDisposeCurrentState(System::Action value) ;

constexpr System::Action __get_m_StaticDisposeCurrentState() const;


// Methods

// Ctor Parameters [CppParam { name: "state", ty: "ByRef<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState>", modifiers: "", def_value: None }, CppParam { name: "restoreAction", ty: "UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState>", modifiers: "", def_value: None }, CppParam { name: "staticDisposeCurrentState", ty: "System::Action", modifiers: "", def_value: None }]
explicit SavedStructState_1(ByRef<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState> state, UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState> restoreAction, System::Action staticDisposeCurrentState) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState> state, UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<UnityEngine::InputSystem::Users::UnityEngine__InputSystem__Users__InputUser__GlobalState> restoreAction, System::Action staticDisposeCurrentState) ;

/// @brief Method StaticDisposeCurrentState addr 0x0 size 0xffffffffffffffff virtual true final true
 void StaticDisposeCurrentState() ;

/// @brief Method RestoreSavedState addr 0x0 size 0xffffffffffffffff virtual true final true
 void RestoreSavedState() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::SavedStructState`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6788))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6788), inst: 5040 })
// CS Name: UnityEngine.InputSystem.Utilities.SavedStructState`1
class CORDL_TYPE SavedStructState_1<UnityEngine::InputSystem::EnhancedTouch::UnityEngine__InputSystem__EnhancedTouch__Touch__GlobalState> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using TypedRestore = UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<UnityEngine::InputSystem::EnhancedTouch::UnityEngine__InputSystem__EnhancedTouch__Touch__GlobalState>;

/// @brief Convert operator to UnityEngine::InputSystem::Utilities::ISavedState
constexpr operator  UnityEngine::InputSystem::Utilities::ISavedState() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SavedStructState_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "SavedStructState_1", modifiers: " const&", def_value: None }]
constexpr SavedStructState_1(SavedStructState_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SavedStructState_1", modifiers: "&&", def_value: None }]
constexpr SavedStructState_1(SavedStructState_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SavedStructState_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SavedStructState_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SavedStructState_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SavedStructState_1& operator=(SavedStructState_1&& o) noexcept = default;
  constexpr SavedStructState_1& operator=(SavedStructState_1 const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::EnhancedTouch::UnityEngine__InputSystem__EnhancedTouch__Touch__GlobalState __declspec(property(get=__get_m_State, put=__set_m_State))  m_State;

constexpr void __set_m_State(UnityEngine::InputSystem::EnhancedTouch::UnityEngine__InputSystem__EnhancedTouch__Touch__GlobalState value) ;

constexpr UnityEngine::InputSystem::EnhancedTouch::UnityEngine__InputSystem__EnhancedTouch__Touch__GlobalState __get_m_State() const;

 UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<UnityEngine::InputSystem::EnhancedTouch::UnityEngine__InputSystem__EnhancedTouch__Touch__GlobalState> __declspec(property(get=__get_m_RestoreAction, put=__set_m_RestoreAction))  m_RestoreAction;

constexpr void __set_m_RestoreAction(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<UnityEngine::InputSystem::EnhancedTouch::UnityEngine__InputSystem__EnhancedTouch__Touch__GlobalState> value) ;

constexpr UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<UnityEngine::InputSystem::EnhancedTouch::UnityEngine__InputSystem__EnhancedTouch__Touch__GlobalState> __get_m_RestoreAction() const;

 System::Action __declspec(property(get=__get_m_StaticDisposeCurrentState, put=__set_m_StaticDisposeCurrentState))  m_StaticDisposeCurrentState;

constexpr void __set_m_StaticDisposeCurrentState(System::Action value) ;

constexpr System::Action __get_m_StaticDisposeCurrentState() const;


// Methods

// Ctor Parameters [CppParam { name: "state", ty: "ByRef<UnityEngine::InputSystem::EnhancedTouch::UnityEngine__InputSystem__EnhancedTouch__Touch__GlobalState>", modifiers: "", def_value: None }, CppParam { name: "restoreAction", ty: "UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<UnityEngine::InputSystem::EnhancedTouch::UnityEngine__InputSystem__EnhancedTouch__Touch__GlobalState>", modifiers: "", def_value: None }, CppParam { name: "staticDisposeCurrentState", ty: "System::Action", modifiers: "", def_value: None }]
explicit SavedStructState_1(ByRef<UnityEngine::InputSystem::EnhancedTouch::UnityEngine__InputSystem__EnhancedTouch__Touch__GlobalState> state, UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<UnityEngine::InputSystem::EnhancedTouch::UnityEngine__InputSystem__EnhancedTouch__Touch__GlobalState> restoreAction, System::Action staticDisposeCurrentState) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<UnityEngine::InputSystem::EnhancedTouch::UnityEngine__InputSystem__EnhancedTouch__Touch__GlobalState> state, UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<UnityEngine::InputSystem::EnhancedTouch::UnityEngine__InputSystem__EnhancedTouch__Touch__GlobalState> restoreAction, System::Action staticDisposeCurrentState) ;

/// @brief Method StaticDisposeCurrentState addr 0x0 size 0xffffffffffffffff virtual true final true
 void StaticDisposeCurrentState() ;

/// @brief Method RestoreSavedState addr 0x0 size 0xffffffffffffffff virtual true final true
 void RestoreSavedState() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::InputSystem::Utilities::SavedStructState_1, "UnityEngine.InputSystem.Utilities", "SavedStructState`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore, "UnityEngine.InputSystem.Utilities", "SavedStructState`1/TypedRestore");
