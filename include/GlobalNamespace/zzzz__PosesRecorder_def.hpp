#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace GlobalNamespace {
class PoseObject;
}
namespace UnityEngine {
class Transform;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class GlobalNamespace__PosesRecordingData__ExternalCameraCalibration;
}
namespace GlobalNamespace {
class PosesRecordingData;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__PosesRecorder____c;
}
namespace GlobalNamespace {
class PosesRecorder;
}
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6019))
// CS Name: PosesRecorder::<>c
class CORDL_TYPE GlobalNamespace__PosesRecorder____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__PosesRecorder____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PosesRecorder____c", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PosesRecorder____c(GlobalNamespace__PosesRecorder____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PosesRecorder____c", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PosesRecorder____c(GlobalNamespace__PosesRecorder____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PosesRecorder____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PosesRecorder____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PosesRecorder____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PosesRecorder____c& operator=(GlobalNamespace__PosesRecorder____c&& o) noexcept = default;
  constexpr GlobalNamespace__PosesRecorder____c& operator=(GlobalNamespace__PosesRecorder____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::GlobalNamespace__PosesRecorder____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::GlobalNamespace__PosesRecorder____c value) ;

static GlobalNamespace::GlobalNamespace__PosesRecorder____c __get___9() ;

static System::Func_2<GlobalNamespace::PoseObject,UnityEngine::Transform> __declspec(property(get=__get___9__6_0, put=__set___9__6_0))  __9__6_0;

static void __set___9__6_0(System::Func_2<GlobalNamespace::PoseObject,UnityEngine::Transform> value) ;

static System::Func_2<GlobalNamespace::PoseObject,UnityEngine::Transform> __get___9__6_0() ;

static System::Func_2<GlobalNamespace::PoseObject,::StringW> __declspec(property(get=__get___9__6_1, put=__set___9__6_1))  __9__6_1;

static void __set___9__6_1(System::Func_2<GlobalNamespace::PoseObject,::StringW> value) ;

static System::Func_2<GlobalNamespace::PoseObject,::StringW> __get___9__6_1() ;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__PosesRecorder____c() ;

/// @brief Method .ctor addr 0x21a6c78 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Init>b__6_0 addr 0x21a6c80 size 0x18 virtual false final false
 UnityEngine::Transform _Init_b__6_0(GlobalNamespace::PoseObject ro) ;

/// @brief Method <Init>b__6_1 addr 0x21a6c98 size 0x20 virtual false final false
 ::StringW _Init_b__6_1(GlobalNamespace::PoseObject ro) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PosesRecorder
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6020))
// CS Name: PosesRecorder
class CORDL_TYPE PosesRecorder : public UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = GlobalNamespace::GlobalNamespace__PosesRecorder____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~PosesRecorder() = default;

// Ctor Parameters [CppParam { name: "", ty: "PosesRecorder", modifiers: " const&", def_value: None }]
constexpr PosesRecorder(PosesRecorder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PosesRecorder", modifiers: "&&", def_value: None }]
constexpr PosesRecorder(PosesRecorder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PosesRecorder(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr PosesRecorder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PosesRecorder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PosesRecorder& operator=(PosesRecorder&& o) noexcept = default;
  constexpr PosesRecorder& operator=(PosesRecorder const& o) noexcept = default;
                


// Fields

 GlobalNamespace::AudioTimeSyncController __declspec(property(get=__get__audioTimeSyncController, put=__set__audioTimeSyncController))  _audioTimeSyncController;

constexpr void __set__audioTimeSyncController(GlobalNamespace::AudioTimeSyncController value) ;

constexpr GlobalNamespace::AudioTimeSyncController __get__audioTimeSyncController() const;

 ::ArrayW<UnityEngine::Transform> __declspec(property(get=__get__transforms, put=__set__transforms))  _transforms;

constexpr void __set__transforms(::ArrayW<UnityEngine::Transform> value) ;

constexpr ::ArrayW<UnityEngine::Transform> __get__transforms() const;

 GlobalNamespace::PosesRecordingData __declspec(property(get=__get__data, put=__set__data))  _data;

constexpr void __set__data(GlobalNamespace::PosesRecordingData value) ;

constexpr GlobalNamespace::PosesRecordingData __get__data() const;


// Properties

 GlobalNamespace::PosesRecordingData __declspec(property(get=get_data))  data;


// Methods

/// @brief Method get_data addr 0x21a68ac size 0x8 virtual false final false
 GlobalNamespace::PosesRecordingData get_data() ;

/// @brief Method LateUpdate addr 0x21a68b4 size 0x1c virtual false final false
 void LateUpdate() ;

/// @brief Method Init addr 0x21a43a8 size 0x238 virtual false final false
 void Init(::ArrayW<GlobalNamespace::PoseObject> poseObjects, GlobalNamespace::GlobalNamespace__PosesRecordingData__ExternalCameraCalibration externalCameraCalibration) ;

/// @brief Method StartRecording addr 0x21a4d5c size 0xc virtual false final false
 void StartRecording() ;

/// @brief Method RecordTick addr 0x21a68d0 size 0x1c8 virtual false final false
 void RecordTick(float_t time) ;

/// @brief Method StopRecording addr 0x21a4cd4 size 0xc virtual false final false
 void StopRecording() ;

// Ctor Parameters []
explicit PosesRecorder() ;

/// @brief Method .ctor addr 0x21a6c0c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PosesRecorder____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PosesRecorder____c, "", "PosesRecorder/<>c");
NEED_NO_BOX(GlobalNamespace::PosesRecorder);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PosesRecorder, "", "PosesRecorder");
