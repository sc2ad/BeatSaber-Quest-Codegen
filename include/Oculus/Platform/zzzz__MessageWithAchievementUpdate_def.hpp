#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementUpdate_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class AchievementUpdate;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithAchievementUpdate;
}
// Type: Oculus.Platform::MessageWithAchievementUpdate
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4426 }), TypeDefinitionIndex(TypeDefinitionIndex(13384)), TypeDefinitionIndex(TypeDefinitionIndex(13203))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13211))
// CS Name: Oculus.Platform.MessageWithAchievementUpdate
class CORDL_TYPE MessageWithAchievementUpdate : public Oculus::Platform::Message_1<Oculus::Platform::Models::AchievementUpdate> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithAchievementUpdate() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithAchievementUpdate", modifiers: " const&", def_value: None }]
constexpr MessageWithAchievementUpdate(MessageWithAchievementUpdate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithAchievementUpdate", modifiers: "&&", def_value: None }]
constexpr MessageWithAchievementUpdate(MessageWithAchievementUpdate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithAchievementUpdate(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::AchievementUpdate>(ptr) {
}


  constexpr MessageWithAchievementUpdate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithAchievementUpdate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithAchievementUpdate& operator=(MessageWithAchievementUpdate&& o) noexcept = default;
  constexpr MessageWithAchievementUpdate& operator=(MessageWithAchievementUpdate const& o) noexcept = default;
                


// Methods

static Oculus::Platform::MessageWithAchievementUpdate New_ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257de50 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetAchievementUpdate addr 0x257fde0 size 0x3c virtual true final false
 Oculus::Platform::Models::AchievementUpdate GetAchievementUpdate() ;

/// @brief Method GetDataFromMessage addr 0x257fe1c size 0x9c virtual true final false
 Oculus::Platform::Models::AchievementUpdate GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithAchievementUpdate);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithAchievementUpdate, "Oculus.Platform", "MessageWithAchievementUpdate");
