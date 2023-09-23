#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class MultiplayerStatusData;
}
namespace GlobalNamespace {
class IMultiplayerStatusModel;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
class INetworkConfig;
}
namespace System::Net::Http {
class HttpClient;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System {
class UriBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerStatusModel__MultiplayerStatusDataFB;
}
namespace GlobalNamespace {
class MultiplayerStatusModel;
}
namespace GlobalNamespace {
struct GlobalNamespace__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9;
}
// Type: ::MultiplayerStatusDataFB
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4482))
// CS Name: MultiplayerStatusModel::MultiplayerStatusDataFB
class CORDL_TYPE GlobalNamespace__MultiplayerStatusModel__MultiplayerStatusDataFB : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__MultiplayerStatusModel__MultiplayerStatusDataFB() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerStatusModel__MultiplayerStatusDataFB", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MultiplayerStatusModel__MultiplayerStatusDataFB(GlobalNamespace__MultiplayerStatusModel__MultiplayerStatusDataFB const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerStatusModel__MultiplayerStatusDataFB", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MultiplayerStatusModel__MultiplayerStatusDataFB(GlobalNamespace__MultiplayerStatusModel__MultiplayerStatusDataFB&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerStatusModel__MultiplayerStatusDataFB(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MultiplayerStatusModel__MultiplayerStatusDataFB& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerStatusModel__MultiplayerStatusDataFB& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerStatusModel__MultiplayerStatusDataFB& operator=(GlobalNamespace__MultiplayerStatusModel__MultiplayerStatusDataFB&& o) noexcept = default;
  constexpr GlobalNamespace__MultiplayerStatusModel__MultiplayerStatusDataFB& operator=(GlobalNamespace__MultiplayerStatusModel__MultiplayerStatusDataFB const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::MultiplayerStatusData> __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(::ArrayW<GlobalNamespace::MultiplayerStatusData> value) ;

constexpr ::ArrayW<GlobalNamespace::MultiplayerStatusData> __get_data() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__MultiplayerStatusModel__MultiplayerStatusDataFB() ;

/// @brief Method .ctor addr 0x21f15e4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetMultiplayerStatusAsyncInternal>d__9
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4483))
// CS Name: MultiplayerStatusModel::<GetMultiplayerStatusAsyncInternal>d__9
struct CORDL_TYPE GlobalNamespace__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::MultiplayerStatusData>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::MultiplayerStatusModel", modifiers: "", def_value: None }, CppParam { name: "_uriBuilder_5__2", ty: "System::UriBuilder", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::MultiplayerStatusData> __t__builder, GlobalNamespace::MultiplayerStatusModel __4__this, System::UriBuilder _uriBuilder_5__2, System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1) noexcept;


                    constexpr GlobalNamespace__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9(GlobalNamespace__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9 const&) = default;
                    constexpr GlobalNamespace__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9(GlobalNamespace__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9&&) = default;
                    constexpr GlobalNamespace__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9& operator=(GlobalNamespace__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9& operator=(GlobalNamespace__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::MultiplayerStatusData> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::MultiplayerStatusData> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::MultiplayerStatusData> __get___t__builder() const;

 GlobalNamespace::MultiplayerStatusModel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::MultiplayerStatusModel value) ;

constexpr GlobalNamespace::MultiplayerStatusModel __get___4__this() const;

 System::UriBuilder __declspec(property(get=__get__uriBuilder_5__2, put=__set__uriBuilder_5__2))  _uriBuilder_5__2;

constexpr void __set__uriBuilder_5__2(System::UriBuilder value) ;

constexpr System::UriBuilder __get__uriBuilder_5__2() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21f15ec size 0x864 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21f1e50 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MultiplayerStatusModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4484))
// CS Name: MultiplayerStatusModel
class CORDL_TYPE MultiplayerStatusModel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _GetMultiplayerStatusAsyncInternal_d__9 = GlobalNamespace::GlobalNamespace__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9;

using MultiplayerStatusDataFB = GlobalNamespace::GlobalNamespace__MultiplayerStatusModel__MultiplayerStatusDataFB;

/// @brief Convert operator to GlobalNamespace::IMultiplayerStatusModel
constexpr operator  GlobalNamespace::IMultiplayerStatusModel() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MultiplayerStatusModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerStatusModel", modifiers: " const&", def_value: None }]
constexpr MultiplayerStatusModel(MultiplayerStatusModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerStatusModel", modifiers: "&&", def_value: None }]
constexpr MultiplayerStatusModel(MultiplayerStatusModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerStatusModel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MultiplayerStatusModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerStatusModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerStatusModel& operator=(MultiplayerStatusModel&& o) noexcept = default;
  constexpr MultiplayerStatusModel& operator=(MultiplayerStatusModel const& o) noexcept = default;
                


// Fields

 GlobalNamespace::INetworkConfig __declspec(property(get=__get__networkConfig, put=__set__networkConfig))  _networkConfig;

constexpr void __set__networkConfig(GlobalNamespace::INetworkConfig value) ;

constexpr GlobalNamespace::INetworkConfig __get__networkConfig() const;

 System::Net::Http::HttpClient __declspec(property(get=__get__client, put=__set__client))  _client;

constexpr void __set__client(System::Net::Http::HttpClient value) ;

constexpr System::Net::Http::HttpClient __get__client() const;

/// @brief Field kRequestTimeoutSeconds offset 0
static constexpr int32_t  kRequestTimeoutSeconds{60};

 System::Threading::Tasks::Task_1<GlobalNamespace::MultiplayerStatusData> __declspec(property(get=__get__request, put=__set__request))  _request;

constexpr void __set__request(System::Threading::Tasks::Task_1<GlobalNamespace::MultiplayerStatusData> value) ;

constexpr System::Threading::Tasks::Task_1<GlobalNamespace::MultiplayerStatusData> __get__request() const;


// Methods

/// @brief Method Init addr 0x21f1390 size 0x18 virtual false final false
 void Init() ;

/// @brief Method GetMultiplayerStatusAsync addr 0x21f13c0 size 0x6c virtual true final true
 System::Threading::Tasks::Task_1<GlobalNamespace::MultiplayerStatusData> GetMultiplayerStatusAsync(System::Threading::CancellationToken cancellationToken) ;

/// @brief Method IsAvailabilityTaskValid addr 0x21f142c size 0x5c virtual false final false
 bool IsAvailabilityTaskValid() ;

/// @brief Method StartRequest addr 0x21f13a8 size 0x18 virtual false final false
 void StartRequest() ;

/// @brief Method GetMultiplayerStatusAsyncInternal addr 0x21f1488 size 0xf4 virtual false final false
 System::Threading::Tasks::Task_1<GlobalNamespace::MultiplayerStatusData> GetMultiplayerStatusAsyncInternal() ;

// Ctor Parameters []
explicit MultiplayerStatusModel() ;

/// @brief Method .ctor addr 0x21f157c size 0x68 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MultiplayerStatusModel__MultiplayerStatusDataFB);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerStatusModel__MultiplayerStatusDataFB, "", "MultiplayerStatusModel/MultiplayerStatusDataFB");
NEED_NO_BOX(GlobalNamespace::MultiplayerStatusModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerStatusModel, "", "MultiplayerStatusModel");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9, "", "MultiplayerStatusModel/<GetMultiplayerStatusAsyncInternal>d__9");
