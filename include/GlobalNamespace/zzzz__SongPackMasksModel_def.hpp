#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class SongPackMaskModelSO;
}
namespace GlobalNamespace {
struct SongPackMask;
}
// Forward declare root types
namespace GlobalNamespace {
class SongPackMasksModel;
}
// Type: ::SongPackMasksModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4530))
// CS Name: SongPackMasksModel
class CORDL_TYPE SongPackMasksModel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SongPackMasksModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "SongPackMasksModel", modifiers: " const&", def_value: None }]
constexpr SongPackMasksModel(SongPackMasksModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SongPackMasksModel", modifiers: "&&", def_value: None }]
constexpr SongPackMasksModel(SongPackMasksModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SongPackMasksModel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SongPackMasksModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SongPackMasksModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SongPackMasksModel& operator=(SongPackMasksModel&& o) noexcept = default;
  constexpr SongPackMasksModel& operator=(SongPackMasksModel const& o) noexcept = default;
                


// Fields

 GlobalNamespace::SongPackMaskModelSO __declspec(property(get=__get__songPackMaskModel, put=__set__songPackMaskModel))  _songPackMaskModel;

constexpr void __set__songPackMaskModel(GlobalNamespace::SongPackMaskModelSO value) ;

constexpr GlobalNamespace::SongPackMaskModelSO __get__songPackMaskModel() const;

 GlobalNamespace::SongPackMask __declspec(property(get=__get__allSongPackMask, put=__set__allSongPackMask))  _allSongPackMask;

constexpr void __set__allSongPackMask(GlobalNamespace::SongPackMask value) ;

constexpr GlobalNamespace::SongPackMask __get__allSongPackMask() const;


// Methods

static GlobalNamespace::SongPackMasksModel New_ctor(GlobalNamespace::SongPackMaskModelSO songPackMasks) ;

/// @brief Method .ctor addr 0x22017f8 size 0x78 virtual false final false
 void _ctor(GlobalNamespace::SongPackMaskModelSO songPackMasks) ;

/// @brief Method GetAllSongsMask addr 0x2201870 size 0xc virtual false final false
 GlobalNamespace::SongPackMask GetAllSongsMask() ;

/// @brief Method GetSongPackMaskText addr 0x220187c size 0x18 virtual false final false
 ::StringW GetSongPackMaskText(ByRef<GlobalNamespace::SongPackMask> songPackMask) ;

/// @brief Method GetSongPackMaskText addr 0x2201894 size 0x98 virtual false final false
 ::StringW GetSongPackMaskText(ByRef<GlobalNamespace::SongPackMask> songPackMask, ByRef<bool> plural) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SongPackMasksModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SongPackMasksModel, "", "SongPackMasksModel");
