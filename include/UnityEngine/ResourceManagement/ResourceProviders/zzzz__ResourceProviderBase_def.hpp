#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::ResourceManagement::Util {
class IInitializableObject;
}
namespace System {
class Type;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct ProviderBehaviourFlags;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class IResourceProvider;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase____c__DisplayClass10_0;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct ProvideHandle;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
class ResourceProviderBase;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase____c__DisplayClass10_0;
}
// Type: ::BaseInitAsyncOp
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14313)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14313), inst: 99 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14292))
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase::BaseInitAsyncOp
class CORDL_TYPE UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp : public UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp(UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp(UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp(void* ptr) noexcept : UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>(ptr) {
}


  constexpr UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp& operator=(UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp&& o) noexcept = default;
  constexpr UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp& operator=(UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp const& o) noexcept = default;
                


// Fields

 System::Func_1<bool> __declspec(property(get=__get_m_CallBack, put=__set_m_CallBack))  m_CallBack;

constexpr void __set_m_CallBack(System::Func_1<bool> value) ;

constexpr System::Func_1<bool> __get_m_CallBack() const;


// Methods

/// @brief Method Init addr 0x2a40914 size 0x8 virtual false final false
 void Init(System::Func_1<bool> callback) ;

/// @brief Method InvokeWaitForCompletion addr 0x2a4091c size 0x70 virtual true final false
 bool InvokeWaitForCompletion() ;

/// @brief Method Execute addr 0x2a4098c size 0x88 virtual true final false
 void Execute() ;

static UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp New_ctor() ;

/// @brief Method .ctor addr 0x2a408c4 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
// Type: ::<>c__DisplayClass10_0
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14293))
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase::<>c__DisplayClass10_0
class CORDL_TYPE UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase____c__DisplayClass10_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase____c__DisplayClass10_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase____c__DisplayClass10_0", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase____c__DisplayClass10_0(UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase____c__DisplayClass10_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase____c__DisplayClass10_0", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase____c__DisplayClass10_0(UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase____c__DisplayClass10_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase____c__DisplayClass10_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase____c__DisplayClass10_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase____c__DisplayClass10_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase____c__DisplayClass10_0& operator=(UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase____c__DisplayClass10_0&& o) noexcept = default;
  constexpr UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase____c__DisplayClass10_0& operator=(UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase____c__DisplayClass10_0 const& o) noexcept = default;
                


// Fields

 UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase value) ;

constexpr UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase __get___4__this() const;

 ::StringW __declspec(property(get=__get_id, put=__set_id))  id;

constexpr void __set_id(::StringW value) ;

constexpr ::StringW __get_id() const;

 ::StringW __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(::StringW value) ;

constexpr ::StringW __get_data() const;


// Methods

static UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase____c__DisplayClass10_0 New_ctor() ;

/// @brief Method .ctor addr 0x2a408bc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <InitializeAsync>b__0 addr 0x2a40a14 size 0x2c virtual false final false
 bool _InitializeAsync_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
// Type: UnityEngine.ResourceManagement.ResourceProviders::ResourceProviderBase
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14294))
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase
class CORDL_TYPE ResourceProviderBase : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass10_0 = UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase____c__DisplayClass10_0;

using BaseInitAsyncOp = UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp;

/// @brief Convert operator to UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider
constexpr operator  UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider() const noexcept;

/// @brief Convert operator to UnityEngine::ResourceManagement::Util::IInitializableObject
constexpr operator  UnityEngine::ResourceManagement::Util::IInitializableObject() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ResourceProviderBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "ResourceProviderBase", modifiers: " const&", def_value: None }]
constexpr ResourceProviderBase(ResourceProviderBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ResourceProviderBase", modifiers: "&&", def_value: None }]
constexpr ResourceProviderBase(ResourceProviderBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ResourceProviderBase(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ResourceProviderBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ResourceProviderBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ResourceProviderBase& operator=(ResourceProviderBase&& o) noexcept = default;
  constexpr ResourceProviderBase& operator=(ResourceProviderBase const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_ProviderId, put=__set_m_ProviderId))  m_ProviderId;

constexpr void __set_m_ProviderId(::StringW value) ;

constexpr ::StringW __get_m_ProviderId() const;

 UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags __declspec(property(get=__get_m_BehaviourFlags, put=__set_m_BehaviourFlags))  m_BehaviourFlags;

constexpr void __set_m_BehaviourFlags(UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags value) ;

constexpr UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags __get_m_BehaviourFlags() const;


// Properties

 ::StringW __declspec(property(get=get_ProviderId))  ProviderId;

 UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags __declspec(property(get=UnityEngine_ResourceManagement_ResourceProviders_IResourceProvider_get_BehaviourFlags))  UnityEngine_ResourceManagement_ResourceProviders_IResourceProvider_BehaviourFlags;


// Methods

/// @brief Method get_ProviderId addr 0x2a40638 size 0x50 virtual true final false
 ::StringW get_ProviderId() ;

/// @brief Method Initialize addr 0x2a40688 size 0x24 virtual true final false
 bool Initialize(::StringW id, ::StringW data) ;

/// @brief Method CanProvide addr 0x2a406ac size 0x40 virtual true final false
 bool CanProvide(System::Type t, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location) ;

/// @brief Method ToString addr 0x2a406ec size 0xc virtual true final false
 ::StringW ToString() ;

/// @brief Method Release addr 0x2a406f8 size 0x4 virtual true final false
 void Release(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, ::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetDefaultType addr 0x2a406fc size 0x6c virtual true final false
 System::Type GetDefaultType(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location) ;

/// @brief Method Provide addr 0x0 size 0xffffffffffffffff virtual true final false
 void Provide(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle) ;

/// @brief Method InitializeAsync addr 0x2a40768 size 0x154 virtual true final false
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> InitializeAsync(UnityEngine::ResourceManagement::ResourceManager rm, ::StringW id, ::StringW data) ;

/// @brief Method UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider.get_BehaviourFlags addr 0x2a4090c size 0x8 virtual true final true
 UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags UnityEngine_ResourceManagement_ResourceProviders_IResourceProvider_get_BehaviourFlags() ;

static UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase New_ctor() ;

/// @brief Method .ctor addr 0x2a3e1b0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
NEED_NO_BOX(UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase, "UnityEngine.ResourceManagement.ResourceProviders", "ResourceProviderBase");
NEED_NO_BOX(UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase__BaseInitAsyncOp, "UnityEngine.ResourceManagement.ResourceProviders", "ResourceProviderBase/BaseInitAsyncOp");
NEED_NO_BOX(UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase____c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__ResourceProviderBase____c__DisplayClass10_0, "UnityEngine.ResourceManagement.ResourceProviders", "ResourceProviderBase/<>c__DisplayClass10_0");
