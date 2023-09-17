#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace {
namespace System::Threading {
struct StackCrawlMark;
}
namespace System::Threading {
class ThreadAbortException;
}
namespace System::Threading {
class ContextCallback;
}
namespace System::Threading {
class IThreadPoolWorkItem;
}
namespace System::Threading {
class WaitCallback;
}
namespace System::Threading {
class ExecutionContext;
}
// Forward declare root types
namespace System::Threading {
class QueueUserWorkItemCallback;
}
// Type: System.Threading::QueueUserWorkItemCallback
namespace System::Threading {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2736))
// CS Name: System.Threading.QueueUserWorkItemCallback
class CORDL_TYPE QueueUserWorkItemCallback : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Threading::IThreadPoolWorkItem
constexpr operator  ::System::Threading::IThreadPoolWorkItem() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~QueueUserWorkItemCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "QueueUserWorkItemCallback", modifiers: " const&", def_value: None }]
constexpr QueueUserWorkItemCallback(QueueUserWorkItemCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "QueueUserWorkItemCallback", modifiers: "&&", def_value: None }]
constexpr QueueUserWorkItemCallback(QueueUserWorkItemCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit QueueUserWorkItemCallback(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr QueueUserWorkItemCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr QueueUserWorkItemCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr QueueUserWorkItemCallback& operator=(QueueUserWorkItemCallback&& o) noexcept = default;
  constexpr QueueUserWorkItemCallback& operator=(QueueUserWorkItemCallback const& o) noexcept = default;
                


// Fields

 ::System::Threading::WaitCallback __declspec(property(get=__get_callback, put=__set_callback))  callback;

constexpr void __set_callback(::System::Threading::WaitCallback value) ;

constexpr ::System::Threading::WaitCallback __get_callback() const;

 ::System::Threading::ExecutionContext __declspec(property(get=__get_context, put=__set_context))  context;

constexpr void __set_context(::System::Threading::ExecutionContext value) ;

constexpr ::System::Threading::ExecutionContext __get_context() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_state, put=__set_state))  state;

constexpr void __set_state(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_state() const;

static ::System::Threading::ContextCallback __declspec(property(get=__get_ccb, put=__set_ccb))  ccb;

static void __set_ccb(::System::Threading::ContextCallback value) ;

static ::System::Threading::ContextCallback __get_ccb() ;


// Methods

// Ctor Parameters [CppParam { name: "waitCallback", ty: "::System::Threading::WaitCallback", modifiers: "", def_value: None }, CppParam { name: "stateObj", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "compressStack", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "stackMark", ty: "ByRef<::System::Threading::StackCrawlMark>", modifiers: "", def_value: None }]
explicit QueueUserWorkItemCallback(::System::Threading::WaitCallback waitCallback, ::bs_hook::Il2CppWrapperType stateObj, bool compressStack, ByRef<::System::Threading::StackCrawlMark> stackMark) ;

/// @brief Method .ctor addr 0x24aee00 size 0xb8 virtual false final false
 void _ctor(::System::Threading::WaitCallback waitCallback, ::bs_hook::Il2CppWrapperType stateObj, bool compressStack, ByRef<::System::Threading::StackCrawlMark> stackMark) ;

/// @brief Method System.Threading.IThreadPoolWorkItem.ExecuteWorkItem addr 0x24aeeb8 size 0xd8 virtual true final true
 void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem() ;

/// @brief Method System.Threading.IThreadPoolWorkItem.MarkAborted addr 0x24aef90 size 0x4 virtual true final true
 void System_Threading_IThreadPoolWorkItem_MarkAborted(::System::Threading::ThreadAbortException tae) ;

/// @brief Method WaitCallback_Context addr 0x24aef94 size 0x78 virtual false final false
static void WaitCallback_Context(::bs_hook::Il2CppWrapperType state) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
} // end anonymous namespace
NEED_NO_BOX(::System::Threading::QueueUserWorkItemCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::QueueUserWorkItemCallback, "System.Threading", "QueueUserWorkItemCallback");
