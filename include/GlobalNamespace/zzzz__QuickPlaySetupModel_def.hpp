#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class QuickPlaySetupData;
}
namespace System::Net::Http {
class HttpClient;
}
namespace GlobalNamespace {
class INetworkConfig;
}
namespace GlobalNamespace {
class GlobalNamespace__QuickPlaySetupModel__QuickPlaySetupDataFB;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
class IQuickPlaySetupModel;
}
namespace System {
struct DateTime;
}
namespace GlobalNamespace {
struct GlobalNamespace__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System {
class UriBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__QuickPlaySetupModel__QuickPlaySetupDataFB;
}
namespace GlobalNamespace {
class QuickPlaySetupModel;
}
namespace GlobalNamespace {
struct GlobalNamespace__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10;
}
// Type: ::QuickPlaySetupDataFB
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4490))
// CS Name: QuickPlaySetupModel::QuickPlaySetupDataFB
class CORDL_TYPE GlobalNamespace__QuickPlaySetupModel__QuickPlaySetupDataFB : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__QuickPlaySetupModel__QuickPlaySetupDataFB() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__QuickPlaySetupModel__QuickPlaySetupDataFB", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__QuickPlaySetupModel__QuickPlaySetupDataFB(GlobalNamespace__QuickPlaySetupModel__QuickPlaySetupDataFB const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__QuickPlaySetupModel__QuickPlaySetupDataFB", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__QuickPlaySetupModel__QuickPlaySetupDataFB(GlobalNamespace__QuickPlaySetupModel__QuickPlaySetupDataFB&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__QuickPlaySetupModel__QuickPlaySetupDataFB(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__QuickPlaySetupModel__QuickPlaySetupDataFB& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__QuickPlaySetupModel__QuickPlaySetupDataFB& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__QuickPlaySetupModel__QuickPlaySetupDataFB& operator=(GlobalNamespace__QuickPlaySetupModel__QuickPlaySetupDataFB&& o) noexcept = default;
  constexpr GlobalNamespace__QuickPlaySetupModel__QuickPlaySetupDataFB& operator=(GlobalNamespace__QuickPlaySetupModel__QuickPlaySetupDataFB const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::QuickPlaySetupData> __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(::ArrayW<GlobalNamespace::QuickPlaySetupData> value) ;

constexpr ::ArrayW<GlobalNamespace::QuickPlaySetupData> __get_data() const;


// Methods

static GlobalNamespace::GlobalNamespace__QuickPlaySetupModel__QuickPlaySetupDataFB New_ctor() ;

/// @brief Method .ctor addr 0x21f2408 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetQuickPlaySetupInternal>d__10
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4491))
// CS Name: QuickPlaySetupModel::<GetQuickPlaySetupInternal>d__10
struct CORDL_TYPE GlobalNamespace__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::QuickPlaySetupData>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::QuickPlaySetupModel", modifiers: "", def_value: None }, CppParam { name: "_uriBuilder_5__2", ty: "System::UriBuilder", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::QuickPlaySetupData> __t__builder, GlobalNamespace::QuickPlaySetupModel __4__this, System::UriBuilder _uriBuilder_5__2, System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1) noexcept;


                    constexpr GlobalNamespace__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10(GlobalNamespace__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10 const&) = default;
                    constexpr GlobalNamespace__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10(GlobalNamespace__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10&&) = default;
                    constexpr GlobalNamespace__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10& operator=(GlobalNamespace__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10& operator=(GlobalNamespace__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::QuickPlaySetupData> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::QuickPlaySetupData> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::QuickPlaySetupData> __get___t__builder() const;

 GlobalNamespace::QuickPlaySetupModel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::QuickPlaySetupModel value) ;

constexpr GlobalNamespace::QuickPlaySetupModel __get___4__this() const;

 System::UriBuilder __declspec(property(get=__get__uriBuilder_5__2, put=__set__uriBuilder_5__2))  _uriBuilder_5__2;

constexpr void __set__uriBuilder_5__2(System::UriBuilder value) ;

constexpr System::UriBuilder __get__uriBuilder_5__2() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21f2410 size 0x7fc virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21f2c0c size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::QuickPlaySetupModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4492))
// CS Name: QuickPlaySetupModel
class CORDL_TYPE QuickPlaySetupModel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _GetQuickPlaySetupInternal_d__10 = GlobalNamespace::GlobalNamespace__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10;

using QuickPlaySetupDataFB = GlobalNamespace::GlobalNamespace__QuickPlaySetupModel__QuickPlaySetupDataFB;

/// @brief Convert operator to GlobalNamespace::IQuickPlaySetupModel
constexpr operator  GlobalNamespace::IQuickPlaySetupModel() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~QuickPlaySetupModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "QuickPlaySetupModel", modifiers: " const&", def_value: None }]
constexpr QuickPlaySetupModel(QuickPlaySetupModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "QuickPlaySetupModel", modifiers: "&&", def_value: None }]
constexpr QuickPlaySetupModel(QuickPlaySetupModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit QuickPlaySetupModel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr QuickPlaySetupModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr QuickPlaySetupModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr QuickPlaySetupModel& operator=(QuickPlaySetupModel&& o) noexcept = default;
  constexpr QuickPlaySetupModel& operator=(QuickPlaySetupModel const& o) noexcept = default;
                


// Fields

 GlobalNamespace::INetworkConfig __declspec(property(get=__get__networkConfig, put=__set__networkConfig))  _networkConfig;

constexpr void __set__networkConfig(GlobalNamespace::INetworkConfig value) ;

constexpr GlobalNamespace::INetworkConfig __get__networkConfig() const;

 System::Net::Http::HttpClient __declspec(property(get=__get__client, put=__set__client))  _client;

constexpr void __set__client(System::Net::Http::HttpClient value) ;

constexpr System::Net::Http::HttpClient __get__client() const;

/// @brief Field kRequestCacheTimeoutMinutes offset 0
static constexpr int32_t  kRequestCacheTimeoutMinutes{5};

/// @brief Field kRequestTimeoutSeconds offset 0
static constexpr int32_t  kRequestTimeoutSeconds{60};

 System::Threading::Tasks::Task_1<GlobalNamespace::QuickPlaySetupData> __declspec(property(get=__get__request, put=__set__request))  _request;

constexpr void __set__request(System::Threading::Tasks::Task_1<GlobalNamespace::QuickPlaySetupData> value) ;

constexpr System::Threading::Tasks::Task_1<GlobalNamespace::QuickPlaySetupData> __get__request() const;

 System::DateTime __declspec(property(get=__get__lastRequestTime, put=__set__lastRequestTime))  _lastRequestTime;

constexpr void __set__lastRequestTime(System::DateTime value) ;

constexpr System::DateTime __get__lastRequestTime() const;


// Methods

/// @brief Method GetQuickPlaySetupAsync addr 0x21f2088 size 0x64 virtual true final true
 System::Threading::Tasks::Task_1<GlobalNamespace::QuickPlaySetupData> GetQuickPlaySetupAsync(System::Threading::CancellationToken cancellationToken) ;

/// @brief Method Init addr 0x21f224c size 0x4 virtual false final false
 void Init() ;

/// @brief Method StartRequest addr 0x21f21e4 size 0x68 virtual false final false
 void StartRequest() ;

/// @brief Method GetQuickPlaySetupInternal addr 0x21f2250 size 0xf4 virtual false final false
 System::Threading::Tasks::Task_1<GlobalNamespace::QuickPlaySetupData> GetQuickPlaySetupInternal() ;

/// @brief Method IsQuickPlaySetupTaskValid addr 0x21f20ec size 0xf8 virtual false final false
 bool IsQuickPlaySetupTaskValid() ;

/// @brief Method IsUrlValid addr 0x21f2344 size 0x5c virtual false final false
 bool IsUrlValid(::StringW url) ;

static GlobalNamespace::QuickPlaySetupModel New_ctor() ;

/// @brief Method .ctor addr 0x21f23a0 size 0x68 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__QuickPlaySetupModel__QuickPlaySetupDataFB);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__QuickPlaySetupModel__QuickPlaySetupDataFB, "", "QuickPlaySetupModel/QuickPlaySetupDataFB");
NEED_NO_BOX(GlobalNamespace::QuickPlaySetupModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::QuickPlaySetupModel, "", "QuickPlaySetupModel");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10, "", "QuickPlaySetupModel/<GetQuickPlaySetupInternal>d__10");
