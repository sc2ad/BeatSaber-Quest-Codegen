#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class AchievementSO;
}
// Type: ::AchievementSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4111))
// CS Name: AchievementSO
class CORDL_TYPE AchievementSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AchievementSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "AchievementSO", modifiers: " const&", def_value: None }]
constexpr AchievementSO(AchievementSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AchievementSO", modifiers: "&&", def_value: None }]
constexpr AchievementSO(AchievementSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AchievementSO(void* ptr) noexcept : ::GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr AchievementSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AchievementSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AchievementSO& operator=(AchievementSO&& o) noexcept = default;
  constexpr AchievementSO& operator=(AchievementSO const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__achievementId, put=__set__achievementId))  _achievementId;

constexpr void __set__achievementId(::StringW value) ;

constexpr ::StringW __get__achievementId() const;


// Properties

 ::StringW __declspec(property(get=get_achievementId))  achievementId;


// Methods

/// @brief Method get_achievementId addr 0x20c7054 size 0x8 virtual false final false
 ::StringW get_achievementId() ;

// Ctor Parameters []
explicit AchievementSO() ;

/// @brief Method .ctor addr 0x20c705c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::AchievementSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AchievementSO, "", "AchievementSO");
