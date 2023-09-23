#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace GlobalNamespace {
class SetSaberGlowColor;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
class SaberTrail;
}
namespace GlobalNamespace {
class SetSaberFakeGlowColor;
}
namespace GlobalNamespace {
class Saber;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__SaberModelController__InitData;
}
namespace GlobalNamespace {
class SaberModelController;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5388))
// CS Name: SaberModelController::InitData
class CORDL_TYPE GlobalNamespace__SaberModelController__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__SaberModelController__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SaberModelController__InitData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__SaberModelController__InitData(GlobalNamespace__SaberModelController__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SaberModelController__InitData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__SaberModelController__InitData(GlobalNamespace__SaberModelController__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SaberModelController__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__SaberModelController__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__SaberModelController__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__SaberModelController__InitData& operator=(GlobalNamespace__SaberModelController__InitData&& o) noexcept = default;
  constexpr GlobalNamespace__SaberModelController__InitData& operator=(GlobalNamespace__SaberModelController__InitData const& o) noexcept = default;
                


// Fields

 UnityEngine::Color __declspec(property(get=__get_trailTintColor, put=__set_trailTintColor))  trailTintColor;

constexpr void __set_trailTintColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_trailTintColor() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__SaberModelController__InitData() ;

/// @brief Method .ctor addr 0x210c76c size 0x20 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "trailTintColor", ty: "UnityEngine::Color", modifiers: "", def_value: None }]
explicit GlobalNamespace__SaberModelController__InitData(UnityEngine::Color trailTintColor) ;

/// @brief Method .ctor addr 0x210c78c size 0x40 virtual false final false
 void _ctor(UnityEngine::Color trailTintColor) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SaberModelController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5389))
// CS Name: SaberModelController
class CORDL_TYPE SaberModelController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using InitData = GlobalNamespace::GlobalNamespace__SaberModelController__InitData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~SaberModelController() = default;

// Ctor Parameters [CppParam { name: "", ty: "SaberModelController", modifiers: " const&", def_value: None }]
constexpr SaberModelController(SaberModelController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SaberModelController", modifiers: "&&", def_value: None }]
constexpr SaberModelController(SaberModelController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SaberModelController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SaberModelController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SaberModelController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SaberModelController& operator=(SaberModelController&& o) noexcept = default;
  constexpr SaberModelController& operator=(SaberModelController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::SaberTrail __declspec(property(get=__get__saberTrail, put=__set__saberTrail))  _saberTrail;

constexpr void __set__saberTrail(GlobalNamespace::SaberTrail value) ;

constexpr GlobalNamespace::SaberTrail __get__saberTrail() const;

 ::ArrayW<GlobalNamespace::SetSaberGlowColor> __declspec(property(get=__get__setSaberGlowColors, put=__set__setSaberGlowColors))  _setSaberGlowColors;

constexpr void __set__setSaberGlowColors(::ArrayW<GlobalNamespace::SetSaberGlowColor> value) ;

constexpr ::ArrayW<GlobalNamespace::SetSaberGlowColor> __get__setSaberGlowColors() const;

 ::ArrayW<GlobalNamespace::SetSaberFakeGlowColor> __declspec(property(get=__get__setSaberFakeGlowColors, put=__set__setSaberFakeGlowColors))  _setSaberFakeGlowColors;

constexpr void __set__setSaberFakeGlowColors(::ArrayW<GlobalNamespace::SetSaberFakeGlowColor> value) ;

constexpr ::ArrayW<GlobalNamespace::SetSaberFakeGlowColor> __get__setSaberFakeGlowColors() const;

 GlobalNamespace::TubeBloomPrePassLight __declspec(property(get=__get__saberLight, put=__set__saberLight))  _saberLight;

constexpr void __set__saberLight(GlobalNamespace::TubeBloomPrePassLight value) ;

constexpr GlobalNamespace::TubeBloomPrePassLight __get__saberLight() const;

 GlobalNamespace::GlobalNamespace__SaberModelController__InitData __declspec(property(get=__get__initData, put=__set__initData))  _initData;

constexpr void __set__initData(GlobalNamespace::GlobalNamespace__SaberModelController__InitData value) ;

constexpr GlobalNamespace::GlobalNamespace__SaberModelController__InitData __get__initData() const;

 GlobalNamespace::ColorManager __declspec(property(get=__get__colorManager, put=__set__colorManager))  _colorManager;

constexpr void __set__colorManager(GlobalNamespace::ColorManager value) ;

constexpr GlobalNamespace::ColorManager __get__colorManager() const;


// Methods

/// @brief Method Init addr 0x210c3ec size 0x2f0 virtual false final false
 void Init(UnityEngine::Transform parent, GlobalNamespace::Saber saber) ;

// Ctor Parameters []
explicit SaberModelController() ;

/// @brief Method .ctor addr 0x210c6fc size 0x70 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__SaberModelController__InitData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SaberModelController__InitData, "", "SaberModelController/InitData");
NEED_NO_BOX(GlobalNamespace::SaberModelController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberModelController, "", "SaberModelController");
