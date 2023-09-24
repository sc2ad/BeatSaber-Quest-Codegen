#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HoudiniEngineUnity {
class HEU_Task;
}
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_Task__TaskResult;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_TaskManager;
}
// Type: HoudiniEngineUnity::HEU_TaskManager
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9744))
// CS Name: HoudiniEngineUnity.HEU_TaskManager
class CORDL_TYPE HEU_TaskManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HEU_TaskManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_TaskManager", modifiers: " const&", def_value: None }]
constexpr HEU_TaskManager(HEU_TaskManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_TaskManager", modifiers: "&&", def_value: None }]
constexpr HEU_TaskManager(HEU_TaskManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_TaskManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_TaskManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_TaskManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_TaskManager& operator=(HEU_TaskManager&& o) noexcept = default;
  constexpr HEU_TaskManager& operator=(HEU_TaskManager const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_Task> __declspec(property(get=__get__tasks, put=__set__tasks))  _tasks;

static void __set__tasks(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_Task> value) ;

static System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_Task> __get__tasks() ;

static System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_Task> __declspec(property(get=__get__pendingAdd, put=__set__pendingAdd))  _pendingAdd;

static void __set__pendingAdd(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_Task> value) ;

static System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_Task> __get__pendingAdd() ;

static System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_Task> __declspec(property(get=__get__pendingRemove, put=__set__pendingRemove))  _pendingRemove;

static void __set__pendingRemove(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_Task> value) ;

static System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_Task> __get__pendingRemove() ;


// Methods

/// @brief Method Update addr 0x2039d04 size 0x4 virtual false final false
static void Update() ;

/// @brief Method GetTask addr 0x2039d08 size 0x1a4 virtual false final false
static HoudiniEngineUnity::HEU_Task GetTask(System::Guid taskGuid) ;

/// @brief Method AddTask addr 0x2039eac size 0x150 virtual false final false
static void AddTask(HoudiniEngineUnity::HEU_Task task) ;

/// @brief Method KillTask addr 0x2039ffc size 0xe8 virtual false final false
static void KillTask(HoudiniEngineUnity::HEU_Task task, bool bRemove) ;

/// @brief Method KillTask addr 0x203a228 size 0x9c virtual false final false
static void KillTask(System::Guid taskGuid, bool bRemove) ;

/// @brief Method RemoveTask addr 0x203a0e4 size 0x144 virtual false final false
static void RemoveTask(HoudiniEngineUnity::HEU_Task task) ;

/// @brief Method ExecuteTask addr 0x203a2c4 size 0x38 virtual false final false
static void ExecuteTask(HoudiniEngineUnity::HEU_Task task) ;

/// @brief Method CompleteTask addr 0x2039628 size 0x28 virtual false final false
static void CompleteTask(HoudiniEngineUnity::HEU_Task task, HoudiniEngineUnity::HoudiniEngineUnity__HEU_Task__TaskResult result) ;

/// @brief Method InternalCompleteTask addr 0x203a2fc size 0x60 virtual false final false
static void InternalCompleteTask(HoudiniEngineUnity::HEU_Task task) ;

static HoudiniEngineUnity::HEU_TaskManager New_ctor() ;

/// @brief Method .ctor addr 0x203a35c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_TaskManager);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_TaskManager, "HoudiniEngineUnity", "HEU_TaskManager");
