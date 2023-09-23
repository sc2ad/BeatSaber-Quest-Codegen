#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData;
}
namespace GlobalNamespace {
class SonyLeaderboardIdsModelSO;
}
// Type: ::LeaderboardIdData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4671))
// CS Name: SonyLeaderboardIdsModelSO::LeaderboardIdData
class CORDL_TYPE GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData(GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData(GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData& operator=(GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData&& o) noexcept = default;
  constexpr GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData& operator=(GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData const& o) noexcept = default;
                


// Fields

 uint32_t __declspec(property(get=__get__sonyLeaderboardId, put=__set__sonyLeaderboardId))  _sonyLeaderboardId;

constexpr void __set__sonyLeaderboardId(uint32_t value) ;

constexpr uint32_t __get__sonyLeaderboardId() const;

 ::StringW __declspec(property(get=__get__leaderboardId, put=__set__leaderboardId))  _leaderboardId;

constexpr void __set__leaderboardId(::StringW value) ;

constexpr ::StringW __get__leaderboardId() const;


// Properties

 uint32_t __declspec(property(get=get_SonyLeaderboardId))  SonyLeaderboardId;

 ::StringW __declspec(property(get=get_leaderboardId))  leaderboardId;


// Methods

/// @brief Method get_SonyLeaderboardId addr 0x221bbfc size 0x8 virtual false final false
 uint32_t get_SonyLeaderboardId() ;

/// @brief Method get_leaderboardId addr 0x221bc04 size 0x8 virtual false final false
 ::StringW get_leaderboardId() ;

// Ctor Parameters [CppParam { name: "sonyLeaderboardId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "leaderboardId", ty: "::StringW", modifiers: "", def_value: None }]
explicit GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData(uint32_t sonyLeaderboardId, ::StringW leaderboardId) ;

/// @brief Method .ctor addr 0x221bc0c size 0x30 virtual false final false
 void _ctor(uint32_t sonyLeaderboardId, ::StringW leaderboardId) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SonyLeaderboardIdsModelSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4672))
// CS Name: SonyLeaderboardIdsModelSO
class CORDL_TYPE SonyLeaderboardIdsModelSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
using LeaderboardIdData = GlobalNamespace::GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SonyLeaderboardIdsModelSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "SonyLeaderboardIdsModelSO", modifiers: " const&", def_value: None }]
constexpr SonyLeaderboardIdsModelSO(SonyLeaderboardIdsModelSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SonyLeaderboardIdsModelSO", modifiers: "&&", def_value: None }]
constexpr SonyLeaderboardIdsModelSO(SonyLeaderboardIdsModelSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SonyLeaderboardIdsModelSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr SonyLeaderboardIdsModelSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SonyLeaderboardIdsModelSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SonyLeaderboardIdsModelSO& operator=(SonyLeaderboardIdsModelSO&& o) noexcept = default;
  constexpr SonyLeaderboardIdsModelSO& operator=(SonyLeaderboardIdsModelSO const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData> __declspec(property(get=__get__leaderboardIds, put=__set__leaderboardIds))  _leaderboardIds;

constexpr void __set__leaderboardIds(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData> __get__leaderboardIds() const;

 System::Collections::Generic::Dictionary_2<::StringW,uint32_t> __declspec(property(get=__get__leaderboardIdToSonyId, put=__set__leaderboardIdToSonyId))  _leaderboardIdToSonyId;

constexpr void __set__leaderboardIdToSonyId(System::Collections::Generic::Dictionary_2<::StringW,uint32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,uint32_t> __get__leaderboardIdToSonyId() const;


// Properties

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData> __declspec(property(get=get_leaderboardIds))  leaderboardIds;


// Methods

/// @brief Method get_leaderboardIds addr 0x221b9c8 size 0x8 virtual false final false
 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData> get_leaderboardIds() ;

/// @brief Method OnEnable addr 0x221b9d0 size 0x1b0 virtual true final false
 void OnEnable() ;

/// @brief Method GetSonyLeaderboardId addr 0x221bb80 size 0x7c virtual false final false
 bool GetSonyLeaderboardId(GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, ByRef<uint32_t> sonyLeaderboardId) ;

/// @brief Method DoesSupport360 addr 0x0 size 0xffffffffffffffff virtual true final false
 bool DoesSupport360() ;

// Ctor Parameters []
explicit SonyLeaderboardIdsModelSO() ;

/// @brief Method .ctor addr 0x221a418 size 0xc0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SonyLeaderboardIdsModelSO__LeaderboardIdData, "", "SonyLeaderboardIdsModelSO/LeaderboardIdData");
NEED_NO_BOX(GlobalNamespace::SonyLeaderboardIdsModelSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SonyLeaderboardIdsModelSO, "", "SonyLeaderboardIdsModelSO");
