#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Threading {
class IThreadPoolWorkItem;
}
namespace System {
struct IOOperation;
}
namespace System {
class IOAsyncCallback;
}
namespace System {
class IOAsyncResult;
}
namespace System::Threading {
class ThreadAbortException;
}
// Forward declare root types
namespace System {
class IOSelectorJob;
}
// Type: System::IOSelectorJob
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7747))
// CS Name: System.IOSelectorJob
class CORDL_TYPE IOSelectorJob : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Threading::IThreadPoolWorkItem
constexpr operator  System::Threading::IThreadPoolWorkItem() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~IOSelectorJob() = default;

// Ctor Parameters [CppParam { name: "", ty: "IOSelectorJob", modifiers: " const&", def_value: None }]
constexpr IOSelectorJob(IOSelectorJob const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IOSelectorJob", modifiers: "&&", def_value: None }]
constexpr IOSelectorJob(IOSelectorJob&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IOSelectorJob(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IOSelectorJob& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IOSelectorJob& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IOSelectorJob& operator=(IOSelectorJob&& o) noexcept = default;
  constexpr IOSelectorJob& operator=(IOSelectorJob const& o) noexcept = default;
                


// Fields

 System::IOOperation __declspec(property(get=__get_operation, put=__set_operation))  operation;

constexpr void __set_operation(System::IOOperation value) ;

constexpr System::IOOperation __get_operation() const;

 System::IOAsyncCallback __declspec(property(get=__get_callback, put=__set_callback))  callback;

constexpr void __set_callback(System::IOAsyncCallback value) ;

constexpr System::IOAsyncCallback __get_callback() const;

 System::IOAsyncResult __declspec(property(get=__get_state, put=__set_state))  state;

constexpr void __set_state(System::IOAsyncResult value) ;

constexpr System::IOAsyncResult __get_state() const;


// Methods

// Ctor Parameters [CppParam { name: "operation", ty: "System::IOOperation", modifiers: "", def_value: None }, CppParam { name: "callback", ty: "System::IOAsyncCallback", modifiers: "", def_value: None }, CppParam { name: "state", ty: "System::IOAsyncResult", modifiers: "", def_value: None }]
explicit IOSelectorJob(System::IOOperation operation, System::IOAsyncCallback callback, System::IOAsyncResult state) ;

/// @brief Method .ctor addr 0x27bbe0c size 0x3c virtual false final false
 void _ctor(System::IOOperation operation, System::IOAsyncCallback callback, System::IOAsyncResult state) ;

/// @brief Method System.Threading.IThreadPoolWorkItem.ExecuteWorkItem addr 0x27bbe48 size 0x28 virtual true final true
 void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem() ;

/// @brief Method System.Threading.IThreadPoolWorkItem.MarkAborted addr 0x27bbe70 size 0x4 virtual true final true
 void System_Threading_IThreadPoolWorkItem_MarkAborted(System::Threading::ThreadAbortException tae) ;

/// @brief Method MarkDisposed addr 0x27bbe74 size 0x20 virtual false final false
 void MarkDisposed() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::IOSelectorJob);
DEFINE_IL2CPP_ARG_TYPE(System::IOSelectorJob, "System", "IOSelectorJob");
