#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class RectTransform;
}
namespace GlobalNamespace {
class MissionDataSO;
}
namespace GlobalNamespace {
class MissionNodeVisualController;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionNode;
}
// Type: ::MissionNode
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5632))
// CS Name: MissionNode
class CORDL_TYPE MissionNode : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~MissionNode() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionNode", modifiers: " const&", def_value: None }]
constexpr MissionNode(MissionNode const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionNode", modifiers: "&&", def_value: None }]
constexpr MissionNode(MissionNode&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissionNode(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MissionNode& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissionNode& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissionNode& operator=(MissionNode&& o) noexcept = default;
  constexpr MissionNode& operator=(MissionNode const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MissionDataSO __declspec(property(get=__get__missionDataSO, put=__set__missionDataSO))  _missionDataSO;

constexpr void __set__missionDataSO(GlobalNamespace::MissionDataSO value) ;

constexpr GlobalNamespace::MissionDataSO __get__missionDataSO() const;

 ::StringW __declspec(property(get=__get__letterPartName, put=__set__letterPartName))  _letterPartName;

constexpr void __set__letterPartName(::StringW value) ;

constexpr ::StringW __get__letterPartName() const;

 int32_t __declspec(property(get=__get__numberPartName, put=__set__numberPartName))  _numberPartName;

constexpr void __set__numberPartName(int32_t value) ;

constexpr int32_t __get__numberPartName() const;

 UnityEngine::RectTransform __declspec(property(get=__get__rectTransform, put=__set__rectTransform))  _rectTransform;

constexpr void __set__rectTransform(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get__rectTransform() const;

 GlobalNamespace::MissionNodeVisualController __declspec(property(get=__get__missionNodeVisualController, put=__set__missionNodeVisualController))  _missionNodeVisualController;

constexpr void __set__missionNodeVisualController(GlobalNamespace::MissionNodeVisualController value) ;

constexpr GlobalNamespace::MissionNodeVisualController __get__missionNodeVisualController() const;

 ::ArrayW<GlobalNamespace::MissionNode> __declspec(property(get=__get__childNodes, put=__set__childNodes))  _childNodes;

constexpr void __set__childNodes(::ArrayW<GlobalNamespace::MissionNode> value) ;

constexpr ::ArrayW<GlobalNamespace::MissionNode> __get__childNodes() const;


// Properties

 GlobalNamespace::MissionDataSO __declspec(property(get=get_missionData))  missionData;

 ::ArrayW<GlobalNamespace::MissionNode> __declspec(property(get=get_childNodes))  childNodes;

 GlobalNamespace::MissionNodeVisualController __declspec(property(get=get_missionNodeVisualController))  missionNodeVisualController;

 ::StringW __declspec(property(get=get_letterPartName))  letterPartName;

 int32_t __declspec(property(get=get_numberPartName))  numberPartName;

 ::StringW __declspec(property(get=get_missionId))  missionId;

 ::StringW __declspec(property(get=get_formattedMissionNodeName))  formattedMissionNodeName;

 UnityEngine::Vector2 __declspec(property(get=get_position))  position;

 float_t __declspec(property(get=get_radius))  radius;


// Methods

/// @brief Method get_missionData addr 0x2148d7c size 0x8 virtual false final false
 GlobalNamespace::MissionDataSO get_missionData() ;

/// @brief Method get_childNodes addr 0x2148d84 size 0x8 virtual false final false
 ::ArrayW<GlobalNamespace::MissionNode> get_childNodes() ;

/// @brief Method get_missionNodeVisualController addr 0x2148d8c size 0x8 virtual false final false
 GlobalNamespace::MissionNodeVisualController get_missionNodeVisualController() ;

/// @brief Method get_letterPartName addr 0x2148d94 size 0x8 virtual false final false
 ::StringW get_letterPartName() ;

/// @brief Method get_numberPartName addr 0x2148d9c size 0x8 virtual false final false
 int32_t get_numberPartName() ;

/// @brief Method get_missionId addr 0x21479a8 size 0x24 virtual false final false
 ::StringW get_missionId() ;

/// @brief Method get_formattedMissionNodeName addr 0x2148da4 size 0x88 virtual false final false
 ::StringW get_formattedMissionNodeName() ;

/// @brief Method get_position addr 0x214878c size 0x1c virtual false final false
 UnityEngine::Vector2 get_position() ;

/// @brief Method get_radius addr 0x2148e2c size 0x40 virtual false final false
 float_t get_radius() ;

static GlobalNamespace::MissionNode New_ctor() ;

/// @brief Method .ctor addr 0x2148e6c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MissionNode);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionNode, "", "MissionNode");
