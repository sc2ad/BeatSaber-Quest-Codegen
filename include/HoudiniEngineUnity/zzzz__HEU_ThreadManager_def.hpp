#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace HoudiniEngineUnity {
class HEU_ThreadedTask;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_ThreadManager;
}
// Type: HoudiniEngineUnity::HEU_ThreadManager
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9758))
// CS Name: HoudiniEngineUnity.HEU_ThreadManager
class CORDL_TYPE HEU_ThreadManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~HEU_ThreadManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ThreadManager", modifiers: " const&", def_value: None }]
constexpr HEU_ThreadManager(HEU_ThreadManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ThreadManager", modifiers: "&&", def_value: None }]
constexpr HEU_ThreadManager(HEU_ThreadManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_ThreadManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_ThreadManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_ThreadManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_ThreadManager& operator=(HEU_ThreadManager&& o) noexcept = default;
  constexpr HEU_ThreadManager& operator=(HEU_ThreadManager const& o) noexcept = default;
                


// Fields

static ::HoudiniEngineUnity::HEU_ThreadManager __declspec(property(get=__get__instance, put=__set__instance))  _instance;

static void __set__instance(::HoudiniEngineUnity::HEU_ThreadManager value) ;

static ::HoudiniEngineUnity::HEU_ThreadManager __get__instance() ;

 ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask> __declspec(property(get=__get__tasks, put=__set__tasks))  _tasks;

constexpr void __set__tasks(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask> value) ;

constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask> __get__tasks() const;

 ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask> __declspec(property(get=__get__pendingAdd, put=__set__pendingAdd))  _pendingAdd;

constexpr void __set__pendingAdd(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask> value) ;

constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask> __get__pendingAdd() const;

 ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask> __declspec(property(get=__get__pendingRemove, put=__set__pendingRemove))  _pendingRemove;

constexpr void __set__pendingRemove(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask> value) ;

constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask> __get__pendingRemove() const;


// Properties

static ::HoudiniEngineUnity::HEU_ThreadManager __declspec(property(get=get_Instance))  Instance;


// Methods

/// @brief Method get_Instance addr 0x2040794 size 0x48 virtual false final false
static ::HoudiniEngineUnity::HEU_ThreadManager get_Instance() ;

/// @brief Method CreateInstance addr 0x20407dc size 0x4 virtual false final false
static void CreateInstance() ;

/// @brief Method Finalize addr 0x20407e0 size 0x8 virtual true final false
 void Finalize() ;

/// @brief Method Register addr 0x20407ec size 0x4 virtual false final false
 void Register() ;

/// @brief Method Unregister addr 0x20407e8 size 0x4 virtual false final false
 void Unregister() ;

/// @brief Method Update addr 0x20407f0 size 0x3d4 virtual false final false
 void Update() ;

/// @brief Method AddTask addr 0x2040bc4 size 0xec virtual false final false
 void AddTask(::HoudiniEngineUnity::HEU_ThreadedTask task) ;

/// @brief Method RemoveTask addr 0x2040cb0 size 0xec virtual false final false
 void RemoveTask(::HoudiniEngineUnity::HEU_ThreadedTask task) ;

// Ctor Parameters []
explicit HEU_ThreadManager() ;

/// @brief Method .ctor addr 0x2040d9c size 0xbc virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
NEED_NO_BOX(::HoudiniEngineUnity::HEU_ThreadManager);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_ThreadManager, "HoudiniEngineUnity", "HEU_ThreadManager");
