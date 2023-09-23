#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class IDifficultyBeatmapSet;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class BeatmapIdentifierNetSerializable;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
class IMockBeatmapDataProvider;
}
namespace System {
class IDisposable;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
class MockBeatmapData;
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
struct GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__MockBeatmapLoader____c;
}
namespace GlobalNamespace {
class GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0;
}
namespace GlobalNamespace {
class MockBeatmapLoader;
}
namespace GlobalNamespace {
struct GlobalNamespace__MockBeatmapLoader___GetBeatmapData_d__2;
}
namespace GlobalNamespace {
struct GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d;
}
// Type: ::<<GetBeatmapData>b__3>d
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5272))
// CS Name: MockBeatmapLoader::<>c__DisplayClass2_0::<<GetBeatmapData>b__3>d
struct CORDL_TYPE GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0 __4__this, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData> __u__1) noexcept;


                    constexpr GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d(GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d const&) = default;
                    constexpr GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d(GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d&&) = default;
                    constexpr GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d& operator=(GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d& operator=(GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0 __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0 value) ;

constexpr GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0 __get___4__this() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IReadonlyBeatmapData> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x20eaa2c size 0x264 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x20eac90 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass2_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5273))
// CS Name: MockBeatmapLoader::<>c__DisplayClass2_0
class CORDL_TYPE GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __GetBeatmapData_b__3_d = GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0(GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0(GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0& operator=(GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0&& o) noexcept = default;
  constexpr GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0& operator=(GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BeatmapIdentifierNetSerializable __declspec(property(get=__get_beatmap, put=__set_beatmap))  beatmap;

constexpr void __set_beatmap(GlobalNamespace::BeatmapIdentifierNetSerializable value) ;

constexpr GlobalNamespace::BeatmapIdentifierNetSerializable __get_beatmap() const;

 GlobalNamespace::IDifficultyBeatmap __declspec(property(get=__get_difficultyBeatmap, put=__set_difficultyBeatmap))  difficultyBeatmap;

constexpr void __set_difficultyBeatmap(GlobalNamespace::IDifficultyBeatmap value) ;

constexpr GlobalNamespace::IDifficultyBeatmap __get_difficultyBeatmap() const;

 GlobalNamespace::IReadonlyBeatmapData __declspec(property(get=__get_beatmapData, put=__set_beatmapData))  beatmapData;

constexpr void __set_beatmapData(GlobalNamespace::IReadonlyBeatmapData value) ;

constexpr GlobalNamespace::IReadonlyBeatmapData __get_beatmapData() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0() ;

/// @brief Method .ctor addr 0x20ea7e4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetBeatmapData>b__0 addr 0x20ea7ec size 0xbc virtual false final false
 bool _GetBeatmapData_b__0(GlobalNamespace::IDifficultyBeatmapSet bds) ;

/// @brief Method <GetBeatmapData>b__2 addr 0x20ea8a8 size 0xbc virtual false final false
 bool _GetBeatmapData_b__2(GlobalNamespace::IDifficultyBeatmap dbm) ;

/// @brief Method <GetBeatmapData>b__3 addr 0x20ea964 size 0xc8 virtual false final false
 System::Threading::Tasks::Task _GetBeatmapData_b__3() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5274))
// CS Name: MockBeatmapLoader::<>c
class CORDL_TYPE GlobalNamespace__MockBeatmapLoader____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__MockBeatmapLoader____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MockBeatmapLoader____c", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MockBeatmapLoader____c(GlobalNamespace__MockBeatmapLoader____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MockBeatmapLoader____c", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MockBeatmapLoader____c(GlobalNamespace__MockBeatmapLoader____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MockBeatmapLoader____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MockBeatmapLoader____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MockBeatmapLoader____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MockBeatmapLoader____c& operator=(GlobalNamespace__MockBeatmapLoader____c&& o) noexcept = default;
  constexpr GlobalNamespace__MockBeatmapLoader____c& operator=(GlobalNamespace__MockBeatmapLoader____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c value) ;

static GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c __get___9() ;

static System::Func_2<GlobalNamespace::IDifficultyBeatmapSet,System::Collections::Generic::IEnumerable_1<GlobalNamespace::IDifficultyBeatmap>> __declspec(property(get=__get___9__2_1, put=__set___9__2_1))  __9__2_1;

static void __set___9__2_1(System::Func_2<GlobalNamespace::IDifficultyBeatmapSet,System::Collections::Generic::IEnumerable_1<GlobalNamespace::IDifficultyBeatmap>> value) ;

static System::Func_2<GlobalNamespace::IDifficultyBeatmapSet,System::Collections::Generic::IEnumerable_1<GlobalNamespace::IDifficultyBeatmap>> __get___9__2_1() ;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__MockBeatmapLoader____c() ;

/// @brief Method .ctor addr 0x20ead00 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetBeatmapData>b__2_1 addr 0x20ead08 size 0xa0 virtual false final false
 System::Collections::Generic::IEnumerable_1<GlobalNamespace::IDifficultyBeatmap> _GetBeatmapData_b__2_1(GlobalNamespace::IDifficultyBeatmapSet bds) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetBeatmapData>d__2
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5275))
// CS Name: MockBeatmapLoader::<GetBeatmapData>d__2
struct CORDL_TYPE GlobalNamespace__MockBeatmapLoader___GetBeatmapData_d__2 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::MockBeatmapData>", modifiers: "", def_value: None }, CppParam { name: "beatmap", ty: "GlobalNamespace::BeatmapIdentifierNetSerializable", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::MockBeatmapLoader", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__MockBeatmapLoader___GetBeatmapData_d__2(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::MockBeatmapData> __t__builder, GlobalNamespace::BeatmapIdentifierNetSerializable beatmap, GlobalNamespace::MockBeatmapLoader __4__this, System::Threading::CancellationToken cancellationToken, GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0 __8__1, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> __u__1) noexcept;


                    constexpr GlobalNamespace__MockBeatmapLoader___GetBeatmapData_d__2(GlobalNamespace__MockBeatmapLoader___GetBeatmapData_d__2 const&) = default;
                    constexpr GlobalNamespace__MockBeatmapLoader___GetBeatmapData_d__2(GlobalNamespace__MockBeatmapLoader___GetBeatmapData_d__2&&) = default;
                    constexpr GlobalNamespace__MockBeatmapLoader___GetBeatmapData_d__2& operator=(GlobalNamespace__MockBeatmapLoader___GetBeatmapData_d__2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__MockBeatmapLoader___GetBeatmapData_d__2& operator=(GlobalNamespace__MockBeatmapLoader___GetBeatmapData_d__2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x48};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MockBeatmapLoader___GetBeatmapData_d__2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::MockBeatmapData> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::MockBeatmapData> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::MockBeatmapData> __get___t__builder() const;

 GlobalNamespace::BeatmapIdentifierNetSerializable __declspec(property(get=__get_beatmap, put=__set_beatmap))  beatmap;

constexpr void __set_beatmap(GlobalNamespace::BeatmapIdentifierNetSerializable value) ;

constexpr GlobalNamespace::BeatmapIdentifierNetSerializable __get_beatmap() const;

 GlobalNamespace::MockBeatmapLoader __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::MockBeatmapLoader value) ;

constexpr GlobalNamespace::MockBeatmapLoader __get___4__this() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0 __declspec(property(get=__get___8__1, put=__set___8__1))  __8__1;

constexpr void __set___8__1(GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0 value) ;

constexpr GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0 __get___8__1() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x20eada8 size 0x620 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x20eb3c8 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MockBeatmapLoader
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5276))
// CS Name: MockBeatmapLoader
class CORDL_TYPE MockBeatmapLoader : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _GetBeatmapData_d__2 = GlobalNamespace::GlobalNamespace__MockBeatmapLoader___GetBeatmapData_d__2;

using __c = GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c;

using __c__DisplayClass2_0 = GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0;

/// @brief Convert operator to GlobalNamespace::IMockBeatmapDataProvider
constexpr operator  GlobalNamespace::IMockBeatmapDataProvider() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~MockBeatmapLoader() = default;

// Ctor Parameters [CppParam { name: "", ty: "MockBeatmapLoader", modifiers: " const&", def_value: None }]
constexpr MockBeatmapLoader(MockBeatmapLoader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MockBeatmapLoader", modifiers: "&&", def_value: None }]
constexpr MockBeatmapLoader(MockBeatmapLoader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MockBeatmapLoader(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MockBeatmapLoader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MockBeatmapLoader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MockBeatmapLoader& operator=(MockBeatmapLoader&& o) noexcept = default;
  constexpr MockBeatmapLoader& operator=(MockBeatmapLoader const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BeatmapLevelsModel __declspec(property(get=__get__beatmapLevelsModel, put=__set__beatmapLevelsModel))  _beatmapLevelsModel;

constexpr void __set__beatmapLevelsModel(GlobalNamespace::BeatmapLevelsModel value) ;

constexpr GlobalNamespace::BeatmapLevelsModel __get__beatmapLevelsModel() const;


// Methods

// Ctor Parameters [CppParam { name: "beatmapLevelsModel", ty: "GlobalNamespace::BeatmapLevelsModel", modifiers: "", def_value: None }]
explicit MockBeatmapLoader(GlobalNamespace::BeatmapLevelsModel beatmapLevelsModel) ;

/// @brief Method .ctor addr 0x20ea6b0 size 0x28 virtual false final false
 void _ctor(GlobalNamespace::BeatmapLevelsModel beatmapLevelsModel) ;

/// @brief Method GetBeatmapData addr 0x20ea6d8 size 0x108 virtual true final true
 System::Threading::Tasks::Task_1<GlobalNamespace::MockBeatmapData> GetBeatmapData(GlobalNamespace::BeatmapIdentifierNetSerializable beatmap, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method Dispose addr 0x20ea7e0 size 0x4 virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c, "", "MockBeatmapLoader/<>c");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0, "", "MockBeatmapLoader/<>c__DisplayClass2_0");
NEED_NO_BOX(GlobalNamespace::MockBeatmapLoader);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockBeatmapLoader, "", "MockBeatmapLoader");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MockBeatmapLoader___GetBeatmapData_d__2, "", "MockBeatmapLoader/<GetBeatmapData>d__2");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d, "", "MockBeatmapLoader/<>c__DisplayClass2_0/<<GetBeatmapData>b__3>d");
