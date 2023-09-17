#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace GlobalNamespace {
class PosesRecordingData;
}
namespace GlobalNamespace {
class ____GlobalNamespace__PosesRecordingData__ExternalCameraCalibration;
}
namespace GlobalNamespace {
class ____GlobalNamespace__PosesRecordingData__TransformsKeyframe;
}
// Type: ::TransformsKeyframe
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6021))
// CS Name: PosesRecordingData::TransformsKeyframe
class CORDL_TYPE ____GlobalNamespace__PosesRecordingData__TransformsKeyframe : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__PosesRecordingData__TransformsKeyframe() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__PosesRecordingData__TransformsKeyframe", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__PosesRecordingData__TransformsKeyframe(____GlobalNamespace__PosesRecordingData__TransformsKeyframe const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__PosesRecordingData__TransformsKeyframe", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__PosesRecordingData__TransformsKeyframe(____GlobalNamespace__PosesRecordingData__TransformsKeyframe&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__PosesRecordingData__TransformsKeyframe(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__PosesRecordingData__TransformsKeyframe& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__PosesRecordingData__TransformsKeyframe& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__PosesRecordingData__TransformsKeyframe& operator=(____GlobalNamespace__PosesRecordingData__TransformsKeyframe&& o) noexcept = default;
  constexpr ____GlobalNamespace__PosesRecordingData__TransformsKeyframe& operator=(____GlobalNamespace__PosesRecordingData__TransformsKeyframe const& o) noexcept = default;
                


// Fields

 ::ArrayW<::UnityEngine::Pose> __declspec(property(get=__get_poses, put=__set_poses))  poses;

constexpr void __set_poses(::ArrayW<::UnityEngine::Pose> value) ;

constexpr ::ArrayW<::UnityEngine::Pose> __get_poses() const;

 float_t __declspec(property(get=__get_time, put=__set_time))  time;

constexpr void __set_time(float_t value) ;

constexpr float_t __get_time() const;


// Methods

// Ctor Parameters [CppParam { name: "poses", ty: "::ArrayW<::UnityEngine::Pose>", modifiers: "", def_value: None }, CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__PosesRecordingData__TransformsKeyframe(::ArrayW<::UnityEngine::Pose> poses, float_t time) ;

/// @brief Method .ctor addr 0x21a6b2c size 0x38 virtual false final false
 void _ctor(::ArrayW<::UnityEngine::Pose> poses, float_t time) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ExternalCameraCalibration
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6022))
// CS Name: PosesRecordingData::ExternalCameraCalibration
class CORDL_TYPE ____GlobalNamespace__PosesRecordingData__ExternalCameraCalibration : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____GlobalNamespace__PosesRecordingData__ExternalCameraCalibration() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__PosesRecordingData__ExternalCameraCalibration", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__PosesRecordingData__ExternalCameraCalibration(____GlobalNamespace__PosesRecordingData__ExternalCameraCalibration const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__PosesRecordingData__ExternalCameraCalibration", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__PosesRecordingData__ExternalCameraCalibration(____GlobalNamespace__PosesRecordingData__ExternalCameraCalibration&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__PosesRecordingData__ExternalCameraCalibration(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__PosesRecordingData__ExternalCameraCalibration& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__PosesRecordingData__ExternalCameraCalibration& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__PosesRecordingData__ExternalCameraCalibration& operator=(____GlobalNamespace__PosesRecordingData__ExternalCameraCalibration&& o) noexcept = default;
  constexpr ____GlobalNamespace__PosesRecordingData__ExternalCameraCalibration& operator=(____GlobalNamespace__PosesRecordingData__ExternalCameraCalibration const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_fieldOfVision, put=__set_fieldOfVision))  fieldOfVision;

constexpr void __set_fieldOfVision(float_t value) ;

constexpr float_t __get_fieldOfVision() const;

 float_t __declspec(property(get=__get_nearClip, put=__set_nearClip))  nearClip;

constexpr void __set_nearClip(float_t value) ;

constexpr float_t __get_nearClip() const;

 float_t __declspec(property(get=__get_farClip, put=__set_farClip))  farClip;

constexpr void __set_farClip(float_t value) ;

constexpr float_t __get_farClip() const;

 float_t __declspec(property(get=__get_hmdOffset, put=__set_hmdOffset))  hmdOffset;

constexpr void __set_hmdOffset(float_t value) ;

constexpr float_t __get_hmdOffset() const;

 float_t __declspec(property(get=__get_nearOffset, put=__set_nearOffset))  nearOffset;

constexpr void __set_nearOffset(float_t value) ;

constexpr float_t __get_nearOffset() const;


// Methods

// Ctor Parameters [CppParam { name: "fieldOfVision", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "nearClip", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "farClip", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "hmdOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "nearOffset", ty: "float_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__PosesRecordingData__ExternalCameraCalibration(float_t fieldOfVision, float_t nearClip, float_t farClip, float_t hmdOffset, float_t nearOffset) ;

/// @brief Method .ctor addr 0x21a6d74 size 0x50 virtual false final false
 void _ctor(float_t fieldOfVision, float_t nearClip, float_t farClip, float_t hmdOffset, float_t nearOffset) ;

// Ctor Parameters [CppParam { name: "camera", ty: "::UnityEngine::Camera", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__PosesRecordingData__ExternalCameraCalibration(::UnityEngine::Camera camera) ;

/// @brief Method .ctor addr 0x21a4664 size 0x60 virtual false final false
 void _ctor(::UnityEngine::Camera camera) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PosesRecordingData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6023))
// CS Name: PosesRecordingData
class CORDL_TYPE PosesRecordingData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ExternalCameraCalibration = ::GlobalNamespace::____GlobalNamespace__PosesRecordingData__ExternalCameraCalibration;

using TransformsKeyframe = ::GlobalNamespace::____GlobalNamespace__PosesRecordingData__TransformsKeyframe;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~PosesRecordingData() = default;

// Ctor Parameters [CppParam { name: "", ty: "PosesRecordingData", modifiers: " const&", def_value: None }]
constexpr PosesRecordingData(PosesRecordingData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PosesRecordingData", modifiers: "&&", def_value: None }]
constexpr PosesRecordingData(PosesRecordingData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PosesRecordingData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PosesRecordingData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PosesRecordingData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PosesRecordingData& operator=(PosesRecordingData&& o) noexcept = default;
  constexpr PosesRecordingData& operator=(PosesRecordingData const& o) noexcept = default;
                


// Fields

 ::ArrayW<::StringW> __declspec(property(get=__get_objectIds, put=__set_objectIds))  objectIds;

constexpr void __set_objectIds(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_objectIds() const;

 ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__PosesRecordingData__TransformsKeyframe> __declspec(property(get=__get_keyframes, put=__set_keyframes))  keyframes;

constexpr void __set_keyframes(::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__PosesRecordingData__TransformsKeyframe> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__PosesRecordingData__TransformsKeyframe> __get_keyframes() const;

 ::GlobalNamespace::____GlobalNamespace__PosesRecordingData__ExternalCameraCalibration __declspec(property(get=__get_externalCameraCalibration, put=__set_externalCameraCalibration))  externalCameraCalibration;

constexpr void __set_externalCameraCalibration(::GlobalNamespace::____GlobalNamespace__PosesRecordingData__ExternalCameraCalibration value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__PosesRecordingData__ExternalCameraCalibration __get_externalCameraCalibration() const;


// Methods

// Ctor Parameters [CppParam { name: "objectIds", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }, CppParam { name: "externalCameraCalibration", ty: "::GlobalNamespace::____GlobalNamespace__PosesRecordingData__ExternalCameraCalibration", modifiers: "", def_value: None }]
explicit PosesRecordingData(::ArrayW<::StringW> objectIds, ::GlobalNamespace::____GlobalNamespace__PosesRecordingData__ExternalCameraCalibration externalCameraCalibration) ;

/// @brief Method .ctor addr 0x21a6a98 size 0x94 virtual false final false
 void _ctor(::ArrayW<::StringW> objectIds, ::GlobalNamespace::____GlobalNamespace__PosesRecordingData__ExternalCameraCalibration externalCameraCalibration) ;

// Ctor Parameters [CppParam { name: "objectIds", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }, CppParam { name: "keyframes", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__PosesRecordingData__TransformsKeyframe>", modifiers: "", def_value: None }, CppParam { name: "externalCameraCalibration", ty: "::GlobalNamespace::____GlobalNamespace__PosesRecordingData__ExternalCameraCalibration", modifiers: "", def_value: None }]
explicit PosesRecordingData(::ArrayW<::StringW> objectIds, ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__PosesRecordingData__TransformsKeyframe> keyframes, ::GlobalNamespace::____GlobalNamespace__PosesRecordingData__ExternalCameraCalibration externalCameraCalibration) ;

/// @brief Method .ctor addr 0x21a6cb8 size 0x3c virtual false final false
 void _ctor(::ArrayW<::StringW> objectIds, ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__PosesRecordingData__TransformsKeyframe> keyframes, ::GlobalNamespace::____GlobalNamespace__PosesRecordingData__ExternalCameraCalibration externalCameraCalibration) ;

/// @brief Method AddKeyframe addr 0x21a6b64 size 0xa8 virtual false final false
 void AddKeyframe(::GlobalNamespace::____GlobalNamespace__PosesRecordingData__TransformsKeyframe keyframe) ;

/// @brief Method Contains addr 0x21a45e0 size 0x58 virtual false final false
 bool Contains(::StringW objectId) ;

/// @brief Method ObjectIndex addr 0x21a6cf4 size 0x80 virtual false final false
 int32_t ObjectIndex(::StringW objectId) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::PosesRecordingData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PosesRecordingData, "", "PosesRecordingData");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__PosesRecordingData__ExternalCameraCalibration);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__PosesRecordingData__ExternalCameraCalibration, "", "PosesRecordingData/ExternalCameraCalibration");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__PosesRecordingData__TransformsKeyframe);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__PosesRecordingData__TransformsKeyframe, "", "PosesRecordingData/TransformsKeyframe");