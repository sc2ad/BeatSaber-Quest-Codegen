#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SliderControllerBase_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class SliderData;
}
namespace Zenject {
template<typename TValue>
class MonoMemoryPool_1;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class IBeatmapObjectController;
}
namespace GlobalNamespace {
class Saber;
}
namespace GlobalNamespace {
template<typename T>
class ILazyCopyHashSet_1;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class SliderMeshController;
}
namespace GlobalNamespace {
class ISliderDidDissolveEvent;
}
namespace GlobalNamespace {
class ISliderTailDidMovePastCutMarkEvent;
}
namespace GlobalNamespace {
template<typename T>
class LazyCopyHashSet_1;
}
namespace GlobalNamespace {
class ISliderDidFinishJumpEvent;
}
namespace GlobalNamespace {
class SaberManager;
}
namespace GlobalNamespace {
class SliderIntensityEffect;
}
namespace GlobalNamespace {
class ISliderDidStartDissolvingEvent;
}
namespace GlobalNamespace {
class IBeatmapObjectSpawnController;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
class FixedUpdateVector3SmoothValue;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class SliderMovement;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
class ISliderHeadDidMovePastCutMarkEvent;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__SliderController__LengthType;
}
namespace GlobalNamespace {
class GlobalNamespace__SliderController__Pool;
}
namespace GlobalNamespace {
class GlobalNamespace__SliderController__Pool__Long;
}
namespace GlobalNamespace {
class GlobalNamespace__SliderController__Pool__Medium;
}
namespace GlobalNamespace {
class GlobalNamespace__SliderController__Pool__Short;
}
namespace GlobalNamespace {
class GlobalNamespace__SliderController___DissolveCoroutine_d__70;
}
namespace GlobalNamespace {
class SliderController;
}
// Type: ::LengthType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4920))
// CS Name: SliderController::LengthType
struct CORDL_TYPE GlobalNamespace__SliderController__LengthType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__SliderController__LengthType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__SliderController__LengthType(GlobalNamespace__SliderController__LengthType const&) = default;
                    constexpr GlobalNamespace__SliderController__LengthType(GlobalNamespace__SliderController__LengthType&&) = default;
                    constexpr GlobalNamespace__SliderController__LengthType& operator=(GlobalNamespace__SliderController__LengthType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__SliderController__LengthType& operator=(GlobalNamespace__SliderController__LengthType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SliderController__LengthType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__SliderController__LengthType_Unwrapped : int32_t {
__Short = 0,
__Medium = 1,
__Long = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__SliderController__LengthType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__SliderController__LengthType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Short offset 0
static GlobalNamespace::GlobalNamespace__SliderController__LengthType const Short;

/// @brief Field Medium offset 0
static GlobalNamespace::GlobalNamespace__SliderController__LengthType const Medium;

/// @brief Field Long offset 0
static GlobalNamespace::GlobalNamespace__SliderController__LengthType const Long;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SliderController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4927))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4926))
// CS Name: SliderController
class CORDL_TYPE SliderController : public GlobalNamespace::SliderControllerBase {
public:
// Declarations
using _DissolveCoroutine_d__70 = GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70;

using Pool = GlobalNamespace::GlobalNamespace__SliderController__Pool;

using LengthType = GlobalNamespace::GlobalNamespace__SliderController__LengthType;

/// @brief Convert operator to GlobalNamespace::IBeatmapObjectController
constexpr operator  GlobalNamespace::IBeatmapObjectController() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xe0};

virtual ~SliderController() = default;

// Ctor Parameters [CppParam { name: "", ty: "SliderController", modifiers: " const&", def_value: None }]
constexpr SliderController(SliderController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SliderController", modifiers: "&&", def_value: None }]
constexpr SliderController(SliderController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SliderController(void* ptr) noexcept : GlobalNamespace::SliderControllerBase(ptr) {
}


  constexpr SliderController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SliderController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SliderController& operator=(SliderController&& o) noexcept = default;
  constexpr SliderController& operator=(SliderController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::SliderIntensityEffect __declspec(property(get=__get__sliderIntensityEffect, put=__set__sliderIntensityEffect))  _sliderIntensityEffect;

constexpr void __set__sliderIntensityEffect(GlobalNamespace::SliderIntensityEffect value) ;

constexpr GlobalNamespace::SliderIntensityEffect __get__sliderIntensityEffect() const;

 GlobalNamespace::SliderMeshController __declspec(property(get=__get__sliderMeshController, put=__set__sliderMeshController))  _sliderMeshController;

constexpr void __set__sliderMeshController(GlobalNamespace::SliderMeshController value) ;

constexpr GlobalNamespace::SliderMeshController __get__sliderMeshController() const;

 GlobalNamespace::SliderMovement __declspec(property(get=__get__sliderMovement, put=__set__sliderMovement))  _sliderMovement;

constexpr void __set__sliderMovement(GlobalNamespace::SliderMovement value) ;

constexpr GlobalNamespace::SliderMovement __get__sliderMovement() const;

 float_t __declspec(property(get=__get__closeInteractionSaberPosSmoothParam, put=__set__closeInteractionSaberPosSmoothParam))  _closeInteractionSaberPosSmoothParam;

constexpr void __set__closeInteractionSaberPosSmoothParam(float_t value) ;

constexpr float_t __get__closeInteractionSaberPosSmoothParam() const;

 GlobalNamespace::IBeatmapObjectSpawnController __declspec(property(get=__get__beatmapObjectSpawnController, put=__set__beatmapObjectSpawnController))  _beatmapObjectSpawnController;

constexpr void __set__beatmapObjectSpawnController(GlobalNamespace::IBeatmapObjectSpawnController value) ;

constexpr GlobalNamespace::IBeatmapObjectSpawnController __get__beatmapObjectSpawnController() const;

 GlobalNamespace::ColorManager __declspec(property(get=__get__colorManager, put=__set__colorManager))  _colorManager;

constexpr void __set__colorManager(GlobalNamespace::ColorManager value) ;

constexpr GlobalNamespace::ColorManager __get__colorManager() const;

 GlobalNamespace::BeatmapObjectManager __declspec(property(get=__get__beatmapObjectManager, put=__set__beatmapObjectManager))  _beatmapObjectManager;

constexpr void __set__beatmapObjectManager(GlobalNamespace::BeatmapObjectManager value) ;

constexpr GlobalNamespace::BeatmapObjectManager __get__beatmapObjectManager() const;

 GlobalNamespace::SaberManager __declspec(property(get=__get__saberManager, put=__set__saberManager))  _saberManager;

constexpr void __set__saberManager(GlobalNamespace::SaberManager value) ;

constexpr GlobalNamespace::SaberManager __get__saberManager() const;

/// @brief Field kSaberAttractPointNormalizedPosition offset 0
static constexpr float_t  kSaberAttractPointNormalizedPosition{0.7};

 GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISliderDidFinishJumpEvent> __declspec(property(get=__get__sliderDidFinishMovement, put=__set__sliderDidFinishMovement))  _sliderDidFinishMovement;

constexpr void __set__sliderDidFinishMovement(GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISliderDidFinishJumpEvent> value) ;

constexpr GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISliderDidFinishJumpEvent> __get__sliderDidFinishMovement() const;

 GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISliderDidStartDissolvingEvent> __declspec(property(get=__get__sliderDidStartDissolving, put=__set__sliderDidStartDissolving))  _sliderDidStartDissolving;

constexpr void __set__sliderDidStartDissolving(GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISliderDidStartDissolvingEvent> value) ;

constexpr GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISliderDidStartDissolvingEvent> __get__sliderDidStartDissolving() const;

 GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISliderDidDissolveEvent> __declspec(property(get=__get__sliderDidDissolve, put=__set__sliderDidDissolve))  _sliderDidDissolve;

constexpr void __set__sliderDidDissolve(GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISliderDidDissolveEvent> value) ;

constexpr GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISliderDidDissolveEvent> __get__sliderDidDissolve() const;

 GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent> __declspec(property(get=__get__sliderHeadDidMovePastCutMark, put=__set__sliderHeadDidMovePastCutMark))  _sliderHeadDidMovePastCutMark;

constexpr void __set__sliderHeadDidMovePastCutMark(GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent> value) ;

constexpr GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent> __get__sliderHeadDidMovePastCutMark() const;

 GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISliderTailDidMovePastCutMarkEvent> __declspec(property(get=__get__sliderTailDidMovePastCutMark, put=__set__sliderTailDidMovePastCutMark))  _sliderTailDidMovePastCutMark;

constexpr void __set__sliderTailDidMovePastCutMark(GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISliderTailDidMovePastCutMarkEvent> value) ;

constexpr GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISliderTailDidMovePastCutMarkEvent> __get__sliderTailDidMovePastCutMark() const;

 GlobalNamespace::GlobalNamespace__SliderController__LengthType __declspec(property(get=__get__lengthType, put=__set__lengthType))  _lengthType;

constexpr void __set__lengthType(GlobalNamespace::GlobalNamespace__SliderController__LengthType value) ;

constexpr GlobalNamespace::GlobalNamespace__SliderController__LengthType __get__lengthType() const;

 GlobalNamespace::SliderData __declspec(property(get=__get__sliderData, put=__set__sliderData))  _sliderData;

constexpr void __set__sliderData(GlobalNamespace::SliderData value) ;

constexpr GlobalNamespace::SliderData __get__sliderData() const;

 GlobalNamespace::Saber __declspec(property(get=__get__saber, put=__set__saber))  _saber;

constexpr void __set__saber(GlobalNamespace::Saber value) ;

constexpr GlobalNamespace::Saber __get__saber() const;

 float_t __declspec(property(get=__get__headJumpOffsetY, put=__set__headJumpOffsetY))  _headJumpOffsetY;

constexpr void __set__headJumpOffsetY(float_t value) ;

constexpr float_t __get__headJumpOffsetY() const;

 float_t __declspec(property(get=__get__sliderDuration, put=__set__sliderDuration))  _sliderDuration;

constexpr void __set__sliderDuration(float_t value) ;

constexpr float_t __get__sliderDuration() const;

 UnityEngine::Color __declspec(property(get=__get__initColor, put=__set__initColor))  _initColor;

constexpr void __set__initColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__initColor() const;

 bool __declspec(property(get=__get__attractingSaber, put=__set__attractingSaber))  _attractingSaber;

constexpr void __set__attractingSaber(bool value) ;

constexpr bool __get__attractingSaber() const;

 float_t __declspec(property(get=__get__randomValue, put=__set__randomValue))  _randomValue;

constexpr void __set__randomValue(float_t value) ;

constexpr float_t __get__randomValue() const;

 float_t __declspec(property(get=__get__zDistanceBetweenNotes, put=__set__zDistanceBetweenNotes))  _zDistanceBetweenNotes;

constexpr void __set__zDistanceBetweenNotes(float_t value) ;

constexpr float_t __get__zDistanceBetweenNotes() const;

 float_t __declspec(property(get=__get__jumpDistance, put=__set__jumpDistance))  _jumpDistance;

constexpr void __set__jumpDistance(float_t value) ;

constexpr float_t __get__jumpDistance() const;

 GlobalNamespace::FixedUpdateVector3SmoothValue __declspec(property(get=__get__closeSmoothedSaberInteractionPos, put=__set__closeSmoothedSaberInteractionPos))  _closeSmoothedSaberInteractionPos;

constexpr void __set__closeSmoothedSaberInteractionPos(GlobalNamespace::FixedUpdateVector3SmoothValue value) ;

constexpr GlobalNamespace::FixedUpdateVector3SmoothValue __get__closeSmoothedSaberInteractionPos() const;


// Properties

 GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::ISliderDidFinishJumpEvent> __declspec(property(get=get_sliderDidFinishJumpEvent))  sliderDidFinishJumpEvent;

 GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::ISliderDidStartDissolvingEvent> __declspec(property(get=get_sliderDidStartDissolvingEvent))  sliderDidStartDissolvingEvent;

 GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::ISliderDidDissolveEvent> __declspec(property(get=get_sliderDidDissolveEvent))  sliderDidDissolveEvent;

 GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent> __declspec(property(get=get_sliderHeadDidMovePastCutMark))  sliderHeadDidMovePastCutMark;

 GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::ISliderTailDidMovePastCutMarkEvent> __declspec(property(get=get_sliderTailDidMovePastCutMark))  sliderTailDidMovePastCutMark;

 GlobalNamespace::GlobalNamespace__SliderController__LengthType __declspec(property(get=get_lengthType))  lengthType;

 GlobalNamespace::SliderData __declspec(property(get=get_sliderData))  sliderData;

 float_t __declspec(property(get=get_saberInteractionParam))  saberInteractionParam;

 GlobalNamespace::SliderMeshController __declspec(property(get=get_sliderMeshController))  sliderMeshController;

 GlobalNamespace::SliderMovement __declspec(property(get=get_sliderMovement))  sliderMovement;

 UnityEngine::Color __declspec(property(get=get_initColor))  initColor;

 float_t __declspec(property(get=get_randomValue))  randomValue;

 float_t __declspec(property(get=get_zDistanceBetweenNotes))  zDistanceBetweenNotes;

 float_t __declspec(property(get=get_jumpDistance))  jumpDistance;

 float_t __declspec(property(get=get_headJumpOffsetY))  headJumpOffsetY;

 float_t __declspec(property(get=get_sliderDuration))  sliderDuration;

 GlobalNamespace::FixedUpdateVector3SmoothValue __declspec(property(get=get_closeSmoothedSaberInteractionPos))  closeSmoothedSaberInteractionPos;

 GlobalNamespace::SliderIntensityEffect __declspec(property(get=get_sliderIntensityEffect))  sliderIntensityEffect;


// Methods

/// @brief Method get_sliderDidFinishJumpEvent addr 0x2247188 size 0x8 virtual false final false
 GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::ISliderDidFinishJumpEvent> get_sliderDidFinishJumpEvent() ;

/// @brief Method get_sliderDidStartDissolvingEvent addr 0x2247190 size 0x8 virtual false final false
 GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::ISliderDidStartDissolvingEvent> get_sliderDidStartDissolvingEvent() ;

/// @brief Method get_sliderDidDissolveEvent addr 0x2247198 size 0x8 virtual false final false
 GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::ISliderDidDissolveEvent> get_sliderDidDissolveEvent() ;

/// @brief Method get_sliderHeadDidMovePastCutMark addr 0x22471a0 size 0x8 virtual false final false
 GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent> get_sliderHeadDidMovePastCutMark() ;

/// @brief Method get_sliderTailDidMovePastCutMark addr 0x22471a8 size 0x8 virtual false final false
 GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::ISliderTailDidMovePastCutMarkEvent> get_sliderTailDidMovePastCutMark() ;

/// @brief Method get_lengthType addr 0x22471b0 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__SliderController__LengthType get_lengthType() ;

/// @brief Method get_sliderData addr 0x22471b8 size 0x8 virtual false final false
 GlobalNamespace::SliderData get_sliderData() ;

/// @brief Method get_saberInteractionParam addr 0x22471c0 size 0x40 virtual false final false
 float_t get_saberInteractionParam() ;

/// @brief Method get_sliderMeshController addr 0x2247228 size 0x8 virtual false final false
 GlobalNamespace::SliderMeshController get_sliderMeshController() ;

/// @brief Method get_sliderMovement addr 0x2247230 size 0x8 virtual false final false
 GlobalNamespace::SliderMovement get_sliderMovement() ;

/// @brief Method get_initColor addr 0x2247238 size 0xc virtual false final false
 UnityEngine::Color get_initColor() ;

/// @brief Method get_randomValue addr 0x2247244 size 0x8 virtual false final false
 float_t get_randomValue() ;

/// @brief Method get_zDistanceBetweenNotes addr 0x224724c size 0x8 virtual false final false
 float_t get_zDistanceBetweenNotes() ;

/// @brief Method get_jumpDistance addr 0x2247254 size 0x8 virtual false final false
 float_t get_jumpDistance() ;

/// @brief Method get_headJumpOffsetY addr 0x224725c size 0x8 virtual false final false
 float_t get_headJumpOffsetY() ;

/// @brief Method get_sliderDuration addr 0x2247264 size 0x8 virtual false final false
 float_t get_sliderDuration() ;

/// @brief Method get_closeSmoothedSaberInteractionPos addr 0x224726c size 0x8 virtual false final false
 GlobalNamespace::FixedUpdateVector3SmoothValue get_closeSmoothedSaberInteractionPos() ;

/// @brief Method get_sliderIntensityEffect addr 0x2247274 size 0x8 virtual false final false
 GlobalNamespace::SliderIntensityEffect get_sliderIntensityEffect() ;

/// @brief Method Init addr 0x224727c size 0x3d0 virtual false final false
 void Init(GlobalNamespace::GlobalNamespace__SliderController__LengthType lengthType, GlobalNamespace::SliderData sliderData, float_t worldRotation, UnityEngine::Vector3 headNoteJumpStartPos, UnityEngine::Vector3 tailNoteJumpStartPos, UnityEngine::Vector3 headNoteJumpEndPos, UnityEngine::Vector3 tailNoteJumpEndPos, float_t jumpDuration, float_t startNoteJumpGravity, float_t endNoteJumpGravity, float_t noteUniformScale) ;

/// @brief Method Awake addr 0x22481ac size 0x160 virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x22484e0 size 0x150 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x22486cc size 0x2a8 virtual false final false
 void OnDestroy() ;

/// @brief Method Update addr 0x2248be4 size 0x4 virtual false final false
 void Update() ;

/// @brief Method FixedUpdate addr 0x2248c5c size 0x58 virtual false final false
 void FixedUpdate() ;

/// @brief Method ManualUpdate addr 0x2248be8 size 0x74 virtual false final false
 void ManualUpdate() ;

/// @brief Method UpdateMaterialPropertyBlock addr 0x224806c size 0x118 virtual false final false
 void UpdateMaterialPropertyBlock(float_t timeSinceHeadNoteJump) ;

/// @brief Method DissolveCoroutine addr 0x2248efc size 0x78 virtual false final false
 System::Collections::IEnumerator DissolveCoroutine(float_t duration) ;

/// @brief Method Dissolve addr 0x2248f9c size 0x60 virtual true final true
 void Dissolve(float_t duration) ;

/// @brief Method Hide addr 0x2248ffc size 0x2c virtual true final true
 void Hide(bool hide) ;

/// @brief Method Pause addr 0x2249028 size 0x10 virtual true final true
 void Pause(bool pause) ;

/// @brief Method IsNoteStartOfThisSlider addr 0x2249038 size 0xe8 virtual false final false
 bool IsNoteStartOfThisSlider(GlobalNamespace::NoteData noteData) ;

/// @brief Method HandleMovementDidFinish addr 0x2249120 size 0x1d4 virtual false final false
 void HandleMovementDidFinish() ;

/// @brief Method HandleHeadDidMovePastCutMark addr 0x22492f4 size 0x1f0 virtual false final false
 void HandleHeadDidMovePastCutMark() ;

/// @brief Method HandleTailDidMovePastCutMark addr 0x2249514 size 0x1e0 virtual false final false
 void HandleTailDidMovePastCutMark() ;

/// @brief Method HandleNoteWasMissed addr 0x22496f4 size 0x4c virtual false final false
 void HandleNoteWasMissed(GlobalNamespace::NoteController noteController) ;

/// @brief Method HandleNoteWasCut addr 0x2249770 size 0x80 virtual false final false
 void HandleNoteWasCut(GlobalNamespace::NoteController noteController, ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo) ;

/// @brief Method HandleFadeInDidStart addr 0x22497f0 size 0x8 virtual false final false
 void HandleFadeInDidStart() ;

/// @brief Method SetSaberAttraction addr 0x2247f90 size 0x88 virtual false final false
 void SetSaberAttraction(bool saberAttraction) ;

/// @brief Method GetSaberInteractionPoint addr 0x2248018 size 0x54 virtual false final false
static UnityEngine::Vector3 GetSaberInteractionPoint(GlobalNamespace::Saber saber) ;

// Ctor Parameters []
explicit SliderController() ;

/// @brief Method .ctor addr 0x22497f8 size 0x194 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Short
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10992), inst: 376 }), TypeDefinitionIndex(TypeDefinitionIndex(10992)), TypeDefinitionIndex(TypeDefinitionIndex(4926))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4921))
// CS Name: SliderController::Pool::Short
class CORDL_TYPE GlobalNamespace__SliderController__Pool__Short : public Zenject::MonoMemoryPool_1<GlobalNamespace::SliderController> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GlobalNamespace__SliderController__Pool__Short() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SliderController__Pool__Short", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__SliderController__Pool__Short(GlobalNamespace__SliderController__Pool__Short const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SliderController__Pool__Short", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__SliderController__Pool__Short(GlobalNamespace__SliderController__Pool__Short&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SliderController__Pool__Short(void* ptr) noexcept : Zenject::MonoMemoryPool_1<GlobalNamespace::SliderController>(ptr) {
}


  constexpr GlobalNamespace__SliderController__Pool__Short& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__SliderController__Pool__Short& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__SliderController__Pool__Short& operator=(GlobalNamespace__SliderController__Pool__Short&& o) noexcept = default;
  constexpr GlobalNamespace__SliderController__Pool__Short& operator=(GlobalNamespace__SliderController__Pool__Short const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GlobalNamespace__SliderController__Pool__Short() ;

/// @brief Method .ctor addr 0x2249ac0 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Medium
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10992)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10992), inst: 376 }), TypeDefinitionIndex(TypeDefinitionIndex(4926))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4922))
// CS Name: SliderController::Pool::Medium
class CORDL_TYPE GlobalNamespace__SliderController__Pool__Medium : public Zenject::MonoMemoryPool_1<GlobalNamespace::SliderController> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GlobalNamespace__SliderController__Pool__Medium() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SliderController__Pool__Medium", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__SliderController__Pool__Medium(GlobalNamespace__SliderController__Pool__Medium const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SliderController__Pool__Medium", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__SliderController__Pool__Medium(GlobalNamespace__SliderController__Pool__Medium&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SliderController__Pool__Medium(void* ptr) noexcept : Zenject::MonoMemoryPool_1<GlobalNamespace::SliderController>(ptr) {
}


  constexpr GlobalNamespace__SliderController__Pool__Medium& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__SliderController__Pool__Medium& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__SliderController__Pool__Medium& operator=(GlobalNamespace__SliderController__Pool__Medium&& o) noexcept = default;
  constexpr GlobalNamespace__SliderController__Pool__Medium& operator=(GlobalNamespace__SliderController__Pool__Medium const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GlobalNamespace__SliderController__Pool__Medium() ;

/// @brief Method .ctor addr 0x2249b08 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Long
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4926)), TypeDefinitionIndex(TypeDefinitionIndex(10992)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10992), inst: 376 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4923))
// CS Name: SliderController::Pool::Long
class CORDL_TYPE GlobalNamespace__SliderController__Pool__Long : public Zenject::MonoMemoryPool_1<GlobalNamespace::SliderController> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GlobalNamespace__SliderController__Pool__Long() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SliderController__Pool__Long", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__SliderController__Pool__Long(GlobalNamespace__SliderController__Pool__Long const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SliderController__Pool__Long", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__SliderController__Pool__Long(GlobalNamespace__SliderController__Pool__Long&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SliderController__Pool__Long(void* ptr) noexcept : Zenject::MonoMemoryPool_1<GlobalNamespace::SliderController>(ptr) {
}


  constexpr GlobalNamespace__SliderController__Pool__Long& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__SliderController__Pool__Long& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__SliderController__Pool__Long& operator=(GlobalNamespace__SliderController__Pool__Long&& o) noexcept = default;
  constexpr GlobalNamespace__SliderController__Pool__Long& operator=(GlobalNamespace__SliderController__Pool__Long const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GlobalNamespace__SliderController__Pool__Long() ;

/// @brief Method .ctor addr 0x2249b50 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4924))
// CS Name: SliderController::Pool
class CORDL_TYPE GlobalNamespace__SliderController__Pool : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Long = GlobalNamespace::GlobalNamespace__SliderController__Pool__Long;

using Medium = GlobalNamespace::GlobalNamespace__SliderController__Pool__Medium;

using Short = GlobalNamespace::GlobalNamespace__SliderController__Pool__Short;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__SliderController__Pool() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SliderController__Pool", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__SliderController__Pool(GlobalNamespace__SliderController__Pool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SliderController__Pool", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__SliderController__Pool(GlobalNamespace__SliderController__Pool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SliderController__Pool(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__SliderController__Pool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__SliderController__Pool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__SliderController__Pool& operator=(GlobalNamespace__SliderController__Pool&& o) noexcept = default;
  constexpr GlobalNamespace__SliderController__Pool& operator=(GlobalNamespace__SliderController__Pool const& o) noexcept = default;
                


// Fields

/// @brief Field kMinDistanceToUseMedium offset 0
static constexpr float_t  kMinDistanceToUseMedium{5};

/// @brief Field kMinDistanceToUseLong offset 0
static constexpr float_t  kMinDistanceToUseLong{15};

 GlobalNamespace::GlobalNamespace__SliderController__Pool__Short __declspec(property(get=__get__shortPool, put=__set__shortPool))  _shortPool;

constexpr void __set__shortPool(GlobalNamespace::GlobalNamespace__SliderController__Pool__Short value) ;

constexpr GlobalNamespace::GlobalNamespace__SliderController__Pool__Short __get__shortPool() const;

 GlobalNamespace::GlobalNamespace__SliderController__Pool__Medium __declspec(property(get=__get__mediumPool, put=__set__mediumPool))  _mediumPool;

constexpr void __set__mediumPool(GlobalNamespace::GlobalNamespace__SliderController__Pool__Medium value) ;

constexpr GlobalNamespace::GlobalNamespace__SliderController__Pool__Medium __get__mediumPool() const;

 GlobalNamespace::GlobalNamespace__SliderController__Pool__Long __declspec(property(get=__get__longPool, put=__set__longPool))  _longPool;

constexpr void __set__longPool(GlobalNamespace::GlobalNamespace__SliderController__Pool__Long value) ;

constexpr GlobalNamespace::GlobalNamespace__SliderController__Pool__Long __get__longPool() const;


// Methods

// Ctor Parameters [CppParam { name: "shortPool", ty: "GlobalNamespace::GlobalNamespace__SliderController__Pool__Short", modifiers: "", def_value: None }, CppParam { name: "mediumPool", ty: "GlobalNamespace::GlobalNamespace__SliderController__Pool__Medium", modifiers: "", def_value: None }, CppParam { name: "longPool", ty: "GlobalNamespace::GlobalNamespace__SliderController__Pool__Long", modifiers: "", def_value: None }]
explicit GlobalNamespace__SliderController__Pool(GlobalNamespace::GlobalNamespace__SliderController__Pool__Short shortPool, GlobalNamespace::GlobalNamespace__SliderController__Pool__Medium mediumPool, GlobalNamespace::GlobalNamespace__SliderController__Pool__Long longPool) ;

/// @brief Method .ctor addr 0x224998c size 0x3c virtual false final false
 void _ctor(GlobalNamespace::GlobalNamespace__SliderController__Pool__Short shortPool, GlobalNamespace::GlobalNamespace__SliderController__Pool__Medium mediumPool, GlobalNamespace::GlobalNamespace__SliderController__Pool__Long longPool) ;

/// @brief Method GetPool addr 0x22499c8 size 0xa0 virtual false final false
 Zenject::MonoMemoryPool_1<GlobalNamespace::SliderController> GetPool(GlobalNamespace::GlobalNamespace__SliderController__LengthType lengthType) ;

/// @brief Method GetLengthFromSliderData addr 0x2249a68 size 0x58 virtual false final false
static GlobalNamespace::GlobalNamespace__SliderController__LengthType GetLengthFromSliderData(GlobalNamespace::SliderData sliderNoteData, GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData sliderSpawnData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<DissolveCoroutine>d__70
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4925))
// CS Name: SliderController::<DissolveCoroutine>d__70
class CORDL_TYPE GlobalNamespace__SliderController___DissolveCoroutine_d__70 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__SliderController___DissolveCoroutine_d__70() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SliderController___DissolveCoroutine_d__70", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__SliderController___DissolveCoroutine_d__70(GlobalNamespace__SliderController___DissolveCoroutine_d__70 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SliderController___DissolveCoroutine_d__70", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__SliderController___DissolveCoroutine_d__70(GlobalNamespace__SliderController___DissolveCoroutine_d__70&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SliderController___DissolveCoroutine_d__70(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__SliderController___DissolveCoroutine_d__70& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__SliderController___DissolveCoroutine_d__70& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__SliderController___DissolveCoroutine_d__70& operator=(GlobalNamespace__SliderController___DissolveCoroutine_d__70&& o) noexcept = default;
  constexpr GlobalNamespace__SliderController___DissolveCoroutine_d__70& operator=(GlobalNamespace__SliderController___DissolveCoroutine_d__70 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::SliderController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::SliderController value) ;

constexpr GlobalNamespace::SliderController __get___4__this() const;

 float_t __declspec(property(get=__get_duration, put=__set_duration))  duration;

constexpr void __set_duration(float_t value) ;

constexpr float_t __get_duration() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__SliderController___DissolveCoroutine_d__70(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2248f74 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2249b98 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2249b9c size 0x3ec virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2249f88 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2249f90 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2249fd0 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SliderController__LengthType, "", "SliderController/LengthType");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__SliderController__Pool);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SliderController__Pool, "", "SliderController/Pool");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__SliderController__Pool__Long);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SliderController__Pool__Long, "", "SliderController/Pool/Long");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__SliderController__Pool__Medium);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SliderController__Pool__Medium, "", "SliderController/Pool/Medium");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__SliderController__Pool__Short);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SliderController__Pool__Short, "", "SliderController/Pool/Short");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70, "", "SliderController/<DissolveCoroutine>d__70");
NEED_NO_BOX(GlobalNamespace::SliderController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SliderController, "", "SliderController");
