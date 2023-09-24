#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Threading::Tasks {
template<typename TResult>
struct ValueTask_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
class ICriticalNotifyCompletion;
}
namespace System {
class Action;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct ConfiguredValueTaskAwaitable_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult>
struct ConfiguredValueTaskAwaitable_1<TResult>;
}
namespace System::Runtime::CompilerServices {
template<::cordl_internals::il2cpp_reference_type TResult>
struct ConfiguredValueTaskAwaitable_1<TResult>;
}
namespace System::Runtime::CompilerServices {
template<::cordl_internals::il2cpp_reference_type TResult>
struct System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<TResult>;
}
namespace System::Runtime::CompilerServices {
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult>
struct System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<TResult>;
}
// Type: ::ConfiguredValueTaskAwaiter
// Type: System.Runtime.CompilerServices::ConfiguredValueTaskAwaitable`1
// Type: ::ConfiguredValueTaskAwaiter
namespace System::Runtime::CompilerServices {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3356)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3356), inst: 92 })
// CS Name: System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1::ConfiguredValueTaskAwaiter
struct CORDL_TYPE System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<TResult> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr operator  System::Runtime::CompilerServices::ICriticalNotifyCompletion() const;

// Ctor Parameters [CppParam { name: "_value", ty: "System::Threading::Tasks::ValueTask_1<TResult>", modifiers: "", def_value: None }]
constexpr System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter(System::Threading::Tasks::ValueTask_1<TResult> _value) noexcept;


                    constexpr System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter(System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter const&) = default;
                    constexpr System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter(System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter&&) = default;
                    constexpr System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter& operator=(System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter& operator=(System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Threading::Tasks::ValueTask_1<TResult> __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(System::Threading::Tasks::ValueTask_1<TResult> value) ;

constexpr System::Threading::Tasks::ValueTask_1<TResult> __get__value() const;


// Properties

 bool __declspec(property(get=get_IsCompleted))  IsCompleted;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Threading::Tasks::ValueTask_1<TResult> value) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCompleted() ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 TResult GetResult() ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
 void UnsafeOnCompleted(System::Action continuation) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: ::ConfiguredValueTaskAwaiter
namespace System::Runtime::CompilerServices {
// cpp template
template<::cordl_internals::il2cpp_reference_type TResult>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3356)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3356), inst: 2 })
// CS Name: System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1::ConfiguredValueTaskAwaiter
struct CORDL_TYPE System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<TResult> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr operator  System::Runtime::CompilerServices::ICriticalNotifyCompletion() const;

// Ctor Parameters [CppParam { name: "_value", ty: "System::Threading::Tasks::ValueTask_1<TResult>", modifiers: "", def_value: None }]
constexpr System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter(System::Threading::Tasks::ValueTask_1<TResult> _value) noexcept;


                    constexpr System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter(System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter const&) = default;
                    constexpr System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter(System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter&&) = default;
                    constexpr System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter& operator=(System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter& operator=(System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Threading::Tasks::ValueTask_1<TResult> __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(System::Threading::Tasks::ValueTask_1<TResult> value) ;

constexpr System::Threading::Tasks::ValueTask_1<TResult> __get__value() const;


// Properties

 bool __declspec(property(get=get_IsCompleted))  IsCompleted;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Threading::Tasks::ValueTask_1<TResult> value) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCompleted() ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
 TResult GetResult() ;

/// @brief Method UnsafeOnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
 void UnsafeOnCompleted(System::Action continuation) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::ConfiguredValueTaskAwaitable`1
namespace System::Runtime::CompilerServices {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(3357))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3357), inst: 92 })
// CS Name: System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1
struct CORDL_TYPE ConfiguredValueTaskAwaitable_1<TResult> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using ConfiguredValueTaskAwaiter = System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<TResult>;

// Ctor Parameters [CppParam { name: "_value", ty: "System::Threading::Tasks::ValueTask_1<TResult>", modifiers: "", def_value: None }]
constexpr ConfiguredValueTaskAwaitable_1(System::Threading::Tasks::ValueTask_1<TResult> _value) noexcept;


                    constexpr ConfiguredValueTaskAwaitable_1(ConfiguredValueTaskAwaitable_1 const&) = default;
                    constexpr ConfiguredValueTaskAwaitable_1(ConfiguredValueTaskAwaitable_1&&) = default;
                    constexpr ConfiguredValueTaskAwaitable_1& operator=(ConfiguredValueTaskAwaitable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ConfiguredValueTaskAwaitable_1& operator=(ConfiguredValueTaskAwaitable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ConfiguredValueTaskAwaitable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Threading::Tasks::ValueTask_1<TResult> __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(System::Threading::Tasks::ValueTask_1<TResult> value) ;

constexpr System::Threading::Tasks::ValueTask_1<TResult> __get__value() const;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Threading::Tasks::ValueTask_1<TResult> value) ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<TResult> GetAwaiter() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::ConfiguredValueTaskAwaitable`1
namespace System::Runtime::CompilerServices {
// cpp template
template<::cordl_internals::il2cpp_reference_type TResult>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(3357))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3357), inst: 2 })
// CS Name: System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1
struct CORDL_TYPE ConfiguredValueTaskAwaitable_1<TResult> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using ConfiguredValueTaskAwaiter = System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<TResult>;

// Ctor Parameters [CppParam { name: "_value", ty: "System::Threading::Tasks::ValueTask_1<TResult>", modifiers: "", def_value: None }]
constexpr ConfiguredValueTaskAwaitable_1(System::Threading::Tasks::ValueTask_1<TResult> _value) noexcept;


                    constexpr ConfiguredValueTaskAwaitable_1(ConfiguredValueTaskAwaitable_1 const&) = default;
                    constexpr ConfiguredValueTaskAwaitable_1(ConfiguredValueTaskAwaitable_1&&) = default;
                    constexpr ConfiguredValueTaskAwaitable_1& operator=(ConfiguredValueTaskAwaitable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ConfiguredValueTaskAwaitable_1& operator=(ConfiguredValueTaskAwaitable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ConfiguredValueTaskAwaitable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Threading::Tasks::ValueTask_1<TResult> __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(System::Threading::Tasks::ValueTask_1<TResult> value) ;

constexpr System::Threading::Tasks::ValueTask_1<TResult> __get__value() const;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Threading::Tasks::ValueTask_1<TResult> value) ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter<TResult> GetAwaiter() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable_1, "System.Runtime.CompilerServices", "ConfiguredValueTaskAwaitable`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable_1__ConfiguredValueTaskAwaiter, "System.Runtime.CompilerServices", "ConfiguredValueTaskAwaitable`1/ConfiguredValueTaskAwaiter");
