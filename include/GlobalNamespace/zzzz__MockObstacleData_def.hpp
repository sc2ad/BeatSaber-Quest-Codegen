#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
struct NoteLineLayer;
}
// Forward declare root types
namespace GlobalNamespace {
class MockObstacleData;
}
// Type: ::MockObstacleData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15488))
// CS Name: MockObstacleData
class CORDL_TYPE MockObstacleData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MockObstacleData() = default;

// Ctor Parameters [CppParam { name: "", ty: "MockObstacleData", modifiers: " const&", def_value: None }]
constexpr MockObstacleData(MockObstacleData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MockObstacleData", modifiers: "&&", def_value: None }]
constexpr MockObstacleData(MockObstacleData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MockObstacleData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MockObstacleData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MockObstacleData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MockObstacleData& operator=(MockObstacleData&& o) noexcept = default;
  constexpr MockObstacleData& operator=(MockObstacleData const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__time_k__BackingField, put=__set__time_k__BackingField))  _time_k__BackingField;

constexpr void __set__time_k__BackingField(float_t value) ;

constexpr float_t __get__time_k__BackingField() const;

 int32_t __declspec(property(get=__get__lineIndex_k__BackingField, put=__set__lineIndex_k__BackingField))  _lineIndex_k__BackingField;

constexpr void __set__lineIndex_k__BackingField(int32_t value) ;

constexpr int32_t __get__lineIndex_k__BackingField() const;

 GlobalNamespace::NoteLineLayer __declspec(property(get=__get__lineLayer_k__BackingField, put=__set__lineLayer_k__BackingField))  _lineLayer_k__BackingField;

constexpr void __set__lineLayer_k__BackingField(GlobalNamespace::NoteLineLayer value) ;

constexpr GlobalNamespace::NoteLineLayer __get__lineLayer_k__BackingField() const;

 float_t __declspec(property(get=__get__duration_k__BackingField, put=__set__duration_k__BackingField))  _duration_k__BackingField;

constexpr void __set__duration_k__BackingField(float_t value) ;

constexpr float_t __get__duration_k__BackingField() const;

 int32_t __declspec(property(get=__get__width_k__BackingField, put=__set__width_k__BackingField))  _width_k__BackingField;

constexpr void __set__width_k__BackingField(int32_t value) ;

constexpr int32_t __get__width_k__BackingField() const;


// Properties

 float_t __declspec(property(get=get_time, put=set_time))  time;

 int32_t __declspec(property(get=get_lineIndex, put=set_lineIndex))  lineIndex;

 GlobalNamespace::NoteLineLayer __declspec(property(get=get_lineLayer, put=set_lineLayer))  lineLayer;

 float_t __declspec(property(get=get_duration, put=set_duration))  duration;

 int32_t __declspec(property(get=get_width, put=set_width))  width;


// Methods

/// @brief Method get_time addr 0x2279714 size 0x8 virtual false final false
 float_t get_time() ;

/// @brief Method set_time addr 0x227971c size 0x8 virtual false final false
 void set_time(float_t value) ;

/// @brief Method get_lineIndex addr 0x2279724 size 0x8 virtual false final false
 int32_t get_lineIndex() ;

/// @brief Method set_lineIndex addr 0x227972c size 0x8 virtual false final false
 void set_lineIndex(int32_t value) ;

/// @brief Method get_lineLayer addr 0x2279734 size 0x8 virtual false final false
 GlobalNamespace::NoteLineLayer get_lineLayer() ;

/// @brief Method set_lineLayer addr 0x227973c size 0x8 virtual false final false
 void set_lineLayer(GlobalNamespace::NoteLineLayer value) ;

/// @brief Method get_duration addr 0x2279744 size 0x8 virtual false final false
 float_t get_duration() ;

/// @brief Method set_duration addr 0x227974c size 0x8 virtual false final false
 void set_duration(float_t value) ;

/// @brief Method get_width addr 0x2279754 size 0x8 virtual false final false
 int32_t get_width() ;

/// @brief Method set_width addr 0x227975c size 0x8 virtual false final false
 void set_width(int32_t value) ;

static GlobalNamespace::MockObstacleData New_ctor() ;

/// @brief Method .ctor addr 0x2279764 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MockObstacleData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockObstacleData, "", "MockObstacleData");
