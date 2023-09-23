#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class IExperimentData;
}
namespace GlobalNamespace {
class IExperimentModel;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__OculusTestExperiment__ExperimentData;
}
namespace GlobalNamespace {
class OculusTestExperiment;
}
namespace GlobalNamespace {
struct GlobalNamespace__OculusTestExperiment___Init_d__3;
}
// Type: ::ExperimentData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4216))
// CS Name: OculusTestExperiment::ExperimentData
class CORDL_TYPE GlobalNamespace__OculusTestExperiment__ExperimentData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IExperimentData
constexpr operator  GlobalNamespace::IExperimentData() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__OculusTestExperiment__ExperimentData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OculusTestExperiment__ExperimentData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OculusTestExperiment__ExperimentData(GlobalNamespace__OculusTestExperiment__ExperimentData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OculusTestExperiment__ExperimentData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OculusTestExperiment__ExperimentData(GlobalNamespace__OculusTestExperiment__ExperimentData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OculusTestExperiment__ExperimentData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OculusTestExperiment__ExperimentData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OculusTestExperiment__ExperimentData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OculusTestExperiment__ExperimentData& operator=(GlobalNamespace__OculusTestExperiment__ExperimentData&& o) noexcept = default;
  constexpr GlobalNamespace__OculusTestExperiment__ExperimentData& operator=(GlobalNamespace__OculusTestExperiment__ExperimentData const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__experimentPlatformKey, put=__set__experimentPlatformKey))  _experimentPlatformKey;

constexpr void __set__experimentPlatformKey(::StringW value) ;

constexpr ::StringW __get__experimentPlatformKey() const;


// Properties

 ::StringW __declspec(property(get=get_experimentPlatformKey))  experimentPlatformKey;


// Methods

/// @brief Method get_experimentPlatformKey addr 0x21bf954 size 0x8 virtual true final true
 ::StringW get_experimentPlatformKey() ;

// Ctor Parameters [CppParam { name: "experimentPlatformKey", ty: "::StringW", modifiers: "", def_value: None }]
explicit GlobalNamespace__OculusTestExperiment__ExperimentData(::StringW experimentPlatformKey) ;

/// @brief Method .ctor addr 0x21bf95c size 0x28 virtual false final false
 void _ctor(::StringW experimentPlatformKey) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<Init>d__3
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4217))
// CS Name: OculusTestExperiment::<Init>d__3
struct CORDL_TYPE GlobalNamespace__OculusTestExperiment___Init_d__3 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::OculusTestExperiment", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OculusTestExperiment___Init_d__3(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, GlobalNamespace::OculusTestExperiment __4__this, System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;


                    constexpr GlobalNamespace__OculusTestExperiment___Init_d__3(GlobalNamespace__OculusTestExperiment___Init_d__3 const&) = default;
                    constexpr GlobalNamespace__OculusTestExperiment___Init_d__3(GlobalNamespace__OculusTestExperiment___Init_d__3&&) = default;
                    constexpr GlobalNamespace__OculusTestExperiment___Init_d__3& operator=(GlobalNamespace__OculusTestExperiment___Init_d__3 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OculusTestExperiment___Init_d__3& operator=(GlobalNamespace__OculusTestExperiment___Init_d__3&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OculusTestExperiment___Init_d__3(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 GlobalNamespace::OculusTestExperiment __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::OculusTestExperiment value) ;

constexpr GlobalNamespace::OculusTestExperiment __get___4__this() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<bool> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<bool> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<bool> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21bf984 size 0x470 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21bfdf4 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OculusTestExperiment
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4218))
// CS Name: OculusTestExperiment
class CORDL_TYPE OculusTestExperiment : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _Init_d__3 = GlobalNamespace::GlobalNamespace__OculusTestExperiment___Init_d__3;

using ExperimentData = GlobalNamespace::GlobalNamespace__OculusTestExperiment__ExperimentData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~OculusTestExperiment() = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusTestExperiment", modifiers: " const&", def_value: None }]
constexpr OculusTestExperiment(OculusTestExperiment const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusTestExperiment", modifiers: "&&", def_value: None }]
constexpr OculusTestExperiment(OculusTestExperiment&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OculusTestExperiment(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OculusTestExperiment& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OculusTestExperiment& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OculusTestExperiment& operator=(OculusTestExperiment&& o) noexcept = default;
  constexpr OculusTestExperiment& operator=(OculusTestExperiment const& o) noexcept = default;
                


// Fields

/// @brief Field kIsInTest1Key offset 0
static constexpr ::ConstString  kIsInTest1Key{u"beatsaber_experiments:test_parameter"};

 GlobalNamespace::IExperimentModel __declspec(property(get=__get__experimentModel, put=__set__experimentModel))  _experimentModel;

constexpr void __set__experimentModel(GlobalNamespace::IExperimentModel value) ;

constexpr GlobalNamespace::IExperimentModel __get__experimentModel() const;


// Methods

/// @brief Method Init addr 0x21bf8b8 size 0x94 virtual false final false
 void Init() ;

// Ctor Parameters []
explicit OculusTestExperiment() ;

/// @brief Method .ctor addr 0x21bf94c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OculusTestExperiment__ExperimentData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OculusTestExperiment__ExperimentData, "", "OculusTestExperiment/ExperimentData");
NEED_NO_BOX(GlobalNamespace::OculusTestExperiment);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusTestExperiment, "", "OculusTestExperiment");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OculusTestExperiment___Init_d__3, "", "OculusTestExperiment/<Init>d__3");
