#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class BeatmapLevelSO;
}
namespace GlobalNamespace {
class ColorSchemeSO;
}
namespace GlobalNamespace {
class StandardLevelNoTransitionInstallerData;
}
namespace System::Threading::Tasks {
class Task;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LightmappingSceneSetup;
}
namespace GlobalNamespace {
class ____GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0;
}
namespace GlobalNamespace {
struct ______GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d;
}
// Type: ::<<InstallBindings>b__0>d
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6086))
// CS Name: LightmappingSceneSetup::<>c__DisplayClass8_0::<<InstallBindings>b__0>d
struct CORDL_TYPE ______GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::____GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData>", modifiers: "", def_value: None }]
constexpr ______GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::____GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0 __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData> __u__1) noexcept;


                    constexpr ______GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d(______GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d const&) = default;
                    constexpr ______GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d(______GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d&&) = default;
                    constexpr ______GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d& operator=(______GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ______GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d& operator=(______GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ______GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __get___t__builder() const;

 ::GlobalNamespace::____GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0 __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::____GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0 value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0 __get___4__this() const;

 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData> value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21b616c size 0x2ac virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21b6418 size 0xc virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass8_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6087))
// CS Name: LightmappingSceneSetup::<>c__DisplayClass8_0
class CORDL_TYPE ____GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __InstallBindings_b__0_d = ::GlobalNamespace::______GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0(____GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0(____GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0& operator=(____GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0&& o) noexcept = default;
  constexpr ____GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0& operator=(____GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0 const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::LightmappingSceneSetup __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::LightmappingSceneSetup value) ;

constexpr ::GlobalNamespace::LightmappingSceneSetup __get___4__this() const;

 ::GlobalNamespace::IReadonlyBeatmapData __declspec(property(get=__get_beatmapData, put=__set_beatmapData))  beatmapData;

constexpr void __set_beatmapData(::GlobalNamespace::IReadonlyBeatmapData value) ;

constexpr ::GlobalNamespace::IReadonlyBeatmapData __get_beatmapData() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0() ;

/// @brief Method .ctor addr 0x21b6094 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <InstallBindings>b__0 addr 0x21b60a4 size 0xc8 virtual false final false
 ::System::Threading::Tasks::Task _InstallBindings_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LightmappingSceneSetup
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6088))
// CS Name: LightmappingSceneSetup
class CORDL_TYPE LightmappingSceneSetup : public ::Zenject::MonoInstaller {
public:
// Declarations
using __c__DisplayClass8_0 = ::GlobalNamespace::____GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~LightmappingSceneSetup() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightmappingSceneSetup", modifiers: " const&", def_value: None }]
constexpr LightmappingSceneSetup(LightmappingSceneSetup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightmappingSceneSetup", modifiers: "&&", def_value: None }]
constexpr LightmappingSceneSetup(LightmappingSceneSetup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightmappingSceneSetup(void* ptr) noexcept : ::Zenject::MonoInstaller(ptr) {
}


  constexpr LightmappingSceneSetup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightmappingSceneSetup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightmappingSceneSetup& operator=(LightmappingSceneSetup&& o) noexcept = default;
  constexpr LightmappingSceneSetup& operator=(LightmappingSceneSetup const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::BeatmapLevelSO __declspec(property(get=__get__beatmapLevel, put=__set__beatmapLevel))  _beatmapLevel;

constexpr void __set__beatmapLevel(::GlobalNamespace::BeatmapLevelSO value) ;

constexpr ::GlobalNamespace::BeatmapLevelSO __get__beatmapLevel() const;

 ::GlobalNamespace::BeatmapCharacteristicSO __declspec(property(get=__get__beatmapCharacteristic, put=__set__beatmapCharacteristic))  _beatmapCharacteristic;

constexpr void __set__beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO value) ;

constexpr ::GlobalNamespace::BeatmapCharacteristicSO __get__beatmapCharacteristic() const;

 ::GlobalNamespace::BeatmapDifficulty __declspec(property(get=__get__beatmapDifficulty, put=__set__beatmapDifficulty))  _beatmapDifficulty;

constexpr void __set__beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value) ;

constexpr ::GlobalNamespace::BeatmapDifficulty __get__beatmapDifficulty() const;

 ::GlobalNamespace::ColorSchemeSO __declspec(property(get=__get__colorScheme, put=__set__colorScheme))  _colorScheme;

constexpr void __set__colorScheme(::GlobalNamespace::ColorSchemeSO value) ;

constexpr ::GlobalNamespace::ColorSchemeSO __get__colorScheme() const;

 ::GlobalNamespace::StandardLevelNoTransitionInstallerData __declspec(property(get=__get__standardLevelNoTransitionInstallerData, put=__set__standardLevelNoTransitionInstallerData))  _standardLevelNoTransitionInstallerData;

constexpr void __set__standardLevelNoTransitionInstallerData(::GlobalNamespace::StandardLevelNoTransitionInstallerData value) ;

constexpr ::GlobalNamespace::StandardLevelNoTransitionInstallerData __get__standardLevelNoTransitionInstallerData() const;


// Properties

 ::GlobalNamespace::ColorSchemeSO __declspec(property(get=get_colorScheme, put=set_colorScheme))  colorScheme;


// Methods

/// @brief Method get_colorScheme addr 0x21b5374 size 0x8 virtual false final false
 ::GlobalNamespace::ColorSchemeSO get_colorScheme() ;

/// @brief Method set_colorScheme addr 0x21b537c size 0x8 virtual false final false
 void set_colorScheme(::GlobalNamespace::ColorSchemeSO value) ;

/// @brief Method InstallBindings addr 0x21b5384 size 0xd10 virtual true final false
 void InstallBindings() ;

// Ctor Parameters []
explicit LightmappingSceneSetup() ;

/// @brief Method .ctor addr 0x21b609c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::LightmappingSceneSetup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightmappingSceneSetup, "", "LightmappingSceneSetup");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0, "", "LightmappingSceneSetup/<>c__DisplayClass8_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::______GlobalNamespace__LightmappingSceneSetup____c__DisplayClass8_0____InstallBindings_b__0_d, "", "LightmappingSceneSetup/<>c__DisplayClass8_0/<<InstallBindings>b__0>d");
