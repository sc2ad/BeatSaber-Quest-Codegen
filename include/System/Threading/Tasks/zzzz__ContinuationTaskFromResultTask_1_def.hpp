#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Threading::Tasks {
struct TaskCreationOptions;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class Delegate;
}
namespace System::Threading::Tasks {
struct InternalTaskOptions;
}
namespace BGNet::Core::GameLift {
struct GetMultiplayerInstanceResponse;
}
namespace GlobalNamespace {
struct AuthenticationToken;
}
namespace GlobalNamespace {
struct GetAssetBundleFileResult;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult;
}
namespace GlobalNamespace {
struct GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult;
}
namespace System {
struct Int32Enum;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System::Threading::Tasks {
struct VoidTaskResult;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5>
struct ValueTuple_5;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SceneInstance;
}
// Forward declare root types
namespace System::Threading::Tasks {
template<typename TAntecedentResult>
class ContinuationTaskFromResultTask_1;
}
namespace System::Threading::Tasks {
template<::cordl_internals::il2cpp_reference_type TAntecedentResult>
class ContinuationTaskFromResultTask_1<TAntecedentResult>;
}
namespace System::Threading::Tasks {
template<>
class ContinuationTaskFromResultTask_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>;
}
namespace System::Threading::Tasks {
template<>
class ContinuationTaskFromResultTask_1<GlobalNamespace::AuthenticationToken>;
}
namespace System::Threading::Tasks {
template<>
class ContinuationTaskFromResultTask_1<GlobalNamespace::GetAssetBundleFileResult>;
}
namespace System::Threading::Tasks {
template<>
class ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>;
}
namespace System::Threading::Tasks {
template<>
class ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>;
}
namespace System::Threading::Tasks {
template<>
class ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>;
}
namespace System::Threading::Tasks {
template<>
class ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>;
}
namespace System::Threading::Tasks {
template<>
class ContinuationTaskFromResultTask_1<System::Int32Enum>;
}
namespace System::Threading::Tasks {
template<>
class ContinuationTaskFromResultTask_1<System::Nullable_1<int32_t>>;
}
namespace System::Threading::Tasks {
template<>
class ContinuationTaskFromResultTask_1<System::Threading::Tasks::VoidTaskResult>;
}
namespace System::Threading::Tasks {
template<>
class ContinuationTaskFromResultTask_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>;
}
namespace System::Threading::Tasks {
template<>
class ContinuationTaskFromResultTask_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>;
}
namespace System::Threading::Tasks {
template<>
class ContinuationTaskFromResultTask_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>;
}
namespace System::Threading::Tasks {
template<>
class ContinuationTaskFromResultTask_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>;
}
namespace System::Threading::Tasks {
template<>
class ContinuationTaskFromResultTask_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>;
}
namespace System::Threading::Tasks {
template<>
class ContinuationTaskFromResultTask_1<bool>;
}
namespace System::Threading::Tasks {
template<>
class ContinuationTaskFromResultTask_1<int32_t>;
}
namespace System::Threading::Tasks {
template<>
class ContinuationTaskFromResultTask_1<int64_t>;
}
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
namespace System::Threading::Tasks {
// cpp template
template<::cordl_internals::il2cpp_reference_type TAntecedentResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2783)), TypeDefinitionIndex(TypeDefinitionIndex(2795))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2795), inst: 2 })
// CS Name: System.Threading.Tasks.ContinuationTaskFromResultTask`1
class CORDL_TYPE ContinuationTaskFromResultTask_1<TAntecedentResult> : public System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~ContinuationTaskFromResultTask_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: " const&", def_value: None }]
constexpr ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "&&", def_value: None }]
constexpr ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContinuationTaskFromResultTask_1(void* ptr) noexcept : System::Threading::Tasks::Task(ptr) {
}


  constexpr ContinuationTaskFromResultTask_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContinuationTaskFromResultTask_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContinuationTaskFromResultTask_1& operator=(ContinuationTaskFromResultTask_1&& o) noexcept = default;
  constexpr ContinuationTaskFromResultTask_1& operator=(ContinuationTaskFromResultTask_1 const& o) noexcept = default;
                


// Fields

 System::Threading::Tasks::Task_1<TAntecedentResult> __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent))  m_antecedent;

constexpr void __set_m_antecedent(System::Threading::Tasks::Task_1<TAntecedentResult> value) ;

constexpr System::Threading::Tasks::Task_1<TAntecedentResult> __get_m_antecedent() const;


// Methods

// Ctor Parameters [CppParam { name: "antecedent", ty: "System::Threading::Tasks::Task_1<TAntecedentResult>", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }]
explicit ContinuationTaskFromResultTask_1(System::Threading::Tasks::Task_1<TAntecedentResult> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Threading::Tasks::Task_1<TAntecedentResult> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void InnerInvoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2783)), TypeDefinitionIndex(TypeDefinitionIndex(2795))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2795), inst: 89 })
// CS Name: System.Threading.Tasks.ContinuationTaskFromResultTask`1
class CORDL_TYPE ContinuationTaskFromResultTask_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> : public System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~ContinuationTaskFromResultTask_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: " const&", def_value: None }]
constexpr ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "&&", def_value: None }]
constexpr ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContinuationTaskFromResultTask_1(void* ptr) noexcept : System::Threading::Tasks::Task(ptr) {
}


  constexpr ContinuationTaskFromResultTask_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContinuationTaskFromResultTask_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContinuationTaskFromResultTask_1& operator=(ContinuationTaskFromResultTask_1&& o) noexcept = default;
  constexpr ContinuationTaskFromResultTask_1& operator=(ContinuationTaskFromResultTask_1 const& o) noexcept = default;
                


// Fields

 System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent))  m_antecedent;

constexpr void __set_m_antecedent(System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> value) ;

constexpr System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> __get_m_antecedent() const;


// Methods

// Ctor Parameters [CppParam { name: "antecedent", ty: "System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }]
explicit ContinuationTaskFromResultTask_1(System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void InnerInvoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2795)), TypeDefinitionIndex(TypeDefinitionIndex(2783))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2795), inst: 92 })
// CS Name: System.Threading.Tasks.ContinuationTaskFromResultTask`1
class CORDL_TYPE ContinuationTaskFromResultTask_1<int32_t> : public System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~ContinuationTaskFromResultTask_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: " const&", def_value: None }]
constexpr ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "&&", def_value: None }]
constexpr ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContinuationTaskFromResultTask_1(void* ptr) noexcept : System::Threading::Tasks::Task(ptr) {
}


  constexpr ContinuationTaskFromResultTask_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContinuationTaskFromResultTask_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContinuationTaskFromResultTask_1& operator=(ContinuationTaskFromResultTask_1&& o) noexcept = default;
  constexpr ContinuationTaskFromResultTask_1& operator=(ContinuationTaskFromResultTask_1 const& o) noexcept = default;
                


// Fields

 System::Threading::Tasks::Task_1<int32_t> __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent))  m_antecedent;

constexpr void __set_m_antecedent(System::Threading::Tasks::Task_1<int32_t> value) ;

constexpr System::Threading::Tasks::Task_1<int32_t> __get_m_antecedent() const;


// Methods

// Ctor Parameters [CppParam { name: "antecedent", ty: "System::Threading::Tasks::Task_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }]
explicit ContinuationTaskFromResultTask_1(System::Threading::Tasks::Task_1<int32_t> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Threading::Tasks::Task_1<int32_t> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void InnerInvoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2795)), TypeDefinitionIndex(TypeDefinitionIndex(2783))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2795), inst: 96 })
// CS Name: System.Threading.Tasks.ContinuationTaskFromResultTask`1
class CORDL_TYPE ContinuationTaskFromResultTask_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> : public System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~ContinuationTaskFromResultTask_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: " const&", def_value: None }]
constexpr ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "&&", def_value: None }]
constexpr ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContinuationTaskFromResultTask_1(void* ptr) noexcept : System::Threading::Tasks::Task(ptr) {
}


  constexpr ContinuationTaskFromResultTask_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContinuationTaskFromResultTask_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContinuationTaskFromResultTask_1& operator=(ContinuationTaskFromResultTask_1&& o) noexcept = default;
  constexpr ContinuationTaskFromResultTask_1& operator=(ContinuationTaskFromResultTask_1 const& o) noexcept = default;
                


// Fields

 System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent))  m_antecedent;

constexpr void __set_m_antecedent(System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> value) ;

constexpr System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> __get_m_antecedent() const;


// Methods

// Ctor Parameters [CppParam { name: "antecedent", ty: "System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }]
explicit ContinuationTaskFromResultTask_1(System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void InnerInvoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2783)), TypeDefinitionIndex(TypeDefinitionIndex(2795))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2795), inst: 99 })
// CS Name: System.Threading.Tasks.ContinuationTaskFromResultTask`1
class CORDL_TYPE ContinuationTaskFromResultTask_1<bool> : public System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~ContinuationTaskFromResultTask_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: " const&", def_value: None }]
constexpr ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "&&", def_value: None }]
constexpr ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContinuationTaskFromResultTask_1(void* ptr) noexcept : System::Threading::Tasks::Task(ptr) {
}


  constexpr ContinuationTaskFromResultTask_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContinuationTaskFromResultTask_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContinuationTaskFromResultTask_1& operator=(ContinuationTaskFromResultTask_1&& o) noexcept = default;
  constexpr ContinuationTaskFromResultTask_1& operator=(ContinuationTaskFromResultTask_1 const& o) noexcept = default;
                


// Fields

 System::Threading::Tasks::Task_1<bool> __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent))  m_antecedent;

constexpr void __set_m_antecedent(System::Threading::Tasks::Task_1<bool> value) ;

constexpr System::Threading::Tasks::Task_1<bool> __get_m_antecedent() const;


// Methods

// Ctor Parameters [CppParam { name: "antecedent", ty: "System::Threading::Tasks::Task_1<bool>", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }]
explicit ContinuationTaskFromResultTask_1(System::Threading::Tasks::Task_1<bool> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Threading::Tasks::Task_1<bool> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void InnerInvoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2795)), TypeDefinitionIndex(TypeDefinitionIndex(2783))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2795), inst: 772 })
// CS Name: System.Threading.Tasks.ContinuationTaskFromResultTask`1
class CORDL_TYPE ContinuationTaskFromResultTask_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> : public System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~ContinuationTaskFromResultTask_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: " const&", def_value: None }]
constexpr ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "&&", def_value: None }]
constexpr ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContinuationTaskFromResultTask_1(void* ptr) noexcept : System::Threading::Tasks::Task(ptr) {
}


  constexpr ContinuationTaskFromResultTask_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContinuationTaskFromResultTask_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContinuationTaskFromResultTask_1& operator=(ContinuationTaskFromResultTask_1&& o) noexcept = default;
  constexpr ContinuationTaskFromResultTask_1& operator=(ContinuationTaskFromResultTask_1 const& o) noexcept = default;
                


// Fields

 System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent))  m_antecedent;

constexpr void __set_m_antecedent(System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> value) ;

constexpr System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> __get_m_antecedent() const;


// Methods

// Ctor Parameters [CppParam { name: "antecedent", ty: "System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }]
explicit ContinuationTaskFromResultTask_1(System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void InnerInvoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2795)), TypeDefinitionIndex(TypeDefinitionIndex(2783))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2795), inst: 830 })
// CS Name: System.Threading.Tasks.ContinuationTaskFromResultTask`1
class CORDL_TYPE ContinuationTaskFromResultTask_1<int64_t> : public System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~ContinuationTaskFromResultTask_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: " const&", def_value: None }]
constexpr ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "&&", def_value: None }]
constexpr ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContinuationTaskFromResultTask_1(void* ptr) noexcept : System::Threading::Tasks::Task(ptr) {
}


  constexpr ContinuationTaskFromResultTask_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContinuationTaskFromResultTask_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContinuationTaskFromResultTask_1& operator=(ContinuationTaskFromResultTask_1&& o) noexcept = default;
  constexpr ContinuationTaskFromResultTask_1& operator=(ContinuationTaskFromResultTask_1 const& o) noexcept = default;
                


// Fields

 System::Threading::Tasks::Task_1<int64_t> __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent))  m_antecedent;

constexpr void __set_m_antecedent(System::Threading::Tasks::Task_1<int64_t> value) ;

constexpr System::Threading::Tasks::Task_1<int64_t> __get_m_antecedent() const;


// Methods

// Ctor Parameters [CppParam { name: "antecedent", ty: "System::Threading::Tasks::Task_1<int64_t>", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }]
explicit ContinuationTaskFromResultTask_1(System::Threading::Tasks::Task_1<int64_t> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Threading::Tasks::Task_1<int64_t> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void InnerInvoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2783)), TypeDefinitionIndex(TypeDefinitionIndex(2795))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2795), inst: 841 })
// CS Name: System.Threading.Tasks.ContinuationTaskFromResultTask`1
class CORDL_TYPE ContinuationTaskFromResultTask_1<System::Nullable_1<int32_t>> : public System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~ContinuationTaskFromResultTask_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: " const&", def_value: None }]
constexpr ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "&&", def_value: None }]
constexpr ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContinuationTaskFromResultTask_1(void* ptr) noexcept : System::Threading::Tasks::Task(ptr) {
}


  constexpr ContinuationTaskFromResultTask_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContinuationTaskFromResultTask_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContinuationTaskFromResultTask_1& operator=(ContinuationTaskFromResultTask_1&& o) noexcept = default;
  constexpr ContinuationTaskFromResultTask_1& operator=(ContinuationTaskFromResultTask_1 const& o) noexcept = default;
                


// Fields

 System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>> __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent))  m_antecedent;

constexpr void __set_m_antecedent(System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>> value) ;

constexpr System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>> __get_m_antecedent() const;


// Methods

// Ctor Parameters [CppParam { name: "antecedent", ty: "System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>>", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }]
explicit ContinuationTaskFromResultTask_1(System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void InnerInvoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2783)), TypeDefinitionIndex(TypeDefinitionIndex(2795))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2795), inst: 847 })
// CS Name: System.Threading.Tasks.ContinuationTaskFromResultTask`1
class CORDL_TYPE ContinuationTaskFromResultTask_1<GlobalNamespace::AuthenticationToken> : public System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~ContinuationTaskFromResultTask_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: " const&", def_value: None }]
constexpr ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "&&", def_value: None }]
constexpr ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContinuationTaskFromResultTask_1(void* ptr) noexcept : System::Threading::Tasks::Task(ptr) {
}


  constexpr ContinuationTaskFromResultTask_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContinuationTaskFromResultTask_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContinuationTaskFromResultTask_1& operator=(ContinuationTaskFromResultTask_1&& o) noexcept = default;
  constexpr ContinuationTaskFromResultTask_1& operator=(ContinuationTaskFromResultTask_1 const& o) noexcept = default;
                


// Fields

 System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken> __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent))  m_antecedent;

constexpr void __set_m_antecedent(System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken> value) ;

constexpr System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken> __get_m_antecedent() const;


// Methods

// Ctor Parameters [CppParam { name: "antecedent", ty: "System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken>", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }]
explicit ContinuationTaskFromResultTask_1(System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void InnerInvoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2795)), TypeDefinitionIndex(TypeDefinitionIndex(2783))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2795), inst: 852 })
// CS Name: System.Threading.Tasks.ContinuationTaskFromResultTask`1
class CORDL_TYPE ContinuationTaskFromResultTask_1<GlobalNamespace::GetAssetBundleFileResult> : public System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~ContinuationTaskFromResultTask_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: " const&", def_value: None }]
constexpr ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "&&", def_value: None }]
constexpr ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContinuationTaskFromResultTask_1(void* ptr) noexcept : System::Threading::Tasks::Task(ptr) {
}


  constexpr ContinuationTaskFromResultTask_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContinuationTaskFromResultTask_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContinuationTaskFromResultTask_1& operator=(ContinuationTaskFromResultTask_1&& o) noexcept = default;
  constexpr ContinuationTaskFromResultTask_1& operator=(ContinuationTaskFromResultTask_1 const& o) noexcept = default;
                


// Fields

 System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult> __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent))  m_antecedent;

constexpr void __set_m_antecedent(System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult> value) ;

constexpr System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult> __get_m_antecedent() const;


// Methods

// Ctor Parameters [CppParam { name: "antecedent", ty: "System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }]
explicit ContinuationTaskFromResultTask_1(System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void InnerInvoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2795)), TypeDefinitionIndex(TypeDefinitionIndex(2783))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2795), inst: 867 })
// CS Name: System.Threading.Tasks.ContinuationTaskFromResultTask`1
class CORDL_TYPE ContinuationTaskFromResultTask_1<System::Threading::Tasks::VoidTaskResult> : public System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~ContinuationTaskFromResultTask_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: " const&", def_value: None }]
constexpr ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "&&", def_value: None }]
constexpr ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContinuationTaskFromResultTask_1(void* ptr) noexcept : System::Threading::Tasks::Task(ptr) {
}


  constexpr ContinuationTaskFromResultTask_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContinuationTaskFromResultTask_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContinuationTaskFromResultTask_1& operator=(ContinuationTaskFromResultTask_1&& o) noexcept = default;
  constexpr ContinuationTaskFromResultTask_1& operator=(ContinuationTaskFromResultTask_1 const& o) noexcept = default;
                


// Fields

 System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult> __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent))  m_antecedent;

constexpr void __set_m_antecedent(System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult> value) ;

constexpr System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult> __get_m_antecedent() const;


// Methods

// Ctor Parameters [CppParam { name: "antecedent", ty: "System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }]
explicit ContinuationTaskFromResultTask_1(System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void InnerInvoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2783)), TypeDefinitionIndex(TypeDefinitionIndex(2795))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2795), inst: 874 })
// CS Name: System.Threading.Tasks.ContinuationTaskFromResultTask`1
class CORDL_TYPE ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> : public System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~ContinuationTaskFromResultTask_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: " const&", def_value: None }]
constexpr ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "&&", def_value: None }]
constexpr ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContinuationTaskFromResultTask_1(void* ptr) noexcept : System::Threading::Tasks::Task(ptr) {
}


  constexpr ContinuationTaskFromResultTask_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContinuationTaskFromResultTask_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContinuationTaskFromResultTask_1& operator=(ContinuationTaskFromResultTask_1&& o) noexcept = default;
  constexpr ContinuationTaskFromResultTask_1& operator=(ContinuationTaskFromResultTask_1 const& o) noexcept = default;
                


// Fields

 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent))  m_antecedent;

constexpr void __set_m_antecedent(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> value) ;

constexpr System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> __get_m_antecedent() const;


// Methods

// Ctor Parameters [CppParam { name: "antecedent", ty: "System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }]
explicit ContinuationTaskFromResultTask_1(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void InnerInvoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2783)), TypeDefinitionIndex(TypeDefinitionIndex(2795))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2795), inst: 875 })
// CS Name: System.Threading.Tasks.ContinuationTaskFromResultTask`1
class CORDL_TYPE ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> : public System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~ContinuationTaskFromResultTask_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: " const&", def_value: None }]
constexpr ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "&&", def_value: None }]
constexpr ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContinuationTaskFromResultTask_1(void* ptr) noexcept : System::Threading::Tasks::Task(ptr) {
}


  constexpr ContinuationTaskFromResultTask_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContinuationTaskFromResultTask_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContinuationTaskFromResultTask_1& operator=(ContinuationTaskFromResultTask_1&& o) noexcept = default;
  constexpr ContinuationTaskFromResultTask_1& operator=(ContinuationTaskFromResultTask_1 const& o) noexcept = default;
                


// Fields

 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent))  m_antecedent;

constexpr void __set_m_antecedent(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> value) ;

constexpr System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> __get_m_antecedent() const;


// Methods

// Ctor Parameters [CppParam { name: "antecedent", ty: "System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }]
explicit ContinuationTaskFromResultTask_1(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void InnerInvoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2783)), TypeDefinitionIndex(TypeDefinitionIndex(2795))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2795), inst: 876 })
// CS Name: System.Threading.Tasks.ContinuationTaskFromResultTask`1
class CORDL_TYPE ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> : public System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~ContinuationTaskFromResultTask_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: " const&", def_value: None }]
constexpr ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "&&", def_value: None }]
constexpr ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContinuationTaskFromResultTask_1(void* ptr) noexcept : System::Threading::Tasks::Task(ptr) {
}


  constexpr ContinuationTaskFromResultTask_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContinuationTaskFromResultTask_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContinuationTaskFromResultTask_1& operator=(ContinuationTaskFromResultTask_1&& o) noexcept = default;
  constexpr ContinuationTaskFromResultTask_1& operator=(ContinuationTaskFromResultTask_1 const& o) noexcept = default;
                


// Fields

 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent))  m_antecedent;

constexpr void __set_m_antecedent(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> value) ;

constexpr System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> __get_m_antecedent() const;


// Methods

// Ctor Parameters [CppParam { name: "antecedent", ty: "System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }]
explicit ContinuationTaskFromResultTask_1(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void InnerInvoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2795)), TypeDefinitionIndex(TypeDefinitionIndex(2783))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2795), inst: 1088 })
// CS Name: System.Threading.Tasks.ContinuationTaskFromResultTask`1
class CORDL_TYPE ContinuationTaskFromResultTask_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> : public System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~ContinuationTaskFromResultTask_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: " const&", def_value: None }]
constexpr ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "&&", def_value: None }]
constexpr ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContinuationTaskFromResultTask_1(void* ptr) noexcept : System::Threading::Tasks::Task(ptr) {
}


  constexpr ContinuationTaskFromResultTask_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContinuationTaskFromResultTask_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContinuationTaskFromResultTask_1& operator=(ContinuationTaskFromResultTask_1&& o) noexcept = default;
  constexpr ContinuationTaskFromResultTask_1& operator=(ContinuationTaskFromResultTask_1 const& o) noexcept = default;
                


// Fields

 System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent))  m_antecedent;

constexpr void __set_m_antecedent(System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> value) ;

constexpr System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> __get_m_antecedent() const;


// Methods

// Ctor Parameters [CppParam { name: "antecedent", ty: "System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }]
explicit ContinuationTaskFromResultTask_1(System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void InnerInvoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2795)), TypeDefinitionIndex(TypeDefinitionIndex(2783))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2795), inst: 1089 })
// CS Name: System.Threading.Tasks.ContinuationTaskFromResultTask`1
class CORDL_TYPE ContinuationTaskFromResultTask_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> : public System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~ContinuationTaskFromResultTask_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: " const&", def_value: None }]
constexpr ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "&&", def_value: None }]
constexpr ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContinuationTaskFromResultTask_1(void* ptr) noexcept : System::Threading::Tasks::Task(ptr) {
}


  constexpr ContinuationTaskFromResultTask_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContinuationTaskFromResultTask_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContinuationTaskFromResultTask_1& operator=(ContinuationTaskFromResultTask_1&& o) noexcept = default;
  constexpr ContinuationTaskFromResultTask_1& operator=(ContinuationTaskFromResultTask_1 const& o) noexcept = default;
                


// Fields

 System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent))  m_antecedent;

constexpr void __set_m_antecedent(System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> value) ;

constexpr System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __get_m_antecedent() const;


// Methods

// Ctor Parameters [CppParam { name: "antecedent", ty: "System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }]
explicit ContinuationTaskFromResultTask_1(System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void InnerInvoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2795)), TypeDefinitionIndex(TypeDefinitionIndex(2783))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2795), inst: 4825 })
// CS Name: System.Threading.Tasks.ContinuationTaskFromResultTask`1
class CORDL_TYPE ContinuationTaskFromResultTask_1<System::Int32Enum> : public System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~ContinuationTaskFromResultTask_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: " const&", def_value: None }]
constexpr ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "&&", def_value: None }]
constexpr ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContinuationTaskFromResultTask_1(void* ptr) noexcept : System::Threading::Tasks::Task(ptr) {
}


  constexpr ContinuationTaskFromResultTask_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContinuationTaskFromResultTask_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContinuationTaskFromResultTask_1& operator=(ContinuationTaskFromResultTask_1&& o) noexcept = default;
  constexpr ContinuationTaskFromResultTask_1& operator=(ContinuationTaskFromResultTask_1 const& o) noexcept = default;
                


// Fields

 System::Threading::Tasks::Task_1<System::Int32Enum> __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent))  m_antecedent;

constexpr void __set_m_antecedent(System::Threading::Tasks::Task_1<System::Int32Enum> value) ;

constexpr System::Threading::Tasks::Task_1<System::Int32Enum> __get_m_antecedent() const;


// Methods

// Ctor Parameters [CppParam { name: "antecedent", ty: "System::Threading::Tasks::Task_1<System::Int32Enum>", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }]
explicit ContinuationTaskFromResultTask_1(System::Threading::Tasks::Task_1<System::Int32Enum> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Threading::Tasks::Task_1<System::Int32Enum> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void InnerInvoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2783)), TypeDefinitionIndex(TypeDefinitionIndex(2795))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2795), inst: 4905 })
// CS Name: System.Threading.Tasks.ContinuationTaskFromResultTask`1
class CORDL_TYPE ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> : public System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~ContinuationTaskFromResultTask_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: " const&", def_value: None }]
constexpr ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "&&", def_value: None }]
constexpr ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContinuationTaskFromResultTask_1(void* ptr) noexcept : System::Threading::Tasks::Task(ptr) {
}


  constexpr ContinuationTaskFromResultTask_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContinuationTaskFromResultTask_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContinuationTaskFromResultTask_1& operator=(ContinuationTaskFromResultTask_1&& o) noexcept = default;
  constexpr ContinuationTaskFromResultTask_1& operator=(ContinuationTaskFromResultTask_1 const& o) noexcept = default;
                


// Fields

 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent))  m_antecedent;

constexpr void __set_m_antecedent(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> value) ;

constexpr System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> __get_m_antecedent() const;


// Methods

// Ctor Parameters [CppParam { name: "antecedent", ty: "System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }]
explicit ContinuationTaskFromResultTask_1(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void InnerInvoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ContinuationTaskFromResultTask`1
namespace System::Threading::Tasks {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2783)), TypeDefinitionIndex(TypeDefinitionIndex(2795))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2795), inst: 5957 })
// CS Name: System.Threading.Tasks.ContinuationTaskFromResultTask`1
class CORDL_TYPE ContinuationTaskFromResultTask_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> : public System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~ContinuationTaskFromResultTask_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: " const&", def_value: None }]
constexpr ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromResultTask_1", modifiers: "&&", def_value: None }]
constexpr ContinuationTaskFromResultTask_1(ContinuationTaskFromResultTask_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContinuationTaskFromResultTask_1(void* ptr) noexcept : System::Threading::Tasks::Task(ptr) {
}


  constexpr ContinuationTaskFromResultTask_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContinuationTaskFromResultTask_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContinuationTaskFromResultTask_1& operator=(ContinuationTaskFromResultTask_1&& o) noexcept = default;
  constexpr ContinuationTaskFromResultTask_1& operator=(ContinuationTaskFromResultTask_1 const& o) noexcept = default;
                


// Fields

 System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent))  m_antecedent;

constexpr void __set_m_antecedent(System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> value) ;

constexpr System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> __get_m_antecedent() const;


// Methods

// Ctor Parameters [CppParam { name: "antecedent", ty: "System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }]
explicit ContinuationTaskFromResultTask_1(System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method InnerInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void InnerInvoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Threading::Tasks::ContinuationTaskFromResultTask_1, "System.Threading.Tasks", "ContinuationTaskFromResultTask`1");
