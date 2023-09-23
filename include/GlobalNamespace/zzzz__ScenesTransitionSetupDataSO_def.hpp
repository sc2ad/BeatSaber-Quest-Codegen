#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class SceneSetupData;
}
namespace GlobalNamespace {
class SceneInfo;
}
namespace System::Threading::Tasks {
class Task;
}
namespace Zenject {
class DiContainer;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
class ScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
struct GlobalNamespace__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10;
}
namespace GlobalNamespace {
struct GlobalNamespace__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d;
}
// Type: ::<BeforeScenesWillBeActivated>d__10
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13872))
// CS Name: ScenesTransitionSetupDataSO::<BeforeScenesWillBeActivated>d__10
struct CORDL_TYPE GlobalNamespace__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::ScenesTransitionSetupDataSO", modifiers: "", def_value: None }, CppParam { name: "runAsync", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr GlobalNamespace__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, GlobalNamespace::ScenesTransitionSetupDataSO __4__this, bool runAsync, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;


                    constexpr GlobalNamespace__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10(GlobalNamespace__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10 const&) = default;
                    constexpr GlobalNamespace__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10(GlobalNamespace__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10&&) = default;
                    constexpr GlobalNamespace__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10& operator=(GlobalNamespace__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10& operator=(GlobalNamespace__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncVoidMethodBuilder __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncVoidMethodBuilder value) ;

constexpr System::Runtime::CompilerServices::AsyncVoidMethodBuilder __get___t__builder() const;

 GlobalNamespace::ScenesTransitionSetupDataSO __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::ScenesTransitionSetupDataSO value) ;

constexpr GlobalNamespace::ScenesTransitionSetupDataSO __get___4__this() const;

 bool __declspec(property(get=__get_runAsync, put=__set_runAsync))  runAsync;

constexpr void __set_runAsync(bool value) ;

constexpr bool __get_runAsync() const;

 System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x1f82cac size 0x250 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x1f82efc size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<<BeforeScenesWillBeActivated>b__10_0>d
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13873))
// CS Name: ScenesTransitionSetupDataSO::<<BeforeScenesWillBeActivated>b__10_0>d
struct CORDL_TYPE GlobalNamespace__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::ScenesTransitionSetupDataSO", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr GlobalNamespace__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, GlobalNamespace::ScenesTransitionSetupDataSO __4__this, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;


                    constexpr GlobalNamespace__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d(GlobalNamespace__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d const&) = default;
                    constexpr GlobalNamespace__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d(GlobalNamespace__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d&&) = default;
                    constexpr GlobalNamespace__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d& operator=(GlobalNamespace__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d& operator=(GlobalNamespace__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 GlobalNamespace::ScenesTransitionSetupDataSO __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::ScenesTransitionSetupDataSO value) ;

constexpr GlobalNamespace::ScenesTransitionSetupDataSO __get___4__this() const;

 System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x1f82f08 size 0x180 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x1f83088 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ScenesTransitionSetupDataSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13874))
// CS Name: ScenesTransitionSetupDataSO
class CORDL_TYPE ScenesTransitionSetupDataSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
using __BeforeScenesWillBeActivated_b__10_0_d = GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d;

using _BeforeScenesWillBeActivated_d__10 = GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ScenesTransitionSetupDataSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScenesTransitionSetupDataSO", modifiers: " const&", def_value: None }]
constexpr ScenesTransitionSetupDataSO(ScenesTransitionSetupDataSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
constexpr ScenesTransitionSetupDataSO(ScenesTransitionSetupDataSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScenesTransitionSetupDataSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr ScenesTransitionSetupDataSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScenesTransitionSetupDataSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScenesTransitionSetupDataSO& operator=(ScenesTransitionSetupDataSO&& o) noexcept = default;
  constexpr ScenesTransitionSetupDataSO& operator=(ScenesTransitionSetupDataSO const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::SceneInfo> __declspec(property(get=__get__scenes_k__BackingField, put=__set__scenes_k__BackingField))  _scenes_k__BackingField;

constexpr void __set__scenes_k__BackingField(::ArrayW<GlobalNamespace::SceneInfo> value) ;

constexpr ::ArrayW<GlobalNamespace::SceneInfo> __get__scenes_k__BackingField() const;

 ::ArrayW<GlobalNamespace::SceneSetupData> __declspec(property(get=__get__sceneSetupDataArray, put=__set__sceneSetupDataArray))  _sceneSetupDataArray;

constexpr void __set__sceneSetupDataArray(::ArrayW<GlobalNamespace::SceneSetupData> value) ;

constexpr ::ArrayW<GlobalNamespace::SceneSetupData> __get__sceneSetupDataArray() const;

 bool __declspec(property(get=__get__beforeScenesWillBeActivatedTaskIsComplete_k__BackingField, put=__set__beforeScenesWillBeActivatedTaskIsComplete_k__BackingField))  _beforeScenesWillBeActivatedTaskIsComplete_k__BackingField;

constexpr void __set__beforeScenesWillBeActivatedTaskIsComplete_k__BackingField(bool value) ;

constexpr bool __get__beforeScenesWillBeActivatedTaskIsComplete_k__BackingField() const;


// Properties

 ::ArrayW<GlobalNamespace::SceneInfo> __declspec(property(get=get_scenes, put=set_scenes))  scenes;

 bool __declspec(property(get=get_beforeScenesWillBeActivatedTaskIsComplete, put=set_beforeScenesWillBeActivatedTaskIsComplete))  beforeScenesWillBeActivatedTaskIsComplete;


// Methods

/// @brief Method get_scenes addr 0x1f82b38 size 0x8 virtual false final false
 ::ArrayW<GlobalNamespace::SceneInfo> get_scenes() ;

/// @brief Method set_scenes addr 0x1f82b40 size 0x8 virtual false final false
 void set_scenes(::ArrayW<GlobalNamespace::SceneInfo> value) ;

/// @brief Method get_beforeScenesWillBeActivatedTaskIsComplete addr 0x1f82b48 size 0x8 virtual false final false
 bool get_beforeScenesWillBeActivatedTaskIsComplete() ;

/// @brief Method set_beforeScenesWillBeActivatedTaskIsComplete addr 0x1f82b50 size 0xc virtual false final false
 void set_beforeScenesWillBeActivatedTaskIsComplete(bool value) ;

/// @brief Method Init addr 0x1f82a14 size 0xc virtual false final false
 void Init(::ArrayW<GlobalNamespace::SceneInfo> scenes, ::ArrayW<GlobalNamespace::SceneSetupData> sceneSetupData) ;

/// @brief Method BeforeScenesWillBeActivated addr 0x1f827f8 size 0xa0 virtual false final false
 void BeforeScenesWillBeActivated(bool runAsync) ;

/// @brief Method BeforeScenesWillBeActivatedAsync addr 0x1f82b5c size 0x88 virtual true final false
 System::Threading::Tasks::Task BeforeScenesWillBeActivatedAsync() ;

/// @brief Method InstallBindings addr 0x1f81020 size 0x12c virtual false final false
 void InstallBindings(Zenject::DiContainer container) ;

// Ctor Parameters []
explicit ScenesTransitionSetupDataSO() ;

/// @brief Method .ctor addr 0x1f82a28 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <BeforeScenesWillBeActivated>b__10_0 addr 0x1f82be4 size 0xc8 virtual false final false
 System::Threading::Tasks::Task _BeforeScenesWillBeActivated_b__10_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScenesTransitionSetupDataSO, "", "ScenesTransitionSetupDataSO");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO___BeforeScenesWillBeActivated_d__10, "", "ScenesTransitionSetupDataSO/<BeforeScenesWillBeActivated>d__10");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__ScenesTransitionSetupDataSO____BeforeScenesWillBeActivated_b__10_0_d, "", "ScenesTransitionSetupDataSO/<<BeforeScenesWillBeActivated>b__10_0>d");
