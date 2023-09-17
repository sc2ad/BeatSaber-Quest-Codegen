#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace GlobalNamespace {
struct LightAxis;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace GlobalNamespace {
struct LightRotationDirection;
}
// Forward declare root types
namespace GlobalNamespace {
class LightRotationBeatmapEventData;
}
// Type: ::LightRotationBeatmapEventData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14912))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14918))
// CS Name: LightRotationBeatmapEventData
class CORDL_TYPE LightRotationBeatmapEventData : public ::GlobalNamespace::BeatmapEventData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~LightRotationBeatmapEventData() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightRotationBeatmapEventData", modifiers: " const&", def_value: None }]
constexpr LightRotationBeatmapEventData(LightRotationBeatmapEventData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightRotationBeatmapEventData", modifiers: "&&", def_value: None }]
constexpr LightRotationBeatmapEventData(LightRotationBeatmapEventData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightRotationBeatmapEventData(void* ptr) noexcept : ::GlobalNamespace::BeatmapEventData(ptr) {
}


  constexpr LightRotationBeatmapEventData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightRotationBeatmapEventData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightRotationBeatmapEventData& operator=(LightRotationBeatmapEventData&& o) noexcept = default;
  constexpr LightRotationBeatmapEventData& operator=(LightRotationBeatmapEventData const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_groupId, put=__set_groupId))  groupId;

constexpr void __set_groupId(int32_t value) ;

constexpr int32_t __get_groupId() const;

 int32_t __declspec(property(get=__get_elementId, put=__set_elementId))  elementId;

constexpr void __set_elementId(int32_t value) ;

constexpr int32_t __get_elementId() const;

 bool __declspec(property(get=__get_usePreviousEventValue, put=__set_usePreviousEventValue))  usePreviousEventValue;

constexpr void __set_usePreviousEventValue(bool value) ;

constexpr bool __get_usePreviousEventValue() const;

 ::GlobalNamespace::EaseType __declspec(property(get=__get_easeType, put=__set_easeType))  easeType;

constexpr void __set_easeType(::GlobalNamespace::EaseType value) ;

constexpr ::GlobalNamespace::EaseType __get_easeType() const;

 ::GlobalNamespace::LightAxis __declspec(property(get=__get_axis, put=__set_axis))  axis;

constexpr void __set_axis(::GlobalNamespace::LightAxis value) ;

constexpr ::GlobalNamespace::LightAxis __get_axis() const;

 int32_t __declspec(property(get=__get_loopCount, put=__set_loopCount))  loopCount;

constexpr void __set_loopCount(int32_t value) ;

constexpr int32_t __get_loopCount() const;

 ::GlobalNamespace::LightRotationDirection __declspec(property(get=__get_rotationDirection, put=__set_rotationDirection))  rotationDirection;

constexpr void __set_rotationDirection(::GlobalNamespace::LightRotationDirection value) ;

constexpr ::GlobalNamespace::LightRotationDirection __get_rotationDirection() const;

 float_t __declspec(property(get=__get__rotation_k__BackingField, put=__set__rotation_k__BackingField))  _rotation_k__BackingField;

constexpr void __set__rotation_k__BackingField(float_t value) ;

constexpr float_t __get__rotation_k__BackingField() const;

static ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::LightRotationBeatmapEventData> __declspec(property(get=__get__defaults, put=__set__defaults))  _defaults;

static void __set__defaults(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::LightRotationBeatmapEventData> value) ;

static ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::LightRotationBeatmapEventData> __get__defaults() ;


// Properties

 float_t __declspec(property(get=get_rotation, put=set_rotation))  rotation;


// Methods

/// @brief Method get_rotation addr 0xd92038 size 0x8 virtual false final false
 float_t get_rotation() ;

/// @brief Method set_rotation addr 0xd92040 size 0x8 virtual false final false
 void set_rotation(float_t value) ;

// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "groupId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "elementId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "usePreviousEventValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "easeType", ty: "::GlobalNamespace::EaseType", modifiers: "", def_value: None }, CppParam { name: "axis", ty: "::GlobalNamespace::LightAxis", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "loopCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "rotationDirection", ty: "::GlobalNamespace::LightRotationDirection", modifiers: "", def_value: None }]
explicit LightRotationBeatmapEventData(float_t time, int32_t groupId, int32_t elementId, bool usePreviousEventValue, ::GlobalNamespace::EaseType easeType, ::GlobalNamespace::LightAxis axis, float_t rotation, int32_t loopCount, ::GlobalNamespace::LightRotationDirection rotationDirection) ;

/// @brief Method .ctor addr 0xd92048 size 0xe4 virtual false final false
 void _ctor(float_t time, int32_t groupId, int32_t elementId, bool usePreviousEventValue, ::GlobalNamespace::EaseType easeType, ::GlobalNamespace::LightAxis axis, float_t rotation, int32_t loopCount, ::GlobalNamespace::LightRotationDirection rotationDirection) ;

/// @brief Method ChangeRotation addr 0xd92144 size 0x8 virtual false final false
 void ChangeRotation(float_t rotation) ;

/// @brief Method GetCopy addr 0xd9214c size 0xc4 virtual true final false
 ::GlobalNamespace::BeatmapDataItem GetCopy() ;

/// @brief Method SubtypeIdentifier addr 0xd9212c size 0x18 virtual false final false
static int32_t SubtypeIdentifier(int32_t groupId, int32_t elementId, ::GlobalNamespace::LightAxis axis) ;

/// @brief Method GetDefault addr 0xd92210 size 0x164 virtual true final false
 ::GlobalNamespace::BeatmapEventData GetDefault() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::LightRotationBeatmapEventData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightRotationBeatmapEventData, "", "LightRotationBeatmapEventData");
