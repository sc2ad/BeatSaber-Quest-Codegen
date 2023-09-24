#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
namespace System::Threading {
class WaitCallback;
}
namespace System {
class Action;
}
namespace System::Runtime::CompilerServices {
class ICriticalNotifyCompletion;
}
namespace System::Threading {
class SendOrPostCallback;
}
namespace System::Runtime::CompilerServices {
struct System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
struct System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter;
}
namespace System::Runtime::CompilerServices {
struct YieldAwaitable;
}
// Type: ::YieldAwaiter
namespace System::Runtime::CompilerServices {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3401))
// CS Name: System.Runtime.CompilerServices.YieldAwaitable::YieldAwaiter
struct CORDL_TYPE System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr operator  System::Runtime::CompilerServices::ICriticalNotifyCompletion() const;


                    constexpr System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter(System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter const&) = default;
                    constexpr System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter(System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter&&) = default;
                    constexpr System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter& operator=(System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter& operator=(System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static System::Threading::WaitCallback __declspec(property(get=__get_s_waitCallbackRunAction, put=__set_s_waitCallbackRunAction))  s_waitCallbackRunAction;

static void __set_s_waitCallbackRunAction(System::Threading::WaitCallback value) ;

static System::Threading::WaitCallback __get_s_waitCallbackRunAction() ;

static System::Threading::SendOrPostCallback __declspec(property(get=__get_s_sendOrPostCallbackRunAction, put=__set_s_sendOrPostCallbackRunAction))  s_sendOrPostCallbackRunAction;

static void __set_s_sendOrPostCallbackRunAction(System::Threading::SendOrPostCallback value) ;

static System::Threading::SendOrPostCallback __get_s_sendOrPostCallbackRunAction() ;


// Properties

 bool __declspec(property(get=get_IsCompleted))  IsCompleted;


// Methods

/// @brief Method get_IsCompleted addr 0x2370590 size 0x8 virtual false final false
 bool get_IsCompleted() ;

/// @brief Method UnsafeOnCompleted addr 0x2370598 size 0x58 virtual true final true
 void UnsafeOnCompleted(System::Action continuation) ;

/// @brief Method QueueContinuation addr 0x23705f0 size 0x2a0 virtual false final false
static void QueueContinuation(System::Action continuation, bool flowContext) ;

/// @brief Method RunAction addr 0x2370890 size 0x6c virtual false final false
static void RunAction(::bs_hook::Il2CppWrapperType state) ;

/// @brief Method GetResult addr 0x23708fc size 0x4 virtual false final false
 void GetResult() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::YieldAwaitable
namespace System::Runtime::CompilerServices {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3402))
// CS Name: System.Runtime.CompilerServices.YieldAwaitable
struct CORDL_TYPE YieldAwaitable : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using YieldAwaiter = System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter;


                    constexpr YieldAwaitable(YieldAwaitable const&) = default;
                    constexpr YieldAwaitable(YieldAwaitable&&) = default;
                    constexpr YieldAwaitable& operator=(YieldAwaitable const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr YieldAwaitable& operator=(YieldAwaitable&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit YieldAwaitable(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Methods

/// @brief Method GetAwaiter addr 0x2370588 size 0x8 virtual false final false
 System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter GetAwaiter() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::System__Runtime__CompilerServices__YieldAwaitable__YieldAwaiter, "System.Runtime.CompilerServices", "YieldAwaitable/YieldAwaiter");
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::YieldAwaitable, "System.Runtime.CompilerServices", "YieldAwaitable");
