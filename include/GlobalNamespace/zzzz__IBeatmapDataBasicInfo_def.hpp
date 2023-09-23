#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class IBeatmapDataBasicInfo;
}
// Type: ::IBeatmapDataBasicInfo
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4286))
// CS Name: IBeatmapDataBasicInfo
class CORDL_TYPE IBeatmapDataBasicInfo : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IBeatmapDataBasicInfo() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IBeatmapDataBasicInfo(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 int32_t __declspec(property(get=get_numberOfLines))  numberOfLines;

 int32_t __declspec(property(get=get_cuttableNotesCount))  cuttableNotesCount;

 int32_t __declspec(property(get=get_obstaclesCount))  obstaclesCount;

 int32_t __declspec(property(get=get_bombsCount))  bombsCount;

 System::Collections::Generic::IEnumerable_1<::StringW> __declspec(property(get=get_specialBasicBeatmapEventKeywords))  specialBasicBeatmapEventKeywords;


// Methods

/// @brief Method get_numberOfLines addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_numberOfLines() ;

/// @brief Method get_cuttableNotesCount addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_cuttableNotesCount() ;

/// @brief Method get_obstaclesCount addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_obstaclesCount() ;

/// @brief Method get_bombsCount addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_bombsCount() ;

/// @brief Method get_specialBasicBeatmapEventKeywords addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::Generic::IEnumerable_1<::StringW> get_specialBasicBeatmapEventKeywords() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IBeatmapDataBasicInfo);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IBeatmapDataBasicInfo, "", "IBeatmapDataBasicInfo");
