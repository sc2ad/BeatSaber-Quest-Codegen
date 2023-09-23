#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Oculus::Platform::Models {
class AchievementUpdate;
}
namespace Oculus::Platform {
template<typename T>
class Message_1;
}
namespace GlobalNamespace {
class GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler;
}
namespace GlobalNamespace {
class GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler;
}
namespace Oculus::Platform::Models {
class AchievementProgressList;
}
namespace Oculus::Platform::Models {
class AchievementProgress;
}
namespace GlobalNamespace {
class AchievementSO;
}
namespace GlobalNamespace {
class IPlatformAchievementsHandler;
}
namespace GlobalNamespace {
class HMAsyncRequest;
}
namespace GlobalNamespace {
class AchievementIdsModelSO;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass2_0;
}
namespace GlobalNamespace {
class GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass3_0;
}
namespace GlobalNamespace {
class GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass3_1;
}
namespace GlobalNamespace {
class OculusPlatformAchievementHandler;
}
// Type: ::<>c__DisplayClass2_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4628))
// CS Name: OculusPlatformAchievementHandler::<>c__DisplayClass2_0
class CORDL_TYPE GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass2_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass2_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass2_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass2_0(GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass2_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass2_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass2_0(GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass2_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass2_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass2_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass2_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass2_0& operator=(GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass2_0&& o) noexcept = default;
  constexpr GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass2_0& operator=(GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass2_0 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler __declspec(property(get=__get_completionHandler, put=__set_completionHandler))  completionHandler;

constexpr void __set_completionHandler(GlobalNamespace::GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler value) ;

constexpr GlobalNamespace::GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler __get_completionHandler() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass2_0() ;

/// @brief Method .ctor addr 0x22196f4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <UnlockAchievement>b__0 addr 0x22197fc size 0x40 virtual false final false
 void _UnlockAchievement_b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::AchievementUpdate> message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass3_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4629))
// CS Name: OculusPlatformAchievementHandler::<>c__DisplayClass3_0
class CORDL_TYPE GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass3_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass3_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass3_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass3_0(GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass3_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass3_0(GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass3_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass3_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass3_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass3_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass3_0& operator=(GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass3_0&& o) noexcept = default;
  constexpr GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass3_0& operator=(GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass3_0 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler __declspec(property(get=__get_completionHandler, put=__set_completionHandler))  completionHandler;

constexpr void __set_completionHandler(GlobalNamespace::GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler value) ;

constexpr GlobalNamespace::GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler __get_completionHandler() const;

 GlobalNamespace::OculusPlatformAchievementHandler __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::OculusPlatformAchievementHandler value) ;

constexpr GlobalNamespace::OculusPlatformAchievementHandler __get___4__this() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass3_0() ;

/// @brief Method .ctor addr 0x22197ec size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetUnlockedAchievements>b__0 addr 0x221983c size 0x528 virtual false final false
 void _GetUnlockedAchievements_b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::AchievementProgressList> message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass3_1
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4630))
// CS Name: OculusPlatformAchievementHandler::<>c__DisplayClass3_1
class CORDL_TYPE GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass3_1 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass3_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass3_1", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass3_1(GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass3_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass3_1", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass3_1(GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass3_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass3_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass3_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass3_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass3_1& operator=(GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass3_1&& o) noexcept = default;
  constexpr GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass3_1& operator=(GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass3_1 const& o) noexcept = default;
                


// Fields

 Oculus::Platform::Models::AchievementProgress __declspec(property(get=__get_achievement, put=__set_achievement))  achievement;

constexpr void __set_achievement(Oculus::Platform::Models::AchievementProgress value) ;

constexpr Oculus::Platform::Models::AchievementProgress __get_achievement() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass3_1() ;

/// @brief Method .ctor addr 0x2219d64 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetUnlockedAchievements>b__1 addr 0x2219d6c size 0x28 virtual false final false
 bool _GetUnlockedAchievements_b__1(GlobalNamespace::AchievementSO x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OculusPlatformAchievementHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4631))
// CS Name: OculusPlatformAchievementHandler
class CORDL_TYPE OculusPlatformAchievementHandler : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass3_1 = GlobalNamespace::GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass3_1;

using __c__DisplayClass3_0 = GlobalNamespace::GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass3_0;

using __c__DisplayClass2_0 = GlobalNamespace::GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass2_0;

/// @brief Convert operator to GlobalNamespace::IPlatformAchievementsHandler
constexpr operator  GlobalNamespace::IPlatformAchievementsHandler() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~OculusPlatformAchievementHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusPlatformAchievementHandler", modifiers: " const&", def_value: None }]
constexpr OculusPlatformAchievementHandler(OculusPlatformAchievementHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusPlatformAchievementHandler", modifiers: "&&", def_value: None }]
constexpr OculusPlatformAchievementHandler(OculusPlatformAchievementHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OculusPlatformAchievementHandler(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OculusPlatformAchievementHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OculusPlatformAchievementHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OculusPlatformAchievementHandler& operator=(OculusPlatformAchievementHandler&& o) noexcept = default;
  constexpr OculusPlatformAchievementHandler& operator=(OculusPlatformAchievementHandler const& o) noexcept = default;
                


// Fields

 GlobalNamespace::AchievementIdsModelSO __declspec(property(get=__get__achievementIdsModel, put=__set__achievementIdsModel))  _achievementIdsModel;

constexpr void __set__achievementIdsModel(GlobalNamespace::AchievementIdsModelSO value) ;

constexpr GlobalNamespace::AchievementIdsModelSO __get__achievementIdsModel() const;


// Methods

/// @brief Method Initialize addr 0x22195fc size 0x4 virtual true final true
 void Initialize() ;

/// @brief Method UnlockAchievement addr 0x2219600 size 0xf4 virtual true final true
 GlobalNamespace::HMAsyncRequest UnlockAchievement(::StringW achievementId, GlobalNamespace::GlobalNamespace__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler completionHandler) ;

/// @brief Method GetUnlockedAchievements addr 0x22196fc size 0xf0 virtual true final true
 GlobalNamespace::HMAsyncRequest GetUnlockedAchievements(GlobalNamespace::GlobalNamespace__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler completionHandler) ;

// Ctor Parameters []
explicit OculusPlatformAchievementHandler() ;

/// @brief Method .ctor addr 0x22197f4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass2_0, "", "OculusPlatformAchievementHandler/<>c__DisplayClass2_0");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass3_0, "", "OculusPlatformAchievementHandler/<>c__DisplayClass3_0");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass3_1);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OculusPlatformAchievementHandler____c__DisplayClass3_1, "", "OculusPlatformAchievementHandler/<>c__DisplayClass3_1");
NEED_NO_BOX(GlobalNamespace::OculusPlatformAchievementHandler);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusPlatformAchievementHandler, "", "OculusPlatformAchievementHandler");
