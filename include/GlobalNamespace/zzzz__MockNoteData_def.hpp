#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace GlobalNamespace {
struct NoteLineLayer;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__NoteData__GameplayType;
}
namespace GlobalNamespace {
struct NoteCutDirection;
}
namespace GlobalNamespace {
struct ColorType;
}
// Forward declare root types
namespace GlobalNamespace {
class MockNoteData;
}
// Type: ::MockNoteData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15487))
// CS Name: MockNoteData
class CORDL_TYPE MockNoteData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MockNoteData() = default;

// Ctor Parameters [CppParam { name: "", ty: "MockNoteData", modifiers: " const&", def_value: None }]
constexpr MockNoteData(MockNoteData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MockNoteData", modifiers: "&&", def_value: None }]
constexpr MockNoteData(MockNoteData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MockNoteData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MockNoteData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MockNoteData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MockNoteData& operator=(MockNoteData&& o) noexcept = default;
  constexpr MockNoteData& operator=(MockNoteData const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__time_k__BackingField, put=__set__time_k__BackingField))  _time_k__BackingField;

constexpr void __set__time_k__BackingField(float_t value) ;

constexpr float_t __get__time_k__BackingField() const;

 int32_t __declspec(property(get=__get__lineIndex_k__BackingField, put=__set__lineIndex_k__BackingField))  _lineIndex_k__BackingField;

constexpr void __set__lineIndex_k__BackingField(int32_t value) ;

constexpr int32_t __get__lineIndex_k__BackingField() const;

 ::GlobalNamespace::____GlobalNamespace__NoteData__GameplayType __declspec(property(get=__get__gameplayType_k__BackingField, put=__set__gameplayType_k__BackingField))  _gameplayType_k__BackingField;

constexpr void __set__gameplayType_k__BackingField(::GlobalNamespace::____GlobalNamespace__NoteData__GameplayType value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__NoteData__GameplayType __get__gameplayType_k__BackingField() const;

 ::GlobalNamespace::ColorType __declspec(property(get=__get__colorType_k__BackingField, put=__set__colorType_k__BackingField))  _colorType_k__BackingField;

constexpr void __set__colorType_k__BackingField(::GlobalNamespace::ColorType value) ;

constexpr ::GlobalNamespace::ColorType __get__colorType_k__BackingField() const;

 ::GlobalNamespace::NoteCutDirection __declspec(property(get=__get__cutDirection_k__BackingField, put=__set__cutDirection_k__BackingField))  _cutDirection_k__BackingField;

constexpr void __set__cutDirection_k__BackingField(::GlobalNamespace::NoteCutDirection value) ;

constexpr ::GlobalNamespace::NoteCutDirection __get__cutDirection_k__BackingField() const;

 ::GlobalNamespace::NoteLineLayer __declspec(property(get=__get__noteLineLayer_k__BackingField, put=__set__noteLineLayer_k__BackingField))  _noteLineLayer_k__BackingField;

constexpr void __set__noteLineLayer_k__BackingField(::GlobalNamespace::NoteLineLayer value) ;

constexpr ::GlobalNamespace::NoteLineLayer __get__noteLineLayer_k__BackingField() const;

 float_t __declspec(property(get=__get__duration_k__BackingField, put=__set__duration_k__BackingField))  _duration_k__BackingField;

constexpr void __set__duration_k__BackingField(float_t value) ;

constexpr float_t __get__duration_k__BackingField() const;


// Properties

 float_t __declspec(property(get=get_time, put=set_time))  time;

 int32_t __declspec(property(get=get_lineIndex, put=set_lineIndex))  lineIndex;

 ::GlobalNamespace::____GlobalNamespace__NoteData__GameplayType __declspec(property(get=get_gameplayType, put=set_gameplayType))  gameplayType;

 ::GlobalNamespace::ColorType __declspec(property(get=get_colorType, put=set_colorType))  colorType;

 ::GlobalNamespace::NoteCutDirection __declspec(property(get=get_cutDirection, put=set_cutDirection))  cutDirection;

 ::GlobalNamespace::NoteLineLayer __declspec(property(get=get_noteLineLayer, put=set_noteLineLayer))  noteLineLayer;

 float_t __declspec(property(get=get_duration, put=set_duration))  duration;


// Methods

/// @brief Method get_time addr 0x2279644 size 0x8 virtual false final false
 float_t get_time() ;

/// @brief Method set_time addr 0x227964c size 0x8 virtual false final false
 void set_time(float_t value) ;

/// @brief Method get_lineIndex addr 0x2279654 size 0x8 virtual false final false
 int32_t get_lineIndex() ;

/// @brief Method set_lineIndex addr 0x227965c size 0x8 virtual false final false
 void set_lineIndex(int32_t value) ;

/// @brief Method get_gameplayType addr 0x2279664 size 0x8 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__NoteData__GameplayType get_gameplayType() ;

/// @brief Method set_gameplayType addr 0x227966c size 0x8 virtual false final false
 void set_gameplayType(::GlobalNamespace::____GlobalNamespace__NoteData__GameplayType value) ;

/// @brief Method get_colorType addr 0x2279674 size 0x8 virtual false final false
 ::GlobalNamespace::ColorType get_colorType() ;

/// @brief Method set_colorType addr 0x227967c size 0x8 virtual false final false
 void set_colorType(::GlobalNamespace::ColorType value) ;

/// @brief Method get_cutDirection addr 0x2279684 size 0x8 virtual false final false
 ::GlobalNamespace::NoteCutDirection get_cutDirection() ;

/// @brief Method set_cutDirection addr 0x227968c size 0x8 virtual false final false
 void set_cutDirection(::GlobalNamespace::NoteCutDirection value) ;

/// @brief Method get_noteLineLayer addr 0x2279694 size 0x8 virtual false final false
 ::GlobalNamespace::NoteLineLayer get_noteLineLayer() ;

/// @brief Method set_noteLineLayer addr 0x227969c size 0x8 virtual false final false
 void set_noteLineLayer(::GlobalNamespace::NoteLineLayer value) ;

/// @brief Method get_duration addr 0x22796a4 size 0x8 virtual false final false
 float_t get_duration() ;

/// @brief Method set_duration addr 0x22796ac size 0x8 virtual false final false
 void set_duration(float_t value) ;

/// @brief Method Mirror addr 0x22796b4 size 0x58 virtual true final false
 void Mirror(int32_t lineCount) ;

// Ctor Parameters []
explicit MockNoteData() ;

/// @brief Method .ctor addr 0x227970c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MockNoteData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockNoteData, "", "MockNoteData");
