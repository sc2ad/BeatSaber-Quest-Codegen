#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Threading {
struct ThreadPriority;
}
namespace System::Threading {
class Thread;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_ThreadedTask;
}
// Type: HoudiniEngineUnity::HEU_ThreadedTask
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9750))
// CS Name: HoudiniEngineUnity.HEU_ThreadedTask
class CORDL_TYPE HEU_ThreadedTask : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~HEU_ThreadedTask() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ThreadedTask", modifiers: " const&", def_value: None }]
constexpr HEU_ThreadedTask(HEU_ThreadedTask const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ThreadedTask", modifiers: "&&", def_value: None }]
constexpr HEU_ThreadedTask(HEU_ThreadedTask&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_ThreadedTask(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_ThreadedTask& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_ThreadedTask& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_ThreadedTask& operator=(HEU_ThreadedTask&& o) noexcept = default;
  constexpr HEU_ThreadedTask& operator=(HEU_ThreadedTask const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__isComplete, put=__set__isComplete))  _isComplete;

constexpr void __set__isComplete(bool value) ;

constexpr bool __get__isComplete() const;

 bool __declspec(property(get=__get__isActive, put=__set__isActive))  _isActive;

constexpr void __set__isActive(bool value) ;

constexpr bool __get__isActive() const;

 bool __declspec(property(get=__get__stopRequested, put=__set__stopRequested))  _stopRequested;

constexpr void __set__stopRequested(bool value) ;

constexpr bool __get__stopRequested() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__lockHandle, put=__set__lockHandle))  _lockHandle;

constexpr void __set__lockHandle(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__lockHandle() const;

 System::Threading::Thread __declspec(property(get=__get__thread, put=__set__thread))  _thread;

constexpr void __set__thread(System::Threading::Thread value) ;

constexpr System::Threading::Thread __get__thread() const;

 System::Threading::ThreadPriority __declspec(property(get=__get__priority, put=__set__priority))  _priority;

constexpr void __set__priority(System::Threading::ThreadPriority value) ;

constexpr System::Threading::ThreadPriority __get__priority() const;

 bool __declspec(property(get=__get__isBackground, put=__set__isBackground))  _isBackground;

constexpr void __set__isBackground(bool value) ;

constexpr bool __get__isBackground() const;

 ::StringW __declspec(property(get=__get__name, put=__set__name))  _name;

constexpr void __set__name(::StringW value) ;

constexpr ::StringW __get__name() const;


// Properties

 ::StringW __declspec(property(get=get_TaskName))  TaskName;

 bool __declspec(property(get=get_IsComplete, put=set_IsComplete))  IsComplete;

 bool __declspec(property(get=get_IsActive, put=set_IsActive))  IsActive;

 bool __declspec(property(get=get_StopRequested, put=set_StopRequested))  StopRequested;

 System::Threading::ThreadPriority __declspec(property(get=get_Priority, put=set_Priority))  Priority;

 bool __declspec(property(get=get_IsBackground, put=set_IsBackground))  IsBackground;


// Methods

/// @brief Method Start addr 0x203a51c size 0x13c virtual true final false
 void Start() ;

/// @brief Method Stop addr 0x203a7d8 size 0x3c virtual true final false
 void Stop() ;

/// @brief Method Abort addr 0x203a99c size 0x34 virtual true final false
 void Abort() ;

/// @brief Method Reset addr 0x203a9d0 size 0x84 virtual true final false
 void Reset() ;

/// @brief Method Update addr 0x203aa54 size 0x58 virtual true final false
 void Update() ;

/// @brief Method DoWork addr 0x203ac3c size 0x4 virtual true final false
 void DoWork() ;

/// @brief Method OnComplete addr 0x203ac40 size 0x4 virtual true final false
 void OnComplete() ;

/// @brief Method OnStopped addr 0x203ac44 size 0x4 virtual true final false
 void OnStopped() ;

/// @brief Method CleanUp addr 0x203ac48 size 0x4 virtual true final false
 void CleanUp() ;

/// @brief Method Run addr 0x203ac4c size 0x24 virtual false final false
 void Run() ;

/// @brief Method get_TaskName addr 0x203ac70 size 0x8 virtual false final false
 ::StringW get_TaskName() ;

/// @brief Method get_IsComplete addr 0x203a814 size 0xc8 virtual false final false
 bool get_IsComplete() ;

/// @brief Method set_IsComplete addr 0x203a718 size 0xc0 virtual false final false
 void set_IsComplete(bool value) ;

/// @brief Method get_IsActive addr 0x203aaac size 0xc8 virtual false final false
 bool get_IsActive() ;

/// @brief Method set_IsActive addr 0x203a658 size 0xc0 virtual false final false
 void set_IsActive(bool value) ;

/// @brief Method get_StopRequested addr 0x203ab74 size 0xc8 virtual false final false
 bool get_StopRequested() ;

/// @brief Method set_StopRequested addr 0x203a8dc size 0xc0 virtual false final false
 void set_StopRequested(bool value) ;

/// @brief Method get_Priority addr 0x203ac78 size 0x8 virtual false final false
 System::Threading::ThreadPriority get_Priority() ;

/// @brief Method set_Priority addr 0x203ac80 size 0x8 virtual false final false
 void set_Priority(System::Threading::ThreadPriority value) ;

/// @brief Method get_IsBackground addr 0x203ac88 size 0x8 virtual false final false
 bool get_IsBackground() ;

/// @brief Method set_IsBackground addr 0x203ac90 size 0xc virtual false final false
 void set_IsBackground(bool value) ;

static HoudiniEngineUnity::HEU_ThreadedTask New_ctor() ;

/// @brief Method .ctor addr 0x203ac9c size 0x70 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_ThreadedTask);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_ThreadedTask, "HoudiniEngineUnity", "HEU_ThreadedTask");
