#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::Util {
class IInitializableObject;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
namespace UnityEngine::ResourceManagement {
class IUpdateReceiver;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets::Initialization {
class CacheInitialization;
}
namespace UnityEngine::AddressableAssets::Initialization {
class UnityEngine__AddressableAssets__Initialization__CacheInitialization__CacheInitOp;
}
namespace UnityEngine::AddressableAssets::Initialization {
class UnityEngine__AddressableAssets__Initialization__CacheInitialization____c__DisplayClass1_0;
}
// Type: ::CacheInitOp
namespace UnityEngine::AddressableAssets::Initialization {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14313), inst: 99 }), TypeDefinitionIndex(TypeDefinitionIndex(14313))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14398))
// CS Name: UnityEngine.AddressableAssets.Initialization.CacheInitialization::CacheInitOp
class CORDL_TYPE UnityEngine__AddressableAssets__Initialization__CacheInitialization__CacheInitOp : public UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool> {
public:
// Declarations
/// @brief Convert operator to UnityEngine::ResourceManagement::IUpdateReceiver
constexpr operator  UnityEngine::ResourceManagement::IUpdateReceiver() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~UnityEngine__AddressableAssets__Initialization__CacheInitialization__CacheInitOp() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__AddressableAssets__Initialization__CacheInitialization__CacheInitOp", modifiers: " const&", def_value: None }]
constexpr UnityEngine__AddressableAssets__Initialization__CacheInitialization__CacheInitOp(UnityEngine__AddressableAssets__Initialization__CacheInitialization__CacheInitOp const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__AddressableAssets__Initialization__CacheInitialization__CacheInitOp", modifiers: "&&", def_value: None }]
constexpr UnityEngine__AddressableAssets__Initialization__CacheInitialization__CacheInitOp(UnityEngine__AddressableAssets__Initialization__CacheInitialization__CacheInitOp&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__AddressableAssets__Initialization__CacheInitialization__CacheInitOp(void* ptr) noexcept : UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>(ptr) {
}


  constexpr UnityEngine__AddressableAssets__Initialization__CacheInitialization__CacheInitOp& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__AddressableAssets__Initialization__CacheInitialization__CacheInitOp& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__AddressableAssets__Initialization__CacheInitialization__CacheInitOp& operator=(UnityEngine__AddressableAssets__Initialization__CacheInitialization__CacheInitOp&& o) noexcept = default;
  constexpr UnityEngine__AddressableAssets__Initialization__CacheInitialization__CacheInitOp& operator=(UnityEngine__AddressableAssets__Initialization__CacheInitialization__CacheInitOp const& o) noexcept = default;
                


// Fields

 System::Func_1<bool> __declspec(property(get=__get_m_Callback, put=__set_m_Callback))  m_Callback;

constexpr void __set_m_Callback(System::Func_1<bool> value) ;

constexpr System::Func_1<bool> __get_m_Callback() const;

 bool __declspec(property(get=__get_m_UpdateRequired, put=__set_m_UpdateRequired))  m_UpdateRequired;

constexpr void __set_m_UpdateRequired(bool value) ;

constexpr bool __get_m_UpdateRequired() const;


// Methods

/// @brief Method Init addr 0x289ed84 size 0x8 virtual false final false
 void Init(System::Func_1<bool> callback) ;

/// @brief Method InvokeWaitForCompletion addr 0x289ed8c size 0x94 virtual true final false
 bool InvokeWaitForCompletion() ;

/// @brief Method Update addr 0x289ee20 size 0xb4 virtual true final true
 void Update(float_t unscaledDeltaTime) ;

/// @brief Method Execute addr 0x289eed4 size 0x98 virtual true final false
 void Execute() ;

// Ctor Parameters []
explicit UnityEngine__AddressableAssets__Initialization__CacheInitialization__CacheInitOp() ;

/// @brief Method .ctor addr 0x289ecb4 size 0x50 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AddressableAssets::Initialization
// Type: ::<>c__DisplayClass1_0
namespace UnityEngine::AddressableAssets::Initialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14399))
// CS Name: UnityEngine.AddressableAssets.Initialization.CacheInitialization::<>c__DisplayClass1_0
class CORDL_TYPE UnityEngine__AddressableAssets__Initialization__CacheInitialization____c__DisplayClass1_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~UnityEngine__AddressableAssets__Initialization__CacheInitialization____c__DisplayClass1_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__AddressableAssets__Initialization__CacheInitialization____c__DisplayClass1_0", modifiers: " const&", def_value: None }]
constexpr UnityEngine__AddressableAssets__Initialization__CacheInitialization____c__DisplayClass1_0(UnityEngine__AddressableAssets__Initialization__CacheInitialization____c__DisplayClass1_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__AddressableAssets__Initialization__CacheInitialization____c__DisplayClass1_0", modifiers: "&&", def_value: None }]
constexpr UnityEngine__AddressableAssets__Initialization__CacheInitialization____c__DisplayClass1_0(UnityEngine__AddressableAssets__Initialization__CacheInitialization____c__DisplayClass1_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__AddressableAssets__Initialization__CacheInitialization____c__DisplayClass1_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__AddressableAssets__Initialization__CacheInitialization____c__DisplayClass1_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__AddressableAssets__Initialization__CacheInitialization____c__DisplayClass1_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__AddressableAssets__Initialization__CacheInitialization____c__DisplayClass1_0& operator=(UnityEngine__AddressableAssets__Initialization__CacheInitialization____c__DisplayClass1_0&& o) noexcept = default;
  constexpr UnityEngine__AddressableAssets__Initialization__CacheInitialization____c__DisplayClass1_0& operator=(UnityEngine__AddressableAssets__Initialization__CacheInitialization____c__DisplayClass1_0 const& o) noexcept = default;
                


// Fields

 UnityEngine::AddressableAssets::Initialization::CacheInitialization __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(UnityEngine::AddressableAssets::Initialization::CacheInitialization value) ;

constexpr UnityEngine::AddressableAssets::Initialization::CacheInitialization __get___4__this() const;

 ::StringW __declspec(property(get=__get_id, put=__set_id))  id;

constexpr void __set_id(::StringW value) ;

constexpr ::StringW __get_id() const;

 ::StringW __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(::StringW value) ;

constexpr ::StringW __get_data() const;


// Methods

// Ctor Parameters []
explicit UnityEngine__AddressableAssets__Initialization__CacheInitialization____c__DisplayClass1_0() ;

/// @brief Method .ctor addr 0x289ecac size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <InitializeAsync>b__0 addr 0x289ef6c size 0x24 virtual false final false
 bool _InitializeAsync_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AddressableAssets::Initialization
// Type: UnityEngine.AddressableAssets.Initialization::CacheInitialization
namespace UnityEngine::AddressableAssets::Initialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14400))
// CS Name: UnityEngine.AddressableAssets.Initialization.CacheInitialization
class CORDL_TYPE CacheInitialization : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass1_0 = UnityEngine::AddressableAssets::Initialization::UnityEngine__AddressableAssets__Initialization__CacheInitialization____c__DisplayClass1_0;

using CacheInitOp = UnityEngine::AddressableAssets::Initialization::UnityEngine__AddressableAssets__Initialization__CacheInitialization__CacheInitOp;

/// @brief Convert operator to UnityEngine::ResourceManagement::Util::IInitializableObject
constexpr operator  UnityEngine::ResourceManagement::Util::IInitializableObject() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CacheInitialization() = default;

// Ctor Parameters [CppParam { name: "", ty: "CacheInitialization", modifiers: " const&", def_value: None }]
constexpr CacheInitialization(CacheInitialization const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CacheInitialization", modifiers: "&&", def_value: None }]
constexpr CacheInitialization(CacheInitialization&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CacheInitialization(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CacheInitialization& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CacheInitialization& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CacheInitialization& operator=(CacheInitialization&& o) noexcept = default;
  constexpr CacheInitialization& operator=(CacheInitialization const& o) noexcept = default;
                


// Properties

static ::StringW __declspec(property(get=get_RootPath))  RootPath;


// Methods

/// @brief Method Initialize addr 0x289ea0c size 0x14c virtual true final true
 bool Initialize(::StringW id, ::StringW dataStr) ;

/// @brief Method InitializeAsync addr 0x289eb58 size 0x154 virtual true final false
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> InitializeAsync(UnityEngine::ResourceManagement::ResourceManager rm, ::StringW id, ::StringW data) ;

/// @brief Method get_RootPath addr 0x289ed04 size 0x78 virtual false final false
static ::StringW get_RootPath() ;

// Ctor Parameters []
explicit CacheInitialization() ;

/// @brief Method .ctor addr 0x289ed7c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AddressableAssets::Initialization
NEED_NO_BOX(UnityEngine::AddressableAssets::Initialization::CacheInitialization);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::Initialization::CacheInitialization, "UnityEngine.AddressableAssets.Initialization", "CacheInitialization");
NEED_NO_BOX(UnityEngine::AddressableAssets::Initialization::UnityEngine__AddressableAssets__Initialization__CacheInitialization__CacheInitOp);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::Initialization::UnityEngine__AddressableAssets__Initialization__CacheInitialization__CacheInitOp, "UnityEngine.AddressableAssets.Initialization", "CacheInitialization/CacheInitOp");
NEED_NO_BOX(UnityEngine::AddressableAssets::Initialization::UnityEngine__AddressableAssets__Initialization__CacheInitialization____c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::Initialization::UnityEngine__AddressableAssets__Initialization__CacheInitialization____c__DisplayClass1_0, "UnityEngine.AddressableAssets.Initialization", "CacheInitialization/<>c__DisplayClass1_0");
