#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class MissionStage;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace GlobalNamespace {
class MissionStageLockView;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__MissionStagesManager____c;
}
namespace GlobalNamespace {
class MissionStagesManager;
}
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5642))
// CS Name: MissionStagesManager::<>c
class CORDL_TYPE GlobalNamespace__MissionStagesManager____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__MissionStagesManager____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MissionStagesManager____c", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MissionStagesManager____c(GlobalNamespace__MissionStagesManager____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MissionStagesManager____c", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MissionStagesManager____c(GlobalNamespace__MissionStagesManager____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MissionStagesManager____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MissionStagesManager____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MissionStagesManager____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MissionStagesManager____c& operator=(GlobalNamespace__MissionStagesManager____c&& o) noexcept = default;
  constexpr GlobalNamespace__MissionStagesManager____c& operator=(GlobalNamespace__MissionStagesManager____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::GlobalNamespace__MissionStagesManager____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::GlobalNamespace__MissionStagesManager____c value) ;

static GlobalNamespace::GlobalNamespace__MissionStagesManager____c __get___9() ;

static System::Func_2<GlobalNamespace::MissionStage,int32_t> __declspec(property(get=__get___9__6_0, put=__set___9__6_0))  __9__6_0;

static void __set___9__6_0(System::Func_2<GlobalNamespace::MissionStage,int32_t> value) ;

static System::Func_2<GlobalNamespace::MissionStage,int32_t> __get___9__6_0() ;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__MissionStagesManager____c() ;

/// @brief Method .ctor addr 0x214ae10 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <InitStages>b__6_0 addr 0x214ae18 size 0x18 virtual false final false
 int32_t _InitStages_b__6_0(GlobalNamespace::MissionStage stage) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MissionStagesManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5643))
// CS Name: MissionStagesManager
class CORDL_TYPE MissionStagesManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = GlobalNamespace::GlobalNamespace__MissionStagesManager____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MissionStagesManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionStagesManager", modifiers: " const&", def_value: None }]
constexpr MissionStagesManager(MissionStagesManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionStagesManager", modifiers: "&&", def_value: None }]
constexpr MissionStagesManager(MissionStagesManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissionStagesManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MissionStagesManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissionStagesManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissionStagesManager& operator=(MissionStagesManager&& o) noexcept = default;
  constexpr MissionStagesManager& operator=(MissionStagesManager const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MissionStageLockView __declspec(property(get=__get__missionStageLockView, put=__set__missionStageLockView))  _missionStageLockView;

constexpr void __set__missionStageLockView(GlobalNamespace::MissionStageLockView value) ;

constexpr GlobalNamespace::MissionStageLockView __get__missionStageLockView() const;

 ::ArrayW<GlobalNamespace::MissionStage> __declspec(property(get=__get__missionStages, put=__set__missionStages))  _missionStages;

constexpr void __set__missionStages(::ArrayW<GlobalNamespace::MissionStage> value) ;

constexpr ::ArrayW<GlobalNamespace::MissionStage> __get__missionStages() const;

 GlobalNamespace::MissionStage __declspec(property(get=__get__firstLockedMissionStage, put=__set__firstLockedMissionStage))  _firstLockedMissionStage;

constexpr void __set__firstLockedMissionStage(GlobalNamespace::MissionStage value) ;

constexpr GlobalNamespace::MissionStage __get__firstLockedMissionStage() const;


// Properties

 GlobalNamespace::MissionStage __declspec(property(get=get_firstLockedMissionStage))  firstLockedMissionStage;


// Methods

/// @brief Method get_firstLockedMissionStage addr 0x214ac58 size 0x8 virtual false final false
 GlobalNamespace::MissionStage get_firstLockedMissionStage() ;

/// @brief Method UpdateFirtsLockedMissionStage addr 0x214a388 size 0x7c virtual false final false
 void UpdateFirtsLockedMissionStage(int32_t numberOfClearedMissions) ;

/// @brief Method InitStages addr 0x214ac60 size 0x144 virtual false final false
 void InitStages() ;

/// @brief Method UpdateStageLockPosition addr 0x214a604 size 0xc virtual false final false
 void UpdateStageLockPosition() ;

/// @brief Method UpdateStageLockPositionAnimated addr 0x21485bc size 0xf0 virtual false final false
 void UpdateStageLockPositionAnimated(bool animated, float_t animationDuration) ;

/// @brief Method UpdateStageLockText addr 0x214a404 size 0xb8 virtual false final false
 void UpdateStageLockText(int32_t numberOfClearedMissions) ;

// Ctor Parameters []
explicit MissionStagesManager() ;

/// @brief Method .ctor addr 0x214ada4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MissionStagesManager____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MissionStagesManager____c, "", "MissionStagesManager/<>c");
NEED_NO_BOX(GlobalNamespace::MissionStagesManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionStagesManager, "", "MissionStagesManager");
