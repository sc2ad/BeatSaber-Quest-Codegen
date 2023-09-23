#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::ResourceManagement::ResourceProviders {
class IResourceProvider;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class IInstanceProvider;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
class GroupOperation;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
class Action_4;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SceneInstance;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine::ResourceManagement::Util {
class IAllocationStrategy;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
class AsyncOperationBase_1;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::ResourceManagement {
class IUpdateReceiver;
}
namespace GlobalNamespace {
template<typename T>
class ListWithEvents_1;
}
namespace UnityEngine::Networking {
class CertificateHandler;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class ISceneProvider;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace System {
class Type;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace GlobalNamespace {
template<typename T>
class DelegateList_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
class IAsyncOperation;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace System {
class Exception;
}
namespace UnityEngine::ResourceManagement::Util {
class IOperationCacheKey;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct InstantiationParameters;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct DownloadStatus;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement {
template<typename TObject>
class UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1;
}
namespace UnityEngine::ResourceManagement {
template<typename TObject>
class UnityEngine__ResourceManagement__ResourceManager____c__DisplayClass92_0_1;
}
namespace UnityEngine::ResourceManagement {
struct UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventType;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
namespace UnityEngine::ResourceManagement {
template<::cordl_internals::il2cpp_reference_type TObject>
class UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1<TObject>;
}
namespace UnityEngine::ResourceManagement {
template<>
class UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>;
}
namespace UnityEngine::ResourceManagement {
template<>
class UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1<bool>;
}
namespace UnityEngine::ResourceManagement {
template<>
class UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1<int64_t>;
}
namespace UnityEngine::ResourceManagement {
class UnityEngine__ResourceManagement__ResourceManager__InstanceOperation;
}
namespace UnityEngine::ResourceManagement {
template<::cordl_internals::il2cpp_reference_type TObject>
class UnityEngine__ResourceManagement__ResourceManager____c__DisplayClass92_0_1<TObject>;
}
namespace UnityEngine::ResourceManagement {
struct UnityEngine__ResourceManagement__ResourceManager__DeferredCallbackRegisterRequest;
}
namespace UnityEngine::ResourceManagement {
struct UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventContext;
}
// Type: ::DiagnosticEventType
namespace UnityEngine::ResourceManagement {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14232))
// CS Name: UnityEngine.ResourceManagement.ResourceManager::DiagnosticEventType
struct CORDL_TYPE UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventType(int32_t value__) noexcept;


                    constexpr UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventType(UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventType const&) = default;
                    constexpr UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventType(UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventType&&) = default;
                    constexpr UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventType& operator=(UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventType& operator=(UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventType_Unwrapped : int32_t {
__AsyncOperationFail = 0,
__AsyncOperationCreate = 1,
__AsyncOperationPercentComplete = 2,
__AsyncOperationComplete = 3,
__AsyncOperationReferenceCount = 4,
__AsyncOperationDestroy = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventType_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field AsyncOperationFail offset 0
static UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventType const AsyncOperationFail;

/// @brief Field AsyncOperationCreate offset 0
static UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventType const AsyncOperationCreate;

/// @brief Field AsyncOperationPercentComplete offset 0
static UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventType const AsyncOperationPercentComplete;

/// @brief Field AsyncOperationComplete offset 0
static UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventType const AsyncOperationComplete;

/// @brief Field AsyncOperationReferenceCount offset 0
static UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventType const AsyncOperationReferenceCount;

/// @brief Field AsyncOperationDestroy offset 0
static UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventType const AsyncOperationDestroy;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement
// Type: ::DiagnosticEventContext
namespace UnityEngine::ResourceManagement {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14233))
// CS Name: UnityEngine.ResourceManagement.ResourceManager::DiagnosticEventContext
struct CORDL_TYPE UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventContext : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_OperationHandle_k__BackingField", ty: "UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle", modifiers: "", def_value: None }, CppParam { name: "_Type_k__BackingField", ty: "UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventType", modifiers: "", def_value: None }, CppParam { name: "_EventValue_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_Location_k__BackingField", ty: "UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation", modifiers: "", def_value: None }, CppParam { name: "_Context_k__BackingField", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "_Error_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }]
constexpr UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventContext(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle _OperationHandle_k__BackingField, UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventType _Type_k__BackingField, int32_t _EventValue_k__BackingField, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation _Location_k__BackingField, ::bs_hook::Il2CppWrapperType _Context_k__BackingField, ::StringW _Error_k__BackingField) noexcept;


                    constexpr UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventContext(UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventContext const&) = default;
                    constexpr UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventContext(UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventContext&&) = default;
                    constexpr UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventContext& operator=(UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventContext const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventContext& operator=(UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventContext&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventContext(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle __declspec(property(get=__get__OperationHandle_k__BackingField, put=__set__OperationHandle_k__BackingField))  _OperationHandle_k__BackingField;

constexpr void __set__OperationHandle_k__BackingField(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle value) ;

constexpr UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle __get__OperationHandle_k__BackingField() const;

 UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventType __declspec(property(get=__get__Type_k__BackingField, put=__set__Type_k__BackingField))  _Type_k__BackingField;

constexpr void __set__Type_k__BackingField(UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventType value) ;

constexpr UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventType __get__Type_k__BackingField() const;

 int32_t __declspec(property(get=__get__EventValue_k__BackingField, put=__set__EventValue_k__BackingField))  _EventValue_k__BackingField;

constexpr void __set__EventValue_k__BackingField(int32_t value) ;

constexpr int32_t __get__EventValue_k__BackingField() const;

 UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation __declspec(property(get=__get__Location_k__BackingField, put=__set__Location_k__BackingField))  _Location_k__BackingField;

constexpr void __set__Location_k__BackingField(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation value) ;

constexpr UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation __get__Location_k__BackingField() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__Context_k__BackingField, put=__set__Context_k__BackingField))  _Context_k__BackingField;

constexpr void __set__Context_k__BackingField(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__Context_k__BackingField() const;

 ::StringW __declspec(property(get=__get__Error_k__BackingField, put=__set__Error_k__BackingField))  _Error_k__BackingField;

constexpr void __set__Error_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Error_k__BackingField() const;


// Properties

 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle __declspec(property(get=get_OperationHandle))  OperationHandle;

 UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventType __declspec(property(get=get_Type))  Type;

 int32_t __declspec(property(get=get_EventValue))  EventValue;

 UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation __declspec(property(get=get_Location))  Location;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Context))  Context;

 ::StringW __declspec(property(get=get_Error))  Error;


// Methods

/// @brief Method get_OperationHandle addr 0x2a36ca4 size 0x14 virtual false final false
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle get_OperationHandle() ;

/// @brief Method get_Type addr 0x2a36cb8 size 0x8 virtual false final false
 UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventType get_Type() ;

/// @brief Method get_EventValue addr 0x2a36cc0 size 0x8 virtual false final false
 int32_t get_EventValue() ;

/// @brief Method get_Location addr 0x2a36cc8 size 0x8 virtual false final false
 UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation get_Location() ;

/// @brief Method get_Context addr 0x2a36cd0 size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_Context() ;

/// @brief Method get_Error addr 0x2a36cd8 size 0x8 virtual false final false
 ::StringW get_Error() ;

/// @brief Method .ctor addr 0x2a36ce0 size 0x104 virtual false final false
 void _ctor(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op, UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventType type, int32_t eventValue, ::StringW error, ::bs_hook::Il2CppWrapperType context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement
// Type: ::DeferredCallbackRegisterRequest
namespace UnityEngine::ResourceManagement {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14234))
// CS Name: UnityEngine.ResourceManagement.ResourceManager::DeferredCallbackRegisterRequest
struct CORDL_TYPE UnityEngine__ResourceManagement__ResourceManager__DeferredCallbackRegisterRequest : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "operation", ty: "UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation", modifiers: "", def_value: None }, CppParam { name: "incrementRefCount", ty: "bool", modifiers: "", def_value: None }]
constexpr UnityEngine__ResourceManagement__ResourceManager__DeferredCallbackRegisterRequest(UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation operation, bool incrementRefCount) noexcept;


                    constexpr UnityEngine__ResourceManagement__ResourceManager__DeferredCallbackRegisterRequest(UnityEngine__ResourceManagement__ResourceManager__DeferredCallbackRegisterRequest const&) = default;
                    constexpr UnityEngine__ResourceManagement__ResourceManager__DeferredCallbackRegisterRequest(UnityEngine__ResourceManagement__ResourceManager__DeferredCallbackRegisterRequest&&) = default;
                    constexpr UnityEngine__ResourceManagement__ResourceManager__DeferredCallbackRegisterRequest& operator=(UnityEngine__ResourceManagement__ResourceManager__DeferredCallbackRegisterRequest const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__ResourceManagement__ResourceManager__DeferredCallbackRegisterRequest& operator=(UnityEngine__ResourceManagement__ResourceManager__DeferredCallbackRegisterRequest&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ResourceManagement__ResourceManager__DeferredCallbackRegisterRequest(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation __declspec(property(get=__get_operation, put=__set_operation))  operation;

constexpr void __set_operation(UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation value) ;

constexpr UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation __get_operation() const;

 bool __declspec(property(get=__get_incrementRefCount, put=__set_incrementRefCount))  incrementRefCount;

constexpr void __set_incrementRefCount(bool value) ;

constexpr bool __get_incrementRefCount() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement
// Type: ::CompletedOperation`1
// Type: ::InstanceOperation
namespace UnityEngine::ResourceManagement {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10138)), TypeDefinitionIndex(TypeDefinitionIndex(14313)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14313), inst: 298 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14236))
// CS Name: UnityEngine.ResourceManagement.ResourceManager::InstanceOperation
class CORDL_TYPE UnityEngine__ResourceManagement__ResourceManager__InstanceOperation : public UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::GameObject> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xf0};

virtual ~UnityEngine__ResourceManagement__ResourceManager__InstanceOperation() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ResourceManagement__ResourceManager__InstanceOperation", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ResourceManagement__ResourceManager__InstanceOperation(UnityEngine__ResourceManagement__ResourceManager__InstanceOperation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ResourceManagement__ResourceManager__InstanceOperation", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ResourceManagement__ResourceManager__InstanceOperation(UnityEngine__ResourceManagement__ResourceManager__InstanceOperation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ResourceManagement__ResourceManager__InstanceOperation(void* ptr) noexcept : UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::GameObject>(ptr) {
}


  constexpr UnityEngine__ResourceManagement__ResourceManager__InstanceOperation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ResourceManagement__ResourceManager__InstanceOperation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ResourceManagement__ResourceManager__InstanceOperation& operator=(UnityEngine__ResourceManagement__ResourceManager__InstanceOperation&& o) noexcept = default;
  constexpr UnityEngine__ResourceManagement__ResourceManager__InstanceOperation& operator=(UnityEngine__ResourceManagement__ResourceManager__InstanceOperation const& o) noexcept = default;
                


// Fields

 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> __declspec(property(get=__get_m_dependency, put=__set_m_dependency))  m_dependency;

constexpr void __set_m_dependency(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> value) ;

constexpr UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> __get_m_dependency() const;

 UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters __declspec(property(get=__get_m_instantiationParams, put=__set_m_instantiationParams))  m_instantiationParams;

constexpr void __set_m_instantiationParams(UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters value) ;

constexpr UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters __get_m_instantiationParams() const;

 UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider __declspec(property(get=__get_m_instanceProvider, put=__set_m_instanceProvider))  m_instanceProvider;

constexpr void __set_m_instanceProvider(UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider value) ;

constexpr UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider __get_m_instanceProvider() const;

 UnityEngine::GameObject __declspec(property(get=__get_m_instance, put=__set_m_instance))  m_instance;

constexpr void __set_m_instance(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_m_instance() const;

 UnityEngine::SceneManagement::Scene __declspec(property(get=__get_m_scene, put=__set_m_scene))  m_scene;

constexpr void __set_m_scene(UnityEngine::SceneManagement::Scene value) ;

constexpr UnityEngine::SceneManagement::Scene __get_m_scene() const;


// Properties

 ::StringW __declspec(property(get=get_DebugName))  DebugName;

 float_t __declspec(property(get=get_Progress))  Progress;


// Methods

/// @brief Method Init addr 0x2a35ed8 size 0x30 virtual false final false
 void Init(UnityEngine::ResourceManagement::ResourceManager rm, UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider instanceProvider, UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiationParams, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> dependency) ;

/// @brief Method GetDownloadStatus addr 0x2a36de4 size 0xdc virtual true final false
 UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus(System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType> visited) ;

/// @brief Method GetDependencies addr 0x2a36ec0 size 0x128 virtual true final false
 void GetDependencies(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> deps) ;

/// @brief Method get_DebugName addr 0x2a36fe8 size 0x110 virtual true final false
 ::StringW get_DebugName() ;

/// @brief Method InstanceScene addr 0x2a370f8 size 0x8 virtual false final false
 UnityEngine::SceneManagement::Scene InstanceScene() ;

/// @brief Method Destroy addr 0x2a37100 size 0xb4 virtual true final false
 void Destroy() ;

/// @brief Method get_Progress addr 0x2a371b4 size 0x48 virtual true final false
 float_t get_Progress() ;

/// @brief Method InvokeWaitForCompletion addr 0x2a371fc size 0x130 virtual true final false
 bool InvokeWaitForCompletion() ;

/// @brief Method Execute addr 0x2a3732c size 0x240 virtual true final false
 void Execute() ;

// Ctor Parameters []
explicit UnityEngine__ResourceManagement__ResourceManager__InstanceOperation() ;

/// @brief Method .ctor addr 0x2a3756c size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement
// Type: ::<>c__DisplayClass92_0`1
// Type: UnityEngine.ResourceManagement::ResourceManager
namespace UnityEngine::ResourceManagement {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14238))
// CS Name: UnityEngine.ResourceManagement.ResourceManager
class CORDL_TYPE ResourceManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename TObject>
using __c__DisplayClass92_0_1 = UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager____c__DisplayClass92_0_1<TObject>;

using InstanceOperation = UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager__InstanceOperation;

template<typename TObject>
using CompletedOperation_1 = UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1<TObject>;

using DeferredCallbackRegisterRequest = UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager__DeferredCallbackRegisterRequest;

using DiagnosticEventContext = UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventContext;

using DiagnosticEventType = UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventType;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd0};

virtual ~ResourceManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "ResourceManager", modifiers: " const&", def_value: None }]
constexpr ResourceManager(ResourceManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ResourceManager", modifiers: "&&", def_value: None }]
constexpr ResourceManager(ResourceManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ResourceManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ResourceManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ResourceManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ResourceManager& operator=(ResourceManager&& o) noexcept = default;
  constexpr ResourceManager& operator=(ResourceManager const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_postProfilerEvents, put=__set_postProfilerEvents))  postProfilerEvents;

constexpr void __set_postProfilerEvents(bool value) ;

constexpr bool __get_postProfilerEvents() const;

static System::Action_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,System::Exception> __declspec(property(get=__get__ExceptionHandler_k__BackingField, put=__set__ExceptionHandler_k__BackingField))  _ExceptionHandler_k__BackingField;

static void __set__ExceptionHandler_k__BackingField(System::Action_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,System::Exception> value) ;

static System::Action_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,System::Exception> __get__ExceptionHandler_k__BackingField() ;

 System::Func_2<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation,::StringW> __declspec(property(get=__get__InternalIdTransformFunc_k__BackingField, put=__set__InternalIdTransformFunc_k__BackingField))  _InternalIdTransformFunc_k__BackingField;

constexpr void __set__InternalIdTransformFunc_k__BackingField(System::Func_2<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation,::StringW> value) ;

constexpr System::Func_2<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation,::StringW> __get__InternalIdTransformFunc_k__BackingField() const;

 System::Action_1<UnityEngine::Networking::UnityWebRequest> __declspec(property(get=__get__WebRequestOverride_k__BackingField, put=__set__WebRequestOverride_k__BackingField))  _WebRequestOverride_k__BackingField;

constexpr void __set__WebRequestOverride_k__BackingField(System::Action_1<UnityEngine::Networking::UnityWebRequest> value) ;

constexpr System::Action_1<UnityEngine::Networking::UnityWebRequest> __get__WebRequestOverride_k__BackingField() const;

 bool __declspec(property(get=__get_CallbackHooksEnabled, put=__set_CallbackHooksEnabled))  CallbackHooksEnabled;

constexpr void __set_CallbackHooksEnabled(bool value) ;

constexpr bool __get_CallbackHooksEnabled() const;

 GlobalNamespace::ListWithEvents_1<UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider> __declspec(property(get=__get_m_ResourceProviders, put=__set_m_ResourceProviders))  m_ResourceProviders;

constexpr void __set_m_ResourceProviders(GlobalNamespace::ListWithEvents_1<UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider> value) ;

constexpr GlobalNamespace::ListWithEvents_1<UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider> __get_m_ResourceProviders() const;

 UnityEngine::ResourceManagement::Util::IAllocationStrategy __declspec(property(get=__get_m_allocator, put=__set_m_allocator))  m_allocator;

constexpr void __set_m_allocator(UnityEngine::ResourceManagement::Util::IAllocationStrategy value) ;

constexpr UnityEngine::ResourceManagement::Util::IAllocationStrategy __get_m_allocator() const;

 GlobalNamespace::ListWithEvents_1<UnityEngine::ResourceManagement::IUpdateReceiver> __declspec(property(get=__get_m_UpdateReceivers, put=__set_m_UpdateReceivers))  m_UpdateReceivers;

constexpr void __set_m_UpdateReceivers(GlobalNamespace::ListWithEvents_1<UnityEngine::ResourceManagement::IUpdateReceiver> value) ;

constexpr GlobalNamespace::ListWithEvents_1<UnityEngine::ResourceManagement::IUpdateReceiver> __get_m_UpdateReceivers() const;

 System::Collections::Generic::List_1<UnityEngine::ResourceManagement::IUpdateReceiver> __declspec(property(get=__get_m_UpdateReceiversToRemove, put=__set_m_UpdateReceiversToRemove))  m_UpdateReceiversToRemove;

constexpr void __set_m_UpdateReceiversToRemove(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::IUpdateReceiver> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::ResourceManagement::IUpdateReceiver> __get_m_UpdateReceiversToRemove() const;

 bool __declspec(property(get=__get_m_UpdatingReceivers, put=__set_m_UpdatingReceivers))  m_UpdatingReceivers;

constexpr void __set_m_UpdatingReceivers(bool value) ;

constexpr bool __get_m_UpdatingReceivers() const;

 bool __declspec(property(get=__get_m_InsideUpdateMethod, put=__set_m_InsideUpdateMethod))  m_InsideUpdateMethod;

constexpr void __set_m_InsideUpdateMethod(bool value) ;

constexpr bool __get_m_InsideUpdateMethod() const;

 System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider> __declspec(property(get=__get_m_providerMap, put=__set_m_providerMap))  m_providerMap;

constexpr void __set_m_providerMap(System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider> value) ;

constexpr System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider> __get_m_providerMap() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::ResourceManagement::Util::IOperationCacheKey,UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation> __declspec(property(get=__get_m_AssetOperationCache, put=__set_m_AssetOperationCache))  m_AssetOperationCache;

constexpr void __set_m_AssetOperationCache(System::Collections::Generic::Dictionary_2<UnityEngine::ResourceManagement::Util::IOperationCacheKey,UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::ResourceManagement::Util::IOperationCacheKey,UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation> __get_m_AssetOperationCache() const;

 System::Collections::Generic::HashSet_1<UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager__InstanceOperation> __declspec(property(get=__get_m_TrackedInstanceOperations, put=__set_m_TrackedInstanceOperations))  m_TrackedInstanceOperations;

constexpr void __set_m_TrackedInstanceOperations(System::Collections::Generic::HashSet_1<UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager__InstanceOperation> value) ;

constexpr System::Collections::Generic::HashSet_1<UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager__InstanceOperation> __get_m_TrackedInstanceOperations() const;

 GlobalNamespace::DelegateList_1<float_t> __declspec(property(get=__get_m_UpdateCallbacks, put=__set_m_UpdateCallbacks))  m_UpdateCallbacks;

constexpr void __set_m_UpdateCallbacks(GlobalNamespace::DelegateList_1<float_t> value) ;

constexpr GlobalNamespace::DelegateList_1<float_t> __get_m_UpdateCallbacks() const;

 System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation> __declspec(property(get=__get_m_DeferredCompleteCallbacks, put=__set_m_DeferredCompleteCallbacks))  m_DeferredCompleteCallbacks;

constexpr void __set_m_DeferredCompleteCallbacks(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation> __get_m_DeferredCompleteCallbacks() const;

 bool __declspec(property(get=__get_m_InsideExecuteDeferredCallbacksMethod, put=__set_m_InsideExecuteDeferredCallbacksMethod))  m_InsideExecuteDeferredCallbacksMethod;

constexpr void __set_m_InsideExecuteDeferredCallbacksMethod(bool value) ;

constexpr bool __get_m_InsideExecuteDeferredCallbacksMethod() const;

 System::Collections::Generic::List_1<UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager__DeferredCallbackRegisterRequest> __declspec(property(get=__get_m_DeferredCallbacksToRegister, put=__set_m_DeferredCallbacksToRegister))  m_DeferredCallbacksToRegister;

constexpr void __set_m_DeferredCallbacksToRegister(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager__DeferredCallbackRegisterRequest> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager__DeferredCallbackRegisterRequest> __get_m_DeferredCallbacksToRegister() const;

 System::Action_4<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventType,int32_t,::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_m_obsoleteDiagnosticsHandler, put=__set_m_obsoleteDiagnosticsHandler))  m_obsoleteDiagnosticsHandler;

constexpr void __set_m_obsoleteDiagnosticsHandler(System::Action_4<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventType,int32_t,::bs_hook::Il2CppWrapperType> value) ;

constexpr System::Action_4<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventType,int32_t,::bs_hook::Il2CppWrapperType> __get_m_obsoleteDiagnosticsHandler() const;

 System::Action_1<UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventContext> __declspec(property(get=__get_m_diagnosticsHandler, put=__set_m_diagnosticsHandler))  m_diagnosticsHandler;

constexpr void __set_m_diagnosticsHandler(System::Action_1<UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventContext> value) ;

constexpr System::Action_1<UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventContext> __get_m_diagnosticsHandler() const;

 System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation> __declspec(property(get=__get_m_ReleaseOpNonCached, put=__set_m_ReleaseOpNonCached))  m_ReleaseOpNonCached;

constexpr void __set_m_ReleaseOpNonCached(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation> value) ;

constexpr System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation> __get_m_ReleaseOpNonCached() const;

 System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation> __declspec(property(get=__get_m_ReleaseOpCached, put=__set_m_ReleaseOpCached))  m_ReleaseOpCached;

constexpr void __set_m_ReleaseOpCached(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation> value) ;

constexpr System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation> __get_m_ReleaseOpCached() const;

 System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation> __declspec(property(get=__get_m_ReleaseInstanceOp, put=__set_m_ReleaseInstanceOp))  m_ReleaseInstanceOp;

constexpr void __set_m_ReleaseInstanceOp(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation> value) ;

constexpr System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation> __get_m_ReleaseInstanceOp() const;

static int32_t __declspec(property(get=__get_s_GroupOperationTypeHash, put=__set_s_GroupOperationTypeHash))  s_GroupOperationTypeHash;

static void __set_s_GroupOperationTypeHash(int32_t value) ;

static int32_t __get_s_GroupOperationTypeHash() ;

static int32_t __declspec(property(get=__get_s_InstanceOperationTypeHash, put=__set_s_InstanceOperationTypeHash))  s_InstanceOperationTypeHash;

static void __set_s_InstanceOperationTypeHash(int32_t value) ;

static int32_t __get_s_InstanceOperationTypeHash() ;

 UnityEngine::Networking::CertificateHandler __declspec(property(get=__get__CertificateHandlerInstance_k__BackingField, put=__set__CertificateHandlerInstance_k__BackingField))  _CertificateHandlerInstance_k__BackingField;

constexpr void __set__CertificateHandlerInstance_k__BackingField(UnityEngine::Networking::CertificateHandler value) ;

constexpr UnityEngine::Networking::CertificateHandler __get__CertificateHandlerInstance_k__BackingField() const;

 bool __declspec(property(get=__get_m_RegisteredForCallbacks, put=__set_m_RegisteredForCallbacks))  m_RegisteredForCallbacks;

constexpr void __set_m_RegisteredForCallbacks(bool value) ;

constexpr bool __get_m_RegisteredForCallbacks() const;

 System::Collections::Generic::Dictionary_2<System::Type,System::Type> __declspec(property(get=__get_m_ProviderOperationTypeCache, put=__set_m_ProviderOperationTypeCache))  m_ProviderOperationTypeCache;

constexpr void __set_m_ProviderOperationTypeCache(System::Collections::Generic::Dictionary_2<System::Type,System::Type> value) ;

constexpr System::Collections::Generic::Dictionary_2<System::Type,System::Type> __get_m_ProviderOperationTypeCache() const;


// Properties

static System::Action_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,System::Exception> __declspec(property(get=get_ExceptionHandler, put=set_ExceptionHandler))  ExceptionHandler;

 System::Func_2<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation,::StringW> __declspec(property(get=get_InternalIdTransformFunc, put=set_InternalIdTransformFunc))  InternalIdTransformFunc;

 System::Action_1<UnityEngine::Networking::UnityWebRequest> __declspec(property(get=get_WebRequestOverride, put=set_WebRequestOverride))  WebRequestOverride;

 int32_t __declspec(property(get=get_OperationCacheCount))  OperationCacheCount;

 int32_t __declspec(property(get=get_InstanceOperationCount))  InstanceOperationCount;

 UnityEngine::ResourceManagement::Util::IAllocationStrategy __declspec(property(get=get_Allocator, put=set_Allocator))  Allocator;

 System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider> __declspec(property(get=get_ResourceProviders))  ResourceProviders;

 UnityEngine::Networking::CertificateHandler __declspec(property(get=get_CertificateHandlerInstance, put=set_CertificateHandlerInstance))  CertificateHandlerInstance;


// Methods

/// @brief Method get_ExceptionHandler addr 0x2a321d8 size 0x58 virtual false final false
static System::Action_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,System::Exception> get_ExceptionHandler() ;

/// @brief Method set_ExceptionHandler addr 0x2a32230 size 0x5c virtual false final false
static void set_ExceptionHandler(System::Action_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,System::Exception> value) ;

/// @brief Method get_InternalIdTransformFunc addr 0x2a3228c size 0x8 virtual false final false
 System::Func_2<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation,::StringW> get_InternalIdTransformFunc() ;

/// @brief Method set_InternalIdTransformFunc addr 0x2a32294 size 0x8 virtual false final false
 void set_InternalIdTransformFunc(System::Func_2<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation,::StringW> value) ;

/// @brief Method TransformInternalId addr 0x2a3229c size 0xc4 virtual false final false
 ::StringW TransformInternalId(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location) ;

/// @brief Method get_WebRequestOverride addr 0x2a32360 size 0x8 virtual false final false
 System::Action_1<UnityEngine::Networking::UnityWebRequest> get_WebRequestOverride() ;

/// @brief Method set_WebRequestOverride addr 0x2a32368 size 0x8 virtual false final false
 void set_WebRequestOverride(System::Action_1<UnityEngine::Networking::UnityWebRequest> value) ;

/// @brief Method get_OperationCacheCount addr 0x2a32370 size 0x50 virtual false final false
 int32_t get_OperationCacheCount() ;

/// @brief Method get_InstanceOperationCount addr 0x2a323c0 size 0x48 virtual false final false
 int32_t get_InstanceOperationCount() ;

/// @brief Method AddUpdateReceiver addr 0x2a32408 size 0x68 virtual false final false
 void AddUpdateReceiver(UnityEngine::ResourceManagement::IUpdateReceiver receiver) ;

/// @brief Method RemoveUpdateReciever addr 0x2a32470 size 0x12c virtual false final false
 void RemoveUpdateReciever(UnityEngine::ResourceManagement::IUpdateReceiver receiver) ;

/// @brief Method get_Allocator addr 0x2a3259c size 0x8 virtual false final false
 UnityEngine::ResourceManagement::Util::IAllocationStrategy get_Allocator() ;

/// @brief Method set_Allocator addr 0x2a325a4 size 0x8 virtual false final false
 void set_Allocator(UnityEngine::ResourceManagement::Util::IAllocationStrategy value) ;

/// @brief Method get_ResourceProviders addr 0x2a325ac size 0x8 virtual false final false
 System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider> get_ResourceProviders() ;

/// @brief Method get_CertificateHandlerInstance addr 0x2a325b4 size 0x8 virtual false final false
 UnityEngine::Networking::CertificateHandler get_CertificateHandlerInstance() ;

/// @brief Method set_CertificateHandlerInstance addr 0x2a325bc size 0x8 virtual false final false
 void set_CertificateHandlerInstance(UnityEngine::Networking::CertificateHandler value) ;

// Ctor Parameters [CppParam { name: "alloc", ty: "UnityEngine::ResourceManagement::Util::IAllocationStrategy", modifiers: "", def_value: None }]
explicit ResourceManager(UnityEngine::ResourceManagement::Util::IAllocationStrategy alloc) ;

/// @brief Method .ctor addr 0x2a325c4 size 0x48c virtual false final false
 void _ctor(UnityEngine::ResourceManagement::Util::IAllocationStrategy alloc) ;

/// @brief Method OnObjectAdded addr 0x2a32c28 size 0x74 virtual false final false
 void OnObjectAdded(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method OnObjectRemoved addr 0x2a32c9c size 0x74 virtual false final false
 void OnObjectRemoved(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method RegisterForCallbacks addr 0x2a32d10 size 0xcc virtual false final false
 void RegisterForCallbacks() ;

/// @brief Method ClearDiagnosticsCallback addr 0x2a32ddc size 0x8 virtual false final false
 void ClearDiagnosticsCallback() ;

/// @brief Method ClearDiagnosticCallbacks addr 0x2a32de4 size 0x8 virtual false final false
 void ClearDiagnosticCallbacks() ;

/// @brief Method UnregisterDiagnosticCallback addr 0x2a32dec size 0xfc virtual false final false
 void UnregisterDiagnosticCallback(System::Action_1<UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventContext> func) ;

/// @brief Method RegisterDiagnosticCallback addr 0x2a32ee8 size 0x8 virtual false final false
 void RegisterDiagnosticCallback(System::Action_4<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventType,int32_t,::bs_hook::Il2CppWrapperType> func) ;

/// @brief Method RegisterDiagnosticCallback addr 0x2a32ef0 size 0xa8 virtual false final false
 void RegisterDiagnosticCallback(System::Action_1<UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventContext> func) ;

/// @brief Method PostDiagnosticEvent addr 0x2a32f98 size 0x118 virtual false final false
 void PostDiagnosticEvent(UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventContext context) ;

/// @brief Method GetResourceProvider addr 0x2a330b0 size 0x448 virtual false final false
 UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider GetResourceProvider(System::Type t, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location) ;

/// @brief Method GetDefaultTypeForLocation addr 0x2a334f8 size 0x148 virtual false final false
 System::Type GetDefaultTypeForLocation(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation loc) ;

/// @brief Method CalculateLocationsHash addr 0x2a33640 size 0x450 virtual false final false
 int32_t CalculateLocationsHash(System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> locations, System::Type t) ;

/// @brief Method ProvideResource addr 0x2a33a90 size 0x7d0 virtual false final false
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle ProvideResource(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, System::Type desiredType, bool releaseDependenciesOnFailure) ;

/// @brief Method ProvideResource addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> ProvideResource(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location) ;

/// @brief Method StartOperation addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> StartOperation(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject> operation, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dependency) ;

/// @brief Method StartOperation addr 0x2a34bc8 size 0x174 virtual false final false
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle StartOperation(UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation operation, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dependency) ;

/// @brief Method OnInstanceOperationDestroy addr 0x2a34d3c size 0x144 virtual false final false
 void OnInstanceOperationDestroy(UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation o) ;

/// @brief Method OnOperationDestroyNonCached addr 0x2a34e80 size 0xd4 virtual false final false
 void OnOperationDestroyNonCached(UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation o) ;

/// @brief Method OnOperationDestroyCached addr 0x2a34f54 size 0x1d4 virtual false final false
 void OnOperationDestroyCached(UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation o) ;

/// @brief Method CreateOperation addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 T CreateOperation(System::Type actualType, int32_t typeHash, UnityEngine::ResourceManagement::Util::IOperationCacheKey cacheKey, System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation> onDestroyAction) ;

/// @brief Method AddOperationToCache addr 0x2a351a0 size 0x88 virtual false final false
 void AddOperationToCache(UnityEngine::ResourceManagement::Util::IOperationCacheKey key, UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation operation) ;

/// @brief Method RemoveOperationFromCache addr 0x2a35128 size 0x78 virtual false final false
 bool RemoveOperationFromCache(UnityEngine::ResourceManagement::Util::IOperationCacheKey key) ;

/// @brief Method IsOperationCached addr 0x2a35228 size 0x58 virtual false final false
 bool IsOperationCached(UnityEngine::ResourceManagement::Util::IOperationCacheKey key) ;

/// @brief Method CachedOperationCount addr 0x2a35280 size 0x50 virtual false final false
 int32_t CachedOperationCount() ;

/// @brief Method CreateCompletedOperation addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> CreateCompletedOperation(TObject result, ::StringW errorMsg) ;

/// @brief Method CreateCompletedOperationWithException addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> CreateCompletedOperationWithException(TObject result, System::Exception exception) ;

/// @brief Method CreateCompletedOperationInternal addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> CreateCompletedOperationInternal(TObject result, bool success, System::Exception exception, bool releaseDependenciesOnFailure) ;

/// @brief Method Release addr 0x2a352d0 size 0x8 virtual false final false
 void Release(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle) ;

/// @brief Method Acquire addr 0x2a3538c size 0x20 virtual false final false
 void Acquire(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle) ;

/// @brief Method AcquireGroupOpFromCache addr 0x2a35470 size 0x13c virtual false final false
 UnityEngine::ResourceManagement::AsyncOperations::GroupOperation AcquireGroupOpFromCache(UnityEngine::ResourceManagement::Util::IOperationCacheKey key) ;

/// @brief Method CreateGroupOperation addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>> CreateGroupOperation(System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> locations) ;

/// @brief Method CreateGroupOperation addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>> CreateGroupOperation(System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> locations, bool allowFailedDependencies) ;

/// @brief Method CreateGenericGroupOperation addr 0x2a355ac size 0x19c virtual false final false
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>> CreateGenericGroupOperation(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> operations, bool releasedCachedOpOnComplete) ;

/// @brief Method ProvideResourceGroupCached addr 0x2a3444c size 0x77c virtual false final false
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>> ProvideResourceGroupCached(System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> locations, int32_t groupHash, System::Type desiredType, System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> callback, bool releaseDependenciesOnFailure) ;

/// @brief Method ProvideResources addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<TObject>> ProvideResources(System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> locations, System::Action_1<TObject> callback) ;

/// @brief Method ProvideResources addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<TObject>> ProvideResources(System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> locations, bool releaseDependenciesOnFailure, System::Action_1<TObject> callback) ;

/// @brief Method CreateChainOperation addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject,typename TObjectDependency>
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> CreateChainOperation(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency> dependentOp, System::Func_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>> callback) ;

/// @brief Method CreateChainOperation addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> CreateChainOperation(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dependentOp, System::Func_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>> callback) ;

/// @brief Method CreateChainOperation addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject,typename TObjectDependency>
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> CreateChainOperation(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency> dependentOp, System::Func_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>> callback, bool releaseDependenciesOnFailure) ;

/// @brief Method CreateChainOperation addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TObject>
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> CreateChainOperation(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dependentOp, System::Func_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>> callback, bool releaseDependenciesOnFailure) ;

/// @brief Method ProvideScene addr 0x2a359b4 size 0x140 virtual false final false
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> ProvideScene(UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider sceneProvider, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority) ;

/// @brief Method ReleaseScene addr 0x2a35af4 size 0x130 virtual false final false
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> ReleaseScene(UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider sceneProvider, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> sceneLoadHandle) ;

/// @brief Method ProvideInstance addr 0x2a35c24 size 0x2b4 virtual false final false
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> ProvideInstance(UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider provider, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters) ;

/// @brief Method CleanupSceneInstances addr 0x2a35f08 size 0x408 virtual false final false
 void CleanupSceneInstances(UnityEngine::SceneManagement::Scene scene) ;

/// @brief Method ExecuteDeferredCallbacks addr 0x2a36310 size 0x1b4 virtual false final false
 void ExecuteDeferredCallbacks() ;

/// @brief Method RegisterForDeferredCallback addr 0x2a364c4 size 0x210 virtual false final false
 void RegisterForDeferredCallback(UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation op, bool incrementRefCount) ;

/// @brief Method Update addr 0x2a366d4 size 0x414 virtual false final false
 void Update(float_t unscaledDeltaTime) ;

/// @brief Method Dispose addr 0x2a36ae8 size 0xd8 virtual true final true
 void Dispose() ;

/// @brief Method <.ctor>b__53_0 addr 0x2a36ca0 size 0x4 virtual false final false
 void __ctor_b__53_0(UnityEngine::ResourceManagement::IUpdateReceiver x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement
// Type: ::CompletedOperation`1
namespace UnityEngine::ResourceManagement {
// cpp template
template<::cordl_internals::il2cpp_reference_type TObject>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14235)), TypeDefinitionIndex(TypeDefinitionIndex(14313)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14313), inst: 766 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14235), inst: 2 })
// CS Name: UnityEngine.ResourceManagement.ResourceManager::CompletedOperation`1
class CORDL_TYPE UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1<TObject> : public UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1(UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1(UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1(void* ptr) noexcept : UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>(ptr) {
}


  constexpr UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1& operator=(UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1&& o) noexcept = default;
  constexpr UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1& operator=(UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1 const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_m_Success, put=__set_m_Success))  m_Success;

constexpr void __set_m_Success(bool value) ;

constexpr bool __get_m_Success() const;

 System::Exception __declspec(property(get=__get_m_Exception, put=__set_m_Exception))  m_Exception;

constexpr void __set_m_Exception(System::Exception value) ;

constexpr System::Exception __get_m_Exception() const;

 bool __declspec(property(get=__get_m_ReleaseDependenciesOnFailure, put=__set_m_ReleaseDependenciesOnFailure))  m_ReleaseDependenciesOnFailure;

constexpr void __set_m_ReleaseDependenciesOnFailure(bool value) ;

constexpr bool __get_m_ReleaseDependenciesOnFailure() const;


// Properties

 ::StringW __declspec(property(get=get_DebugName))  DebugName;


// Methods

// Ctor Parameters []
explicit UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
 void Init(TObject result, bool success, ::StringW errorMsg, bool releaseDependenciesOnFailure) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
 void Init(TObject result, bool success, System::Exception exception, bool releaseDependenciesOnFailure) ;

/// @brief Method get_DebugName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_DebugName() ;

/// @brief Method InvokeWaitForCompletion addr 0x0 size 0xffffffffffffffff virtual true final false
 bool InvokeWaitForCompletion() ;

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual true final false
 void Execute() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement
// Type: ::CompletedOperation`1
namespace UnityEngine::ResourceManagement {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14313), inst: 766 }), TypeDefinitionIndex(TypeDefinitionIndex(14235)), TypeDefinitionIndex(TypeDefinitionIndex(14313))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14235), inst: 99 })
// CS Name: UnityEngine.ResourceManagement.ResourceManager::CompletedOperation`1
class CORDL_TYPE UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1<bool> : public UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1(UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1(UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1(void* ptr) noexcept : UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>(ptr) {
}


  constexpr UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1& operator=(UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1&& o) noexcept = default;
  constexpr UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1& operator=(UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1 const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_m_Success, put=__set_m_Success))  m_Success;

constexpr void __set_m_Success(bool value) ;

constexpr bool __get_m_Success() const;

 System::Exception __declspec(property(get=__get_m_Exception, put=__set_m_Exception))  m_Exception;

constexpr void __set_m_Exception(System::Exception value) ;

constexpr System::Exception __get_m_Exception() const;

 bool __declspec(property(get=__get_m_ReleaseDependenciesOnFailure, put=__set_m_ReleaseDependenciesOnFailure))  m_ReleaseDependenciesOnFailure;

constexpr void __set_m_ReleaseDependenciesOnFailure(bool value) ;

constexpr bool __get_m_ReleaseDependenciesOnFailure() const;


// Properties

 ::StringW __declspec(property(get=get_DebugName))  DebugName;


// Methods

// Ctor Parameters []
explicit UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
 void Init(bool result, bool success, ::StringW errorMsg, bool releaseDependenciesOnFailure) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
 void Init(bool result, bool success, System::Exception exception, bool releaseDependenciesOnFailure) ;

/// @brief Method get_DebugName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_DebugName() ;

/// @brief Method InvokeWaitForCompletion addr 0x0 size 0xffffffffffffffff virtual true final false
 bool InvokeWaitForCompletion() ;

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual true final false
 void Execute() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement
// Type: ::CompletedOperation`1
namespace UnityEngine::ResourceManagement {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14235)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14313), inst: 766 }), TypeDefinitionIndex(TypeDefinitionIndex(14313))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14235), inst: 772 })
// CS Name: UnityEngine.ResourceManagement.ResourceManager::CompletedOperation`1
class CORDL_TYPE UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> : public UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1(UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1(UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1(void* ptr) noexcept : UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>(ptr) {
}


  constexpr UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1& operator=(UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1&& o) noexcept = default;
  constexpr UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1& operator=(UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1 const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_m_Success, put=__set_m_Success))  m_Success;

constexpr void __set_m_Success(bool value) ;

constexpr bool __get_m_Success() const;

 System::Exception __declspec(property(get=__get_m_Exception, put=__set_m_Exception))  m_Exception;

constexpr void __set_m_Exception(System::Exception value) ;

constexpr System::Exception __get_m_Exception() const;

 bool __declspec(property(get=__get_m_ReleaseDependenciesOnFailure, put=__set_m_ReleaseDependenciesOnFailure))  m_ReleaseDependenciesOnFailure;

constexpr void __set_m_ReleaseDependenciesOnFailure(bool value) ;

constexpr bool __get_m_ReleaseDependenciesOnFailure() const;


// Properties

 ::StringW __declspec(property(get=get_DebugName))  DebugName;


// Methods

// Ctor Parameters []
explicit UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
 void Init(UnityEngine::ResourceManagement::ResourceProviders::SceneInstance result, bool success, ::StringW errorMsg, bool releaseDependenciesOnFailure) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
 void Init(UnityEngine::ResourceManagement::ResourceProviders::SceneInstance result, bool success, System::Exception exception, bool releaseDependenciesOnFailure) ;

/// @brief Method get_DebugName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_DebugName() ;

/// @brief Method InvokeWaitForCompletion addr 0x0 size 0xffffffffffffffff virtual true final false
 bool InvokeWaitForCompletion() ;

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual true final false
 void Execute() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement
// Type: ::CompletedOperation`1
namespace UnityEngine::ResourceManagement {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14313)), TypeDefinitionIndex(TypeDefinitionIndex(14235)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14313), inst: 766 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14235), inst: 830 })
// CS Name: UnityEngine.ResourceManagement.ResourceManager::CompletedOperation`1
class CORDL_TYPE UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1<int64_t> : public UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1(UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1(UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1(void* ptr) noexcept : UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>(ptr) {
}


  constexpr UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1& operator=(UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1&& o) noexcept = default;
  constexpr UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1& operator=(UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1 const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_m_Success, put=__set_m_Success))  m_Success;

constexpr void __set_m_Success(bool value) ;

constexpr bool __get_m_Success() const;

 System::Exception __declspec(property(get=__get_m_Exception, put=__set_m_Exception))  m_Exception;

constexpr void __set_m_Exception(System::Exception value) ;

constexpr System::Exception __get_m_Exception() const;

 bool __declspec(property(get=__get_m_ReleaseDependenciesOnFailure, put=__set_m_ReleaseDependenciesOnFailure))  m_ReleaseDependenciesOnFailure;

constexpr void __set_m_ReleaseDependenciesOnFailure(bool value) ;

constexpr bool __get_m_ReleaseDependenciesOnFailure() const;


// Properties

 ::StringW __declspec(property(get=get_DebugName))  DebugName;


// Methods

// Ctor Parameters []
explicit UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
 void Init(int64_t result, bool success, ::StringW errorMsg, bool releaseDependenciesOnFailure) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
 void Init(int64_t result, bool success, System::Exception exception, bool releaseDependenciesOnFailure) ;

/// @brief Method get_DebugName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_DebugName() ;

/// @brief Method InvokeWaitForCompletion addr 0x0 size 0xffffffffffffffff virtual true final false
 bool InvokeWaitForCompletion() ;

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual true final false
 void Execute() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement
// Type: ::<>c__DisplayClass92_0`1
namespace UnityEngine::ResourceManagement {
// cpp template
template<::cordl_internals::il2cpp_reference_type TObject>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14237))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14237), inst: 2 })
// CS Name: UnityEngine.ResourceManagement.ResourceManager::<>c__DisplayClass92_0`1
class CORDL_TYPE UnityEngine__ResourceManagement__ResourceManager____c__DisplayClass92_0_1<TObject> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__ResourceManagement__ResourceManager____c__DisplayClass92_0_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ResourceManagement__ResourceManager____c__DisplayClass92_0_1", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ResourceManagement__ResourceManager____c__DisplayClass92_0_1(UnityEngine__ResourceManagement__ResourceManager____c__DisplayClass92_0_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ResourceManagement__ResourceManager____c__DisplayClass92_0_1", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ResourceManagement__ResourceManager____c__DisplayClass92_0_1(UnityEngine__ResourceManagement__ResourceManager____c__DisplayClass92_0_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ResourceManagement__ResourceManager____c__DisplayClass92_0_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__ResourceManagement__ResourceManager____c__DisplayClass92_0_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ResourceManagement__ResourceManager____c__DisplayClass92_0_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ResourceManagement__ResourceManager____c__DisplayClass92_0_1& operator=(UnityEngine__ResourceManagement__ResourceManager____c__DisplayClass92_0_1&& o) noexcept = default;
  constexpr UnityEngine__ResourceManagement__ResourceManager____c__DisplayClass92_0_1& operator=(UnityEngine__ResourceManagement__ResourceManager____c__DisplayClass92_0_1 const& o) noexcept = default;
                


// Fields

 System::Action_1<TObject> __declspec(property(get=__get_callback, put=__set_callback))  callback;

constexpr void __set_callback(System::Action_1<TObject> value) ;

constexpr System::Action_1<TObject> __get_callback() const;

 bool __declspec(property(get=__get_releaseDependenciesOnFailure, put=__set_releaseDependenciesOnFailure))  releaseDependenciesOnFailure;

constexpr void __set_releaseDependenciesOnFailure(bool value) ;

constexpr bool __get_releaseDependenciesOnFailure() const;

 UnityEngine::ResourceManagement::ResourceManager __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(UnityEngine::ResourceManagement::ResourceManager value) ;

constexpr UnityEngine::ResourceManagement::ResourceManager __get___4__this() const;


// Methods

// Ctor Parameters []
explicit UnityEngine__ResourceManagement__ResourceManager____c__DisplayClass92_0_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <ProvideResources>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ProvideResources_b__0(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle x) ;

/// @brief Method <ProvideResources>b__1 addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<TObject>> _ProvideResources_b__1(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle resultHandle) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager__CompletedOperation_1, "UnityEngine.ResourceManagement", "ResourceManager/CompletedOperation`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager____c__DisplayClass92_0_1, "UnityEngine.ResourceManagement", "ResourceManager/<>c__DisplayClass92_0`1");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventType, "UnityEngine.ResourceManagement", "ResourceManager/DiagnosticEventType");
NEED_NO_BOX(UnityEngine::ResourceManagement::ResourceManager);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceManager, "UnityEngine.ResourceManagement", "ResourceManager");
NEED_NO_BOX(UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager__InstanceOperation);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager__InstanceOperation, "UnityEngine.ResourceManagement", "ResourceManager/InstanceOperation");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager__DeferredCallbackRegisterRequest, "UnityEngine.ResourceManagement", "ResourceManager/DeferredCallbackRegisterRequest");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventContext, "UnityEngine.ResourceManagement", "ResourceManager/DiagnosticEventContext");
