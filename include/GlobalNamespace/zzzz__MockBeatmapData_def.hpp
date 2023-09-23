#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class MockNoteData;
}
namespace GlobalNamespace {
class MockObstacleData;
}
// Forward declare root types
namespace GlobalNamespace {
class MockBeatmapData;
}
// Type: ::MockBeatmapData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15485))
// CS Name: MockBeatmapData
class CORDL_TYPE MockBeatmapData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~MockBeatmapData() = default;

// Ctor Parameters [CppParam { name: "", ty: "MockBeatmapData", modifiers: " const&", def_value: None }]
constexpr MockBeatmapData(MockBeatmapData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MockBeatmapData", modifiers: "&&", def_value: None }]
constexpr MockBeatmapData(MockBeatmapData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MockBeatmapData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MockBeatmapData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MockBeatmapData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MockBeatmapData& operator=(MockBeatmapData&& o) noexcept = default;
  constexpr MockBeatmapData& operator=(MockBeatmapData const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__numberOfLines_k__BackingField, put=__set__numberOfLines_k__BackingField))  _numberOfLines_k__BackingField;

constexpr void __set__numberOfLines_k__BackingField(int32_t value) ;

constexpr int32_t __get__numberOfLines_k__BackingField() const;

 float_t __declspec(property(get=__get__songEndTime_k__BackingField, put=__set__songEndTime_k__BackingField))  _songEndTime_k__BackingField;

constexpr void __set__songEndTime_k__BackingField(float_t value) ;

constexpr float_t __get__songEndTime_k__BackingField() const;

 ::ArrayW<GlobalNamespace::MockNoteData> __declspec(property(get=__get__leftNotes_k__BackingField, put=__set__leftNotes_k__BackingField))  _leftNotes_k__BackingField;

constexpr void __set__leftNotes_k__BackingField(::ArrayW<GlobalNamespace::MockNoteData> value) ;

constexpr ::ArrayW<GlobalNamespace::MockNoteData> __get__leftNotes_k__BackingField() const;

 ::ArrayW<GlobalNamespace::MockNoteData> __declspec(property(get=__get__rightNotes_k__BackingField, put=__set__rightNotes_k__BackingField))  _rightNotes_k__BackingField;

constexpr void __set__rightNotes_k__BackingField(::ArrayW<GlobalNamespace::MockNoteData> value) ;

constexpr ::ArrayW<GlobalNamespace::MockNoteData> __get__rightNotes_k__BackingField() const;

 ::ArrayW<GlobalNamespace::MockNoteData> __declspec(property(get=__get__bombNotes_k__BackingField, put=__set__bombNotes_k__BackingField))  _bombNotes_k__BackingField;

constexpr void __set__bombNotes_k__BackingField(::ArrayW<GlobalNamespace::MockNoteData> value) ;

constexpr ::ArrayW<GlobalNamespace::MockNoteData> __get__bombNotes_k__BackingField() const;

 ::ArrayW<GlobalNamespace::MockObstacleData> __declspec(property(get=__get__obstacles_k__BackingField, put=__set__obstacles_k__BackingField))  _obstacles_k__BackingField;

constexpr void __set__obstacles_k__BackingField(::ArrayW<GlobalNamespace::MockObstacleData> value) ;

constexpr ::ArrayW<GlobalNamespace::MockObstacleData> __get__obstacles_k__BackingField() const;


// Properties

 int32_t __declspec(property(get=get_numberOfLines, put=set_numberOfLines))  numberOfLines;

 float_t __declspec(property(get=get_songEndTime, put=set_songEndTime))  songEndTime;

 ::ArrayW<GlobalNamespace::MockNoteData> __declspec(property(get=get_leftNotes, put=set_leftNotes))  leftNotes;

 ::ArrayW<GlobalNamespace::MockNoteData> __declspec(property(get=get_rightNotes, put=set_rightNotes))  rightNotes;

 ::ArrayW<GlobalNamespace::MockNoteData> __declspec(property(get=get_bombNotes, put=set_bombNotes))  bombNotes;

 ::ArrayW<GlobalNamespace::MockObstacleData> __declspec(property(get=get_obstacles, put=set_obstacles))  obstacles;


// Methods

/// @brief Method get_numberOfLines addr 0x2279164 size 0x8 virtual false final false
 int32_t get_numberOfLines() ;

/// @brief Method set_numberOfLines addr 0x227916c size 0x8 virtual false final false
 void set_numberOfLines(int32_t value) ;

/// @brief Method get_songEndTime addr 0x2279174 size 0x8 virtual false final false
 float_t get_songEndTime() ;

/// @brief Method set_songEndTime addr 0x227917c size 0x8 virtual false final false
 void set_songEndTime(float_t value) ;

/// @brief Method get_leftNotes addr 0x2279184 size 0x8 virtual false final false
 ::ArrayW<GlobalNamespace::MockNoteData> get_leftNotes() ;

/// @brief Method set_leftNotes addr 0x227918c size 0x8 virtual false final false
 void set_leftNotes(::ArrayW<GlobalNamespace::MockNoteData> value) ;

/// @brief Method get_rightNotes addr 0x2279194 size 0x8 virtual false final false
 ::ArrayW<GlobalNamespace::MockNoteData> get_rightNotes() ;

/// @brief Method set_rightNotes addr 0x227919c size 0x8 virtual false final false
 void set_rightNotes(::ArrayW<GlobalNamespace::MockNoteData> value) ;

/// @brief Method get_bombNotes addr 0x22791a4 size 0x8 virtual false final false
 ::ArrayW<GlobalNamespace::MockNoteData> get_bombNotes() ;

/// @brief Method set_bombNotes addr 0x22791ac size 0x8 virtual false final false
 void set_bombNotes(::ArrayW<GlobalNamespace::MockNoteData> value) ;

/// @brief Method get_obstacles addr 0x22791b4 size 0x8 virtual false final false
 ::ArrayW<GlobalNamespace::MockObstacleData> get_obstacles() ;

/// @brief Method set_obstacles addr 0x22791bc size 0x8 virtual false final false
 void set_obstacles(::ArrayW<GlobalNamespace::MockObstacleData> value) ;

// Ctor Parameters []
explicit MockBeatmapData() ;

/// @brief Method .ctor addr 0x22791c4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MockBeatmapData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockBeatmapData, "", "MockBeatmapData");
