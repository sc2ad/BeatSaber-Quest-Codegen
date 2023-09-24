#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class GameplayModifiersModelSO;
}
namespace GlobalNamespace {
class CampaignProgressModel;
}
namespace GlobalNamespace {
class MissionNode;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionNodeGizmos;
}
// Type: ::MissionNodeGizmos
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5634))
// CS Name: MissionNodeGizmos
class CORDL_TYPE MissionNodeGizmos : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MissionNodeGizmos() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionNodeGizmos", modifiers: " const&", def_value: None }]
constexpr MissionNodeGizmos(MissionNodeGizmos const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionNodeGizmos", modifiers: "&&", def_value: None }]
constexpr MissionNodeGizmos(MissionNodeGizmos&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissionNodeGizmos(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MissionNodeGizmos& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissionNodeGizmos& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissionNodeGizmos& operator=(MissionNodeGizmos&& o) noexcept = default;
  constexpr MissionNodeGizmos& operator=(MissionNodeGizmos const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MissionNode __declspec(property(get=__get__missionNode, put=__set__missionNode))  _missionNode;

constexpr void __set__missionNode(GlobalNamespace::MissionNode value) ;

constexpr GlobalNamespace::MissionNode __get__missionNode() const;

 GlobalNamespace::GameplayModifiersModelSO __declspec(property(get=__get__gameplayModifiersModel, put=__set__gameplayModifiersModel))  _gameplayModifiersModel;

constexpr void __set__gameplayModifiersModel(GlobalNamespace::GameplayModifiersModelSO value) ;

constexpr GlobalNamespace::GameplayModifiersModelSO __get__gameplayModifiersModel() const;

 GlobalNamespace::CampaignProgressModel __declspec(property(get=__get__missionProgressModel, put=__set__missionProgressModel))  _missionProgressModel;

constexpr void __set__missionProgressModel(GlobalNamespace::CampaignProgressModel value) ;

constexpr GlobalNamespace::CampaignProgressModel __get__missionProgressModel() const;


// Methods

static GlobalNamespace::MissionNodeGizmos New_ctor() ;

/// @brief Method .ctor addr 0x2149138 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MissionNodeGizmos);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionNodeGizmos, "", "MissionNodeGizmos");
