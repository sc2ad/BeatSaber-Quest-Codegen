#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementProgressList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class AchievementProgressList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithAchievementProgressList;
}
// Type: Oculus.Platform::MessageWithAchievementProgressList
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13383)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4425 }), TypeDefinitionIndex(TypeDefinitionIndex(13203))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13210))
// CS Name: Oculus.Platform.MessageWithAchievementProgressList
class CORDL_TYPE MessageWithAchievementProgressList : public Oculus::Platform::Message_1<Oculus::Platform::Models::AchievementProgressList> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithAchievementProgressList() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithAchievementProgressList", modifiers: " const&", def_value: None }]
constexpr MessageWithAchievementProgressList(MessageWithAchievementProgressList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithAchievementProgressList", modifiers: "&&", def_value: None }]
constexpr MessageWithAchievementProgressList(MessageWithAchievementProgressList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithAchievementProgressList(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::AchievementProgressList>(ptr) {
}


  constexpr MessageWithAchievementProgressList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithAchievementProgressList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithAchievementProgressList& operator=(MessageWithAchievementProgressList&& o) noexcept = default;
  constexpr MessageWithAchievementProgressList& operator=(MessageWithAchievementProgressList const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithAchievementProgressList(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257ddf8 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetAchievementProgressList addr 0x257fd08 size 0x3c virtual true final false
 Oculus::Platform::Models::AchievementProgressList GetAchievementProgressList() ;

/// @brief Method GetDataFromMessage addr 0x257fd44 size 0x9c virtual true final false
 Oculus::Platform::Models::AchievementProgressList GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithAchievementProgressList);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithAchievementProgressList, "Oculus.Platform", "MessageWithAchievementProgressList");
