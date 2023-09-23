#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace System::Threading::Tasks {
struct ValueTask;
}
namespace System {
class Action;
}
namespace System::Runtime::CompilerServices {
class ICriticalNotifyCompletion;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
struct ConfiguredValueTaskAwaitable;
}
namespace System::Runtime::CompilerServices {
struct System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter;
}
// Type: ::ConfiguredValueTaskAwaiter
namespace System::Runtime::CompilerServices {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3354))
// CS Name: System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable::ConfiguredValueTaskAwaiter
struct CORDL_TYPE System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr operator  System::Runtime::CompilerServices::ICriticalNotifyCompletion() const;

// Ctor Parameters [CppParam { name: "_value", ty: "System::Threading::Tasks::ValueTask", modifiers: "", def_value: None }]
constexpr System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter(System::Threading::Tasks::ValueTask _value) noexcept;


                    constexpr System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter(System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter const&) = default;
                    constexpr System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter(System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter&&) = default;
                    constexpr System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter& operator=(System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter& operator=(System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Threading::Tasks::ValueTask __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(System::Threading::Tasks::ValueTask value) ;

constexpr System::Threading::Tasks::ValueTask __get__value() const;


// Properties

 bool __declspec(property(get=get_IsCompleted))  IsCompleted;


// Methods

/// @brief Method .ctor addr 0x236da28 size 0x8 virtual false final false
 void _ctor(System::Threading::Tasks::ValueTask value) ;

/// @brief Method get_IsCompleted addr 0x236da30 size 0x108 virtual false final false
 bool get_IsCompleted() ;

/// @brief Method GetResult addr 0x236db38 size 0x100 virtual false final false
 void GetResult() ;

/// @brief Method UnsafeOnCompleted addr 0x236dc38 size 0x1ac virtual true final true
 void UnsafeOnCompleted(System::Action continuation) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::ConfiguredValueTaskAwaitable
namespace System::Runtime::CompilerServices {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3355))
// CS Name: System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable
struct CORDL_TYPE ConfiguredValueTaskAwaitable : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using ConfiguredValueTaskAwaiter = System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter;

// Ctor Parameters [CppParam { name: "_value", ty: "System::Threading::Tasks::ValueTask", modifiers: "", def_value: None }]
constexpr ConfiguredValueTaskAwaitable(System::Threading::Tasks::ValueTask _value) noexcept;


                    constexpr ConfiguredValueTaskAwaitable(ConfiguredValueTaskAwaitable const&) = default;
                    constexpr ConfiguredValueTaskAwaitable(ConfiguredValueTaskAwaitable&&) = default;
                    constexpr ConfiguredValueTaskAwaitable& operator=(ConfiguredValueTaskAwaitable const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ConfiguredValueTaskAwaitable& operator=(ConfiguredValueTaskAwaitable&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ConfiguredValueTaskAwaitable(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Threading::Tasks::ValueTask __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(System::Threading::Tasks::ValueTask value) ;

constexpr System::Threading::Tasks::ValueTask __get__value() const;


// Methods

/// @brief Method .ctor addr 0x236da14 size 0x8 virtual false final false
 void _ctor(System::Threading::Tasks::ValueTask value) ;

/// @brief Method GetAwaiter addr 0x236da1c size 0xc virtual false final false
 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter GetAwaiter() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable, "System.Runtime.CompilerServices", "ConfiguredValueTaskAwaitable");
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredValueTaskAwaitable__ConfiguredValueTaskAwaiter, "System.Runtime.CompilerServices", "ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter");
