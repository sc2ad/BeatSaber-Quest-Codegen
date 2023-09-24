#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Threading {
class ManualResetEvent;
}
namespace System {
class IAsyncResult;
}
namespace System::Threading {
class WaitHandle;
}
namespace System {
class Exception;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace System::Net {
class HttpStreamAsyncResult;
}
// Type: System.Net::HttpStreamAsyncResult
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8029))
// CS Name: System.Net.HttpStreamAsyncResult
class CORDL_TYPE HttpStreamAsyncResult : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IAsyncResult
constexpr operator  System::IAsyncResult() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~HttpStreamAsyncResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpStreamAsyncResult", modifiers: " const&", def_value: None }]
constexpr HttpStreamAsyncResult(HttpStreamAsyncResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpStreamAsyncResult", modifiers: "&&", def_value: None }]
constexpr HttpStreamAsyncResult(HttpStreamAsyncResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HttpStreamAsyncResult(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HttpStreamAsyncResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HttpStreamAsyncResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HttpStreamAsyncResult& operator=(HttpStreamAsyncResult&& o) noexcept = default;
  constexpr HttpStreamAsyncResult& operator=(HttpStreamAsyncResult const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_locker, put=__set_locker))  locker;

constexpr void __set_locker(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_locker() const;

 System::Threading::ManualResetEvent __declspec(property(get=__get_handle, put=__set_handle))  handle;

constexpr void __set_handle(System::Threading::ManualResetEvent value) ;

constexpr System::Threading::ManualResetEvent __get_handle() const;

 bool __declspec(property(get=__get_completed, put=__set_completed))  completed;

constexpr void __set_completed(bool value) ;

constexpr bool __get_completed() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_Buffer, put=__set_Buffer))  Buffer;

constexpr void __set_Buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_Buffer() const;

 int32_t __declspec(property(get=__get_Offset, put=__set_Offset))  Offset;

constexpr void __set_Offset(int32_t value) ;

constexpr int32_t __get_Offset() const;

 int32_t __declspec(property(get=__get_Count, put=__set_Count))  Count;

constexpr void __set_Count(int32_t value) ;

constexpr int32_t __get_Count() const;

 System::AsyncCallback __declspec(property(get=__get_Callback, put=__set_Callback))  Callback;

constexpr void __set_Callback(System::AsyncCallback value) ;

constexpr System::AsyncCallback __get_Callback() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_State, put=__set_State))  State;

constexpr void __set_State(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_State() const;

 int32_t __declspec(property(get=__get_SynchRead, put=__set_SynchRead))  SynchRead;

constexpr void __set_SynchRead(int32_t value) ;

constexpr int32_t __get_SynchRead() const;

 System::Exception __declspec(property(get=__get_Error, put=__set_Error))  Error;

constexpr void __set_Error(System::Exception value) ;

constexpr System::Exception __get_Error() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_AsyncState))  AsyncState;

 System::Threading::WaitHandle __declspec(property(get=get_AsyncWaitHandle))  AsyncWaitHandle;

 bool __declspec(property(get=get_CompletedSynchronously))  CompletedSynchronously;

 bool __declspec(property(get=get_IsCompleted))  IsCompleted;


// Methods

/// @brief Method Complete addr 0x282a990 size 0x8 virtual false final false
 void Complete(System::Exception e) ;

/// @brief Method Complete addr 0x282a2cc size 0x100 virtual false final false
 void Complete() ;

/// @brief Method get_AsyncState addr 0x2839300 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType get_AsyncState() ;

/// @brief Method get_AsyncWaitHandle addr 0x2839308 size 0x13c virtual true final true
 System::Threading::WaitHandle get_AsyncWaitHandle() ;

/// @brief Method get_CompletedSynchronously addr 0x2839444 size 0x14 virtual true final true
 bool get_CompletedSynchronously() ;

/// @brief Method get_IsCompleted addr 0x2839458 size 0xc8 virtual true final true
 bool get_IsCompleted() ;

static System::Net::HttpStreamAsyncResult New_ctor() ;

/// @brief Method .ctor addr 0x282a264 size 0x68 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::HttpStreamAsyncResult);
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpStreamAsyncResult, "System.Net", "HttpStreamAsyncResult");
