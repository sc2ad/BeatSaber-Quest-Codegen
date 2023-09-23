#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace GlobalNamespace {
class CampaignProgressModel;
}
// Type: ::CampaignProgressModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4464))
// CS Name: CampaignProgressModel
class CORDL_TYPE CampaignProgressModel : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~CampaignProgressModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "CampaignProgressModel", modifiers: " const&", def_value: None }]
constexpr CampaignProgressModel(CampaignProgressModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CampaignProgressModel", modifiers: "&&", def_value: None }]
constexpr CampaignProgressModel(CampaignProgressModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CampaignProgressModel(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr CampaignProgressModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CampaignProgressModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CampaignProgressModel& operator=(CampaignProgressModel&& o) noexcept = default;
  constexpr CampaignProgressModel& operator=(CampaignProgressModel const& o) noexcept = default;
                


// Fields

 GlobalNamespace::PlayerDataModel __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel))  _playerDataModel;

constexpr void __set__playerDataModel(GlobalNamespace::PlayerDataModel value) ;

constexpr GlobalNamespace::PlayerDataModel __get__playerDataModel() const;

 System::Collections::Generic::HashSet_1<::StringW> __declspec(property(get=__get__missionIds, put=__set__missionIds))  _missionIds;

constexpr void __set__missionIds(System::Collections::Generic::HashSet_1<::StringW> value) ;

constexpr System::Collections::Generic::HashSet_1<::StringW> __get__missionIds() const;

 ::StringW __declspec(property(get=__get__finalMissionId, put=__set__finalMissionId))  _finalMissionId;

constexpr void __set__finalMissionId(::StringW value) ;

constexpr ::StringW __get__finalMissionId() const;

 bool __declspec(property(get=__get__numberOfClearedMissionsDirty, put=__set__numberOfClearedMissionsDirty))  _numberOfClearedMissionsDirty;

constexpr void __set__numberOfClearedMissionsDirty(bool value) ;

constexpr bool __get__numberOfClearedMissionsDirty() const;

 int32_t __declspec(property(get=__get__numberOfClearedMissions, put=__set__numberOfClearedMissions))  _numberOfClearedMissions;

constexpr void __set__numberOfClearedMissions(int32_t value) ;

constexpr int32_t __get__numberOfClearedMissions() const;


// Properties

 int32_t __declspec(property(get=get_numberOfClearedMissions))  numberOfClearedMissions;


// Methods

/// @brief Method get_numberOfClearedMissions addr 0x21f0990 size 0x28 virtual false final false
 int32_t get_numberOfClearedMissions() ;

/// @brief Method Awake addr 0x21f0b50 size 0x74 virtual false final false
 void Awake() ;

/// @brief Method IsMissionRegistered addr 0x21f0bc4 size 0x58 virtual false final false
 bool IsMissionRegistered(::StringW missionId) ;

/// @brief Method RegisterMissionId addr 0x21f0c1c size 0x64 virtual false final false
 void RegisterMissionId(::StringW missionId) ;

/// @brief Method IsMissionCleared addr 0x21f0c80 size 0x30 virtual false final false
 bool IsMissionCleared(::StringW missionId) ;

/// @brief Method IsMissionFinal addr 0x21f0cb0 size 0xc virtual false final false
 bool IsMissionFinal(::StringW missionId) ;

/// @brief Method SetFinalMissionId addr 0x21f0cbc size 0x8 virtual false final false
 void SetFinalMissionId(::StringW missionId) ;

/// @brief Method WillFinishGameAfterThisMission addr 0x21f0cc4 size 0x48 virtual false final false
 bool WillFinishGameAfterThisMission(::StringW missionId) ;

/// @brief Method SetMissionCleared addr 0x21f0d0c size 0x8 virtual false final false
 void SetMissionCleared(::StringW missionId) ;

/// @brief Method __SetMissionCleared addr 0x21f0d14 size 0x4c virtual false final false
 void __SetMissionCleared(::StringW missionId, bool cleared) ;

/// @brief Method UpdateNumberOfClearedMissions addr 0x21f09b8 size 0x198 virtual false final false
 int32_t UpdateNumberOfClearedMissions() ;

// Ctor Parameters []
explicit CampaignProgressModel() ;

/// @brief Method .ctor addr 0x21f0d60 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::CampaignProgressModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CampaignProgressModel, "", "CampaignProgressModel");
