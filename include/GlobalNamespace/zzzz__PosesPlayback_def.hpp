#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class IBeatSaberLogger;
}
namespace GlobalNamespace {
class PosesRecordingData;
}
namespace GlobalNamespace {
class PoseObject;
}
// Forward declare root types
namespace GlobalNamespace {
class PosesPlayback;
}
// Type: ::PosesPlayback
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6018))
// CS Name: PosesPlayback
class CORDL_TYPE PosesPlayback : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~PosesPlayback() = default;

// Ctor Parameters [CppParam { name: "", ty: "PosesPlayback", modifiers: " const&", def_value: None }]
constexpr PosesPlayback(PosesPlayback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PosesPlayback", modifiers: "&&", def_value: None }]
constexpr PosesPlayback(PosesPlayback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PosesPlayback(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr PosesPlayback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PosesPlayback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PosesPlayback& operator=(PosesPlayback&& o) noexcept = default;
  constexpr PosesPlayback& operator=(PosesPlayback const& o) noexcept = default;
                


// Fields

 GlobalNamespace::AudioTimeSyncController __declspec(property(get=__get__audioTimeSyncController, put=__set__audioTimeSyncController))  _audioTimeSyncController;

constexpr void __set__audioTimeSyncController(GlobalNamespace::AudioTimeSyncController value) ;

constexpr GlobalNamespace::AudioTimeSyncController __get__audioTimeSyncController() const;

 GlobalNamespace::IBeatSaberLogger __declspec(property(get=__get__logger, put=__set__logger))  _logger;

constexpr void __set__logger(GlobalNamespace::IBeatSaberLogger value) ;

constexpr GlobalNamespace::IBeatSaberLogger __get__logger() const;

 ::ArrayW<UnityEngine::Transform> __declspec(property(get=__get__transforms, put=__set__transforms))  _transforms;

constexpr void __set__transforms(::ArrayW<UnityEngine::Transform> value) ;

constexpr ::ArrayW<UnityEngine::Transform> __get__transforms() const;

 GlobalNamespace::PosesRecordingData __declspec(property(get=__get__data, put=__set__data))  _data;

constexpr void __set__data(GlobalNamespace::PosesRecordingData value) ;

constexpr GlobalNamespace::PosesRecordingData __get__data() const;

 int32_t __declspec(property(get=__get__keyframeIndex, put=__set__keyframeIndex))  _keyframeIndex;

constexpr void __set__keyframeIndex(int32_t value) ;

constexpr int32_t __get__keyframeIndex() const;


// Methods

/// @brief Method Update addr 0x21a64e8 size 0x1c virtual false final false
 void Update() ;

/// @brief Method Init addr 0x21a46c4 size 0x26c virtual false final false
 void Init(::ArrayW<GlobalNamespace::PoseObject> poseObjects, GlobalNamespace::PosesRecordingData data, GlobalNamespace::IBeatSaberLogger logger) ;

/// @brief Method StartPlayback addr 0x21a4d68 size 0xe8 virtual false final false
 void StartPlayback() ;

/// @brief Method PlaybackTick addr 0x21a6504 size 0x3a0 virtual false final false
 void PlaybackTick(float_t time) ;

/// @brief Method StopPlayback addr 0x21a4ce0 size 0xc virtual false final false
 void StopPlayback() ;

static GlobalNamespace::PosesPlayback New_ctor() ;

/// @brief Method .ctor addr 0x21a68a4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PosesPlayback);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PosesPlayback, "", "PosesPlayback");
