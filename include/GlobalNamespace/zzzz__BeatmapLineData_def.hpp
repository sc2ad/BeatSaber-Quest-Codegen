#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace GlobalNamespace {
class IReadonlyBeatmapLineData;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class BeatmapObjectData;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLineData;
}
// Type: ::BeatmapLineData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14931))
// CS Name: BeatmapLineData
class CORDL_TYPE BeatmapLineData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IReadonlyBeatmapLineData
constexpr operator  GlobalNamespace::IReadonlyBeatmapLineData() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BeatmapLineData() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLineData", modifiers: " const&", def_value: None }]
constexpr BeatmapLineData(BeatmapLineData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLineData", modifiers: "&&", def_value: None }]
constexpr BeatmapLineData(BeatmapLineData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapLineData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapLineData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapLineData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapLineData& operator=(BeatmapLineData&& o) noexcept = default;
  constexpr BeatmapLineData& operator=(BeatmapLineData const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectData> __declspec(property(get=__get__beatmapObjectsData, put=__set__beatmapObjectsData))  _beatmapObjectsData;

constexpr void __set__beatmapObjectsData(System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectData> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectData> __get__beatmapObjectsData() const;


// Properties

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::BeatmapObjectData> __declspec(property(get=get_beatmapObjectsData))  beatmapObjectsData;


// Methods

/// @brief Method get_beatmapObjectsData addr 0xd93a34 size 0x8 virtual true final true
 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::BeatmapObjectData> get_beatmapObjectsData() ;

static GlobalNamespace::BeatmapLineData New_ctor(int32_t initialCapacity) ;

/// @brief Method .ctor addr 0xd93a3c size 0x90 virtual false final false
 void _ctor(int32_t initialCapacity) ;

static GlobalNamespace::BeatmapLineData New_ctor(System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectData> beatmapObjectData) ;

/// @brief Method .ctor addr 0xd93acc size 0x28 virtual false final false
 void _ctor(System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectData> beatmapObjectData) ;

/// @brief Method AddBeatmapObjectData addr 0xd93af4 size 0xa8 virtual false final false
 void AddBeatmapObjectData(GlobalNamespace::BeatmapObjectData beatmapObjectData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapLineData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLineData, "", "BeatmapLineData");
