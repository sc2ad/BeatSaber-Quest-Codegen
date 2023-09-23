#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SliderControllerBase_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class ISliderDidStartDissolvingEvent;
}
namespace GlobalNamespace {
class SliderController;
}
namespace GlobalNamespace {
class IBeatmapObjectSpawnController;
}
namespace UnityEngine {
class MeshFilter;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__MirroredSliderController__Pool;
}
namespace GlobalNamespace {
class MirroredSliderController;
}
// Type: ::MirroredSliderController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4927))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4874))
// CS Name: MirroredSliderController
class CORDL_TYPE MirroredSliderController : public GlobalNamespace::SliderControllerBase {
public:
// Declarations
using Pool = GlobalNamespace::GlobalNamespace__MirroredSliderController__Pool;

/// @brief Convert operator to GlobalNamespace::ISliderDidStartDissolvingEvent
constexpr operator  GlobalNamespace::ISliderDidStartDissolvingEvent() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~MirroredSliderController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MirroredSliderController", modifiers: " const&", def_value: None }]
constexpr MirroredSliderController(MirroredSliderController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MirroredSliderController", modifiers: "&&", def_value: None }]
constexpr MirroredSliderController(MirroredSliderController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MirroredSliderController(void* ptr) noexcept : GlobalNamespace::SliderControllerBase(ptr) {
}


  constexpr MirroredSliderController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MirroredSliderController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MirroredSliderController& operator=(MirroredSliderController&& o) noexcept = default;
  constexpr MirroredSliderController& operator=(MirroredSliderController const& o) noexcept = default;
                


// Fields

 UnityEngine::MeshFilter __declspec(property(get=__get__meshFilter, put=__set__meshFilter))  _meshFilter;

constexpr void __set__meshFilter(UnityEngine::MeshFilter value) ;

constexpr UnityEngine::MeshFilter __get__meshFilter() const;

 GlobalNamespace::IBeatmapObjectSpawnController __declspec(property(get=__get__beatmapObjectSpawnController, put=__set__beatmapObjectSpawnController))  _beatmapObjectSpawnController;

constexpr void __set__beatmapObjectSpawnController(GlobalNamespace::IBeatmapObjectSpawnController value) ;

constexpr GlobalNamespace::IBeatmapObjectSpawnController __get__beatmapObjectSpawnController() const;

 GlobalNamespace::SliderController __declspec(property(get=__get__followedSlider, put=__set__followedSlider))  _followedSlider;

constexpr void __set__followedSlider(GlobalNamespace::SliderController value) ;

constexpr GlobalNamespace::SliderController __get__followedSlider() const;

 UnityEngine::Transform __declspec(property(get=__get__transform, put=__set__transform))  _transform;

constexpr void __set__transform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__transform() const;

 UnityEngine::Transform __declspec(property(get=__get__followedTransform, put=__set__followedTransform))  _followedTransform;

constexpr void __set__followedTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__followedTransform() const;


// Properties

 bool __declspec(property(put=set_hide))  hide;


// Methods

/// @brief Method set_hide addr 0x223dab0 size 0x2c virtual false final false
 void set_hide(bool value) ;

/// @brief Method Awake addr 0x223dadc size 0x1c virtual false final false
 void Awake() ;

/// @brief Method Update addr 0x223daf8 size 0xb0 virtual false final false
 void Update() ;

/// @brief Method OnDestroy addr 0x223dcc4 size 0x4 virtual false final false
 void OnDestroy() ;

/// @brief Method Mirror addr 0x223ddbc size 0x214 virtual false final false
 void Mirror(GlobalNamespace::SliderController sliderController) ;

/// @brief Method UpdateMaterialPropertyBlock addr 0x223dba8 size 0x11c virtual false final false
 void UpdateMaterialPropertyBlock(float_t timeSinceHeadNoteJump) ;

/// @brief Method RemoveListeners addr 0x223dcc8 size 0xf4 virtual false final false
 void RemoveListeners() ;

/// @brief Method HandleSliderDidStartDissolving addr 0x223e350 size 0x24 virtual true final true
 void HandleSliderDidStartDissolving(GlobalNamespace::SliderController sliderController, float_t duration) ;

/// @brief Method Dissolve addr 0x223e374 size 0x24 virtual false final false
 void Dissolve(float_t duration) ;

// Ctor Parameters []
explicit MirroredSliderController() ;

/// @brief Method .ctor addr 0x223e3c0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10992)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10992), inst: 2713 }), TypeDefinitionIndex(TypeDefinitionIndex(4874))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4873))
// CS Name: MirroredSliderController::Pool
class CORDL_TYPE GlobalNamespace__MirroredSliderController__Pool : public Zenject::MonoMemoryPool_1<GlobalNamespace::MirroredSliderController> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GlobalNamespace__MirroredSliderController__Pool() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MirroredSliderController__Pool", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MirroredSliderController__Pool(GlobalNamespace__MirroredSliderController__Pool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MirroredSliderController__Pool", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MirroredSliderController__Pool(GlobalNamespace__MirroredSliderController__Pool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MirroredSliderController__Pool(void* ptr) noexcept : Zenject::MonoMemoryPool_1<GlobalNamespace::MirroredSliderController>(ptr) {
}


  constexpr GlobalNamespace__MirroredSliderController__Pool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MirroredSliderController__Pool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MirroredSliderController__Pool& operator=(GlobalNamespace__MirroredSliderController__Pool&& o) noexcept = default;
  constexpr GlobalNamespace__MirroredSliderController__Pool& operator=(GlobalNamespace__MirroredSliderController__Pool const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GlobalNamespace__MirroredSliderController__Pool() ;

/// @brief Method .ctor addr 0x223e3d0 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MirroredSliderController__Pool);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MirroredSliderController__Pool, "", "MirroredSliderController/Pool");
NEED_NO_BOX(GlobalNamespace::MirroredSliderController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MirroredSliderController, "", "MirroredSliderController");
