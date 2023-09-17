#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace UnityEngine {
class Ping;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Net {
class IPAddress;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
class PingUtility;
}
namespace GlobalNamespace {
class ____GlobalNamespace__PingUtility____c;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__PingUtility___PingAsync_d__0;
}
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12860))
// CS Name: PingUtility::<>c
class CORDL_TYPE ____GlobalNamespace__PingUtility____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____GlobalNamespace__PingUtility____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__PingUtility____c", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__PingUtility____c(____GlobalNamespace__PingUtility____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__PingUtility____c", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__PingUtility____c(____GlobalNamespace__PingUtility____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__PingUtility____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__PingUtility____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__PingUtility____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__PingUtility____c& operator=(____GlobalNamespace__PingUtility____c&& o) noexcept = default;
  constexpr ____GlobalNamespace__PingUtility____c& operator=(____GlobalNamespace__PingUtility____c const& o) noexcept = default;
                


// Fields

static ::GlobalNamespace::____GlobalNamespace__PingUtility____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::GlobalNamespace::____GlobalNamespace__PingUtility____c value) ;

static ::GlobalNamespace::____GlobalNamespace__PingUtility____c __get___9() ;

static ::System::Func_2<::System::Net::IPAddress,::UnityEngine::Ping> __declspec(property(get=__get___9__0_0, put=__set___9__0_0))  __9__0_0;

static void __set___9__0_0(::System::Func_2<::System::Net::IPAddress,::UnityEngine::Ping> value) ;

static ::System::Func_2<::System::Net::IPAddress,::UnityEngine::Ping> __get___9__0_0() ;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__PingUtility____c() ;

/// @brief Method .ctor addr 0xdc4624 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <PingAsync>b__0_0 addr 0xdc462c size 0x80 virtual false final false
 ::UnityEngine::Ping _PingAsync_b__0_0(::System::Net::IPAddress ip) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<PingAsync>d__0
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12861))
// CS Name: PingUtility::<PingAsync>d__0
struct CORDL_TYPE ____GlobalNamespace__PingUtility___PingAsync_d__0 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int64_t>", modifiers: "", def_value: None }, CppParam { name: "url", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_pings_5__2", ty: "::ArrayW<::UnityEngine::Ping>", modifiers: "", def_value: None }, CppParam { name: "_ping_5__3", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "_found_5__4", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::Net::IPAddress>>", modifiers: "", def_value: None }, CppParam { name: "_t_5__5", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__PingUtility___PingAsync_d__0(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int64_t> __t__builder, ::StringW url, ::ArrayW<::UnityEngine::Ping> _pings_5__2, int64_t _ping_5__3, bool _found_5__4, ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::Net::IPAddress>> __u__1, int32_t _t_5__5, ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept;


                    constexpr ____GlobalNamespace__PingUtility___PingAsync_d__0(____GlobalNamespace__PingUtility___PingAsync_d__0 const&) = default;
                    constexpr ____GlobalNamespace__PingUtility___PingAsync_d__0(____GlobalNamespace__PingUtility___PingAsync_d__0&&) = default;
                    constexpr ____GlobalNamespace__PingUtility___PingAsync_d__0& operator=(____GlobalNamespace__PingUtility___PingAsync_d__0 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__PingUtility___PingAsync_d__0& operator=(____GlobalNamespace__PingUtility___PingAsync_d__0&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x58};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__PingUtility___PingAsync_d__0(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int64_t> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int64_t> value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int64_t> __get___t__builder() const;

 ::StringW __declspec(property(get=__get_url, put=__set_url))  url;

constexpr void __set_url(::StringW value) ;

constexpr ::StringW __get_url() const;

 ::ArrayW<::UnityEngine::Ping> __declspec(property(get=__get__pings_5__2, put=__set__pings_5__2))  _pings_5__2;

constexpr void __set__pings_5__2(::ArrayW<::UnityEngine::Ping> value) ;

constexpr ::ArrayW<::UnityEngine::Ping> __get__pings_5__2() const;

 int64_t __declspec(property(get=__get__ping_5__3, put=__set__ping_5__3))  _ping_5__3;

constexpr void __set__ping_5__3(int64_t value) ;

constexpr int64_t __get__ping_5__3() const;

 bool __declspec(property(get=__get__found_5__4, put=__set__found_5__4))  _found_5__4;

constexpr void __set__found_5__4(bool value) ;

constexpr bool __get__found_5__4() const;

 ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::Net::IPAddress>> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::Net::IPAddress>> value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::Net::IPAddress>> __get___u__1() const;

 int32_t __declspec(property(get=__get__t_5__5, put=__set__t_5__5))  _t_5__5;

constexpr void __set__t_5__5(int32_t value) ;

constexpr int32_t __get__t_5__5() const;

 ::System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(::System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0xdc46ac size 0x52c virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0xdc4bd8 size 0x58 virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PingUtility
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12862))
// CS Name: PingUtility
class CORDL_TYPE PingUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _PingAsync_d__0 = ::GlobalNamespace::____GlobalNamespace__PingUtility___PingAsync_d__0;

using __c = ::GlobalNamespace::____GlobalNamespace__PingUtility____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PingUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "PingUtility", modifiers: " const&", def_value: None }]
constexpr PingUtility(PingUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PingUtility", modifiers: "&&", def_value: None }]
constexpr PingUtility(PingUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PingUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PingUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PingUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PingUtility& operator=(PingUtility&& o) noexcept = default;
  constexpr PingUtility& operator=(PingUtility const& o) noexcept = default;
                


// Methods

/// @brief Method PingAsync addr 0xdc44c0 size 0x100 virtual false final false
static ::System::Threading::Tasks::Task_1<int64_t> PingAsync(::StringW url) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::PingUtility);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PingUtility, "", "PingUtility");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__PingUtility____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__PingUtility____c, "", "PingUtility/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__PingUtility___PingAsync_d__0, "", "PingUtility/<PingAsync>d__0");
