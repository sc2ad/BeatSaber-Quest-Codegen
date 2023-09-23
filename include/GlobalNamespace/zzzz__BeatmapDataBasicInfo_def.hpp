#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace GlobalNamespace {
class IBeatmapDataBasicInfo;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataBasicInfo;
}
// Type: ::BeatmapDataBasicInfo
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4274))
// CS Name: BeatmapDataBasicInfo
class CORDL_TYPE BeatmapDataBasicInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IBeatmapDataBasicInfo
constexpr operator  GlobalNamespace::IBeatmapDataBasicInfo() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~BeatmapDataBasicInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataBasicInfo", modifiers: " const&", def_value: None }]
constexpr BeatmapDataBasicInfo(BeatmapDataBasicInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataBasicInfo", modifiers: "&&", def_value: None }]
constexpr BeatmapDataBasicInfo(BeatmapDataBasicInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapDataBasicInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapDataBasicInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapDataBasicInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapDataBasicInfo& operator=(BeatmapDataBasicInfo&& o) noexcept = default;
  constexpr BeatmapDataBasicInfo& operator=(BeatmapDataBasicInfo const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__numberOfLines_k__BackingField, put=__set__numberOfLines_k__BackingField))  _numberOfLines_k__BackingField;

constexpr void __set__numberOfLines_k__BackingField(int32_t value) ;

constexpr int32_t __get__numberOfLines_k__BackingField() const;

 int32_t __declspec(property(get=__get__cuttableNotesCount_k__BackingField, put=__set__cuttableNotesCount_k__BackingField))  _cuttableNotesCount_k__BackingField;

constexpr void __set__cuttableNotesCount_k__BackingField(int32_t value) ;

constexpr int32_t __get__cuttableNotesCount_k__BackingField() const;

 int32_t __declspec(property(get=__get__obstaclesCount_k__BackingField, put=__set__obstaclesCount_k__BackingField))  _obstaclesCount_k__BackingField;

constexpr void __set__obstaclesCount_k__BackingField(int32_t value) ;

constexpr int32_t __get__obstaclesCount_k__BackingField() const;

 int32_t __declspec(property(get=__get__bombsCount_k__BackingField, put=__set__bombsCount_k__BackingField))  _bombsCount_k__BackingField;

constexpr void __set__bombsCount_k__BackingField(int32_t value) ;

constexpr int32_t __get__bombsCount_k__BackingField() const;

 System::Collections::Generic::IEnumerable_1<::StringW> __declspec(property(get=__get__specialBasicBeatmapEventKeywords_k__BackingField, put=__set__specialBasicBeatmapEventKeywords_k__BackingField))  _specialBasicBeatmapEventKeywords_k__BackingField;

constexpr void __set__specialBasicBeatmapEventKeywords_k__BackingField(System::Collections::Generic::IEnumerable_1<::StringW> value) ;

constexpr System::Collections::Generic::IEnumerable_1<::StringW> __get__specialBasicBeatmapEventKeywords_k__BackingField() const;


// Properties

 int32_t __declspec(property(get=get_numberOfLines))  numberOfLines;

 int32_t __declspec(property(get=get_cuttableNotesCount))  cuttableNotesCount;

 int32_t __declspec(property(get=get_obstaclesCount))  obstaclesCount;

 int32_t __declspec(property(get=get_bombsCount))  bombsCount;

 System::Collections::Generic::IEnumerable_1<::StringW> __declspec(property(get=get_specialBasicBeatmapEventKeywords))  specialBasicBeatmapEventKeywords;


// Methods

/// @brief Method get_numberOfLines addr 0x21caba4 size 0x8 virtual true final true
 int32_t get_numberOfLines() ;

/// @brief Method get_cuttableNotesCount addr 0x21cabac size 0x8 virtual true final true
 int32_t get_cuttableNotesCount() ;

/// @brief Method get_obstaclesCount addr 0x21cabb4 size 0x8 virtual true final true
 int32_t get_obstaclesCount() ;

/// @brief Method get_bombsCount addr 0x21cabbc size 0x8 virtual true final true
 int32_t get_bombsCount() ;

/// @brief Method get_specialBasicBeatmapEventKeywords addr 0x21cabc4 size 0x8 virtual true final true
 System::Collections::Generic::IEnumerable_1<::StringW> get_specialBasicBeatmapEventKeywords() ;

// Ctor Parameters [CppParam { name: "numberOfLines", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cuttableNotesCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "obstaclesCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "bombsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "specialBasicBeatmapEventKeywords", ty: "System::Collections::Generic::IEnumerable_1<::StringW>", modifiers: "", def_value: None }]
explicit BeatmapDataBasicInfo(int32_t numberOfLines, int32_t cuttableNotesCount, int32_t obstaclesCount, int32_t bombsCount, System::Collections::Generic::IEnumerable_1<::StringW> specialBasicBeatmapEventKeywords) ;

/// @brief Method .ctor addr 0x21cabcc size 0x50 virtual false final false
 void _ctor(int32_t numberOfLines, int32_t cuttableNotesCount, int32_t obstaclesCount, int32_t bombsCount, System::Collections::Generic::IEnumerable_1<::StringW> specialBasicBeatmapEventKeywords) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapDataBasicInfo);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDataBasicInfo, "", "BeatmapDataBasicInfo");
