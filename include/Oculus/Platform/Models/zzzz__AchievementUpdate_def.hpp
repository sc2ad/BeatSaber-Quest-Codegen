#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class AchievementUpdate;
}
// Type: Oculus.Platform.Models::AchievementUpdate
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13384))
// CS Name: Oculus.Platform.Models.AchievementUpdate
class CORDL_TYPE AchievementUpdate : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AchievementUpdate() = default;

// Ctor Parameters [CppParam { name: "", ty: "AchievementUpdate", modifiers: " const&", def_value: None }]
constexpr AchievementUpdate(AchievementUpdate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AchievementUpdate", modifiers: "&&", def_value: None }]
constexpr AchievementUpdate(AchievementUpdate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AchievementUpdate(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AchievementUpdate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AchievementUpdate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AchievementUpdate& operator=(AchievementUpdate&& o) noexcept = default;
  constexpr AchievementUpdate& operator=(AchievementUpdate const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_JustUnlocked, put=__set_JustUnlocked))  JustUnlocked;

constexpr void __set_JustUnlocked(bool value) ;

constexpr bool __get_JustUnlocked() const;

 ::StringW __declspec(property(get=__get_Name, put=__set_Name))  Name;

constexpr void __set_Name(::StringW value) ;

constexpr ::StringW __get_Name() const;


// Methods

static Oculus::Platform::Models::AchievementUpdate New_ctor(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x259c294 size 0x8c virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::AchievementUpdate);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::AchievementUpdate, "Oculus.Platform.Models", "AchievementUpdate");
