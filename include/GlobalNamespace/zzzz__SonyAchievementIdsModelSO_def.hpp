#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace GlobalNamespace {
class AchievementSO;
}
namespace GlobalNamespace {
class GlobalNamespace__SonyAchievementIdsModelSO__AchievementIdData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__SonyAchievementIdsModelSO__AchievementIdData;
}
namespace GlobalNamespace {
class SonyAchievementIdsModelSO;
}
// Type: ::AchievementIdData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4667))
// CS Name: SonyAchievementIdsModelSO::AchievementIdData
class CORDL_TYPE GlobalNamespace__SonyAchievementIdsModelSO__AchievementIdData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__SonyAchievementIdsModelSO__AchievementIdData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SonyAchievementIdsModelSO__AchievementIdData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__SonyAchievementIdsModelSO__AchievementIdData(GlobalNamespace__SonyAchievementIdsModelSO__AchievementIdData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SonyAchievementIdsModelSO__AchievementIdData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__SonyAchievementIdsModelSO__AchievementIdData(GlobalNamespace__SonyAchievementIdsModelSO__AchievementIdData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SonyAchievementIdsModelSO__AchievementIdData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__SonyAchievementIdsModelSO__AchievementIdData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__SonyAchievementIdsModelSO__AchievementIdData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__SonyAchievementIdsModelSO__AchievementIdData& operator=(GlobalNamespace__SonyAchievementIdsModelSO__AchievementIdData&& o) noexcept = default;
  constexpr GlobalNamespace__SonyAchievementIdsModelSO__AchievementIdData& operator=(GlobalNamespace__SonyAchievementIdsModelSO__AchievementIdData const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__trophyId, put=__set__trophyId))  _trophyId;

constexpr void __set__trophyId(int32_t value) ;

constexpr int32_t __get__trophyId() const;

 GlobalNamespace::AchievementSO __declspec(property(get=__get__achievement, put=__set__achievement))  _achievement;

constexpr void __set__achievement(GlobalNamespace::AchievementSO value) ;

constexpr GlobalNamespace::AchievementSO __get__achievement() const;


// Properties

 int32_t __declspec(property(get=get_ps4TrophyId))  ps4TrophyId;

 ::StringW __declspec(property(get=get_achievementId))  achievementId;


// Methods

/// @brief Method get_ps4TrophyId addr 0x221b46c size 0x8 virtual false final false
 int32_t get_ps4TrophyId() ;

/// @brief Method get_achievementId addr 0x221b210 size 0x1c virtual false final false
 ::StringW get_achievementId() ;

static GlobalNamespace::GlobalNamespace__SonyAchievementIdsModelSO__AchievementIdData New_ctor() ;

/// @brief Method .ctor addr 0x221b474 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SonyAchievementIdsModelSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4668))
// CS Name: SonyAchievementIdsModelSO
class CORDL_TYPE SonyAchievementIdsModelSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
using AchievementIdData = GlobalNamespace::GlobalNamespace__SonyAchievementIdsModelSO__AchievementIdData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SonyAchievementIdsModelSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "SonyAchievementIdsModelSO", modifiers: " const&", def_value: None }]
constexpr SonyAchievementIdsModelSO(SonyAchievementIdsModelSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SonyAchievementIdsModelSO", modifiers: "&&", def_value: None }]
constexpr SonyAchievementIdsModelSO(SonyAchievementIdsModelSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SonyAchievementIdsModelSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr SonyAchievementIdsModelSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SonyAchievementIdsModelSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SonyAchievementIdsModelSO& operator=(SonyAchievementIdsModelSO&& o) noexcept = default;
  constexpr SonyAchievementIdsModelSO& operator=(SonyAchievementIdsModelSO const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__SonyAchievementIdsModelSO__AchievementIdData> __declspec(property(get=__get__achievementsIds, put=__set__achievementsIds))  _achievementsIds;

constexpr void __set__achievementsIds(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__SonyAchievementIdsModelSO__AchievementIdData> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__SonyAchievementIdsModelSO__AchievementIdData> __get__achievementsIds() const;

 System::Collections::Generic::Dictionary_2<::StringW,int32_t> __declspec(property(get=__get__achievementIdToTrophyId, put=__set__achievementIdToTrophyId))  _achievementIdToTrophyId;

constexpr void __set__achievementIdToTrophyId(System::Collections::Generic::Dictionary_2<::StringW,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,int32_t> __get__achievementIdToTrophyId() const;

 System::Collections::Generic::Dictionary_2<int32_t,::StringW> __declspec(property(get=__get__trophyIdToAchievementId, put=__set__trophyIdToAchievementId))  _trophyIdToAchievementId;

constexpr void __set__trophyIdToAchievementId(System::Collections::Generic::Dictionary_2<int32_t,::StringW> value) ;

constexpr System::Collections::Generic::Dictionary_2<int32_t,::StringW> __get__trophyIdToAchievementId() const;


// Properties

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__SonyAchievementIdsModelSO__AchievementIdData> __declspec(property(get=get_achievementsIds))  achievementsIds;


// Methods

/// @brief Method get_achievementsIds addr 0x221afc8 size 0x8 virtual false final false
 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__SonyAchievementIdsModelSO__AchievementIdData> get_achievementsIds() ;

/// @brief Method OnEnable addr 0x221afd0 size 0x240 virtual true final false
 void OnEnable() ;

/// @brief Method GetTrophyId addr 0x221b22c size 0x68 virtual false final false
 bool GetTrophyId(::StringW achievementId, ByRef<int32_t> trophyId) ;

/// @brief Method GetTrophyIds addr 0x221b294 size 0x6c virtual false final false
 ::ArrayW<int32_t> GetTrophyIds() ;

/// @brief Method GetAchievementId addr 0x221b300 size 0x68 virtual false final false
 bool GetAchievementId(int32_t trophyId, ByRef<::StringW> achievementId) ;

static GlobalNamespace::SonyAchievementIdsModelSO New_ctor() ;

/// @brief Method .ctor addr 0x221b368 size 0x104 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__SonyAchievementIdsModelSO__AchievementIdData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SonyAchievementIdsModelSO__AchievementIdData, "", "SonyAchievementIdsModelSO/AchievementIdData");
NEED_NO_BOX(GlobalNamespace::SonyAchievementIdsModelSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SonyAchievementIdsModelSO, "", "SonyAchievementIdsModelSO");
