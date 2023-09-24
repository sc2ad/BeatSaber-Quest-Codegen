#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace Mono::Net::Security {
struct Mono__Net__Security__AsyncProtocolRequest___ProcessOperation_d__24;
}
namespace Mono::Net::Security {
class MobileAuthenticatedStream;
}
namespace System::Threading::Tasks {
class Task;
}
namespace Mono::Net::Security {
struct Mono__Net__Security__AsyncProtocolRequest___InnerRead_d__25;
}
namespace Mono::Net::Security {
struct Mono__Net__Security__AsyncProtocolRequest___StartOperation_d__23;
}
namespace Mono::Net::Security {
class AsyncProtocolResult;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace Mono::Net::Security {
struct AsyncOperationStatus;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
// Forward declare root types
namespace Mono::Net::Security {
class AsyncProtocolRequest;
}
namespace Mono::Net::Security {
struct Mono__Net__Security__AsyncProtocolRequest___InnerRead_d__25;
}
namespace Mono::Net::Security {
struct Mono__Net__Security__AsyncProtocolRequest___ProcessOperation_d__24;
}
namespace Mono::Net::Security {
struct Mono__Net__Security__AsyncProtocolRequest___StartOperation_d__23;
}
// Type: ::<StartOperation>d__23
namespace Mono::Net::Security {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7670))
// CS Name: Mono.Net.Security.AsyncProtocolRequest::<StartOperation>d__23
struct CORDL_TYPE Mono__Net__Security__AsyncProtocolRequest___StartOperation_d__23 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<Mono::Net::Security::AsyncProtocolResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "Mono::Net::Security::AsyncProtocolRequest", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr Mono__Net__Security__AsyncProtocolRequest___StartOperation_d__23(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<Mono::Net::Security::AsyncProtocolResult> __t__builder, Mono::Net::Security::AsyncProtocolRequest __4__this, System::Threading::CancellationToken cancellationToken, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept;


                    constexpr Mono__Net__Security__AsyncProtocolRequest___StartOperation_d__23(Mono__Net__Security__AsyncProtocolRequest___StartOperation_d__23 const&) = default;
                    constexpr Mono__Net__Security__AsyncProtocolRequest___StartOperation_d__23(Mono__Net__Security__AsyncProtocolRequest___StartOperation_d__23&&) = default;
                    constexpr Mono__Net__Security__AsyncProtocolRequest___StartOperation_d__23& operator=(Mono__Net__Security__AsyncProtocolRequest___StartOperation_d__23 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Mono__Net__Security__AsyncProtocolRequest___StartOperation_d__23& operator=(Mono__Net__Security__AsyncProtocolRequest___StartOperation_d__23&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Mono__Net__Security__AsyncProtocolRequest___StartOperation_d__23(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<Mono::Net::Security::AsyncProtocolResult> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<Mono::Net::Security::AsyncProtocolResult> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<Mono::Net::Security::AsyncProtocolResult> __get___t__builder() const;

 Mono::Net::Security::AsyncProtocolRequest __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Mono::Net::Security::AsyncProtocolRequest value) ;

constexpr Mono::Net::Security::AsyncProtocolRequest __get___4__this() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x268cd3c size 0x358 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x268d0d4 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono::Net::Security
// Type: ::<ProcessOperation>d__24
namespace Mono::Net::Security {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7671))
// CS Name: Mono.Net.Security.AsyncProtocolRequest::<ProcessOperation>d__24
struct CORDL_TYPE Mono__Net__Security__AsyncProtocolRequest___ProcessOperation_d__24 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "Mono::Net::Security::AsyncProtocolRequest", modifiers: "", def_value: None }, CppParam { name: "_status_5__2", ty: "Mono::Net::Security::AsyncOperationStatus", modifiers: "", def_value: None }, CppParam { name: "_newStatus_5__3", ty: "Mono::Net::Security::AsyncOperationStatus", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Nullable_1<int32_t>>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr Mono__Net__Security__AsyncProtocolRequest___ProcessOperation_d__24(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, System::Threading::CancellationToken cancellationToken, Mono::Net::Security::AsyncProtocolRequest __4__this, Mono::Net::Security::AsyncOperationStatus _status_5__2, Mono::Net::Security::AsyncOperationStatus _newStatus_5__3, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Nullable_1<int32_t>> __u__1, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__2) noexcept;


                    constexpr Mono__Net__Security__AsyncProtocolRequest___ProcessOperation_d__24(Mono__Net__Security__AsyncProtocolRequest___ProcessOperation_d__24 const&) = default;
                    constexpr Mono__Net__Security__AsyncProtocolRequest___ProcessOperation_d__24(Mono__Net__Security__AsyncProtocolRequest___ProcessOperation_d__24&&) = default;
                    constexpr Mono__Net__Security__AsyncProtocolRequest___ProcessOperation_d__24& operator=(Mono__Net__Security__AsyncProtocolRequest___ProcessOperation_d__24 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Mono__Net__Security__AsyncProtocolRequest___ProcessOperation_d__24& operator=(Mono__Net__Security__AsyncProtocolRequest___ProcessOperation_d__24&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x58};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Mono__Net__Security__AsyncProtocolRequest___ProcessOperation_d__24(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder __get___t__builder() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 Mono::Net::Security::AsyncProtocolRequest __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Mono::Net::Security::AsyncProtocolRequest value) ;

constexpr Mono::Net::Security::AsyncProtocolRequest __get___4__this() const;

 Mono::Net::Security::AsyncOperationStatus __declspec(property(get=__get__status_5__2, put=__set__status_5__2))  _status_5__2;

constexpr void __set__status_5__2(Mono::Net::Security::AsyncOperationStatus value) ;

constexpr Mono::Net::Security::AsyncOperationStatus __get__status_5__2() const;

 Mono::Net::Security::AsyncOperationStatus __declspec(property(get=__get__newStatus_5__3, put=__set__newStatus_5__3))  _newStatus_5__3;

constexpr void __set__newStatus_5__3(Mono::Net::Security::AsyncOperationStatus value) ;

constexpr Mono::Net::Security::AsyncOperationStatus __get__newStatus_5__3() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Nullable_1<int32_t>> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Nullable_1<int32_t>> value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Nullable_1<int32_t>> __get___u__1() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0x268d12c size 0x494 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x268d838 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono::Net::Security
// Type: ::<InnerRead>d__25
namespace Mono::Net::Security {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7672))
// CS Name: Mono.Net.Security.AsyncProtocolRequest::<InnerRead>d__25
struct CORDL_TYPE Mono__Net__Security__AsyncProtocolRequest___InnerRead_d__25 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Nullable_1<int32_t>>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "Mono::Net::Security::AsyncProtocolRequest", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_totalRead_5__2", ty: "System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "_requestedSize_5__3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None }]
constexpr Mono__Net__Security__AsyncProtocolRequest___InnerRead_d__25(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Nullable_1<int32_t>> __t__builder, Mono::Net::Security::AsyncProtocolRequest __4__this, System::Threading::CancellationToken cancellationToken, System::Nullable_1<int32_t> _totalRead_5__2, int32_t _requestedSize_5__3, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __u__1) noexcept;


                    constexpr Mono__Net__Security__AsyncProtocolRequest___InnerRead_d__25(Mono__Net__Security__AsyncProtocolRequest___InnerRead_d__25 const&) = default;
                    constexpr Mono__Net__Security__AsyncProtocolRequest___InnerRead_d__25(Mono__Net__Security__AsyncProtocolRequest___InnerRead_d__25&&) = default;
                    constexpr Mono__Net__Security__AsyncProtocolRequest___InnerRead_d__25& operator=(Mono__Net__Security__AsyncProtocolRequest___InnerRead_d__25 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Mono__Net__Security__AsyncProtocolRequest___InnerRead_d__25& operator=(Mono__Net__Security__AsyncProtocolRequest___InnerRead_d__25&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x50};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Mono__Net__Security__AsyncProtocolRequest___InnerRead_d__25(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Nullable_1<int32_t>> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Nullable_1<int32_t>> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Nullable_1<int32_t>> __get___t__builder() const;

 Mono::Net::Security::AsyncProtocolRequest __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Mono::Net::Security::AsyncProtocolRequest value) ;

constexpr Mono::Net::Security::AsyncProtocolRequest __get___4__this() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 System::Nullable_1<int32_t> __declspec(property(get=__get__totalRead_5__2, put=__set__totalRead_5__2))  _totalRead_5__2;

constexpr void __set__totalRead_5__2(System::Nullable_1<int32_t> value) ;

constexpr System::Nullable_1<int32_t> __get__totalRead_5__2() const;

 int32_t __declspec(property(get=__get__requestedSize_5__3, put=__set__requestedSize_5__3))  _requestedSize_5__3;

constexpr void __set__requestedSize_5__3(int32_t value) ;

constexpr int32_t __get__requestedSize_5__3() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<int32_t> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x268d844 size 0x350 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x268dcb0 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono::Net::Security
// Type: Mono.Net.Security::AsyncProtocolRequest
namespace Mono::Net::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7673))
// CS Name: Mono.Net.Security.AsyncProtocolRequest
class CORDL_TYPE AsyncProtocolRequest : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _InnerRead_d__25 = Mono::Net::Security::Mono__Net__Security__AsyncProtocolRequest___InnerRead_d__25;

using _ProcessOperation_d__24 = Mono::Net::Security::Mono__Net__Security__AsyncProtocolRequest___ProcessOperation_d__24;

using _StartOperation_d__23 = Mono::Net::Security::Mono__Net__Security__AsyncProtocolRequest___StartOperation_d__23;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~AsyncProtocolRequest() = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncProtocolRequest", modifiers: " const&", def_value: None }]
constexpr AsyncProtocolRequest(AsyncProtocolRequest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncProtocolRequest", modifiers: "&&", def_value: None }]
constexpr AsyncProtocolRequest(AsyncProtocolRequest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AsyncProtocolRequest(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AsyncProtocolRequest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AsyncProtocolRequest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AsyncProtocolRequest& operator=(AsyncProtocolRequest&& o) noexcept = default;
  constexpr AsyncProtocolRequest& operator=(AsyncProtocolRequest const& o) noexcept = default;
                


// Fields

 Mono::Net::Security::MobileAuthenticatedStream __declspec(property(get=__get__Parent_k__BackingField, put=__set__Parent_k__BackingField))  _Parent_k__BackingField;

constexpr void __set__Parent_k__BackingField(Mono::Net::Security::MobileAuthenticatedStream value) ;

constexpr Mono::Net::Security::MobileAuthenticatedStream __get__Parent_k__BackingField() const;

 bool __declspec(property(get=__get__RunSynchronously_k__BackingField, put=__set__RunSynchronously_k__BackingField))  _RunSynchronously_k__BackingField;

constexpr void __set__RunSynchronously_k__BackingField(bool value) ;

constexpr bool __get__RunSynchronously_k__BackingField() const;

 int32_t __declspec(property(get=__get__UserResult_k__BackingField, put=__set__UserResult_k__BackingField))  _UserResult_k__BackingField;

constexpr void __set__UserResult_k__BackingField(int32_t value) ;

constexpr int32_t __get__UserResult_k__BackingField() const;

 int32_t __declspec(property(get=__get_Started, put=__set_Started))  Started;

constexpr void __set_Started(int32_t value) ;

constexpr int32_t __get_Started() const;

 int32_t __declspec(property(get=__get_RequestedSize, put=__set_RequestedSize))  RequestedSize;

constexpr void __set_RequestedSize(int32_t value) ;

constexpr int32_t __get_RequestedSize() const;

 int32_t __declspec(property(get=__get_WriteRequested, put=__set_WriteRequested))  WriteRequested;

constexpr void __set_WriteRequested(int32_t value) ;

constexpr int32_t __get_WriteRequested() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_locker, put=__set_locker))  locker;

constexpr void __set_locker(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_locker() const;


// Properties

 Mono::Net::Security::MobileAuthenticatedStream __declspec(property(get=get_Parent))  Parent;

 bool __declspec(property(get=get_RunSynchronously))  RunSynchronously;

 ::StringW __declspec(property(get=get_Name))  Name;

 int32_t __declspec(property(get=get_UserResult, put=set_UserResult))  UserResult;


// Methods

/// @brief Method get_Parent addr 0x268c86c size 0x8 virtual false final false
 Mono::Net::Security::MobileAuthenticatedStream get_Parent() ;

/// @brief Method get_RunSynchronously addr 0x268c874 size 0x8 virtual false final false
 bool get_RunSynchronously() ;

/// @brief Method get_Name addr 0x268c87c size 0x24 virtual false final false
 ::StringW get_Name() ;

/// @brief Method get_UserResult addr 0x268c8a0 size 0x8 virtual false final false
 int32_t get_UserResult() ;

/// @brief Method set_UserResult addr 0x268c8a8 size 0x8 virtual false final false
 void set_UserResult(int32_t value) ;

static Mono::Net::Security::AsyncProtocolRequest New_ctor(Mono::Net::Security::MobileAuthenticatedStream parent, bool sync) ;

/// @brief Method .ctor addr 0x268c8b0 size 0x88 virtual false final false
 void _ctor(Mono::Net::Security::MobileAuthenticatedStream parent, bool sync) ;

/// @brief Method RequestRead addr 0x268c938 size 0xc4 virtual false final false
 void RequestRead(int32_t size) ;

/// @brief Method RequestWrite addr 0x268c9fc size 0xc virtual false final false
 void RequestWrite() ;

/// @brief Method StartOperation addr 0x268ca08 size 0xf8 virtual false final false
 System::Threading::Tasks::Task_1<Mono::Net::Security::AsyncProtocolResult> StartOperation(System::Threading::CancellationToken cancellationToken) ;

/// @brief Method ProcessOperation addr 0x268cb00 size 0xe0 virtual false final false
 System::Threading::Tasks::Task ProcessOperation(System::Threading::CancellationToken cancellationToken) ;

/// @brief Method InnerRead addr 0x268cbe0 size 0x104 virtual false final false
 System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>> InnerRead(System::Threading::CancellationToken cancellationToken) ;

/// @brief Method Run addr 0x0 size 0xffffffffffffffff virtual true final false
 Mono::Net::Security::AsyncOperationStatus Run(Mono::Net::Security::AsyncOperationStatus status) ;

/// @brief Method ToString addr 0x268cce4 size 0x58 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Net::Security
NEED_NO_BOX(Mono::Net::Security::AsyncProtocolRequest);
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::AsyncProtocolRequest, "Mono.Net.Security", "AsyncProtocolRequest");
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::Mono__Net__Security__AsyncProtocolRequest___InnerRead_d__25, "Mono.Net.Security", "AsyncProtocolRequest/<InnerRead>d__25");
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::Mono__Net__Security__AsyncProtocolRequest___ProcessOperation_d__24, "Mono.Net.Security", "AsyncProtocolRequest/<ProcessOperation>d__24");
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::Mono__Net__Security__AsyncProtocolRequest___StartOperation_d__23, "Mono.Net.Security", "AsyncProtocolRequest/<StartOperation>d__23");
