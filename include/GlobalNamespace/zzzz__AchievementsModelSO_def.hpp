#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace GlobalNamespace {
class IPlatformAchievementsHandler;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsResult;
}
namespace GlobalNamespace {
class AchievementSO;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementResult;
}
// Forward declare root types
namespace GlobalNamespace {
class AchievementsModelSO;
}
namespace GlobalNamespace {
class ____GlobalNamespace__AchievementsModelSO____c__DisplayClass4_0;
}
// Type: ::<>c__DisplayClass4_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4109))
// CS Name: AchievementsModelSO::<>c__DisplayClass4_0
class CORDL_TYPE ____GlobalNamespace__AchievementsModelSO____c__DisplayClass4_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__AchievementsModelSO____c__DisplayClass4_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__AchievementsModelSO____c__DisplayClass4_0", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__AchievementsModelSO____c__DisplayClass4_0(____GlobalNamespace__AchievementsModelSO____c__DisplayClass4_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__AchievementsModelSO____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__AchievementsModelSO____c__DisplayClass4_0(____GlobalNamespace__AchievementsModelSO____c__DisplayClass4_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__AchievementsModelSO____c__DisplayClass4_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__AchievementsModelSO____c__DisplayClass4_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__AchievementsModelSO____c__DisplayClass4_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__AchievementsModelSO____c__DisplayClass4_0& operator=(____GlobalNamespace__AchievementsModelSO____c__DisplayClass4_0&& o) noexcept = default;
  constexpr ____GlobalNamespace__AchievementsModelSO____c__DisplayClass4_0& operator=(____GlobalNamespace__AchievementsModelSO____c__DisplayClass4_0 const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::AchievementsModelSO __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::AchievementsModelSO value) ;

constexpr ::GlobalNamespace::AchievementsModelSO __get___4__this() const;

 ::StringW __declspec(property(get=__get_achievementId, put=__set_achievementId))  achievementId;

constexpr void __set_achievementId(::StringW value) ;

constexpr ::StringW __get_achievementId() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__AchievementsModelSO____c__DisplayClass4_0() ;

/// @brief Method .ctor addr 0x20c6df8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <UnlockAchievement>b__0 addr 0x20c6fe4 size 0x70 virtual false final false
 void _UnlockAchievement_b__0(::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::AchievementsModelSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4110))
// CS Name: AchievementsModelSO
class CORDL_TYPE AchievementsModelSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
using __c__DisplayClass4_0 = ::GlobalNamespace::____GlobalNamespace__AchievementsModelSO____c__DisplayClass4_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~AchievementsModelSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "AchievementsModelSO", modifiers: " const&", def_value: None }]
constexpr AchievementsModelSO(AchievementsModelSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AchievementsModelSO", modifiers: "&&", def_value: None }]
constexpr AchievementsModelSO(AchievementsModelSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AchievementsModelSO(void* ptr) noexcept : ::GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr AchievementsModelSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AchievementsModelSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AchievementsModelSO& operator=(AchievementsModelSO&& o) noexcept = default;
  constexpr AchievementsModelSO& operator=(AchievementsModelSO const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::IPlatformAchievementsHandler __declspec(property(get=__get__platformAchievementsHandler, put=__set__platformAchievementsHandler))  _platformAchievementsHandler;

constexpr void __set__platformAchievementsHandler(::GlobalNamespace::IPlatformAchievementsHandler value) ;

constexpr ::GlobalNamespace::IPlatformAchievementsHandler __get__platformAchievementsHandler() const;

 ::System::Collections::Generic::HashSet_1<::StringW> __declspec(property(get=__get__unlockedAchievementIds, put=__set__unlockedAchievementIds))  _unlockedAchievementIds;

constexpr void __set__unlockedAchievementIds(::System::Collections::Generic::HashSet_1<::StringW> value) ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW> __get__unlockedAchievementIds() const;

 bool __declspec(property(get=__get__initialized, put=__set__initialized))  _initialized;

constexpr void __set__initialized(bool value) ;

constexpr bool __get__initialized() const;


// Methods

/// @brief Method Initialize addr 0x20c5b34 size 0x174 virtual false final false
 void Initialize() ;

/// @brief Method UnlockAchievement addr 0x20c6ba8 size 0x184 virtual false final false
 void UnlockAchievement(::GlobalNamespace::AchievementSO achievement) ;

// Ctor Parameters []
explicit AchievementsModelSO() ;

/// @brief Method .ctor addr 0x20c6ec4 size 0x7c virtual false final false
 void _ctor() ;

/// @brief Method <Initialize>b__3_0 addr 0x20c6f40 size 0xa4 virtual false final false
 void _Initialize_b__3_0(::GlobalNamespace::____GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsResult result, ::ArrayW<::StringW> achievementIds) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::AchievementsModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AchievementsModelSO, "", "AchievementsModelSO");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__AchievementsModelSO____c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__AchievementsModelSO____c__DisplayClass4_0, "", "AchievementsModelSO/<>c__DisplayClass4_0");
