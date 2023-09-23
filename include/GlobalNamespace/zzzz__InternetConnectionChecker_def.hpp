#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
class InternetConnectionChecker;
}
namespace GlobalNamespace {
struct GlobalNamespace__InternetConnectionChecker___IsConnectedToInternetAsync_d__0;
}
// Type: ::<IsConnectedToInternetAsync>d__0
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5984))
// CS Name: InternetConnectionChecker::<IsConnectedToInternetAsync>d__0
struct CORDL_TYPE GlobalNamespace__InternetConnectionChecker___IsConnectedToInternetAsync_d__0 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__InternetConnectionChecker___IsConnectedToInternetAsync_d__0(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;


                    constexpr GlobalNamespace__InternetConnectionChecker___IsConnectedToInternetAsync_d__0(GlobalNamespace__InternetConnectionChecker___IsConnectedToInternetAsync_d__0 const&) = default;
                    constexpr GlobalNamespace__InternetConnectionChecker___IsConnectedToInternetAsync_d__0(GlobalNamespace__InternetConnectionChecker___IsConnectedToInternetAsync_d__0&&) = default;
                    constexpr GlobalNamespace__InternetConnectionChecker___IsConnectedToInternetAsync_d__0& operator=(GlobalNamespace__InternetConnectionChecker___IsConnectedToInternetAsync_d__0 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__InternetConnectionChecker___IsConnectedToInternetAsync_d__0& operator=(GlobalNamespace__InternetConnectionChecker___IsConnectedToInternetAsync_d__0&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__InternetConnectionChecker___IsConnectedToInternetAsync_d__0(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __get___t__builder() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<bool> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<bool> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<bool> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21a1b04 size 0x21c virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21a1d20 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::InternetConnectionChecker
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5985))
// CS Name: InternetConnectionChecker
class CORDL_TYPE InternetConnectionChecker : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _IsConnectedToInternetAsync_d__0 = GlobalNamespace::GlobalNamespace__InternetConnectionChecker___IsConnectedToInternetAsync_d__0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InternetConnectionChecker() = default;

// Ctor Parameters [CppParam { name: "", ty: "InternetConnectionChecker", modifiers: " const&", def_value: None }]
constexpr InternetConnectionChecker(InternetConnectionChecker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InternetConnectionChecker", modifiers: "&&", def_value: None }]
constexpr InternetConnectionChecker(InternetConnectionChecker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InternetConnectionChecker(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InternetConnectionChecker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InternetConnectionChecker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InternetConnectionChecker& operator=(InternetConnectionChecker&& o) noexcept = default;
  constexpr InternetConnectionChecker& operator=(InternetConnectionChecker const& o) noexcept = default;
                


// Methods

/// @brief Method IsConnectedToInternetAsync addr 0x21a1a10 size 0xec virtual false final false
static System::Threading::Tasks::Task_1<bool> IsConnectedToInternetAsync(System::Threading::CancellationToken cancellationToken) ;

// Ctor Parameters []
explicit InternetConnectionChecker() ;

/// @brief Method .ctor addr 0x21a1afc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::InternetConnectionChecker);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::InternetConnectionChecker, "", "InternetConnectionChecker");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__InternetConnectionChecker___IsConnectedToInternetAsync_d__0, "", "InternetConnectionChecker/<IsConnectedToInternetAsync>d__0");
