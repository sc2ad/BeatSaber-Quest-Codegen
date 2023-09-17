#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsHandler_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace GlobalNamespace {
class ____GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler;
}
namespace Oculus::Platform {
class Request;
}
namespace Oculus::Platform {
class Message;
}
namespace GlobalNamespace {
class HMAsyncRequest;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class GameplayModifiersModelSO;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__PlatformLeaderboardsModel__ScoresScope;
}
namespace GlobalNamespace {
class ____GlobalNamespace__LeaderboardScoreUploader__ScoreData;
}
namespace GlobalNamespace {
class ____GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler;
}
namespace GlobalNamespace {
class LeaderboardIdsModelSO;
}
namespace Oculus::Platform {
template<typename T>
class Message_1;
}
namespace Oculus::Platform {
template<typename T>
class ____Oculus__Platform__Message_1__Callback;
}
namespace Oculus::Platform::Models {
class LeaderboardEntryList;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusPlatformLeaderboardsHandler;
}
namespace GlobalNamespace {
class ____GlobalNamespace__OculusPlatformLeaderboardsHandler____c;
}
namespace GlobalNamespace {
class ____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0;
}
namespace GlobalNamespace {
class ____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0;
}
namespace GlobalNamespace {
class ____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0;
}
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4248))
// CS Name: OculusPlatformLeaderboardsHandler::<>c
class CORDL_TYPE ____GlobalNamespace__OculusPlatformLeaderboardsHandler____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____GlobalNamespace__OculusPlatformLeaderboardsHandler____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__OculusPlatformLeaderboardsHandler____c", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__OculusPlatformLeaderboardsHandler____c(____GlobalNamespace__OculusPlatformLeaderboardsHandler____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__OculusPlatformLeaderboardsHandler____c", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__OculusPlatformLeaderboardsHandler____c(____GlobalNamespace__OculusPlatformLeaderboardsHandler____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OculusPlatformLeaderboardsHandler____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__OculusPlatformLeaderboardsHandler____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__OculusPlatformLeaderboardsHandler____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__OculusPlatformLeaderboardsHandler____c& operator=(____GlobalNamespace__OculusPlatformLeaderboardsHandler____c&& o) noexcept = default;
  constexpr ____GlobalNamespace__OculusPlatformLeaderboardsHandler____c& operator=(____GlobalNamespace__OculusPlatformLeaderboardsHandler____c const& o) noexcept = default;
                


// Fields

static ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c value) ;

static ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c __get___9() ;

static ::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::LeaderboardEntryList> __declspec(property(get=__get___9__3_0, put=__set___9__3_0))  __9__3_0;

static void __set___9__3_0(::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::LeaderboardEntryList> value) ;

static ::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::LeaderboardEntryList> __get___9__3_0() ;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__OculusPlatformLeaderboardsHandler____c() ;

/// @brief Method .ctor addr 0x21c71e4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <.ctor>b__3_0 addr 0x21c71ec size 0x4 virtual false final false
 void __ctor_b__3_0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardEntryList> message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass4_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4249))
// CS Name: OculusPlatformLeaderboardsHandler::<>c__DisplayClass4_0
class CORDL_TYPE ____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0(____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0(____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0& operator=(____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0&& o) noexcept = default;
  constexpr ____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0& operator=(____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0 const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::OculusPlatformLeaderboardsHandler __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::OculusPlatformLeaderboardsHandler value) ;

constexpr ::GlobalNamespace::OculusPlatformLeaderboardsHandler __get___4__this() const;

 ::Oculus::Platform::Request __declspec(property(get=__get_oculusRequest, put=__set_oculusRequest))  oculusRequest;

constexpr void __set_oculusRequest(::Oculus::Platform::Request value) ;

constexpr ::Oculus::Platform::Request __get_oculusRequest() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0() ;

/// @brief Method .ctor addr 0x21c6c5c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <AddOculusRequest>b__0 addr 0x21c71f0 size 0x64 virtual false final false
 void _AddOculusRequest_b__0(::GlobalNamespace::HMAsyncRequest request) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass6_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4250))
// CS Name: OculusPlatformLeaderboardsHandler::<>c__DisplayClass6_0
class CORDL_TYPE ____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0(____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0(____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0& operator=(____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0&& o) noexcept = default;
  constexpr ____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0& operator=(____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0 const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::OculusPlatformLeaderboardsHandler __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::OculusPlatformLeaderboardsHandler value) ;

constexpr ::GlobalNamespace::OculusPlatformLeaderboardsHandler __get___4__this() const;

 ::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler __declspec(property(get=__get_completionHandler, put=__set_completionHandler))  completionHandler;

constexpr void __set_completionHandler(::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler __get_completionHandler() const;

 ::StringW __declspec(property(get=__get_referencePlayerId, put=__set_referencePlayerId))  referencePlayerId;

constexpr void __set_referencePlayerId(::StringW value) ;

constexpr ::StringW __get_referencePlayerId() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0() ;

/// @brief Method .ctor addr 0x21c6f64 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetScores>b__0 addr 0x21c7254 size 0x2f8 virtual false final false
 void _GetScores_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardEntryList> message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass7_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4251))
// CS Name: OculusPlatformLeaderboardsHandler::<>c__DisplayClass7_0
class CORDL_TYPE ____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0(____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0(____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0& operator=(____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0&& o) noexcept = default;
  constexpr ____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0& operator=(____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0 const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::OculusPlatformLeaderboardsHandler __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::OculusPlatformLeaderboardsHandler value) ;

constexpr ::GlobalNamespace::OculusPlatformLeaderboardsHandler __get___4__this() const;

 ::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler __declspec(property(get=__get_completionHandler, put=__set_completionHandler))  completionHandler;

constexpr void __set_completionHandler(::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler __get_completionHandler() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0() ;

/// @brief Method .ctor addr 0x21c7178 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <UploadScore>b__0 addr 0x21c758c size 0x98 virtual false final false
 void _UploadScore_b__0(::Oculus::Platform::Message_1<bool> messsage) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OculusPlatformLeaderboardsHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4253))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4252))
// CS Name: OculusPlatformLeaderboardsHandler
class CORDL_TYPE OculusPlatformLeaderboardsHandler : public ::GlobalNamespace::PlatformLeaderboardsHandler {
public:
// Declarations
using __c__DisplayClass7_0 = ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0;

using __c__DisplayClass6_0 = ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0;

using __c__DisplayClass4_0 = ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0;

using __c = ::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~OculusPlatformLeaderboardsHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusPlatformLeaderboardsHandler", modifiers: " const&", def_value: None }]
constexpr OculusPlatformLeaderboardsHandler(OculusPlatformLeaderboardsHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusPlatformLeaderboardsHandler", modifiers: "&&", def_value: None }]
constexpr OculusPlatformLeaderboardsHandler(OculusPlatformLeaderboardsHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OculusPlatformLeaderboardsHandler(void* ptr) noexcept : ::GlobalNamespace::PlatformLeaderboardsHandler(ptr) {
}


  constexpr OculusPlatformLeaderboardsHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OculusPlatformLeaderboardsHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OculusPlatformLeaderboardsHandler& operator=(OculusPlatformLeaderboardsHandler&& o) noexcept = default;
  constexpr OculusPlatformLeaderboardsHandler& operator=(OculusPlatformLeaderboardsHandler const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::HashSet_1<uint64_t> __declspec(property(get=__get__oculusRequestIds, put=__set__oculusRequestIds))  _oculusRequestIds;

constexpr void __set__oculusRequestIds(::System::Collections::Generic::HashSet_1<uint64_t> value) ;

constexpr ::System::Collections::Generic::HashSet_1<uint64_t> __get__oculusRequestIds() const;

 ::GlobalNamespace::GameplayModifiersModelSO __declspec(property(get=__get__gameplayModifiersModel, put=__set__gameplayModifiersModel))  _gameplayModifiersModel;

constexpr void __set__gameplayModifiersModel(::GlobalNamespace::GameplayModifiersModelSO value) ;

constexpr ::GlobalNamespace::GameplayModifiersModelSO __get__gameplayModifiersModel() const;

 ::GlobalNamespace::LeaderboardIdsModelSO __declspec(property(get=__get__leaderboardIdsModel, put=__set__leaderboardIdsModel))  _leaderboardIdsModel;

constexpr void __set__leaderboardIdsModel(::GlobalNamespace::LeaderboardIdsModelSO value) ;

constexpr ::GlobalNamespace::LeaderboardIdsModelSO __get__leaderboardIdsModel() const;


// Methods

// Ctor Parameters []
explicit OculusPlatformLeaderboardsHandler() ;

/// @brief Method .ctor addr 0x21c6a48 size 0x120 virtual false final false
 void _ctor() ;

/// @brief Method AddOculusRequest addr 0x21c6b70 size 0xec virtual false final false
 void AddOculusRequest(::Oculus::Platform::Request oculusRequest, ::GlobalNamespace::HMAsyncRequest asyncRequest) ;

/// @brief Method CheckMessageForValidRequest addr 0x21c6c64 size 0x98 virtual false final false
 bool CheckMessageForValidRequest(::Oculus::Platform::Message message) ;

/// @brief Method GetScores addr 0x21c6cfc size 0x268 virtual true final false
 ::GlobalNamespace::HMAsyncRequest GetScores(::GlobalNamespace::IDifficultyBeatmap beatmap, int32_t count, int32_t fromRank, ::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__ScoresScope scope, ::StringW referencePlayerId, ::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__GetScoresCompletionHandler completionHandler) ;

/// @brief Method UploadScore addr 0x21c6f6c size 0x20c virtual true final false
 ::GlobalNamespace::HMAsyncRequest UploadScore(::GlobalNamespace::____GlobalNamespace__LeaderboardScoreUploader__ScoreData scoreData, ::GlobalNamespace::____GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler completionHandler) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::OculusPlatformLeaderboardsHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformLeaderboardsHandler, "", "OculusPlatformLeaderboardsHandler");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c, "", "OculusPlatformLeaderboardsHandler/<>c");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass4_0, "", "OculusPlatformLeaderboardsHandler/<>c__DisplayClass4_0");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass6_0, "", "OculusPlatformLeaderboardsHandler/<>c__DisplayClass6_0");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OculusPlatformLeaderboardsHandler____c__DisplayClass7_0, "", "OculusPlatformLeaderboardsHandler/<>c__DisplayClass7_0");