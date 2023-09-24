#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace Oculus::Platform {
class Request;
}
namespace Oculus::Platform::Models {
class Room;
}
namespace Oculus::Platform::Models {
class MatchmakingAdminSnapshot;
}
namespace Oculus::Platform::Models {
class MatchmakingEnqueueResult;
}
namespace Oculus::Platform {
template<typename T>
class Oculus__Platform__Message_1__Callback;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace Oculus::Platform {
class Oculus__Platform__Matchmaking__CustomQuery;
}
namespace Oculus::Platform {
struct MatchmakingStatApproach;
}
namespace Oculus::Platform::Models {
class MatchmakingStats;
}
namespace Oculus::Platform::Models {
class MatchmakingBrowseResult;
}
namespace Oculus::Platform {
class MatchmakingOptions;
}
namespace Oculus::Platform::Models {
class MatchmakingEnqueueResultAndRoom;
}
namespace Oculus::Platform {
template<typename T>
class Request_1;
}
namespace GlobalNamespace {
struct Oculus__Platform__Matchmaking__CustomQuery__Criterion;
}
namespace Oculus::Platform {
struct MatchmakingCriterionImportance;
}
// Forward declare root types
namespace Oculus::Platform {
class Matchmaking;
}
namespace Oculus::Platform {
class Oculus__Platform__Matchmaking__CustomQuery;
}
namespace GlobalNamespace {
struct Oculus__Platform__Matchmaking__CustomQuery__Criterion;
}
// Type: ::Criterion
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13313))
// CS Name: Oculus.Platform.Matchmaking::CustomQuery::Criterion
struct CORDL_TYPE Oculus__Platform__Matchmaking__CustomQuery__Criterion : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "importance", ty: "Oculus::Platform::MatchmakingCriterionImportance", modifiers: "", def_value: None }, CppParam { name: "parameters", ty: "System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }]
constexpr Oculus__Platform__Matchmaking__CustomQuery__Criterion(::StringW key, Oculus::Platform::MatchmakingCriterionImportance importance, System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType> parameters) noexcept;


                    constexpr Oculus__Platform__Matchmaking__CustomQuery__Criterion(Oculus__Platform__Matchmaking__CustomQuery__Criterion const&) = default;
                    constexpr Oculus__Platform__Matchmaking__CustomQuery__Criterion(Oculus__Platform__Matchmaking__CustomQuery__Criterion&&) = default;
                    constexpr Oculus__Platform__Matchmaking__CustomQuery__Criterion& operator=(Oculus__Platform__Matchmaking__CustomQuery__Criterion const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Oculus__Platform__Matchmaking__CustomQuery__Criterion& operator=(Oculus__Platform__Matchmaking__CustomQuery__Criterion&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Oculus__Platform__Matchmaking__CustomQuery__Criterion(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_key, put=__set_key))  key;

constexpr void __set_key(::StringW value) ;

constexpr ::StringW __get_key() const;

 Oculus::Platform::MatchmakingCriterionImportance __declspec(property(get=__get_importance, put=__set_importance))  importance;

constexpr void __set_importance(Oculus::Platform::MatchmakingCriterionImportance value) ;

constexpr Oculus::Platform::MatchmakingCriterionImportance __get_importance() const;

 System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_parameters, put=__set_parameters))  parameters;

constexpr void __set_parameters(System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType> __get_parameters() const;


// Methods

/// @brief Method .ctor addr 0x2589f18 size 0x10 virtual false final false
 void _ctor(::StringW key_, Oculus::Platform::MatchmakingCriterionImportance importance_) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::CustomQuery
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13314))
// CS Name: Oculus.Platform.Matchmaking::CustomQuery
class CORDL_TYPE Oculus__Platform__Matchmaking__CustomQuery : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Criterion = GlobalNamespace::Oculus__Platform__Matchmaking__CustomQuery__Criterion;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Oculus__Platform__Matchmaking__CustomQuery() = default;

// Ctor Parameters [CppParam { name: "", ty: "Oculus__Platform__Matchmaking__CustomQuery", modifiers: " const&", def_value: None }]
constexpr Oculus__Platform__Matchmaking__CustomQuery(Oculus__Platform__Matchmaking__CustomQuery const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Oculus__Platform__Matchmaking__CustomQuery", modifiers: "&&", def_value: None }]
constexpr Oculus__Platform__Matchmaking__CustomQuery(Oculus__Platform__Matchmaking__CustomQuery&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Oculus__Platform__Matchmaking__CustomQuery(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Oculus__Platform__Matchmaking__CustomQuery& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Oculus__Platform__Matchmaking__CustomQuery& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Oculus__Platform__Matchmaking__CustomQuery& operator=(Oculus__Platform__Matchmaking__CustomQuery&& o) noexcept = default;
  constexpr Oculus__Platform__Matchmaking__CustomQuery& operator=(Oculus__Platform__Matchmaking__CustomQuery const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType> __get_data() const;

 ::ArrayW<GlobalNamespace::Oculus__Platform__Matchmaking__CustomQuery__Criterion> __declspec(property(get=__get_criteria, put=__set_criteria))  criteria;

constexpr void __set_criteria(::ArrayW<GlobalNamespace::Oculus__Platform__Matchmaking__CustomQuery__Criterion> value) ;

constexpr ::ArrayW<GlobalNamespace::Oculus__Platform__Matchmaking__CustomQuery__Criterion> __get_criteria() const;


// Methods

/// @brief Method ToUnmanaged addr 0x25885e0 size 0x31c virtual false final false
 ::cordl_internals::intptr_t ToUnmanaged() ;

static Oculus::Platform::Oculus__Platform__Matchmaking__CustomQuery New_ctor() ;

/// @brief Method .ctor addr 0x2589f10 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
// Type: Oculus.Platform::Matchmaking
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13315))
// CS Name: Oculus.Platform.Matchmaking
class CORDL_TYPE Matchmaking : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using CustomQuery = Oculus::Platform::Oculus__Platform__Matchmaking__CustomQuery;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Matchmaking() = default;

// Ctor Parameters [CppParam { name: "", ty: "Matchmaking", modifiers: " const&", def_value: None }]
constexpr Matchmaking(Matchmaking const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Matchmaking", modifiers: "&&", def_value: None }]
constexpr Matchmaking(Matchmaking&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Matchmaking(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Matchmaking& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Matchmaking& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Matchmaking& operator=(Matchmaking&& o) noexcept = default;
  constexpr Matchmaking& operator=(Matchmaking const& o) noexcept = default;
                


// Methods

/// @brief Method ReportResultsInsecure addr 0x2587fa8 size 0x31c virtual false final false
static Oculus::Platform::Request ReportResultsInsecure(uint64_t roomID, System::Collections::Generic::Dictionary_2<::StringW,int32_t> data) ;

/// @brief Method GetStats addr 0x25882c4 size 0x178 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::MatchmakingStats> GetStats(::StringW pool, uint32_t maxLevel, Oculus::Platform::MatchmakingStatApproach approach) ;

/// @brief Method Browse addr 0x258843c size 0x1a4 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::MatchmakingBrowseResult> Browse(::StringW pool, Oculus::Platform::Oculus__Platform__Matchmaking__CustomQuery customQueryData) ;

/// @brief Method Browse2 addr 0x25888fc size 0x1b0 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::MatchmakingBrowseResult> Browse2(::StringW pool, Oculus::Platform::MatchmakingOptions matchmakingOptions) ;

/// @brief Method Cancel addr 0x2588aac size 0x15c virtual false final false
static Oculus::Platform::Request Cancel(::StringW pool, ::StringW requestHash) ;

/// @brief Method Cancel addr 0x2588c08 size 0x144 virtual false final false
static Oculus::Platform::Request Cancel() ;

/// @brief Method CreateAndEnqueueRoom addr 0x2588d4c size 0x1bc virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom> CreateAndEnqueueRoom(::StringW pool, uint32_t maxUsers, bool subscribeToUpdates, Oculus::Platform::Oculus__Platform__Matchmaking__CustomQuery customQueryData) ;

/// @brief Method CreateAndEnqueueRoom2 addr 0x2588f08 size 0x1b0 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom> CreateAndEnqueueRoom2(::StringW pool, Oculus::Platform::MatchmakingOptions matchmakingOptions) ;

/// @brief Method CreateRoom addr 0x25890b8 size 0x178 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::Room> CreateRoom(::StringW pool, uint32_t maxUsers, bool subscribeToUpdates) ;

/// @brief Method CreateRoom2 addr 0x2589230 size 0x1b0 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::Room> CreateRoom2(::StringW pool, Oculus::Platform::MatchmakingOptions matchmakingOptions) ;

/// @brief Method Enqueue addr 0x25893e0 size 0x1a4 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::MatchmakingEnqueueResult> Enqueue(::StringW pool, Oculus::Platform::Oculus__Platform__Matchmaking__CustomQuery customQueryData) ;

/// @brief Method Enqueue2 addr 0x2589584 size 0x1b0 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::MatchmakingEnqueueResult> Enqueue2(::StringW pool, Oculus::Platform::MatchmakingOptions matchmakingOptions) ;

/// @brief Method EnqueueRoom addr 0x2589734 size 0x1a4 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::MatchmakingEnqueueResult> EnqueueRoom(uint64_t roomID, Oculus::Platform::Oculus__Platform__Matchmaking__CustomQuery customQueryData) ;

/// @brief Method EnqueueRoom2 addr 0x25898d8 size 0x1b0 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::MatchmakingEnqueueResult> EnqueueRoom2(uint64_t roomID, Oculus::Platform::MatchmakingOptions matchmakingOptions) ;

/// @brief Method GetAdminSnapshot addr 0x2589a88 size 0x158 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::MatchmakingAdminSnapshot> GetAdminSnapshot() ;

/// @brief Method JoinRoom addr 0x2589be0 size 0x170 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::Room> JoinRoom(uint64_t roomID, bool subscribeToUpdates) ;

/// @brief Method StartMatch addr 0x2589d50 size 0x14c virtual false final false
static Oculus::Platform::Request StartMatch(uint64_t roomID) ;

/// @brief Method SetMatchFoundNotificationCallback addr 0x2589e9c size 0x74 virtual false final false
static void SetMatchFoundNotificationCallback(Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::Room> callback) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::Matchmaking);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Matchmaking, "Oculus.Platform", "Matchmaking");
NEED_NO_BOX(Oculus::Platform::Oculus__Platform__Matchmaking__CustomQuery);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Oculus__Platform__Matchmaking__CustomQuery, "Oculus.Platform", "Matchmaking/CustomQuery");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Oculus__Platform__Matchmaking__CustomQuery__Criterion, "Oculus.Platform", "Matchmaking/CustomQuery/Criterion");
