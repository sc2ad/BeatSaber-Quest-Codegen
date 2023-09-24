#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace GlobalNamespace {
class GlobalNamespace__PosesRecordingSaveData__ExternalCameraCalibrationSaveData;
}
namespace GlobalNamespace {
class GlobalNamespace__PosesRecordingSaveData__PoseSaveData;
}
namespace GlobalNamespace {
class GlobalNamespace__PosesRecordingSaveData__TransformsSaveKeyframe;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__PosesRecordingSaveData__ExternalCameraCalibrationSaveData;
}
namespace GlobalNamespace {
class GlobalNamespace__PosesRecordingSaveData__PoseSaveData;
}
namespace GlobalNamespace {
class GlobalNamespace__PosesRecordingSaveData__TransformsSaveKeyframe;
}
namespace GlobalNamespace {
class PosesRecordingSaveData;
}
// Type: ::PoseSaveData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6024))
// CS Name: PosesRecordingSaveData::PoseSaveData
class CORDL_TYPE GlobalNamespace__PosesRecordingSaveData__PoseSaveData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__PosesRecordingSaveData__PoseSaveData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PosesRecordingSaveData__PoseSaveData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PosesRecordingSaveData__PoseSaveData(GlobalNamespace__PosesRecordingSaveData__PoseSaveData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PosesRecordingSaveData__PoseSaveData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PosesRecordingSaveData__PoseSaveData(GlobalNamespace__PosesRecordingSaveData__PoseSaveData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PosesRecordingSaveData__PoseSaveData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PosesRecordingSaveData__PoseSaveData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PosesRecordingSaveData__PoseSaveData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PosesRecordingSaveData__PoseSaveData& operator=(GlobalNamespace__PosesRecordingSaveData__PoseSaveData&& o) noexcept = default;
  constexpr GlobalNamespace__PosesRecordingSaveData__PoseSaveData& operator=(GlobalNamespace__PosesRecordingSaveData__PoseSaveData const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_posX, put=__set_posX))  posX;

constexpr void __set_posX(float_t value) ;

constexpr float_t __get_posX() const;

 float_t __declspec(property(get=__get_posY, put=__set_posY))  posY;

constexpr void __set_posY(float_t value) ;

constexpr float_t __get_posY() const;

 float_t __declspec(property(get=__get_posZ, put=__set_posZ))  posZ;

constexpr void __set_posZ(float_t value) ;

constexpr float_t __get_posZ() const;

 float_t __declspec(property(get=__get_rotX, put=__set_rotX))  rotX;

constexpr void __set_rotX(float_t value) ;

constexpr float_t __get_rotX() const;

 float_t __declspec(property(get=__get_rotY, put=__set_rotY))  rotY;

constexpr void __set_rotY(float_t value) ;

constexpr float_t __get_rotY() const;

 float_t __declspec(property(get=__get_rotZ, put=__set_rotZ))  rotZ;

constexpr void __set_rotZ(float_t value) ;

constexpr float_t __get_rotZ() const;

 float_t __declspec(property(get=__get_rotW, put=__set_rotW))  rotW;

constexpr void __set_rotW(float_t value) ;

constexpr float_t __get_rotW() const;


// Methods

static GlobalNamespace::GlobalNamespace__PosesRecordingSaveData__PoseSaveData New_ctor(float_t posX, float_t posY, float_t posZ, float_t rotX, float_t rotY, float_t rotZ, float_t rotW) ;

/// @brief Method .ctor addr 0x21a6e00 size 0x64 virtual false final false
 void _ctor(float_t posX, float_t posY, float_t posZ, float_t rotX, float_t rotY, float_t rotZ, float_t rotW) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TransformsSaveKeyframe
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6025))
// CS Name: PosesRecordingSaveData::TransformsSaveKeyframe
class CORDL_TYPE GlobalNamespace__PosesRecordingSaveData__TransformsSaveKeyframe : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__PosesRecordingSaveData__TransformsSaveKeyframe() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PosesRecordingSaveData__TransformsSaveKeyframe", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PosesRecordingSaveData__TransformsSaveKeyframe(GlobalNamespace__PosesRecordingSaveData__TransformsSaveKeyframe const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PosesRecordingSaveData__TransformsSaveKeyframe", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PosesRecordingSaveData__TransformsSaveKeyframe(GlobalNamespace__PosesRecordingSaveData__TransformsSaveKeyframe&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PosesRecordingSaveData__TransformsSaveKeyframe(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PosesRecordingSaveData__TransformsSaveKeyframe& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PosesRecordingSaveData__TransformsSaveKeyframe& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PosesRecordingSaveData__TransformsSaveKeyframe& operator=(GlobalNamespace__PosesRecordingSaveData__TransformsSaveKeyframe&& o) noexcept = default;
  constexpr GlobalNamespace__PosesRecordingSaveData__TransformsSaveKeyframe& operator=(GlobalNamespace__PosesRecordingSaveData__TransformsSaveKeyframe const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::GlobalNamespace__PosesRecordingSaveData__PoseSaveData> __declspec(property(get=__get_poses, put=__set_poses))  poses;

constexpr void __set_poses(::ArrayW<GlobalNamespace::GlobalNamespace__PosesRecordingSaveData__PoseSaveData> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__PosesRecordingSaveData__PoseSaveData> __get_poses() const;

 float_t __declspec(property(get=__get_time, put=__set_time))  time;

constexpr void __set_time(float_t value) ;

constexpr float_t __get_time() const;


// Methods

static GlobalNamespace::GlobalNamespace__PosesRecordingSaveData__TransformsSaveKeyframe New_ctor(::ArrayW<GlobalNamespace::GlobalNamespace__PosesRecordingSaveData__PoseSaveData> poses, float_t time) ;

/// @brief Method .ctor addr 0x21a6e64 size 0x38 virtual false final false
 void _ctor(::ArrayW<GlobalNamespace::GlobalNamespace__PosesRecordingSaveData__PoseSaveData> poses, float_t time) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ExternalCameraCalibrationSaveData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6026))
// CS Name: PosesRecordingSaveData::ExternalCameraCalibrationSaveData
class CORDL_TYPE GlobalNamespace__PosesRecordingSaveData__ExternalCameraCalibrationSaveData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__PosesRecordingSaveData__ExternalCameraCalibrationSaveData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PosesRecordingSaveData__ExternalCameraCalibrationSaveData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PosesRecordingSaveData__ExternalCameraCalibrationSaveData(GlobalNamespace__PosesRecordingSaveData__ExternalCameraCalibrationSaveData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PosesRecordingSaveData__ExternalCameraCalibrationSaveData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PosesRecordingSaveData__ExternalCameraCalibrationSaveData(GlobalNamespace__PosesRecordingSaveData__ExternalCameraCalibrationSaveData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PosesRecordingSaveData__ExternalCameraCalibrationSaveData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PosesRecordingSaveData__ExternalCameraCalibrationSaveData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PosesRecordingSaveData__ExternalCameraCalibrationSaveData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PosesRecordingSaveData__ExternalCameraCalibrationSaveData& operator=(GlobalNamespace__PosesRecordingSaveData__ExternalCameraCalibrationSaveData&& o) noexcept = default;
  constexpr GlobalNamespace__PosesRecordingSaveData__ExternalCameraCalibrationSaveData& operator=(GlobalNamespace__PosesRecordingSaveData__ExternalCameraCalibrationSaveData const& o) noexcept = default;
                


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

static GlobalNamespace::GlobalNamespace__PosesRecordingSaveData__ExternalCameraCalibrationSaveData New_ctor(float_t fieldOfVision, float_t nearClip, float_t farClip, float_t hmdOffset, float_t nearOffset) ;

/// @brief Method .ctor addr 0x21a6e9c size 0x50 virtual false final false
 void _ctor(float_t fieldOfVision, float_t nearClip, float_t farClip, float_t hmdOffset, float_t nearOffset) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PosesRecordingSaveData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6027))
// CS Name: PosesRecordingSaveData
class CORDL_TYPE PosesRecordingSaveData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ExternalCameraCalibrationSaveData = GlobalNamespace::GlobalNamespace__PosesRecordingSaveData__ExternalCameraCalibrationSaveData;

using TransformsSaveKeyframe = GlobalNamespace::GlobalNamespace__PosesRecordingSaveData__TransformsSaveKeyframe;

using PoseSaveData = GlobalNamespace::GlobalNamespace__PosesRecordingSaveData__PoseSaveData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~PosesRecordingSaveData() = default;

// Ctor Parameters [CppParam { name: "", ty: "PosesRecordingSaveData", modifiers: " const&", def_value: None }]
constexpr PosesRecordingSaveData(PosesRecordingSaveData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PosesRecordingSaveData", modifiers: "&&", def_value: None }]
constexpr PosesRecordingSaveData(PosesRecordingSaveData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PosesRecordingSaveData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PosesRecordingSaveData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PosesRecordingSaveData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PosesRecordingSaveData& operator=(PosesRecordingSaveData&& o) noexcept = default;
  constexpr PosesRecordingSaveData& operator=(PosesRecordingSaveData const& o) noexcept = default;
                


// Fields

 ::ArrayW<::StringW> __declspec(property(get=__get_objectIds, put=__set_objectIds))  objectIds;

constexpr void __set_objectIds(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_objectIds() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__PosesRecordingSaveData__TransformsSaveKeyframe> __declspec(property(get=__get_keyframes, put=__set_keyframes))  keyframes;

constexpr void __set_keyframes(::ArrayW<GlobalNamespace::GlobalNamespace__PosesRecordingSaveData__TransformsSaveKeyframe> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__PosesRecordingSaveData__TransformsSaveKeyframe> __get_keyframes() const;

 GlobalNamespace::GlobalNamespace__PosesRecordingSaveData__ExternalCameraCalibrationSaveData __declspec(property(get=__get_externalCameraCalibration, put=__set_externalCameraCalibration))  externalCameraCalibration;

constexpr void __set_externalCameraCalibration(GlobalNamespace::GlobalNamespace__PosesRecordingSaveData__ExternalCameraCalibrationSaveData value) ;

constexpr GlobalNamespace::GlobalNamespace__PosesRecordingSaveData__ExternalCameraCalibrationSaveData __get_externalCameraCalibration() const;


// Methods

static GlobalNamespace::PosesRecordingSaveData New_ctor(::ArrayW<::StringW> objectIds, ::ArrayW<GlobalNamespace::GlobalNamespace__PosesRecordingSaveData__TransformsSaveKeyframe> keyframes, GlobalNamespace::GlobalNamespace__PosesRecordingSaveData__ExternalCameraCalibrationSaveData externalCameraCalibration) ;

/// @brief Method .ctor addr 0x21a6dc4 size 0x3c virtual false final false
 void _ctor(::ArrayW<::StringW> objectIds, ::ArrayW<GlobalNamespace::GlobalNamespace__PosesRecordingSaveData__TransformsSaveKeyframe> keyframes, GlobalNamespace::GlobalNamespace__PosesRecordingSaveData__ExternalCameraCalibrationSaveData externalCameraCalibration) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PosesRecordingSaveData__ExternalCameraCalibrationSaveData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PosesRecordingSaveData__ExternalCameraCalibrationSaveData, "", "PosesRecordingSaveData/ExternalCameraCalibrationSaveData");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PosesRecordingSaveData__PoseSaveData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PosesRecordingSaveData__PoseSaveData, "", "PosesRecordingSaveData/PoseSaveData");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PosesRecordingSaveData__TransformsSaveKeyframe);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PosesRecordingSaveData__TransformsSaveKeyframe, "", "PosesRecordingSaveData/TransformsSaveKeyframe");
NEED_NO_BOX(GlobalNamespace::PosesRecordingSaveData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PosesRecordingSaveData, "", "PosesRecordingSaveData");
