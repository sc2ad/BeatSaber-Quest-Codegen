#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class IPlatformUserModel;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class PlatformUserAuthTokenData;
}
namespace GlobalNamespace {
class XPlatformAccessTokenData;
}
namespace GlobalNamespace {
class UserInfo;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
class TestPlatformUserModel;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__TestPlatformUserModel___GetUserAuthToken_d__5;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__TestPlatformUserModel___GetUserFriendsUserIds_d__4;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__TestPlatformUserModel___GetUserInfo_d__3;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__TestPlatformUserModel___GetUserNamesForUserIds_d__6;
}
// Type: ::<GetUserInfo>d__3
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4706))
// CS Name: TestPlatformUserModel::<GetUserInfo>d__3
struct CORDL_TYPE ____GlobalNamespace__TestPlatformUserModel___GetUserInfo_d__3 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo>", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__TestPlatformUserModel___GetUserInfo_d__3(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo> __t__builder, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo> __u__1) noexcept;


                    constexpr ____GlobalNamespace__TestPlatformUserModel___GetUserInfo_d__3(____GlobalNamespace__TestPlatformUserModel___GetUserInfo_d__3 const&) = default;
                    constexpr ____GlobalNamespace__TestPlatformUserModel___GetUserInfo_d__3(____GlobalNamespace__TestPlatformUserModel___GetUserInfo_d__3&&) = default;
                    constexpr ____GlobalNamespace__TestPlatformUserModel___GetUserInfo_d__3& operator=(____GlobalNamespace__TestPlatformUserModel___GetUserInfo_d__3 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__TestPlatformUserModel___GetUserInfo_d__3& operator=(____GlobalNamespace__TestPlatformUserModel___GetUserInfo_d__3&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__TestPlatformUserModel___GetUserInfo_d__3(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo> value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::UserInfo> __get___t__builder() const;

 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo> value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x221eee4 size 0x280 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x221f164 size 0x58 virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetUserFriendsUserIds>d__4
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4707))
// CS Name: TestPlatformUserModel::<GetUserFriendsUserIds>d__4
struct CORDL_TYPE ____GlobalNamespace__TestPlatformUserModel___GetUserFriendsUserIds_d__4 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>>", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__TestPlatformUserModel___GetUserFriendsUserIds_d__4(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>> __t__builder, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>> __u__1) noexcept;


                    constexpr ____GlobalNamespace__TestPlatformUserModel___GetUserFriendsUserIds_d__4(____GlobalNamespace__TestPlatformUserModel___GetUserFriendsUserIds_d__4 const&) = default;
                    constexpr ____GlobalNamespace__TestPlatformUserModel___GetUserFriendsUserIds_d__4(____GlobalNamespace__TestPlatformUserModel___GetUserFriendsUserIds_d__4&&) = default;
                    constexpr ____GlobalNamespace__TestPlatformUserModel___GetUserFriendsUserIds_d__4& operator=(____GlobalNamespace__TestPlatformUserModel___GetUserFriendsUserIds_d__4 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__TestPlatformUserModel___GetUserFriendsUserIds_d__4& operator=(____GlobalNamespace__TestPlatformUserModel___GetUserFriendsUserIds_d__4&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__TestPlatformUserModel___GetUserFriendsUserIds_d__4(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>> value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>> __get___t__builder() const;

 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>> value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x221f1bc size 0x290 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x221f44c size 0x58 virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetUserAuthToken>d__5
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4708))
// CS Name: TestPlatformUserModel::<GetUserAuthToken>d__5
struct CORDL_TYPE ____GlobalNamespace__TestPlatformUserModel___GetUserAuthToken_d__5 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::PlatformUserAuthTokenData>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlatformUserAuthTokenData>", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__TestPlatformUserModel___GetUserAuthToken_d__5(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::PlatformUserAuthTokenData> __t__builder, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlatformUserAuthTokenData> __u__1) noexcept;


                    constexpr ____GlobalNamespace__TestPlatformUserModel___GetUserAuthToken_d__5(____GlobalNamespace__TestPlatformUserModel___GetUserAuthToken_d__5 const&) = default;
                    constexpr ____GlobalNamespace__TestPlatformUserModel___GetUserAuthToken_d__5(____GlobalNamespace__TestPlatformUserModel___GetUserAuthToken_d__5&&) = default;
                    constexpr ____GlobalNamespace__TestPlatformUserModel___GetUserAuthToken_d__5& operator=(____GlobalNamespace__TestPlatformUserModel___GetUserAuthToken_d__5 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__TestPlatformUserModel___GetUserAuthToken_d__5& operator=(____GlobalNamespace__TestPlatformUserModel___GetUserAuthToken_d__5&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__TestPlatformUserModel___GetUserAuthToken_d__5(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::PlatformUserAuthTokenData> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::PlatformUserAuthTokenData> value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::PlatformUserAuthTokenData> __get___t__builder() const;

 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlatformUserAuthTokenData> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlatformUserAuthTokenData> value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlatformUserAuthTokenData> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x221f4a4 size 0x268 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x221f70c size 0x58 virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetUserNamesForUserIds>d__6
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4709))
// CS Name: TestPlatformUserModel::<GetUserNamesForUserIds>d__6
struct CORDL_TYPE ____GlobalNamespace__TestPlatformUserModel___GetUserNamesForUserIds_d__6 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>>", modifiers: "", def_value: None }, CppParam { name: "userIds", ty: "::System::Collections::Generic::IReadOnlyList_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>>", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__TestPlatformUserModel___GetUserNamesForUserIds_d__6(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>> __t__builder, ::System::Collections::Generic::IReadOnlyList_1<::StringW> userIds, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>> __u__1) noexcept;


                    constexpr ____GlobalNamespace__TestPlatformUserModel___GetUserNamesForUserIds_d__6(____GlobalNamespace__TestPlatformUserModel___GetUserNamesForUserIds_d__6 const&) = default;
                    constexpr ____GlobalNamespace__TestPlatformUserModel___GetUserNamesForUserIds_d__6(____GlobalNamespace__TestPlatformUserModel___GetUserNamesForUserIds_d__6&&) = default;
                    constexpr ____GlobalNamespace__TestPlatformUserModel___GetUserNamesForUserIds_d__6& operator=(____GlobalNamespace__TestPlatformUserModel___GetUserNamesForUserIds_d__6 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__TestPlatformUserModel___GetUserNamesForUserIds_d__6& operator=(____GlobalNamespace__TestPlatformUserModel___GetUserNamesForUserIds_d__6&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__TestPlatformUserModel___GetUserNamesForUserIds_d__6(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>> value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>> __get___t__builder() const;

 ::System::Collections::Generic::IReadOnlyList_1<::StringW> __declspec(property(get=__get_userIds, put=__set_userIds))  userIds;

constexpr void __set_userIds(::System::Collections::Generic::IReadOnlyList_1<::StringW> value) ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::StringW> __get_userIds() const;

 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>> value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x221f764 size 0x210 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x221f974 size 0x58 virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TestPlatformUserModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4710))
// CS Name: TestPlatformUserModel
class CORDL_TYPE TestPlatformUserModel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _GetUserNamesForUserIds_d__6 = ::GlobalNamespace::____GlobalNamespace__TestPlatformUserModel___GetUserNamesForUserIds_d__6;

using _GetUserAuthToken_d__5 = ::GlobalNamespace::____GlobalNamespace__TestPlatformUserModel___GetUserAuthToken_d__5;

using _GetUserFriendsUserIds_d__4 = ::GlobalNamespace::____GlobalNamespace__TestPlatformUserModel___GetUserFriendsUserIds_d__4;

using _GetUserInfo_d__3 = ::GlobalNamespace::____GlobalNamespace__TestPlatformUserModel___GetUserInfo_d__3;

/// @brief Convert operator to ::GlobalNamespace::IPlatformUserModel
constexpr operator  ::GlobalNamespace::IPlatformUserModel() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TestPlatformUserModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "TestPlatformUserModel", modifiers: " const&", def_value: None }]
constexpr TestPlatformUserModel(TestPlatformUserModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TestPlatformUserModel", modifiers: "&&", def_value: None }]
constexpr TestPlatformUserModel(TestPlatformUserModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TestPlatformUserModel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TestPlatformUserModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TestPlatformUserModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TestPlatformUserModel& operator=(TestPlatformUserModel&& o) noexcept = default;
  constexpr TestPlatformUserModel& operator=(TestPlatformUserModel const& o) noexcept = default;
                


// Fields

 ::System::Action_1<::GlobalNamespace::UserInfo> __declspec(property(get=__get_platformUserInfoDidChangeEvent, put=__set_platformUserInfoDidChangeEvent))  platformUserInfoDidChangeEvent;

constexpr void __set_platformUserInfoDidChangeEvent(::System::Action_1<::GlobalNamespace::UserInfo> value) ;

constexpr ::System::Action_1<::GlobalNamespace::UserInfo> __get_platformUserInfoDidChangeEvent() const;


// Methods

/// @brief Method add_platformUserInfoDidChangeEvent addr 0x221e92c size 0xb0 virtual true final true
 void add_platformUserInfoDidChangeEvent(::System::Action_1<::GlobalNamespace::UserInfo> value) ;

/// @brief Method remove_platformUserInfoDidChangeEvent addr 0x221e9dc size 0xb0 virtual true final true
 void remove_platformUserInfoDidChangeEvent(::System::Action_1<::GlobalNamespace::UserInfo> value) ;

/// @brief Method GetUserInfo addr 0x221ea8c size 0xe4 virtual true final true
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo> GetUserInfo() ;

/// @brief Method GetUserFriendsUserIds addr 0x221eb70 size 0xe4 virtual true final true
 ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>> GetUserFriendsUserIds(bool cached) ;

/// @brief Method GetUserAuthToken addr 0x221ec54 size 0xe4 virtual true final true
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::PlatformUserAuthTokenData> GetUserAuthToken() ;

/// @brief Method GetUserNamesForUserIds addr 0x221ed38 size 0xf0 virtual true final true
 ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>> GetUserNamesForUserIds(::System::Collections::Generic::IReadOnlyList_1<::StringW> userIds) ;

/// @brief Method RequestXPlatformAccessToken addr 0x221ee28 size 0xb4 virtual true final true
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData> RequestXPlatformAccessToken(::System::Threading::CancellationToken cancellationToken) ;

// Ctor Parameters []
explicit TestPlatformUserModel() ;

/// @brief Method .ctor addr 0x221eedc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::TestPlatformUserModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TestPlatformUserModel, "", "TestPlatformUserModel");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__TestPlatformUserModel___GetUserAuthToken_d__5, "", "TestPlatformUserModel/<GetUserAuthToken>d__5");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__TestPlatformUserModel___GetUserFriendsUserIds_d__4, "", "TestPlatformUserModel/<GetUserFriendsUserIds>d__4");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__TestPlatformUserModel___GetUserInfo_d__3, "", "TestPlatformUserModel/<GetUserInfo>d__3");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__TestPlatformUserModel___GetUserNamesForUserIds_d__6, "", "TestPlatformUserModel/<GetUserNamesForUserIds>d__6");
