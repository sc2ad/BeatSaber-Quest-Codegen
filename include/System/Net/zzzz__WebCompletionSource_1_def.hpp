#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Runtime::ExceptionServices {
class ExceptionDispatchInfo;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Exception;
}
namespace System {
class OperationCanceledException;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
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
// Forward declare root types
namespace System::Net {
template<typename T>
class System__Net__WebCompletionSource_1__Result;
}
namespace System::Net {
template<typename T>
class WebCompletionSource_1;
}
namespace System::Net {
template<typename T>
struct System__Net__WebCompletionSource_1__Status;
}
namespace System::Net {
template<::cordl_internals::il2cpp_reference_type T>
class System__Net__WebCompletionSource_1__Result<T>;
}
namespace System::Net {
template<>
class System__Net__WebCompletionSource_1__Result<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>;
}
namespace System::Net {
template<::cordl_internals::il2cpp_reference_type T>
class WebCompletionSource_1<T>;
}
namespace System::Net {
template<>
class WebCompletionSource_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>;
}
namespace System::Net {
template<typename T>
struct System__Net__WebCompletionSource_1___WaitForCompletion_d__15;
}
namespace System::Net {
template<::cordl_internals::il2cpp_reference_type T>
struct System__Net__WebCompletionSource_1___WaitForCompletion_d__15<T>;
}
namespace System::Net {
template<>
struct System__Net__WebCompletionSource_1___WaitForCompletion_d__15<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>;
}
// Type: ::Status
namespace System::Net {
// cpp template
template<typename T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8060))
// CS Name: System.Net.WebCompletionSource`1::Status
struct CORDL_TYPE System__Net__WebCompletionSource_1__Status : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Net__WebCompletionSource_1__Status(int32_t value__) noexcept;


                    constexpr System__Net__WebCompletionSource_1__Status(System__Net__WebCompletionSource_1__Status const&) = default;
                    constexpr System__Net__WebCompletionSource_1__Status(System__Net__WebCompletionSource_1__Status&&) = default;
                    constexpr System__Net__WebCompletionSource_1__Status& operator=(System__Net__WebCompletionSource_1__Status const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Net__WebCompletionSource_1__Status& operator=(System__Net__WebCompletionSource_1__Status&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Net__WebCompletionSource_1__Status(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Net__WebCompletionSource_1__Status_Unwrapped : int32_t {
__Running = 0,
__Completed = 1,
__Canceled = 2,
__Faulted = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Net__WebCompletionSource_1__Status_Unwrapped () const noexcept {
return std::bit_cast<__System__Net__WebCompletionSource_1__Status_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Running offset 0
static System::Net::System__Net__WebCompletionSource_1__Status<T> const Running;

/// @brief Field Completed offset 0
static System::Net::System__Net__WebCompletionSource_1__Status<T> const Completed;

/// @brief Field Canceled offset 0
static System::Net::System__Net__WebCompletionSource_1__Status<T> const Canceled;

/// @brief Field Faulted offset 0
static System::Net::System__Net__WebCompletionSource_1__Status<T> const Faulted;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::Result
// Type: ::<WaitForCompletion>d__15
// Type: System.Net::WebCompletionSource`1
// Type: ::Result
namespace System::Net {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8061))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8061), inst: 2 })
// CS Name: System.Net.WebCompletionSource`1::Result
class CORDL_TYPE System__Net__WebCompletionSource_1__Result<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~System__Net__WebCompletionSource_1__Result() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__WebCompletionSource_1__Result", modifiers: " const&", def_value: None }]
constexpr System__Net__WebCompletionSource_1__Result(System__Net__WebCompletionSource_1__Result const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__WebCompletionSource_1__Result", modifiers: "&&", def_value: None }]
constexpr System__Net__WebCompletionSource_1__Result(System__Net__WebCompletionSource_1__Result&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__WebCompletionSource_1__Result(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Net__WebCompletionSource_1__Result& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__WebCompletionSource_1__Result& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__WebCompletionSource_1__Result& operator=(System__Net__WebCompletionSource_1__Result&& o) noexcept = default;
  constexpr System__Net__WebCompletionSource_1__Result& operator=(System__Net__WebCompletionSource_1__Result const& o) noexcept = default;
                


// Fields

 System::Net::System__Net__WebCompletionSource_1__Status<T> __declspec(property(get=__get__Status_k__BackingField, put=__set__Status_k__BackingField))  _Status_k__BackingField;

constexpr void __set__Status_k__BackingField(System::Net::System__Net__WebCompletionSource_1__Status<T> value) ;

constexpr System::Net::System__Net__WebCompletionSource_1__Status<T> __get__Status_k__BackingField() const;

 System::Runtime::ExceptionServices::ExceptionDispatchInfo __declspec(property(get=__get__Error_k__BackingField, put=__set__Error_k__BackingField))  _Error_k__BackingField;

constexpr void __set__Error_k__BackingField(System::Runtime::ExceptionServices::ExceptionDispatchInfo value) ;

constexpr System::Runtime::ExceptionServices::ExceptionDispatchInfo __get__Error_k__BackingField() const;

 T __declspec(property(get=__get__Argument_k__BackingField, put=__set__Argument_k__BackingField))  _Argument_k__BackingField;

constexpr void __set__Argument_k__BackingField(T value) ;

constexpr T __get__Argument_k__BackingField() const;


// Properties

 System::Net::System__Net__WebCompletionSource_1__Status<T> __declspec(property(get=get_Status))  Status;

 bool __declspec(property(get=get_Success))  Success;

 System::Runtime::ExceptionServices::ExceptionDispatchInfo __declspec(property(get=get_Error))  Error;

 T __declspec(property(get=get_Argument))  Argument;


// Methods

/// @brief Method get_Status addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Net::System__Net__WebCompletionSource_1__Status<T> get_Status() ;

/// @brief Method get_Success addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_Success() ;

/// @brief Method get_Error addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Runtime::ExceptionServices::ExceptionDispatchInfo get_Error() ;

/// @brief Method get_Argument addr 0x0 size 0xffffffffffffffff virtual false final false
 T get_Argument() ;

// Ctor Parameters [CppParam { name: "argument", ty: "T", modifiers: "", def_value: None }]
explicit System__Net__WebCompletionSource_1__Result(T argument) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(T argument) ;

// Ctor Parameters [CppParam { name: "state", ty: "System::Net::System__Net__WebCompletionSource_1__Status<T>", modifiers: "", def_value: None }, CppParam { name: "error", ty: "System::Runtime::ExceptionServices::ExceptionDispatchInfo", modifiers: "", def_value: None }]
explicit System__Net__WebCompletionSource_1__Result(System::Net::System__Net__WebCompletionSource_1__Status<T> state, System::Runtime::ExceptionServices::ExceptionDispatchInfo error) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Net::System__Net__WebCompletionSource_1__Status<T> state, System::Runtime::ExceptionServices::ExceptionDispatchInfo error) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::Result
namespace System::Net {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8061))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8061), inst: 96 })
// CS Name: System.Net.WebCompletionSource`1::Result
class CORDL_TYPE System__Net__WebCompletionSource_1__Result<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~System__Net__WebCompletionSource_1__Result() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__WebCompletionSource_1__Result", modifiers: " const&", def_value: None }]
constexpr System__Net__WebCompletionSource_1__Result(System__Net__WebCompletionSource_1__Result const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__WebCompletionSource_1__Result", modifiers: "&&", def_value: None }]
constexpr System__Net__WebCompletionSource_1__Result(System__Net__WebCompletionSource_1__Result&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__WebCompletionSource_1__Result(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Net__WebCompletionSource_1__Result& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__WebCompletionSource_1__Result& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__WebCompletionSource_1__Result& operator=(System__Net__WebCompletionSource_1__Result&& o) noexcept = default;
  constexpr System__Net__WebCompletionSource_1__Result& operator=(System__Net__WebCompletionSource_1__Result const& o) noexcept = default;
                


// Fields

 System::Net::System__Net__WebCompletionSource_1__Status<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get__Status_k__BackingField, put=__set__Status_k__BackingField))  _Status_k__BackingField;

constexpr void __set__Status_k__BackingField(System::Net::System__Net__WebCompletionSource_1__Status<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> value) ;

constexpr System::Net::System__Net__WebCompletionSource_1__Status<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> __get__Status_k__BackingField() const;

 System::Runtime::ExceptionServices::ExceptionDispatchInfo __declspec(property(get=__get__Error_k__BackingField, put=__set__Error_k__BackingField))  _Error_k__BackingField;

constexpr void __set__Error_k__BackingField(System::Runtime::ExceptionServices::ExceptionDispatchInfo value) ;

constexpr System::Runtime::ExceptionServices::ExceptionDispatchInfo __get__Error_k__BackingField() const;

 System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__Argument_k__BackingField, put=__set__Argument_k__BackingField))  _Argument_k__BackingField;

constexpr void __set__Argument_k__BackingField(System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType> value) ;

constexpr System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType> __get__Argument_k__BackingField() const;


// Properties

 System::Net::System__Net__WebCompletionSource_1__Status<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> __declspec(property(get=get_Status))  Status;

 bool __declspec(property(get=get_Success))  Success;

 System::Runtime::ExceptionServices::ExceptionDispatchInfo __declspec(property(get=get_Error))  Error;

 System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType> __declspec(property(get=get_Argument))  Argument;


// Methods

/// @brief Method get_Status addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Net::System__Net__WebCompletionSource_1__Status<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> get_Status() ;

/// @brief Method get_Success addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_Success() ;

/// @brief Method get_Error addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Runtime::ExceptionServices::ExceptionDispatchInfo get_Error() ;

/// @brief Method get_Argument addr 0x0 size 0xffffffffffffffff virtual false final false
 System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType> get_Argument() ;

// Ctor Parameters [CppParam { name: "argument", ty: "System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }]
explicit System__Net__WebCompletionSource_1__Result(System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType> argument) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType> argument) ;

// Ctor Parameters [CppParam { name: "state", ty: "System::Net::System__Net__WebCompletionSource_1__Status<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>", modifiers: "", def_value: None }, CppParam { name: "error", ty: "System::Runtime::ExceptionServices::ExceptionDispatchInfo", modifiers: "", def_value: None }]
explicit System__Net__WebCompletionSource_1__Result(System::Net::System__Net__WebCompletionSource_1__Status<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> state, System::Runtime::ExceptionServices::ExceptionDispatchInfo error) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Net::System__Net__WebCompletionSource_1__Status<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> state, System::Runtime::ExceptionServices::ExceptionDispatchInfo error) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::<WaitForCompletion>d__15
namespace System::Net {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(8062))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8062), inst: 2 })
// CS Name: System.Net.WebCompletionSource`1::<WaitForCompletion>d__15
struct CORDL_TYPE System__Net__WebCompletionSource_1___WaitForCompletion_d__15<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "System::Net::WebCompletionSource_1<T>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::System__Net__WebCompletionSource_1__Result<T>>", modifiers: "", def_value: None }]
constexpr System__Net__WebCompletionSource_1___WaitForCompletion_d__15(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder, System::Net::WebCompletionSource_1<T> __4__this, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::System__Net__WebCompletionSource_1__Result<T>> __u__1) noexcept;


                    constexpr System__Net__WebCompletionSource_1___WaitForCompletion_d__15(System__Net__WebCompletionSource_1___WaitForCompletion_d__15 const&) = default;
                    constexpr System__Net__WebCompletionSource_1___WaitForCompletion_d__15(System__Net__WebCompletionSource_1___WaitForCompletion_d__15&&) = default;
                    constexpr System__Net__WebCompletionSource_1___WaitForCompletion_d__15& operator=(System__Net__WebCompletionSource_1___WaitForCompletion_d__15 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Net__WebCompletionSource_1___WaitForCompletion_d__15& operator=(System__Net__WebCompletionSource_1___WaitForCompletion_d__15&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Net__WebCompletionSource_1___WaitForCompletion_d__15(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __get___t__builder() const;

 System::Net::WebCompletionSource_1<T> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(System::Net::WebCompletionSource_1<T> value) ;

constexpr System::Net::WebCompletionSource_1<T> __get___4__this() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::System__Net__WebCompletionSource_1__Result<T>> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::System__Net__WebCompletionSource_1__Result<T>> value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::System__Net__WebCompletionSource_1__Result<T>> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::<WaitForCompletion>d__15
namespace System::Net {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8062)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8062), inst: 96 })
// CS Name: System.Net.WebCompletionSource`1::<WaitForCompletion>d__15
struct CORDL_TYPE System__Net__WebCompletionSource_1___WaitForCompletion_d__15<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "System::Net::WebCompletionSource_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::System__Net__WebCompletionSource_1__Result<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>", modifiers: "", def_value: None }]
constexpr System__Net__WebCompletionSource_1___WaitForCompletion_d__15(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> __t__builder, System::Net::WebCompletionSource_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> __4__this, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::System__Net__WebCompletionSource_1__Result<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>> __u__1) noexcept;


                    constexpr System__Net__WebCompletionSource_1___WaitForCompletion_d__15(System__Net__WebCompletionSource_1___WaitForCompletion_d__15 const&) = default;
                    constexpr System__Net__WebCompletionSource_1___WaitForCompletion_d__15(System__Net__WebCompletionSource_1___WaitForCompletion_d__15&&) = default;
                    constexpr System__Net__WebCompletionSource_1___WaitForCompletion_d__15& operator=(System__Net__WebCompletionSource_1___WaitForCompletion_d__15 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Net__WebCompletionSource_1___WaitForCompletion_d__15& operator=(System__Net__WebCompletionSource_1___WaitForCompletion_d__15&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Net__WebCompletionSource_1___WaitForCompletion_d__15(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> __get___t__builder() const;

 System::Net::WebCompletionSource_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(System::Net::WebCompletionSource_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> value) ;

constexpr System::Net::WebCompletionSource_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> __get___4__this() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::System__Net__WebCompletionSource_1__Result<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::System__Net__WebCompletionSource_1__Result<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>> value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::System__Net__WebCompletionSource_1__Result<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: System.Net::WebCompletionSource`1
namespace System::Net {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8063))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8063), inst: 2 })
// CS Name: System.Net.WebCompletionSource`1
class CORDL_TYPE WebCompletionSource_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _WaitForCompletion_d__15 = System::Net::System__Net__WebCompletionSource_1___WaitForCompletion_d__15<T>;

using Result = System::Net::System__Net__WebCompletionSource_1__Result<T>;

using Status = System::Net::System__Net__WebCompletionSource_1__Status<T>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~WebCompletionSource_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "WebCompletionSource_1", modifiers: " const&", def_value: None }]
constexpr WebCompletionSource_1(WebCompletionSource_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WebCompletionSource_1", modifiers: "&&", def_value: None }]
constexpr WebCompletionSource_1(WebCompletionSource_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WebCompletionSource_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr WebCompletionSource_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WebCompletionSource_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WebCompletionSource_1& operator=(WebCompletionSource_1&& o) noexcept = default;
  constexpr WebCompletionSource_1& operator=(WebCompletionSource_1 const& o) noexcept = default;
                


// Fields

 System::Threading::Tasks::TaskCompletionSource_1<System::Net::System__Net__WebCompletionSource_1__Result<T>> __declspec(property(get=__get_completion, put=__set_completion))  completion;

constexpr void __set_completion(System::Threading::Tasks::TaskCompletionSource_1<System::Net::System__Net__WebCompletionSource_1__Result<T>> value) ;

constexpr System::Threading::Tasks::TaskCompletionSource_1<System::Net::System__Net__WebCompletionSource_1__Result<T>> __get_completion() const;

 System::Net::System__Net__WebCompletionSource_1__Result<T> __declspec(property(get=__get_currentResult, put=__set_currentResult))  currentResult;

constexpr void __set_currentResult(System::Net::System__Net__WebCompletionSource_1__Result<T> value) ;

constexpr System::Net::System__Net__WebCompletionSource_1__Result<T> __get_currentResult() const;


// Properties

 System::Net::System__Net__WebCompletionSource_1__Result<T> __declspec(property(get=get_CurrentResult))  CurrentResult;

 System::Threading::Tasks::Task __declspec(property(get=get_Task))  Task;


// Methods

// Ctor Parameters [CppParam { name: "runAsync", ty: "bool", modifiers: "", def_value: None }]
explicit WebCompletionSource_1(bool runAsync) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(bool runAsync) ;

/// @brief Method get_CurrentResult addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Net::System__Net__WebCompletionSource_1__Result<T> get_CurrentResult() ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Threading::Tasks::Task get_Task() ;

/// @brief Method TrySetCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetCompleted(T argument) ;

/// @brief Method TrySetCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetCompleted() ;

/// @brief Method TrySetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetCanceled() ;

/// @brief Method TrySetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetCanceled(System::OperationCanceledException error) ;

/// @brief Method TrySetException addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetException(System::Exception error) ;

/// @brief Method ThrowOnError addr 0x0 size 0xffffffffffffffff virtual false final false
 void ThrowOnError() ;

/// @brief Method WaitForCompletion addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Threading::Tasks::Task_1<T> WaitForCompletion() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
// Type: System.Net::WebCompletionSource`1
namespace System::Net {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8063))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8063), inst: 96 })
// CS Name: System.Net.WebCompletionSource`1
class CORDL_TYPE WebCompletionSource_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _WaitForCompletion_d__15 = System::Net::System__Net__WebCompletionSource_1___WaitForCompletion_d__15<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>;

using Result = System::Net::System__Net__WebCompletionSource_1__Result<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>;

using Status = System::Net::System__Net__WebCompletionSource_1__Status<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~WebCompletionSource_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "WebCompletionSource_1", modifiers: " const&", def_value: None }]
constexpr WebCompletionSource_1(WebCompletionSource_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WebCompletionSource_1", modifiers: "&&", def_value: None }]
constexpr WebCompletionSource_1(WebCompletionSource_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WebCompletionSource_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr WebCompletionSource_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WebCompletionSource_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WebCompletionSource_1& operator=(WebCompletionSource_1&& o) noexcept = default;
  constexpr WebCompletionSource_1& operator=(WebCompletionSource_1 const& o) noexcept = default;
                


// Fields

 System::Threading::Tasks::TaskCompletionSource_1<System::Net::System__Net__WebCompletionSource_1__Result<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>> __declspec(property(get=__get_completion, put=__set_completion))  completion;

constexpr void __set_completion(System::Threading::Tasks::TaskCompletionSource_1<System::Net::System__Net__WebCompletionSource_1__Result<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>> value) ;

constexpr System::Threading::Tasks::TaskCompletionSource_1<System::Net::System__Net__WebCompletionSource_1__Result<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>> __get_completion() const;

 System::Net::System__Net__WebCompletionSource_1__Result<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get_currentResult, put=__set_currentResult))  currentResult;

constexpr void __set_currentResult(System::Net::System__Net__WebCompletionSource_1__Result<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> value) ;

constexpr System::Net::System__Net__WebCompletionSource_1__Result<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> __get_currentResult() const;


// Properties

 System::Net::System__Net__WebCompletionSource_1__Result<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> __declspec(property(get=get_CurrentResult))  CurrentResult;

 System::Threading::Tasks::Task __declspec(property(get=get_Task))  Task;


// Methods

// Ctor Parameters [CppParam { name: "runAsync", ty: "bool", modifiers: "", def_value: None }]
explicit WebCompletionSource_1(bool runAsync) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(bool runAsync) ;

/// @brief Method get_CurrentResult addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Net::System__Net__WebCompletionSource_1__Result<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> get_CurrentResult() ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Threading::Tasks::Task get_Task() ;

/// @brief Method TrySetCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetCompleted(System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType> argument) ;

/// @brief Method TrySetCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetCompleted() ;

/// @brief Method TrySetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetCanceled() ;

/// @brief Method TrySetCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetCanceled(System::OperationCanceledException error) ;

/// @brief Method TrySetException addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySetException(System::Exception error) ;

/// @brief Method ThrowOnError addr 0x0 size 0xffffffffffffffff virtual false final false
 void ThrowOnError() ;

/// @brief Method WaitForCompletion addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> WaitForCompletion() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Net::System__Net__WebCompletionSource_1__Result, "System.Net", "WebCompletionSource`1/Result");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Net::WebCompletionSource_1, "System.Net", "WebCompletionSource`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::Net::System__Net__WebCompletionSource_1__Status, "System.Net", "WebCompletionSource`1/Status");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::Net::System__Net__WebCompletionSource_1___WaitForCompletion_d__15, "System.Net", "WebCompletionSource`1/<WaitForCompletion>d__15");
