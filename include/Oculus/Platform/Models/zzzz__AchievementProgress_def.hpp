#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class AchievementProgress;
}
// Type: Oculus.Platform.Models::AchievementProgress
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13382))
// CS Name: Oculus.Platform.Models.AchievementProgress
class CORDL_TYPE AchievementProgress : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~AchievementProgress() = default;

// Ctor Parameters [CppParam { name: "", ty: "AchievementProgress", modifiers: " const&", def_value: None }]
constexpr AchievementProgress(AchievementProgress const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AchievementProgress", modifiers: "&&", def_value: None }]
constexpr AchievementProgress(AchievementProgress&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AchievementProgress(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AchievementProgress& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AchievementProgress& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AchievementProgress& operator=(AchievementProgress&& o) noexcept = default;
  constexpr AchievementProgress& operator=(AchievementProgress const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_Bitfield, put=__set_Bitfield))  Bitfield;

constexpr void __set_Bitfield(::StringW value) ;

constexpr ::StringW __get_Bitfield() const;

 uint64_t __declspec(property(get=__get_Count, put=__set_Count))  Count;

constexpr void __set_Count(uint64_t value) ;

constexpr uint64_t __get_Count() const;

 bool __declspec(property(get=__get_IsUnlocked, put=__set_IsUnlocked))  IsUnlocked;

constexpr void __set_IsUnlocked(bool value) ;

constexpr bool __get_IsUnlocked() const;

 ::StringW __declspec(property(get=__get_Name, put=__set_Name))  Name;

constexpr void __set_Name(::StringW value) ;

constexpr ::StringW __get_Name() const;

 System::DateTime __declspec(property(get=__get_UnlockTime, put=__set_UnlockTime))  UnlockTime;

constexpr void __set_UnlockTime(System::DateTime value) ;

constexpr System::DateTime __get_UnlockTime() const;


// Methods

static Oculus::Platform::Models::AchievementProgress New_ctor(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x259bf7c size 0xbc virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::AchievementProgress);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::AchievementProgress, "Oculus.Platform.Models", "AchievementProgress");
