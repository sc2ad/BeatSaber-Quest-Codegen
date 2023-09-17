#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
namespace {
namespace GlobalNamespace {
class AchievementSO;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class AchievementIdsModelSO;
}
// Type: ::AchievementIdsModelSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4107))
// CS Name: AchievementIdsModelSO
class CORDL_TYPE AchievementIdsModelSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AchievementIdsModelSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "AchievementIdsModelSO", modifiers: " const&", def_value: None }]
constexpr AchievementIdsModelSO(AchievementIdsModelSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AchievementIdsModelSO", modifiers: "&&", def_value: None }]
constexpr AchievementIdsModelSO(AchievementIdsModelSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AchievementIdsModelSO(void* ptr) noexcept : ::GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr AchievementIdsModelSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AchievementIdsModelSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AchievementIdsModelSO& operator=(AchievementIdsModelSO&& o) noexcept = default;
  constexpr AchievementIdsModelSO& operator=(AchievementIdsModelSO const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<::GlobalNamespace::AchievementSO> __declspec(property(get=__get__achievementsIds, put=__set__achievementsIds))  _achievementsIds;

constexpr void __set__achievementsIds(::System::Collections::Generic::List_1<::GlobalNamespace::AchievementSO> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AchievementSO> __get__achievementsIds() const;


// Properties

 ::System::Collections::Generic::List_1<::GlobalNamespace::AchievementSO> __declspec(property(get=get_achievementsIds))  achievementsIds;


// Methods

/// @brief Method get_achievementsIds addr 0x20c5934 size 0x8 virtual false final false
 ::System::Collections::Generic::List_1<::GlobalNamespace::AchievementSO> get_achievementsIds() ;

// Ctor Parameters []
explicit AchievementIdsModelSO() ;

/// @brief Method .ctor addr 0x20c593c size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::AchievementIdsModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AchievementIdsModelSO, "", "AchievementIdsModelSO");
