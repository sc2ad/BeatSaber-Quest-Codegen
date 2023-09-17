#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace GlobalNamespace {
class Vector3SO;
}
namespace GlobalNamespace {
class FloatSO;
}
namespace GlobalNamespace {
class ISaveData;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
}
// Forward declare root types
namespace GlobalNamespace {
class VRCenterAdjust;
}
// Type: ::VRCenterAdjust
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6054))
// CS Name: VRCenterAdjust
class CORDL_TYPE VRCenterAdjust : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~VRCenterAdjust() = default;

// Ctor Parameters [CppParam { name: "", ty: "VRCenterAdjust", modifiers: " const&", def_value: None }]
constexpr VRCenterAdjust(VRCenterAdjust const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VRCenterAdjust", modifiers: "&&", def_value: None }]
constexpr VRCenterAdjust(VRCenterAdjust&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VRCenterAdjust(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr VRCenterAdjust& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VRCenterAdjust& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VRCenterAdjust& operator=(VRCenterAdjust&& o) noexcept = default;
  constexpr VRCenterAdjust& operator=(VRCenterAdjust const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::Vector3SO __declspec(property(get=__get__roomCenter, put=__set__roomCenter))  _roomCenter;

constexpr void __set__roomCenter(::GlobalNamespace::Vector3SO value) ;

constexpr ::GlobalNamespace::Vector3SO __get__roomCenter() const;

 ::GlobalNamespace::FloatSO __declspec(property(get=__get__roomRotation, put=__set__roomRotation))  _roomRotation;

constexpr void __set__roomRotation(::GlobalNamespace::FloatSO value) ;

constexpr ::GlobalNamespace::FloatSO __get__roomRotation() const;

 ::GlobalNamespace::MainSettingsModelSO __declspec(property(get=__get__mainSettingsModel, put=__set__mainSettingsModel))  _mainSettingsModel;

constexpr void __set__mainSettingsModel(::GlobalNamespace::MainSettingsModelSO value) ;

constexpr ::GlobalNamespace::MainSettingsModelSO __get__mainSettingsModel() const;

 ::GlobalNamespace::ISaveData __declspec(property(get=__get__savedata, put=__set__savedata))  _savedata;

constexpr void __set__savedata(::GlobalNamespace::ISaveData value) ;

constexpr ::GlobalNamespace::ISaveData __get__savedata() const;


// Methods

/// @brief Method Awake addr 0x21b103c size 0xc virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x21b1048 size 0x150 virtual false final false
 void Start() ;

/// @brief Method OnEnable addr 0x21b121c size 0x108 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x21b1324 size 0x108 virtual false final false
 void OnDisable() ;

/// @brief Method HandleRoomCenterDidChange addr 0x21b142c size 0x70 virtual false final false
 void HandleRoomCenterDidChange() ;

/// @brief Method HandleRoomRotationDidChange addr 0x21b149c size 0x7c virtual false final false
 void HandleRoomRotationDidChange() ;

/// @brief Method Update addr 0x21b1518 size 0x2c virtual false final false
 void Update() ;

/// @brief Method ResetRoom addr 0x21b1198 size 0x84 virtual false final false
 void ResetRoom() ;

// Ctor Parameters []
explicit VRCenterAdjust() ;

/// @brief Method .ctor addr 0x21b1544 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::VRCenterAdjust);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRCenterAdjust, "", "VRCenterAdjust");
