#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace GlobalNamespace {
class GlobalNamespace__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData;
}
namespace GlobalNamespace {
class PosesRecordingInfoSaveData;
}
// Type: ::ExternalCameraCalibrationSaveData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6028))
// CS Name: PosesRecordingInfoSaveData::ExternalCameraCalibrationSaveData
class CORDL_TYPE GlobalNamespace__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData(GlobalNamespace__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData(GlobalNamespace__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData& operator=(GlobalNamespace__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData&& o) noexcept = default;
  constexpr GlobalNamespace__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData& operator=(GlobalNamespace__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__fieldOfVision, put=__set__fieldOfVision))  _fieldOfVision;

constexpr void __set__fieldOfVision(float_t value) ;

constexpr float_t __get__fieldOfVision() const;

 float_t __declspec(property(get=__get__nearClip, put=__set__nearClip))  _nearClip;

constexpr void __set__nearClip(float_t value) ;

constexpr float_t __get__nearClip() const;

 float_t __declspec(property(get=__get__farClip, put=__set__farClip))  _farClip;

constexpr void __set__farClip(float_t value) ;

constexpr float_t __get__farClip() const;

 float_t __declspec(property(get=__get__hmdOffset, put=__set__hmdOffset))  _hmdOffset;

constexpr void __set__hmdOffset(float_t value) ;

constexpr float_t __get__hmdOffset() const;

 float_t __declspec(property(get=__get__nearOffset, put=__set__nearOffset))  _nearOffset;

constexpr void __set__nearOffset(float_t value) ;

constexpr float_t __get__nearOffset() const;


// Properties

 float_t __declspec(property(get=get_fieldOfVision))  fieldOfVision;

 float_t __declspec(property(get=get_nearClip))  nearClip;

 float_t __declspec(property(get=get_farClip))  farClip;

 float_t __declspec(property(get=get_hmdOffset))  hmdOffset;

 float_t __declspec(property(get=get_nearOffset))  nearOffset;


// Methods

/// @brief Method get_fieldOfVision addr 0x21a6f80 size 0x8 virtual false final false
 float_t get_fieldOfVision() ;

/// @brief Method get_nearClip addr 0x21a6f88 size 0x8 virtual false final false
 float_t get_nearClip() ;

/// @brief Method get_farClip addr 0x21a6f90 size 0x8 virtual false final false
 float_t get_farClip() ;

/// @brief Method get_hmdOffset addr 0x21a6f98 size 0x8 virtual false final false
 float_t get_hmdOffset() ;

/// @brief Method get_nearOffset addr 0x21a6fa0 size 0x8 virtual false final false
 float_t get_nearOffset() ;

static GlobalNamespace::GlobalNamespace__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData New_ctor(float_t fieldOfVision, float_t nearClip, float_t farClip, float_t hmdOffset, float_t nearOffset) ;

/// @brief Method .ctor addr 0x21a6fa8 size 0x50 virtual false final false
 void _ctor(float_t fieldOfVision, float_t nearClip, float_t farClip, float_t hmdOffset, float_t nearOffset) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PosesRecordingInfoSaveData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6029))
// CS Name: PosesRecordingInfoSaveData
class CORDL_TYPE PosesRecordingInfoSaveData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ExternalCameraCalibrationSaveData = GlobalNamespace::GlobalNamespace__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~PosesRecordingInfoSaveData() = default;

// Ctor Parameters [CppParam { name: "", ty: "PosesRecordingInfoSaveData", modifiers: " const&", def_value: None }]
constexpr PosesRecordingInfoSaveData(PosesRecordingInfoSaveData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PosesRecordingInfoSaveData", modifiers: "&&", def_value: None }]
constexpr PosesRecordingInfoSaveData(PosesRecordingInfoSaveData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PosesRecordingInfoSaveData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PosesRecordingInfoSaveData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PosesRecordingInfoSaveData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PosesRecordingInfoSaveData& operator=(PosesRecordingInfoSaveData&& o) noexcept = default;
  constexpr PosesRecordingInfoSaveData& operator=(PosesRecordingInfoSaveData const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(::StringW value) ;

constexpr ::StringW __get__version() const;

 ::ArrayW<::StringW> __declspec(property(get=__get__objectIds, put=__set__objectIds))  _objectIds;

constexpr void __set__objectIds(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__objectIds() const;

 GlobalNamespace::GlobalNamespace__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData __declspec(property(get=__get__externalCameraCalibration, put=__set__externalCameraCalibration))  _externalCameraCalibration;

constexpr void __set__externalCameraCalibration(GlobalNamespace::GlobalNamespace__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData value) ;

constexpr GlobalNamespace::GlobalNamespace__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData __get__externalCameraCalibration() const;

 ::StringW __declspec(property(get=__get__dataFileName, put=__set__dataFileName))  _dataFileName;

constexpr void __set__dataFileName(::StringW value) ;

constexpr ::StringW __get__dataFileName() const;

/// @brief Field kCurrentVersion offset 0
static constexpr ::ConstString  kCurrentVersion{u"1.0.0"};


// Properties

 ::StringW __declspec(property(get=get_version))  version;

 ::ArrayW<::StringW> __declspec(property(get=get_objectIds))  objectIds;

 GlobalNamespace::GlobalNamespace__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData __declspec(property(get=get_externalCameraCalibration))  externalCameraCalibration;

 ::StringW __declspec(property(get=get_dataFileName))  dataFileName;


// Methods

/// @brief Method get_version addr 0x21a6eec size 0x8 virtual false final false
 ::StringW get_version() ;

/// @brief Method get_objectIds addr 0x21a6ef4 size 0x8 virtual false final false
 ::ArrayW<::StringW> get_objectIds() ;

/// @brief Method get_externalCameraCalibration addr 0x21a6efc size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData get_externalCameraCalibration() ;

/// @brief Method get_dataFileName addr 0x21a6f04 size 0x8 virtual false final false
 ::StringW get_dataFileName() ;

static GlobalNamespace::PosesRecordingInfoSaveData New_ctor(::ArrayW<::StringW> objectIds, GlobalNamespace::GlobalNamespace__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData externalCameraCalibration, ::StringW dataFileName) ;

/// @brief Method .ctor addr 0x21a6f0c size 0x74 virtual false final false
 void _ctor(::ArrayW<::StringW> objectIds, GlobalNamespace::GlobalNamespace__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData externalCameraCalibration, ::StringW dataFileName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PosesRecordingInfoSaveData__ExternalCameraCalibrationSaveData, "", "PosesRecordingInfoSaveData/ExternalCameraCalibrationSaveData");
NEED_NO_BOX(GlobalNamespace::PosesRecordingInfoSaveData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PosesRecordingInfoSaveData, "", "PosesRecordingInfoSaveData");
