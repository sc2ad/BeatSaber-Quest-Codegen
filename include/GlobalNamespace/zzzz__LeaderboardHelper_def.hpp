#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class LeaderboardIdsModelSO;
}
namespace GlobalNamespace {
class BeatmapLevelCollectionSO;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Net::Http {
class HttpRequestMessage;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Net::Http {
class HttpResponseMessage;
}
namespace System::Net::Http {
class HttpClient;
}
// Forward declare root types
namespace GlobalNamespace {
class LeaderboardHelper;
}
namespace GlobalNamespace {
struct GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2;
}
// Type: ::<CreateOculusLeaderboard>d__2
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5936))
// CS Name: LeaderboardHelper::<CreateOculusLeaderboard>d__2
struct CORDL_TYPE GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "leaderboardID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "appToken", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_httpClient_5__2", ty: "System::Net::Http::HttpClient", modifiers: "", def_value: None }, CppParam { name: "_request_5__3", ty: "System::Net::Http::HttpRequestMessage", modifiers: "", def_value: None }, CppParam { name: "_contentList_5__4", ty: "System::Collections::Generic::List_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::Http::HttpResponseMessage>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::StringW leaderboardID, ::StringW appToken, System::Net::Http::HttpClient _httpClient_5__2, System::Net::Http::HttpRequestMessage _request_5__3, System::Collections::Generic::List_1<::StringW> _contentList_5__4, System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::Http::HttpResponseMessage> __u__1) noexcept;


                    constexpr GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2(GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2 const&) = default;
                    constexpr GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2(GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2&&) = default;
                    constexpr GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2& operator=(GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2& operator=(GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x58};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncVoidMethodBuilder __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncVoidMethodBuilder value) ;

constexpr System::Runtime::CompilerServices::AsyncVoidMethodBuilder __get___t__builder() const;

 ::StringW __declspec(property(get=__get_leaderboardID, put=__set_leaderboardID))  leaderboardID;

constexpr void __set_leaderboardID(::StringW value) ;

constexpr ::StringW __get_leaderboardID() const;

 ::StringW __declspec(property(get=__get_appToken, put=__set_appToken))  appToken;

constexpr void __set_appToken(::StringW value) ;

constexpr ::StringW __get_appToken() const;

 System::Net::Http::HttpClient __declspec(property(get=__get__httpClient_5__2, put=__set__httpClient_5__2))  _httpClient_5__2;

constexpr void __set__httpClient_5__2(System::Net::Http::HttpClient value) ;

constexpr System::Net::Http::HttpClient __get__httpClient_5__2() const;

 System::Net::Http::HttpRequestMessage __declspec(property(get=__get__request_5__3, put=__set__request_5__3))  _request_5__3;

constexpr void __set__request_5__3(System::Net::Http::HttpRequestMessage value) ;

constexpr System::Net::Http::HttpRequestMessage __get__request_5__3() const;

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get__contentList_5__4, put=__set__contentList_5__4))  _contentList_5__4;

constexpr void __set__contentList_5__4(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get__contentList_5__4() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::Http::HttpResponseMessage> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::Http::HttpResponseMessage> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::Http::HttpResponseMessage> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x219965c size 0xb48 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x219a1a4 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LeaderboardHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5937))
// CS Name: LeaderboardHelper
class CORDL_TYPE LeaderboardHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _CreateOculusLeaderboard_d__2 = GlobalNamespace::GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~LeaderboardHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "LeaderboardHelper", modifiers: " const&", def_value: None }]
constexpr LeaderboardHelper(LeaderboardHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LeaderboardHelper", modifiers: "&&", def_value: None }]
constexpr LeaderboardHelper(LeaderboardHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LeaderboardHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LeaderboardHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LeaderboardHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LeaderboardHelper& operator=(LeaderboardHelper&& o) noexcept = default;
  constexpr LeaderboardHelper& operator=(LeaderboardHelper const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get__leaderboardIds, put=__set__leaderboardIds))  _leaderboardIds;

constexpr void __set__leaderboardIds(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get__leaderboardIds() const;


// Methods

/// @brief Method CreateOculusLeaderboards addr 0x21986bc size 0xe7c virtual false final false
 void CreateOculusLeaderboards(GlobalNamespace::LeaderboardIdsModelSO leaderboardIdsModel, GlobalNamespace::BeatmapLevelCollectionSO _levelCollection, bool debug, ::StringW appToken) ;

/// @brief Method CreateOculusLeaderboard addr 0x2199538 size 0xa4 virtual false final false
 void CreateOculusLeaderboard(::StringW leaderboardID, ::StringW appToken) ;

// Ctor Parameters []
explicit LeaderboardHelper() ;

/// @brief Method .ctor addr 0x21995dc size 0x80 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LeaderboardHelper);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LeaderboardHelper, "", "LeaderboardHelper");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LeaderboardHelper___CreateOculusLeaderboard_d__2, "", "LeaderboardHelper/<CreateOculusLeaderboard>d__2");
