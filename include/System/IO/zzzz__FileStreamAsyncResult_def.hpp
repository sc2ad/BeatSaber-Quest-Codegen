#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System::Threading {
class WaitHandle;
}
namespace System::Threading {
class ManualResetEvent;
}
// Forward declare root types
namespace System::IO {
class FileStreamAsyncResult;
}
// Type: System.IO::FileStreamAsyncResult
namespace System::IO {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3613))
// CS Name: System.IO.FileStreamAsyncResult
class CORDL_TYPE FileStreamAsyncResult : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::IAsyncResult
constexpr operator  ::System::IAsyncResult() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~FileStreamAsyncResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "FileStreamAsyncResult", modifiers: " const&", def_value: None }]
constexpr FileStreamAsyncResult(FileStreamAsyncResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FileStreamAsyncResult", modifiers: "&&", def_value: None }]
constexpr FileStreamAsyncResult(FileStreamAsyncResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FileStreamAsyncResult(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FileStreamAsyncResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FileStreamAsyncResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FileStreamAsyncResult& operator=(FileStreamAsyncResult&& o) noexcept = default;
  constexpr FileStreamAsyncResult& operator=(FileStreamAsyncResult const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_state, put=__set_state))  state;

constexpr void __set_state(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_state() const;

 bool __declspec(property(get=__get_completed, put=__set_completed))  completed;

constexpr void __set_completed(bool value) ;

constexpr bool __get_completed() const;

 ::System::Threading::ManualResetEvent __declspec(property(get=__get_wh, put=__set_wh))  wh;

constexpr void __set_wh(::System::Threading::ManualResetEvent value) ;

constexpr ::System::Threading::ManualResetEvent __get_wh() const;

 ::System::AsyncCallback __declspec(property(get=__get_cb, put=__set_cb))  cb;

constexpr void __set_cb(::System::AsyncCallback value) ;

constexpr ::System::AsyncCallback __get_cb() const;

 bool __declspec(property(get=__get_completedSynch, put=__set_completedSynch))  completedSynch;

constexpr void __set_completedSynch(bool value) ;

constexpr bool __get_completedSynch() const;

 int32_t __declspec(property(get=__get_Count, put=__set_Count))  Count;

constexpr void __set_Count(int32_t value) ;

constexpr int32_t __get_Count() const;

 int32_t __declspec(property(get=__get_OriginalCount, put=__set_OriginalCount))  OriginalCount;

constexpr void __set_OriginalCount(int32_t value) ;

constexpr int32_t __get_OriginalCount() const;

 int32_t __declspec(property(get=__get_BytesRead, put=__set_BytesRead))  BytesRead;

constexpr void __set_BytesRead(int32_t value) ;

constexpr int32_t __get_BytesRead() const;

 ::System::AsyncCallback __declspec(property(get=__get_realcb, put=__set_realcb))  realcb;

constexpr void __set_realcb(::System::AsyncCallback value) ;

constexpr ::System::AsyncCallback __get_realcb() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_AsyncState))  AsyncState;

 bool __declspec(property(get=get_CompletedSynchronously))  CompletedSynchronously;

 ::System::Threading::WaitHandle __declspec(property(get=get_AsyncWaitHandle))  AsyncWaitHandle;

 bool __declspec(property(get=get_IsCompleted))  IsCompleted;


// Methods

// Ctor Parameters [CppParam { name: "cb", ty: "::System::AsyncCallback", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
explicit FileStreamAsyncResult(::System::AsyncCallback cb, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method .ctor addr 0x23cfa24 size 0xd8 virtual false final false
 void _ctor(::System::AsyncCallback cb, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method CBWrapper addr 0x23d0a60 size 0x94 virtual false final false
static void CBWrapper(::System::IAsyncResult ares) ;

/// @brief Method get_AsyncState addr 0x23d0af4 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType get_AsyncState() ;

/// @brief Method get_CompletedSynchronously addr 0x23d0afc size 0x8 virtual true final true
 bool get_CompletedSynchronously() ;

/// @brief Method get_AsyncWaitHandle addr 0x23d0b04 size 0x8 virtual true final true
 ::System::Threading::WaitHandle get_AsyncWaitHandle() ;

/// @brief Method get_IsCompleted addr 0x23d0b0c size 0x8 virtual true final true
 bool get_IsCompleted() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
} // end anonymous namespace
NEED_NO_BOX(::System::IO::FileStreamAsyncResult);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::FileStreamAsyncResult, "System.IO", "FileStreamAsyncResult");
