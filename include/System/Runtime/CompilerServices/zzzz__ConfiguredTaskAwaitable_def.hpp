#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Action;
}
namespace System::Runtime::CompilerServices {
class ICriticalNotifyCompletion;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
struct ConfiguredTaskAwaitable;
}
namespace System::Runtime::CompilerServices {
struct System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
// Type: ::ConfiguredTaskAwaiter
namespace System::Runtime::CompilerServices {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3387))
// CS Name: System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter
struct CORDL_TYPE System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr operator  System::Runtime::CompilerServices::ICriticalNotifyCompletion() const;

// Ctor Parameters [CppParam { name: "m_task", ty: "System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "m_continueOnCapturedContext", ty: "bool", modifiers: "", def_value: None }]
constexpr System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter(System::Threading::Tasks::Task m_task, bool m_continueOnCapturedContext) noexcept;


                    constexpr System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter(System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter const&) = default;
                    constexpr System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter(System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter&&) = default;
                    constexpr System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter& operator=(System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter& operator=(System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Threading::Tasks::Task __declspec(property(get=__get_m_task, put=__set_m_task))  m_task;

constexpr void __set_m_task(System::Threading::Tasks::Task value) ;

constexpr System::Threading::Tasks::Task __get_m_task() const;

 bool __declspec(property(get=__get_m_continueOnCapturedContext, put=__set_m_continueOnCapturedContext))  m_continueOnCapturedContext;

constexpr void __set_m_continueOnCapturedContext(bool value) ;

constexpr bool __get_m_continueOnCapturedContext() const;


// Properties

 bool __declspec(property(get=get_IsCompleted))  IsCompleted;


// Methods

/// @brief Method .ctor addr 0x236f084 size 0x10 virtual false final false
 void _ctor(System::Threading::Tasks::Task task, bool continueOnCapturedContext) ;

/// @brief Method get_IsCompleted addr 0x236f0a0 size 0x1c virtual false final false
 bool get_IsCompleted() ;

/// @brief Method OnCompleted addr 0x236f0bc size 0x14 virtual true final true
 void OnCompleted(System::Action continuation) ;

/// @brief Method UnsafeOnCompleted addr 0x236dde4 size 0x14 virtual true final true
 void UnsafeOnCompleted(System::Action continuation) ;

/// @brief Method GetResult addr 0x236f0d0 size 0x8 virtual false final false
 void GetResult() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::ConfiguredTaskAwaitable
namespace System::Runtime::CompilerServices {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3388))
// CS Name: System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct CORDL_TYPE ConfiguredTaskAwaitable : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using ConfiguredTaskAwaiter = System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;

// Ctor Parameters [CppParam { name: "m_configuredTaskAwaiter", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr ConfiguredTaskAwaitable(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter m_configuredTaskAwaiter) noexcept;


                    constexpr ConfiguredTaskAwaitable(ConfiguredTaskAwaitable const&) = default;
                    constexpr ConfiguredTaskAwaitable(ConfiguredTaskAwaitable&&) = default;
                    constexpr ConfiguredTaskAwaitable& operator=(ConfiguredTaskAwaitable const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ConfiguredTaskAwaitable& operator=(ConfiguredTaskAwaitable&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ConfiguredTaskAwaitable(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __declspec(property(get=__get_m_configuredTaskAwaiter, put=__set_m_configuredTaskAwaiter))  m_configuredTaskAwaiter;

constexpr void __set_m_configuredTaskAwaiter(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __get_m_configuredTaskAwaiter() const;


// Methods

/// @brief Method .ctor addr 0x236f06c size 0x18 virtual false final false
 void _ctor(System::Threading::Tasks::Task task, bool continueOnCapturedContext) ;

/// @brief Method GetAwaiter addr 0x236f094 size 0xc virtual false final false
 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter GetAwaiter() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::ConfiguredTaskAwaitable, "System.Runtime.CompilerServices", "ConfiguredTaskAwaitable");
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, "System.Runtime.CompilerServices", "ConfiguredTaskAwaitable/ConfiguredTaskAwaiter");
