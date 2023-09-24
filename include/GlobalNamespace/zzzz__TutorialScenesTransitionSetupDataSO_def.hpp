#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
class SceneInfo;
}
namespace GlobalNamespace {
struct GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType;
}
namespace GlobalNamespace {
class TutorialScenesTransitionSetupDataSO;
}
// Type: ::TutorialEndStateType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6137))
// CS Name: TutorialScenesTransitionSetupDataSO::TutorialEndStateType
struct CORDL_TYPE GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType(GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType const&) = default;
                    constexpr GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType(GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType&&) = default;
                    constexpr GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType& operator=(GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType& operator=(GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType_Unwrapped : int32_t {
__Completed = 0,
__ReturnToMenu = 1,
__Restart = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Completed offset 0
static GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType const Completed;

/// @brief Field ReturnToMenu offset 0
static GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType const ReturnToMenu;

/// @brief Field Restart offset 0
static GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType const Restart;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TutorialScenesTransitionSetupDataSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13874))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6138))
// CS Name: TutorialScenesTransitionSetupDataSO
class CORDL_TYPE TutorialScenesTransitionSetupDataSO : public GlobalNamespace::ScenesTransitionSetupDataSO {
public:
// Declarations
using TutorialEndStateType = GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~TutorialScenesTransitionSetupDataSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "TutorialScenesTransitionSetupDataSO", modifiers: " const&", def_value: None }]
constexpr TutorialScenesTransitionSetupDataSO(TutorialScenesTransitionSetupDataSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TutorialScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
constexpr TutorialScenesTransitionSetupDataSO(TutorialScenesTransitionSetupDataSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TutorialScenesTransitionSetupDataSO(void* ptr) noexcept : GlobalNamespace::ScenesTransitionSetupDataSO(ptr) {
}


  constexpr TutorialScenesTransitionSetupDataSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TutorialScenesTransitionSetupDataSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TutorialScenesTransitionSetupDataSO& operator=(TutorialScenesTransitionSetupDataSO&& o) noexcept = default;
  constexpr TutorialScenesTransitionSetupDataSO& operator=(TutorialScenesTransitionSetupDataSO const& o) noexcept = default;
                


// Fields

 GlobalNamespace::EnvironmentInfoSO __declspec(property(get=__get__environmentInfo, put=__set__environmentInfo))  _environmentInfo;

constexpr void __set__environmentInfo(GlobalNamespace::EnvironmentInfoSO value) ;

constexpr GlobalNamespace::EnvironmentInfoSO __get__environmentInfo() const;

 GlobalNamespace::SceneInfo __declspec(property(get=__get__tutorialSceneInfo, put=__set__tutorialSceneInfo))  _tutorialSceneInfo;

constexpr void __set__tutorialSceneInfo(GlobalNamespace::SceneInfo value) ;

constexpr GlobalNamespace::SceneInfo __get__tutorialSceneInfo() const;

 GlobalNamespace::SceneInfo __declspec(property(get=__get__gameCoreSceneInfo, put=__set__gameCoreSceneInfo))  _gameCoreSceneInfo;

constexpr void __set__gameCoreSceneInfo(GlobalNamespace::SceneInfo value) ;

constexpr GlobalNamespace::SceneInfo __get__gameCoreSceneInfo() const;

 System::Action_2<GlobalNamespace::TutorialScenesTransitionSetupDataSO,GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType> __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent))  didFinishEvent;

constexpr void __set_didFinishEvent(System::Action_2<GlobalNamespace::TutorialScenesTransitionSetupDataSO,GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType> value) ;

constexpr System::Action_2<GlobalNamespace::TutorialScenesTransitionSetupDataSO,GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType> __get_didFinishEvent() const;

 GlobalNamespace::PlayerSpecificSettings __declspec(property(get=__get__playerSpecificSettings_k__BackingField, put=__set__playerSpecificSettings_k__BackingField))  _playerSpecificSettings_k__BackingField;

constexpr void __set__playerSpecificSettings_k__BackingField(GlobalNamespace::PlayerSpecificSettings value) ;

constexpr GlobalNamespace::PlayerSpecificSettings __get__playerSpecificSettings_k__BackingField() const;


// Properties

 GlobalNamespace::PlayerSpecificSettings __declspec(property(get=get_playerSpecificSettings, put=set_playerSpecificSettings))  playerSpecificSettings;


// Methods

/// @brief Method add_didFinishEvent addr 0x21d279c size 0xb0 virtual false final false
 void add_didFinishEvent(System::Action_2<GlobalNamespace::TutorialScenesTransitionSetupDataSO,GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType> value) ;

/// @brief Method remove_didFinishEvent addr 0x21d111c size 0xb0 virtual false final false
 void remove_didFinishEvent(System::Action_2<GlobalNamespace::TutorialScenesTransitionSetupDataSO,GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType> value) ;

/// @brief Method get_playerSpecificSettings addr 0x21d3b94 size 0x8 virtual false final false
 GlobalNamespace::PlayerSpecificSettings get_playerSpecificSettings() ;

/// @brief Method set_playerSpecificSettings addr 0x21d3b9c size 0x8 virtual false final false
 void set_playerSpecificSettings(GlobalNamespace::PlayerSpecificSettings value) ;

/// @brief Method Init addr 0x21d284c size 0x280 virtual false final false
 void Init(GlobalNamespace::PlayerSpecificSettings playerSpecificSettings) ;

/// @brief Method Finish addr 0x21d3ba4 size 0x28 virtual false final false
 void Finish(GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType endState) ;

static GlobalNamespace::TutorialScenesTransitionSetupDataSO New_ctor() ;

/// @brief Method .ctor addr 0x21d3bcc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType, "", "TutorialScenesTransitionSetupDataSO/TutorialEndStateType");
NEED_NO_BOX(GlobalNamespace::TutorialScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialScenesTransitionSetupDataSO, "", "TutorialScenesTransitionSetupDataSO");
