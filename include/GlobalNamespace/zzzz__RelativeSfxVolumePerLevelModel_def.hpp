#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class RelativeSfxVolumePerLevelSO;
}
// Forward declare root types
namespace GlobalNamespace {
class RelativeSfxVolumePerLevelModel;
}
// Type: ::RelativeSfxVolumePerLevelModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4439))
// CS Name: RelativeSfxVolumePerLevelModel
class CORDL_TYPE RelativeSfxVolumePerLevelModel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RelativeSfxVolumePerLevelModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "RelativeSfxVolumePerLevelModel", modifiers: " const&", def_value: None }]
constexpr RelativeSfxVolumePerLevelModel(RelativeSfxVolumePerLevelModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RelativeSfxVolumePerLevelModel", modifiers: "&&", def_value: None }]
constexpr RelativeSfxVolumePerLevelModel(RelativeSfxVolumePerLevelModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RelativeSfxVolumePerLevelModel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RelativeSfxVolumePerLevelModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RelativeSfxVolumePerLevelModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RelativeSfxVolumePerLevelModel& operator=(RelativeSfxVolumePerLevelModel&& o) noexcept = default;
  constexpr RelativeSfxVolumePerLevelModel& operator=(RelativeSfxVolumePerLevelModel const& o) noexcept = default;
                


// Fields

/// @brief Field kDefaultSfxVolume offset 0
static constexpr float_t  kDefaultSfxVolume{0};

 System::Collections::Generic::Dictionary_2<::StringW,float_t> __declspec(property(get=__get__relativeSfxVolumePerLevelId, put=__set__relativeSfxVolumePerLevelId))  _relativeSfxVolumePerLevelId;

constexpr void __set__relativeSfxVolumePerLevelId(System::Collections::Generic::Dictionary_2<::StringW,float_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,float_t> __get__relativeSfxVolumePerLevelId() const;


// Methods

static GlobalNamespace::RelativeSfxVolumePerLevelModel New_ctor(GlobalNamespace::RelativeSfxVolumePerLevelSO relativeSfxVolumePerLevelData) ;

/// @brief Method .ctor addr 0x21ee878 size 0x114 virtual false final false
 void _ctor(GlobalNamespace::RelativeSfxVolumePerLevelSO relativeSfxVolumePerLevelData) ;

/// @brief Method GetRelativeSfxVolume addr 0x21ee98c size 0x7c virtual false final false
 float_t GetRelativeSfxVolume(::StringW levelId) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::RelativeSfxVolumePerLevelModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RelativeSfxVolumePerLevelModel, "", "RelativeSfxVolumePerLevelModel");
