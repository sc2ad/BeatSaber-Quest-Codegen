#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
namespace GlobalNamespace {
class ModifiersSelectionView;
}
namespace GlobalNamespace {
class BeatmapSelectionView;
}
namespace GlobalNamespace {
class ILevelGameplaySetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class CenterStageLobbyViewController;
}
// Type: ::CenterStageLobbyViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5804))
// CS Name: CenterStageLobbyViewController
class CORDL_TYPE CenterStageLobbyViewController : public HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~CenterStageLobbyViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "CenterStageLobbyViewController", modifiers: " const&", def_value: None }]
constexpr CenterStageLobbyViewController(CenterStageLobbyViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CenterStageLobbyViewController", modifiers: "&&", def_value: None }]
constexpr CenterStageLobbyViewController(CenterStageLobbyViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CenterStageLobbyViewController(void* ptr) noexcept : HMUI::ViewController(ptr) {
}


  constexpr CenterStageLobbyViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CenterStageLobbyViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CenterStageLobbyViewController& operator=(CenterStageLobbyViewController&& o) noexcept = default;
  constexpr CenterStageLobbyViewController& operator=(CenterStageLobbyViewController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BeatmapSelectionView __declspec(property(get=__get__beatmapSelectionView, put=__set__beatmapSelectionView))  _beatmapSelectionView;

constexpr void __set__beatmapSelectionView(GlobalNamespace::BeatmapSelectionView value) ;

constexpr GlobalNamespace::BeatmapSelectionView __get__beatmapSelectionView() const;

 GlobalNamespace::ModifiersSelectionView __declspec(property(get=__get__modifiersSelectionView, put=__set__modifiersSelectionView))  _modifiersSelectionView;

constexpr void __set__modifiersSelectionView(GlobalNamespace::ModifiersSelectionView value) ;

constexpr GlobalNamespace::ModifiersSelectionView __get__modifiersSelectionView() const;


// Methods

/// @brief Method SetLevelGameplaySetupData addr 0x2175aec size 0x13c virtual false final false
 void SetLevelGameplaySetupData(GlobalNamespace::ILevelGameplaySetupData levelGameplaySetupData) ;

static GlobalNamespace::CenterStageLobbyViewController New_ctor() ;

/// @brief Method .ctor addr 0x2175c28 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::CenterStageLobbyViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CenterStageLobbyViewController, "", "CenterStageLobbyViewController");
