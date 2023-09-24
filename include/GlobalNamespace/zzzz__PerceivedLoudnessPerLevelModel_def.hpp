#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace GlobalNamespace {
class PerceivedLoudnessPerLevelSO;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class PerceivedLoudnessPerLevelModel;
}
// Type: ::PerceivedLoudnessPerLevelModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4437))
// CS Name: PerceivedLoudnessPerLevelModel
class CORDL_TYPE PerceivedLoudnessPerLevelModel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PerceivedLoudnessPerLevelModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "PerceivedLoudnessPerLevelModel", modifiers: " const&", def_value: None }]
constexpr PerceivedLoudnessPerLevelModel(PerceivedLoudnessPerLevelModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PerceivedLoudnessPerLevelModel", modifiers: "&&", def_value: None }]
constexpr PerceivedLoudnessPerLevelModel(PerceivedLoudnessPerLevelModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PerceivedLoudnessPerLevelModel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PerceivedLoudnessPerLevelModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PerceivedLoudnessPerLevelModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PerceivedLoudnessPerLevelModel& operator=(PerceivedLoudnessPerLevelModel&& o) noexcept = default;
  constexpr PerceivedLoudnessPerLevelModel& operator=(PerceivedLoudnessPerLevelModel const& o) noexcept = default;
                


// Fields

/// @brief Field kDefaultLoudness offset 0
static constexpr float_t  kDefaultLoudness{-6};

/// @brief Field kPerceivedLoudnessTarget offset 0
static constexpr float_t  kPerceivedLoudnessTarget{-11};

/// @brief Field kPerceivedLoudnessToMaxSfxLevelDifference offset 0
static constexpr float_t  kPerceivedLoudnessToMaxSfxLevelDifference{-10};

 System::Collections::Generic::Dictionary_2<::StringW,float_t> __declspec(property(get=__get__loudnessLevelPerLevelId, put=__set__loudnessLevelPerLevelId))  _loudnessLevelPerLevelId;

constexpr void __set__loudnessLevelPerLevelId(System::Collections::Generic::Dictionary_2<::StringW,float_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,float_t> __get__loudnessLevelPerLevelId() const;


// Methods

static GlobalNamespace::PerceivedLoudnessPerLevelModel New_ctor(GlobalNamespace::PerceivedLoudnessPerLevelSO loudnessPerLeveData) ;

/// @brief Method .ctor addr 0x21ee670 size 0xfc virtual false final false
 void _ctor(GlobalNamespace::PerceivedLoudnessPerLevelSO loudnessPerLeveData) ;

/// @brief Method ContainsLevelId addr 0x21ee76c size 0x58 virtual false final false
 bool ContainsLevelId(::StringW levelId) ;

/// @brief Method GetLoudnessCorrectionByLevelId addr 0x21ee7c4 size 0x20 virtual false final false
 float_t GetLoudnessCorrectionByLevelId(::StringW levelId) ;

/// @brief Method GetMaxSfxVolumeByLevelId addr 0x21ee860 size 0x18 virtual false final false
 float_t GetMaxSfxVolumeByLevelId(::StringW levelId) ;

/// @brief Method GetLoudnessByLevelId addr 0x21ee7e4 size 0x7c virtual false final false
 float_t GetLoudnessByLevelId(::StringW levelId) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PerceivedLoudnessPerLevelModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PerceivedLoudnessPerLevelModel, "", "PerceivedLoudnessPerLevelModel");
