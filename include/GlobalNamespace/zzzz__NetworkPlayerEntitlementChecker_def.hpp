#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class AdditionalContentModel;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
struct EntitlementsStatus;
}
namespace GlobalNamespace {
class IMenuRpcManager;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__AdditionalContentModel__EntitlementStatus;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
class NetworkPlayerEntitlementChecker;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5;
}
// Type: ::<HandleGetIsEntitledToLevel>d__5
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4574))
// CS Name: NetworkPlayerEntitlementChecker::<HandleGetIsEntitledToLevel>d__5
struct CORDL_TYPE ____GlobalNamespace__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::NetworkPlayerEntitlementChecker", modifiers: "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementsStatus>", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::NetworkPlayerEntitlementChecker __4__this, ::StringW levelId, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementsStatus> __u__1) noexcept;


                    constexpr ____GlobalNamespace__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5(____GlobalNamespace__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5 const&) = default;
                    constexpr ____GlobalNamespace__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5(____GlobalNamespace__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5&&) = default;
                    constexpr ____GlobalNamespace__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5& operator=(____GlobalNamespace__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5& operator=(____GlobalNamespace__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder value) ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __get___t__builder() const;

 ::GlobalNamespace::NetworkPlayerEntitlementChecker __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::NetworkPlayerEntitlementChecker value) ;

constexpr ::GlobalNamespace::NetworkPlayerEntitlementChecker __get___4__this() const;

 ::StringW __declspec(property(get=__get_levelId, put=__set_levelId))  levelId;

constexpr void __set_levelId(::StringW value) ;

constexpr ::StringW __get_levelId() const;

 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementsStatus> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementsStatus> value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementsStatus> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x22092a4 size 0x260 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2209504 size 0xc virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetEntitlementStatus>d__6
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4575))
// CS Name: NetworkPlayerEntitlementChecker::<GetEntitlementStatus>d__6
struct CORDL_TYPE ____GlobalNamespace__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementsStatus>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::NetworkPlayerEntitlementChecker", modifiers: "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementsStatus> __t__builder, ::GlobalNamespace::NetworkPlayerEntitlementChecker __4__this, ::StringW levelId, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> __u__1) noexcept;


                    constexpr ____GlobalNamespace__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6(____GlobalNamespace__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6 const&) = default;
                    constexpr ____GlobalNamespace__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6(____GlobalNamespace__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6&&) = default;
                    constexpr ____GlobalNamespace__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6& operator=(____GlobalNamespace__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6& operator=(____GlobalNamespace__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementsStatus> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementsStatus> value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementsStatus> __get___t__builder() const;

 ::GlobalNamespace::NetworkPlayerEntitlementChecker __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::NetworkPlayerEntitlementChecker value) ;

constexpr ::GlobalNamespace::NetworkPlayerEntitlementChecker __get___4__this() const;

 ::StringW __declspec(property(get=__get_levelId, put=__set_levelId))  levelId;

constexpr void __set_levelId(::StringW value) ;

constexpr ::StringW __get_levelId() const;

 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x2209510 size 0x204 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2209714 size 0x58 virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NetworkPlayerEntitlementChecker
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4576))
// CS Name: NetworkPlayerEntitlementChecker
class CORDL_TYPE NetworkPlayerEntitlementChecker : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _GetEntitlementStatus_d__6 = ::GlobalNamespace::____GlobalNamespace__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6;

using _HandleGetIsEntitledToLevel_d__5 = ::GlobalNamespace::____GlobalNamespace__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~NetworkPlayerEntitlementChecker() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetworkPlayerEntitlementChecker", modifiers: " const&", def_value: None }]
constexpr NetworkPlayerEntitlementChecker(NetworkPlayerEntitlementChecker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetworkPlayerEntitlementChecker", modifiers: "&&", def_value: None }]
constexpr NetworkPlayerEntitlementChecker(NetworkPlayerEntitlementChecker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetworkPlayerEntitlementChecker(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr NetworkPlayerEntitlementChecker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetworkPlayerEntitlementChecker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetworkPlayerEntitlementChecker& operator=(NetworkPlayerEntitlementChecker&& o) noexcept = default;
  constexpr NetworkPlayerEntitlementChecker& operator=(NetworkPlayerEntitlementChecker const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::IMenuRpcManager __declspec(property(get=__get__rpcManager, put=__set__rpcManager))  _rpcManager;

constexpr void __set__rpcManager(::GlobalNamespace::IMenuRpcManager value) ;

constexpr ::GlobalNamespace::IMenuRpcManager __get__rpcManager() const;

 ::GlobalNamespace::AdditionalContentModel __declspec(property(get=__get__additionalContentModel, put=__set__additionalContentModel))  _additionalContentModel;

constexpr void __set__additionalContentModel(::GlobalNamespace::AdditionalContentModel value) ;

constexpr ::GlobalNamespace::AdditionalContentModel __get__additionalContentModel() const;


// Methods

/// @brief Method Start addr 0x2208dcc size 0xf0 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x2208ebc size 0x1a4 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleDataInvalidated addr 0x2209060 size 0xa4 virtual false final false
 void HandleDataInvalidated() ;

/// @brief Method HandleGetIsEntitledToLevel addr 0x2209104 size 0x9c virtual false final false
 void HandleGetIsEntitledToLevel(::StringW userId, ::StringW levelId) ;

/// @brief Method GetEntitlementStatus addr 0x22091a0 size 0xfc virtual false final false
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementsStatus> GetEntitlementStatus(::StringW levelId) ;

// Ctor Parameters []
explicit NetworkPlayerEntitlementChecker() ;

/// @brief Method .ctor addr 0x220929c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::NetworkPlayerEntitlementChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkPlayerEntitlementChecker, "", "NetworkPlayerEntitlementChecker");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__NetworkPlayerEntitlementChecker___GetEntitlementStatus_d__6, "", "NetworkPlayerEntitlementChecker/<GetEntitlementStatus>d__6");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__NetworkPlayerEntitlementChecker___HandleGetIsEntitledToLevel_d__5, "", "NetworkPlayerEntitlementChecker/<HandleGetIsEntitledToLevel>d__5");
