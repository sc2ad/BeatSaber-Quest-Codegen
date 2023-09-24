#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Threading {
class SynchronizationContext;
}
namespace System::Threading {
class SendOrPostCallback;
}
namespace System::Threading {
class System__Threading__OSSpecificSynchronizationContext__InvocationEntryDelegate;
}
namespace System::Threading {
class System__Threading__OSSpecificSynchronizationContext____c;
}
namespace System::Runtime::CompilerServices {
template<typename TKey,typename TValue>
class ConditionalWeakTable_2;
}
namespace System::Threading {
class System__Threading__OSSpecificSynchronizationContext__InvocationContext;
}
namespace System::Runtime::CompilerServices {
template<typename TKey,typename TValue>
class System__Runtime__CompilerServices__ConditionalWeakTable_2__CreateValueCallback;
}
// Forward declare root types
namespace System::Threading {
class OSSpecificSynchronizationContext;
}
namespace System::Threading {
class System__Threading__OSSpecificSynchronizationContext__InvocationContext;
}
namespace System::Threading {
class System__Threading__OSSpecificSynchronizationContext__InvocationEntryDelegate;
}
namespace System::Threading {
class System__Threading__OSSpecificSynchronizationContext____c;
}
// Type: ::InvocationEntryDelegate
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2717))
// CS Name: System.Threading.OSSpecificSynchronizationContext::InvocationEntryDelegate
class CORDL_TYPE System__Threading__OSSpecificSynchronizationContext__InvocationEntryDelegate : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~System__Threading__OSSpecificSynchronizationContext__InvocationEntryDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Threading__OSSpecificSynchronizationContext__InvocationEntryDelegate", modifiers: " const&", def_value: None }]
constexpr System__Threading__OSSpecificSynchronizationContext__InvocationEntryDelegate(System__Threading__OSSpecificSynchronizationContext__InvocationEntryDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Threading__OSSpecificSynchronizationContext__InvocationEntryDelegate", modifiers: "&&", def_value: None }]
constexpr System__Threading__OSSpecificSynchronizationContext__InvocationEntryDelegate(System__Threading__OSSpecificSynchronizationContext__InvocationEntryDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Threading__OSSpecificSynchronizationContext__InvocationEntryDelegate(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr System__Threading__OSSpecificSynchronizationContext__InvocationEntryDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Threading__OSSpecificSynchronizationContext__InvocationEntryDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Threading__OSSpecificSynchronizationContext__InvocationEntryDelegate& operator=(System__Threading__OSSpecificSynchronizationContext__InvocationEntryDelegate&& o) noexcept = default;
  constexpr System__Threading__OSSpecificSynchronizationContext__InvocationEntryDelegate& operator=(System__Threading__OSSpecificSynchronizationContext__InvocationEntryDelegate const& o) noexcept = default;
                


// Methods

static System::Threading::System__Threading__OSSpecificSynchronizationContext__InvocationEntryDelegate New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x24abb20 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x24abcc8 size 0x14 virtual true final false
 void Invoke(::cordl_internals::intptr_t arg) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
// Type: ::InvocationContext
namespace System::Threading {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2718))
// CS Name: System.Threading.OSSpecificSynchronizationContext::InvocationContext
class CORDL_TYPE System__Threading__OSSpecificSynchronizationContext__InvocationContext : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__Threading__OSSpecificSynchronizationContext__InvocationContext() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Threading__OSSpecificSynchronizationContext__InvocationContext", modifiers: " const&", def_value: None }]
constexpr System__Threading__OSSpecificSynchronizationContext__InvocationContext(System__Threading__OSSpecificSynchronizationContext__InvocationContext const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Threading__OSSpecificSynchronizationContext__InvocationContext", modifiers: "&&", def_value: None }]
constexpr System__Threading__OSSpecificSynchronizationContext__InvocationContext(System__Threading__OSSpecificSynchronizationContext__InvocationContext&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Threading__OSSpecificSynchronizationContext__InvocationContext(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Threading__OSSpecificSynchronizationContext__InvocationContext& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Threading__OSSpecificSynchronizationContext__InvocationContext& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Threading__OSSpecificSynchronizationContext__InvocationContext& operator=(System__Threading__OSSpecificSynchronizationContext__InvocationContext&& o) noexcept = default;
  constexpr System__Threading__OSSpecificSynchronizationContext__InvocationContext& operator=(System__Threading__OSSpecificSynchronizationContext__InvocationContext const& o) noexcept = default;
                


// Fields

 System::Threading::SendOrPostCallback __declspec(property(get=__get_m_Delegate, put=__set_m_Delegate))  m_Delegate;

constexpr void __set_m_Delegate(System::Threading::SendOrPostCallback value) ;

constexpr System::Threading::SendOrPostCallback __get_m_Delegate() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_m_State, put=__set_m_State))  m_State;

constexpr void __set_m_State(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_m_State() const;


// Methods

static System::Threading::System__Threading__OSSpecificSynchronizationContext__InvocationContext New_ctor(System::Threading::SendOrPostCallback d, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method .ctor addr 0x24abbe4 size 0x2c virtual false final false
 void _ctor(System::Threading::SendOrPostCallback d, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method Invoke addr 0x24abc14 size 0x28 virtual false final false
 void Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
// Type: ::<>c
namespace System::Threading {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2719))
// CS Name: System.Threading.OSSpecificSynchronizationContext::<>c
class CORDL_TYPE System__Threading__OSSpecificSynchronizationContext____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Threading__OSSpecificSynchronizationContext____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Threading__OSSpecificSynchronizationContext____c", modifiers: " const&", def_value: None }]
constexpr System__Threading__OSSpecificSynchronizationContext____c(System__Threading__OSSpecificSynchronizationContext____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Threading__OSSpecificSynchronizationContext____c", modifiers: "&&", def_value: None }]
constexpr System__Threading__OSSpecificSynchronizationContext____c(System__Threading__OSSpecificSynchronizationContext____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Threading__OSSpecificSynchronizationContext____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Threading__OSSpecificSynchronizationContext____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Threading__OSSpecificSynchronizationContext____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Threading__OSSpecificSynchronizationContext____c& operator=(System__Threading__OSSpecificSynchronizationContext____c&& o) noexcept = default;
  constexpr System__Threading__OSSpecificSynchronizationContext____c& operator=(System__Threading__OSSpecificSynchronizationContext____c const& o) noexcept = default;
                


// Fields

static System::Threading::System__Threading__OSSpecificSynchronizationContext____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(System::Threading::System__Threading__OSSpecificSynchronizationContext____c value) ;

static System::Threading::System__Threading__OSSpecificSynchronizationContext____c __get___9() ;

static System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConditionalWeakTable_2__CreateValueCallback<::bs_hook::Il2CppWrapperType,System::Threading::OSSpecificSynchronizationContext> __declspec(property(get=__get___9__3_0, put=__set___9__3_0))  __9__3_0;

static void __set___9__3_0(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConditionalWeakTable_2__CreateValueCallback<::bs_hook::Il2CppWrapperType,System::Threading::OSSpecificSynchronizationContext> value) ;

static System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConditionalWeakTable_2__CreateValueCallback<::bs_hook::Il2CppWrapperType,System::Threading::OSSpecificSynchronizationContext> __get___9__3_0() ;


// Methods

static System::Threading::System__Threading__OSSpecificSynchronizationContext____c New_ctor() ;

/// @brief Method .ctor addr 0x24abd40 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Get>b__3_0 addr 0x24abd48 size 0x64 virtual false final false
 System::Threading::OSSpecificSynchronizationContext _Get_b__3_0(::bs_hook::Il2CppWrapperType _osContext) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
// Type: System.Threading::OSSpecificSynchronizationContext
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2716))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2720))
// CS Name: System.Threading.OSSpecificSynchronizationContext
class CORDL_TYPE OSSpecificSynchronizationContext : public System::Threading::SynchronizationContext {
public:
// Declarations
using __c = System::Threading::System__Threading__OSSpecificSynchronizationContext____c;

using InvocationContext = System::Threading::System__Threading__OSSpecificSynchronizationContext__InvocationContext;

using InvocationEntryDelegate = System::Threading::System__Threading__OSSpecificSynchronizationContext__InvocationEntryDelegate;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OSSpecificSynchronizationContext() = default;

// Ctor Parameters [CppParam { name: "", ty: "OSSpecificSynchronizationContext", modifiers: " const&", def_value: None }]
constexpr OSSpecificSynchronizationContext(OSSpecificSynchronizationContext const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OSSpecificSynchronizationContext", modifiers: "&&", def_value: None }]
constexpr OSSpecificSynchronizationContext(OSSpecificSynchronizationContext&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OSSpecificSynchronizationContext(void* ptr) noexcept : System::Threading::SynchronizationContext(ptr) {
}


  constexpr OSSpecificSynchronizationContext& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OSSpecificSynchronizationContext& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OSSpecificSynchronizationContext& operator=(OSSpecificSynchronizationContext&& o) noexcept = default;
  constexpr OSSpecificSynchronizationContext& operator=(OSSpecificSynchronizationContext const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_m_OSSynchronizationContext, put=__set_m_OSSynchronizationContext))  m_OSSynchronizationContext;

constexpr void __set_m_OSSynchronizationContext(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_m_OSSynchronizationContext() const;

static System::Runtime::CompilerServices::ConditionalWeakTable_2<::bs_hook::Il2CppWrapperType,System::Threading::OSSpecificSynchronizationContext> __declspec(property(get=__get_s_ContextCache, put=__set_s_ContextCache))  s_ContextCache;

static void __set_s_ContextCache(System::Runtime::CompilerServices::ConditionalWeakTable_2<::bs_hook::Il2CppWrapperType,System::Threading::OSSpecificSynchronizationContext> value) ;

static System::Runtime::CompilerServices::ConditionalWeakTable_2<::bs_hook::Il2CppWrapperType,System::Threading::OSSpecificSynchronizationContext> __get_s_ContextCache() ;


// Methods

static System::Threading::OSSpecificSynchronizationContext New_ctor(::bs_hook::Il2CppWrapperType osContext) ;

/// @brief Method .ctor addr 0x24ab8f4 size 0x28 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType osContext) ;

/// @brief Method Get addr 0x24ab5d0 size 0x15c virtual false final false
static System::Threading::OSSpecificSynchronizationContext Get() ;

/// @brief Method CreateCopy addr 0x24ab920 size 0x68 virtual true final false
 System::Threading::SynchronizationContext CreateCopy() ;

/// @brief Method Send addr 0x24ab988 size 0x40 virtual true final false
 void Send(System::Threading::SendOrPostCallback d, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method Post addr 0x24ab9c8 size 0x158 virtual true final false
 void Post(System::Threading::SendOrPostCallback d, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method InvocationEntry addr 0x24ab78c size 0x168 virtual false final false
static void InvocationEntry(::cordl_internals::intptr_t arg) ;

/// @brief Method GetOSContext addr 0x24ab91c size 0x4 virtual false final false
static ::bs_hook::Il2CppWrapperType GetOSContext() ;

/// @brief Method PostInternal addr 0x24abc10 size 0x4 virtual false final false
static void PostInternal(::bs_hook::Il2CppWrapperType osSynchronizationContext, ::cordl_internals::intptr_t callback, ::cordl_internals::intptr_t arg) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
NEED_NO_BOX(System::Threading::OSSpecificSynchronizationContext);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::OSSpecificSynchronizationContext, "System.Threading", "OSSpecificSynchronizationContext");
NEED_NO_BOX(System::Threading::System__Threading__OSSpecificSynchronizationContext__InvocationContext);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::System__Threading__OSSpecificSynchronizationContext__InvocationContext, "System.Threading", "OSSpecificSynchronizationContext/InvocationContext");
NEED_NO_BOX(System::Threading::System__Threading__OSSpecificSynchronizationContext__InvocationEntryDelegate);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::System__Threading__OSSpecificSynchronizationContext__InvocationEntryDelegate, "System.Threading", "OSSpecificSynchronizationContext/InvocationEntryDelegate");
NEED_NO_BOX(System::Threading::System__Threading__OSSpecificSynchronizationContext____c);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::System__Threading__OSSpecificSynchronizationContext____c, "System.Threading", "OSSpecificSynchronizationContext/<>c");
