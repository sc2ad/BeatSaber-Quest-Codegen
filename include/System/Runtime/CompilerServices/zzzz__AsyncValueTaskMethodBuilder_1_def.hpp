#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System {
class Exception;
}
namespace System::Threading::Tasks {
template<typename TResult>
struct ValueTask_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncValueTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
template<::cordl_internals::il2cpp_reference_type TResult>
struct AsyncValueTaskMethodBuilder_1<TResult>;
}
namespace System::Runtime::CompilerServices {
template<>
struct AsyncValueTaskMethodBuilder_1<int32_t>;
}
// Type: System.Runtime.CompilerServices::AsyncValueTaskMethodBuilder`1
// Type: System.Runtime.CompilerServices::AsyncValueTaskMethodBuilder`1
namespace System::Runtime::CompilerServices {
// cpp template
template<::cordl_internals::il2cpp_reference_type TResult>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3351)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3351), inst: 2 })
// CS Name: System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1
struct CORDL_TYPE AsyncValueTaskMethodBuilder_1<TResult> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_methodBuilder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>", modifiers: "", def_value: None }, CppParam { name: "_result", ty: "TResult", modifiers: "", def_value: None }, CppParam { name: "_haveResult", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_useBuilder", ty: "bool", modifiers: "", def_value: None }]
constexpr AsyncValueTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult> _methodBuilder, TResult _result, bool _haveResult, bool _useBuilder) noexcept;


                    constexpr AsyncValueTaskMethodBuilder_1(AsyncValueTaskMethodBuilder_1 const&) = default;
                    constexpr AsyncValueTaskMethodBuilder_1(AsyncValueTaskMethodBuilder_1&&) = default;
                    constexpr AsyncValueTaskMethodBuilder_1& operator=(AsyncValueTaskMethodBuilder_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AsyncValueTaskMethodBuilder_1& operator=(AsyncValueTaskMethodBuilder_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AsyncValueTaskMethodBuilder_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult> __declspec(property(get=__get__methodBuilder, put=__set__methodBuilder))  _methodBuilder;

constexpr void __set__methodBuilder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult> value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult> __get__methodBuilder() const;

 TResult __declspec(property(get=__get__result, put=__set__result))  _result;

constexpr void __set__result(TResult value) ;

constexpr TResult __get__result() const;

 bool __declspec(property(get=__get__haveResult, put=__set__haveResult))  _haveResult;

constexpr void __set__haveResult(bool value) ;

constexpr bool __get__haveResult() const;

 bool __declspec(property(get=__get__useBuilder, put=__set__useBuilder))  _useBuilder;

constexpr void __set__useBuilder(bool value) ;

constexpr bool __get__useBuilder() const;


// Properties

 ::System::Threading::Tasks::ValueTask_1<TResult> __declspec(property(get=get_Task))  Task;


// Methods

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TResult> Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
 void Start(ByRef<TStateMachine> stateMachine) ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetResult(TResult result) ;

/// @brief Method SetException addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetException(::System::Exception exception) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::ValueTask_1<TResult> get_Task() ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
 void AwaitUnsafeOnCompleted(ByRef<TAwaiter> awaiter, ByRef<TStateMachine> stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::AsyncValueTaskMethodBuilder`1
namespace System::Runtime::CompilerServices {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(3351))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3351), inst: 92 })
// CS Name: System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1
struct CORDL_TYPE AsyncValueTaskMethodBuilder_1<int32_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_methodBuilder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "_result", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_haveResult", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_useBuilder", ty: "bool", modifiers: "", def_value: None }]
constexpr AsyncValueTaskMethodBuilder_1(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> _methodBuilder, int32_t _result, bool _haveResult, bool _useBuilder) noexcept;


                    constexpr AsyncValueTaskMethodBuilder_1(AsyncValueTaskMethodBuilder_1 const&) = default;
                    constexpr AsyncValueTaskMethodBuilder_1(AsyncValueTaskMethodBuilder_1&&) = default;
                    constexpr AsyncValueTaskMethodBuilder_1& operator=(AsyncValueTaskMethodBuilder_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AsyncValueTaskMethodBuilder_1& operator=(AsyncValueTaskMethodBuilder_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AsyncValueTaskMethodBuilder_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __declspec(property(get=__get__methodBuilder, put=__set__methodBuilder))  _methodBuilder;

constexpr void __set__methodBuilder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __get__methodBuilder() const;

 int32_t __declspec(property(get=__get__result, put=__set__result))  _result;

constexpr void __set__result(int32_t value) ;

constexpr int32_t __get__result() const;

 bool __declspec(property(get=__get__haveResult, put=__set__haveResult))  _haveResult;

constexpr void __set__haveResult(bool value) ;

constexpr bool __get__haveResult() const;

 bool __declspec(property(get=__get__useBuilder, put=__set__useBuilder))  _useBuilder;

constexpr void __set__useBuilder(bool value) ;

constexpr bool __get__useBuilder() const;


// Properties

 ::System::Threading::Tasks::ValueTask_1<int32_t> __declspec(property(get=get_Task))  Task;


// Methods

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t> Create() ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TStateMachine>
 void Start(ByRef<TStateMachine> stateMachine) ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetResult(int32_t result) ;

/// @brief Method SetException addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetException(::System::Exception exception) ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Threading::Tasks::ValueTask_1<int32_t> get_Task() ;

/// @brief Method AwaitUnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TAwaiter,typename TStateMachine>
 void AwaitUnsafeOnCompleted(ByRef<TAwaiter> awaiter, ByRef<TStateMachine> stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1, "System.Runtime.CompilerServices", "AsyncValueTaskMethodBuilder`1");
