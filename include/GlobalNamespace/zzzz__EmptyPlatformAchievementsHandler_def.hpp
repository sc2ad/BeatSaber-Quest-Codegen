#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class IPlatformAchievementsHandler;
}
namespace GlobalNamespace {
class GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler;
}
namespace GlobalNamespace {
class HMAsyncRequest;
}
namespace GlobalNamespace {
class GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler;
}
// Forward declare root types
namespace GlobalNamespace {
class EmptyPlatformAchievementsHandler;
}
// Type: ::EmptyPlatformAchievementsHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4112))
// CS Name: EmptyPlatformAchievementsHandler
class CORDL_TYPE EmptyPlatformAchievementsHandler : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IPlatformAchievementsHandler
constexpr operator  GlobalNamespace::IPlatformAchievementsHandler() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EmptyPlatformAchievementsHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyPlatformAchievementsHandler", modifiers: " const&", def_value: None }]
constexpr EmptyPlatformAchievementsHandler(EmptyPlatformAchievementsHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyPlatformAchievementsHandler", modifiers: "&&", def_value: None }]
constexpr EmptyPlatformAchievementsHandler(EmptyPlatformAchievementsHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmptyPlatformAchievementsHandler(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EmptyPlatformAchievementsHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmptyPlatformAchievementsHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmptyPlatformAchievementsHandler& operator=(EmptyPlatformAchievementsHandler&& o) noexcept = default;
  constexpr EmptyPlatformAchievementsHandler& operator=(EmptyPlatformAchievementsHandler const& o) noexcept = default;
                


// Methods

/// @brief Method Initialize addr 0x20c7064 size 0x4 virtual true final true
 void Initialize() ;

/// @brief Method UnlockAchievement addr 0x20c7068 size 0x8 virtual true final true
 GlobalNamespace::HMAsyncRequest UnlockAchievement(::StringW achievementId, GlobalNamespace::GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler completionHandler) ;

/// @brief Method GetUnlockedAchievements addr 0x20c7070 size 0x8 virtual true final true
 GlobalNamespace::HMAsyncRequest GetUnlockedAchievements(GlobalNamespace::GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler completionHandler) ;

// Ctor Parameters []
explicit EmptyPlatformAchievementsHandler() ;

/// @brief Method .ctor addr 0x20c7078 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::EmptyPlatformAchievementsHandler);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EmptyPlatformAchievementsHandler, "", "EmptyPlatformAchievementsHandler");
