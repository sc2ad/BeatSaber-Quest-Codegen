#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Threading/Tasks/zzzz__AwaitTaskContinuation_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Threading {
class ContextCallback;
}
namespace System::Threading {
class SynchronizationContext;
}
namespace System {
class Action;
}
namespace System::Threading {
class SendOrPostCallback;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace System::Threading::Tasks {
class SynchronizationContextAwaitTaskContinuation;
}
namespace System::Threading::Tasks {
class ____System__Threading__Tasks__SynchronizationContextAwaitTaskContinuation____c;
}
// Type: ::<>c
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2799))
// CS Name: System.Threading.Tasks.SynchronizationContextAwaitTaskContinuation::<>c
class CORDL_TYPE ____System__Threading__Tasks__SynchronizationContextAwaitTaskContinuation____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____System__Threading__Tasks__SynchronizationContextAwaitTaskContinuation____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Threading__Tasks__SynchronizationContextAwaitTaskContinuation____c", modifiers: " const&", def_value: None }]
constexpr ____System__Threading__Tasks__SynchronizationContextAwaitTaskContinuation____c(____System__Threading__Tasks__SynchronizationContextAwaitTaskContinuation____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Threading__Tasks__SynchronizationContextAwaitTaskContinuation____c", modifiers: "&&", def_value: None }]
constexpr ____System__Threading__Tasks__SynchronizationContextAwaitTaskContinuation____c(____System__Threading__Tasks__SynchronizationContextAwaitTaskContinuation____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Threading__Tasks__SynchronizationContextAwaitTaskContinuation____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Threading__Tasks__SynchronizationContextAwaitTaskContinuation____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Threading__Tasks__SynchronizationContextAwaitTaskContinuation____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Threading__Tasks__SynchronizationContextAwaitTaskContinuation____c& operator=(____System__Threading__Tasks__SynchronizationContextAwaitTaskContinuation____c&& o) noexcept = default;
  constexpr ____System__Threading__Tasks__SynchronizationContextAwaitTaskContinuation____c& operator=(____System__Threading__Tasks__SynchronizationContextAwaitTaskContinuation____c const& o) noexcept = default;
                


// Fields

static ::System::Threading::Tasks::____System__Threading__Tasks__SynchronizationContextAwaitTaskContinuation____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::System::Threading::Tasks::____System__Threading__Tasks__SynchronizationContextAwaitTaskContinuation____c value) ;

static ::System::Threading::Tasks::____System__Threading__Tasks__SynchronizationContextAwaitTaskContinuation____c __get___9() ;


// Methods

// Ctor Parameters []
explicit ____System__Threading__Tasks__SynchronizationContextAwaitTaskContinuation____c() ;

/// @brief Method .ctor addr 0x24bd88c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <.cctor>b__7_0 addr 0x24bd894 size 0x6c virtual false final false
 void __cctor_b__7_0(::bs_hook::Il2CppWrapperType state) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::SynchronizationContextAwaitTaskContinuation
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2803))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2800))
// CS Name: System.Threading.Tasks.SynchronizationContextAwaitTaskContinuation
class CORDL_TYPE SynchronizationContextAwaitTaskContinuation : public ::System::Threading::Tasks::AwaitTaskContinuation {
public:
// Declarations
using __c = ::System::Threading::Tasks::____System__Threading__Tasks__SynchronizationContextAwaitTaskContinuation____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SynchronizationContextAwaitTaskContinuation() = default;

// Ctor Parameters [CppParam { name: "", ty: "SynchronizationContextAwaitTaskContinuation", modifiers: " const&", def_value: None }]
constexpr SynchronizationContextAwaitTaskContinuation(SynchronizationContextAwaitTaskContinuation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SynchronizationContextAwaitTaskContinuation", modifiers: "&&", def_value: None }]
constexpr SynchronizationContextAwaitTaskContinuation(SynchronizationContextAwaitTaskContinuation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SynchronizationContextAwaitTaskContinuation(void* ptr) noexcept : ::System::Threading::Tasks::AwaitTaskContinuation(ptr) {
}


  constexpr SynchronizationContextAwaitTaskContinuation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SynchronizationContextAwaitTaskContinuation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SynchronizationContextAwaitTaskContinuation& operator=(SynchronizationContextAwaitTaskContinuation&& o) noexcept = default;
  constexpr SynchronizationContextAwaitTaskContinuation& operator=(SynchronizationContextAwaitTaskContinuation const& o) noexcept = default;
                


// Fields

static ::System::Threading::SendOrPostCallback __declspec(property(get=__get_s_postCallback, put=__set_s_postCallback))  s_postCallback;

static void __set_s_postCallback(::System::Threading::SendOrPostCallback value) ;

static ::System::Threading::SendOrPostCallback __get_s_postCallback() ;

static ::System::Threading::ContextCallback __declspec(property(get=__get_s_postActionCallback, put=__set_s_postActionCallback))  s_postActionCallback;

static void __set_s_postActionCallback(::System::Threading::ContextCallback value) ;

static ::System::Threading::ContextCallback __get_s_postActionCallback() ;

 ::System::Threading::SynchronizationContext __declspec(property(get=__get_m_syncContext, put=__set_m_syncContext))  m_syncContext;

constexpr void __set_m_syncContext(::System::Threading::SynchronizationContext value) ;

constexpr ::System::Threading::SynchronizationContext __get_m_syncContext() const;


// Methods

// Ctor Parameters [CppParam { name: "context", ty: "::System::Threading::SynchronizationContext", modifiers: "", def_value: None }, CppParam { name: "action", ty: "::System::Action", modifiers: "", def_value: None }, CppParam { name: "flowExecutionContext", ty: "bool", modifiers: "", def_value: None }]
explicit SynchronizationContextAwaitTaskContinuation(::System::Threading::SynchronizationContext context, ::System::Action action, bool flowExecutionContext) ;

/// @brief Method .ctor addr 0x24b92b8 size 0x30 virtual false final false
 void _ctor(::System::Threading::SynchronizationContext context, ::System::Action action, bool flowExecutionContext) ;

/// @brief Method Run addr 0x24bd2a0 size 0x1ec virtual true final true
 void Run(::System::Threading::Tasks::Task ignored, bool canInlineContinuationTask) ;

/// @brief Method PostAction addr 0x24bd608 size 0x94 virtual false final false
static void PostAction(::bs_hook::Il2CppWrapperType state) ;

/// @brief Method GetPostActionCallback addr 0x24bd69c size 0xc8 virtual false final false
static ::System::Threading::ContextCallback GetPostActionCallback() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
} // end anonymous namespace
NEED_NO_BOX(::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation, "System.Threading.Tasks", "SynchronizationContextAwaitTaskContinuation");
NEED_NO_BOX(::System::Threading::Tasks::____System__Threading__Tasks__SynchronizationContextAwaitTaskContinuation____c);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::____System__Threading__Tasks__SynchronizationContextAwaitTaskContinuation____c, "System.Threading.Tasks", "SynchronizationContextAwaitTaskContinuation/<>c");
