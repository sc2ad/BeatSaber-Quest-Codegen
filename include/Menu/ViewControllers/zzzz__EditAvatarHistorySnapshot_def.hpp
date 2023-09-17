#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace GlobalNamespace {
class AvatarData;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__EditAvatarViewController__AvatarEditPart;
}
// Forward declare root types
namespace Menu::ViewControllers {
class EditAvatarHistorySnapshot;
}
// Type: Menu.ViewControllers::EditAvatarHistorySnapshot
namespace Menu::ViewControllers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6144))
// CS Name: Menu.ViewControllers.EditAvatarHistorySnapshot
class CORDL_TYPE EditAvatarHistorySnapshot : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~EditAvatarHistorySnapshot() = default;

// Ctor Parameters [CppParam { name: "", ty: "EditAvatarHistorySnapshot", modifiers: " const&", def_value: None }]
constexpr EditAvatarHistorySnapshot(EditAvatarHistorySnapshot const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EditAvatarHistorySnapshot", modifiers: "&&", def_value: None }]
constexpr EditAvatarHistorySnapshot(EditAvatarHistorySnapshot&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EditAvatarHistorySnapshot(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EditAvatarHistorySnapshot& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EditAvatarHistorySnapshot& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EditAvatarHistorySnapshot& operator=(EditAvatarHistorySnapshot&& o) noexcept = default;
  constexpr EditAvatarHistorySnapshot& operator=(EditAvatarHistorySnapshot const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart __declspec(property(get=__get__avatarEditPart_k__BackingField, put=__set__avatarEditPart_k__BackingField))  _avatarEditPart_k__BackingField;

constexpr void __set__avatarEditPart_k__BackingField(::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart __get__avatarEditPart_k__BackingField() const;

 ::GlobalNamespace::AvatarData __declspec(property(get=__get__avatarData_k__BackingField, put=__set__avatarData_k__BackingField))  _avatarData_k__BackingField;

constexpr void __set__avatarData_k__BackingField(::GlobalNamespace::AvatarData value) ;

constexpr ::GlobalNamespace::AvatarData __get__avatarData_k__BackingField() const;


// Properties

 ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart __declspec(property(get=get_avatarEditPart))  avatarEditPart;

 ::GlobalNamespace::AvatarData __declspec(property(get=get_avatarData))  avatarData;


// Methods

/// @brief Method get_avatarEditPart addr 0x21d4b90 size 0x8 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart get_avatarEditPart() ;

/// @brief Method get_avatarData addr 0x21d4b98 size 0x8 virtual false final false
 ::GlobalNamespace::AvatarData get_avatarData() ;

// Ctor Parameters [CppParam { name: "avatarData", ty: "::GlobalNamespace::AvatarData", modifiers: "", def_value: None }, CppParam { name: "avatarEditPart", ty: "::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart", modifiers: "", def_value: None }]
explicit EditAvatarHistorySnapshot(::GlobalNamespace::AvatarData avatarData, ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart avatarEditPart) ;

/// @brief Method .ctor addr 0x21d4ba0 size 0x30 virtual false final false
 void _ctor(::GlobalNamespace::AvatarData avatarData, ::GlobalNamespace::____GlobalNamespace__EditAvatarViewController__AvatarEditPart avatarEditPart) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Menu::ViewControllers
} // end anonymous namespace
NEED_NO_BOX(::Menu::ViewControllers::EditAvatarHistorySnapshot);
DEFINE_IL2CPP_ARG_TYPE(::Menu::ViewControllers::EditAvatarHistorySnapshot, "Menu.ViewControllers", "EditAvatarHistorySnapshot");
