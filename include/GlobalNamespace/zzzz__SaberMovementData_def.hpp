#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class ISaberMovementDataProcessor;
}
namespace GlobalNamespace {
class ISaberMovementData;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class IBladeMovementData;
}
namespace GlobalNamespace {
struct BladeMovementDataElement;
}
namespace GlobalNamespace {
template<typename T>
class LazyCopyHashSet_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SaberMovementData;
}
// Type: ::SaberMovementData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4222))
// CS Name: SaberMovementData
class CORDL_TYPE SaberMovementData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::IBladeMovementData
constexpr operator  ::GlobalNamespace::IBladeMovementData() const noexcept;

/// @brief Convert operator to ::GlobalNamespace::ISaberMovementData
constexpr operator  ::GlobalNamespace::ISaberMovementData() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SaberMovementData() = default;

// Ctor Parameters [CppParam { name: "", ty: "SaberMovementData", modifiers: " const&", def_value: None }]
constexpr SaberMovementData(SaberMovementData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SaberMovementData", modifiers: "&&", def_value: None }]
constexpr SaberMovementData(SaberMovementData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SaberMovementData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SaberMovementData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SaberMovementData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SaberMovementData& operator=(SaberMovementData&& o) noexcept = default;
  constexpr SaberMovementData& operator=(SaberMovementData const& o) noexcept = default;
                


// Fields

/// @brief Field kOutOfRangeBladeSpeed offset 0
static constexpr float_t  kOutOfRangeBladeSpeed{100};

/// @brief Field kSmoothUpBladeSpeedCoef offset 0
static constexpr float_t  kSmoothUpBladeSpeedCoef{24};

/// @brief Field kSmoothDownBladeSpeedCoef offset 0
static constexpr float_t  kSmoothDownBladeSpeedCoef{2};

 ::ArrayW<::GlobalNamespace::BladeMovementDataElement> __declspec(property(get=__get__data, put=__set__data))  _data;

constexpr void __set__data(::ArrayW<::GlobalNamespace::BladeMovementDataElement> value) ;

constexpr ::ArrayW<::GlobalNamespace::BladeMovementDataElement> __get__data() const;

 ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberMovementDataProcessor> __declspec(property(get=__get__dataProcessors, put=__set__dataProcessors))  _dataProcessors;

constexpr void __set__dataProcessors(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberMovementDataProcessor> value) ;

constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberMovementDataProcessor> __get__dataProcessors() const;

 int32_t __declspec(property(get=__get__nextAddIndex, put=__set__nextAddIndex))  _nextAddIndex;

constexpr void __set__nextAddIndex(int32_t value) ;

constexpr int32_t __get__nextAddIndex() const;

 int32_t __declspec(property(get=__get__validCount, put=__set__validCount))  _validCount;

constexpr void __set__validCount(int32_t value) ;

constexpr int32_t __get__validCount() const;

 float_t __declspec(property(get=__get__bladeSpeed, put=__set__bladeSpeed))  _bladeSpeed;

constexpr void __set__bladeSpeed(float_t value) ;

constexpr float_t __get__bladeSpeed() const;


// Properties

 float_t __declspec(property(get=get_bladeSpeed))  bladeSpeed;

 ::GlobalNamespace::BladeMovementDataElement __declspec(property(get=get_lastAddedData))  lastAddedData;

 ::GlobalNamespace::BladeMovementDataElement __declspec(property(get=get_prevAddedData))  prevAddedData;


// Methods

/// @brief Method get_bladeSpeed addr 0x21bff34 size 0x8 virtual true final true
 float_t get_bladeSpeed() ;

/// @brief Method get_lastAddedData addr 0x21bff3c size 0x5c virtual true final true
 ::GlobalNamespace::BladeMovementDataElement get_lastAddedData() ;

/// @brief Method get_prevAddedData addr 0x21bff98 size 0x5c virtual true final true
 ::GlobalNamespace::BladeMovementDataElement get_prevAddedData() ;

// Ctor Parameters []
explicit SaberMovementData() ;

/// @brief Method .ctor addr 0x21bfff4 size 0xa8 virtual false final false
 void _ctor() ;

/// @brief Method AddDataProcessor addr 0x21c009c size 0x58 virtual true final true
 void AddDataProcessor(::GlobalNamespace::ISaberMovementDataProcessor dataProcessor) ;

/// @brief Method RemoveDataProcessor addr 0x21c00f4 size 0x58 virtual true final true
 void RemoveDataProcessor(::GlobalNamespace::ISaberMovementDataProcessor dataProcessor) ;

/// @brief Method RequestLastDataProcessing addr 0x21c014c size 0x188 virtual true final true
 void RequestLastDataProcessing(::GlobalNamespace::ISaberMovementDataProcessor dataProcessor) ;

/// @brief Method AddNewData addr 0x21c02d4 size 0x4d0 virtual false final false
 void AddNewData(::UnityEngine::Vector3 topPos, ::UnityEngine::Vector3 bottomPos, float_t time) ;

/// @brief Method ComputeAdditionalData addr 0x21c07a4 size 0x230 virtual false final false
 void ComputeAdditionalData(::UnityEngine::Vector3 topPos, ::UnityEngine::Vector3 bottomPos, int32_t idxOffset, ByRef<::UnityEngine::Vector3> segmentNormal, ByRef<float_t> segmentAngle) ;

/// @brief Method ComputePlaneNormal addr 0x21c09d4 size 0x13c virtual false final false
 ::UnityEngine::Vector3 ComputePlaneNormal(::UnityEngine::Vector3 tp0, ::UnityEngine::Vector3 bp0, ::UnityEngine::Vector3 tp1, ::UnityEngine::Vector3 bp1) ;

/// @brief Method ComputeCutPlaneNormal addr 0x21c0b10 size 0xa0 virtual false final false
 ::UnityEngine::Vector3 ComputeCutPlaneNormal() ;

/// @brief Method ComputeSwingRating addr 0x21c0bb0 size 0x8 virtual true final true
 float_t ComputeSwingRating(float_t overrideSegmentAngle) ;

/// @brief Method ComputeSwingRating addr 0x21c0e7c size 0xc virtual true final true
 float_t ComputeSwingRating() ;

/// @brief Method ComputeSwingRating addr 0x21c0bb8 size 0x2c4 virtual false final false
 float_t ComputeSwingRating(bool overrideSegmenAngle, float_t overrideValue) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::SaberMovementData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberMovementData, "", "SaberMovementData");
