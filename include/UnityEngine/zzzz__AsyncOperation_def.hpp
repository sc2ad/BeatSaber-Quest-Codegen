#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__YieldInstruction_def.hpp"
#include <cmath>
#include <cstdint>
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace UnityEngine {
class AsyncOperation;
}
// Type: UnityEngine::AsyncOperation
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10133))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10143))
// CS Name: UnityEngine.AsyncOperation
class CORDL_TYPE AsyncOperation : public UnityEngine::YieldInstruction {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AsyncOperation() = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncOperation", modifiers: " const&", def_value: None }]
constexpr AsyncOperation(AsyncOperation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncOperation", modifiers: "&&", def_value: None }]
constexpr AsyncOperation(AsyncOperation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AsyncOperation(void* ptr) noexcept : UnityEngine::YieldInstruction(ptr) {
}


  constexpr AsyncOperation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AsyncOperation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AsyncOperation& operator=(AsyncOperation&& o) noexcept = default;
  constexpr AsyncOperation& operator=(AsyncOperation const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr))  m_Ptr;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_Ptr() const;

 System::Action_1<UnityEngine::AsyncOperation> __declspec(property(get=__get_m_completeCallback, put=__set_m_completeCallback))  m_completeCallback;

constexpr void __set_m_completeCallback(System::Action_1<UnityEngine::AsyncOperation> value) ;

constexpr System::Action_1<UnityEngine::AsyncOperation> __get_m_completeCallback() const;


// Properties

 bool __declspec(property(get=get_isDone))  isDone;

 float_t __declspec(property(get=get_progress))  progress;

 int32_t __declspec(property(put=set_priority))  priority;

 bool __declspec(property(get=get_allowSceneActivation, put=set_allowSceneActivation))  allowSceneActivation;


// Methods

/// @brief Method Finalize addr 0x2b59324 size 0xbc virtual true final false
 void Finalize() ;

/// @brief Method InvokeCompletionEvent addr 0x2b5941c size 0x30 virtual false final false
 void InvokeCompletionEvent() ;

/// @brief Method add_completed addr 0x2b5944c size 0xfc virtual false final false
 void add_completed(System::Action_1<UnityEngine::AsyncOperation> value) ;

/// @brief Method remove_completed addr 0x2b59584 size 0xa8 virtual false final false
 void remove_completed(System::Action_1<UnityEngine::AsyncOperation> value) ;

/// @brief Method InternalDestroy addr 0x2b593e0 size 0x3c virtual false final false
static void InternalDestroy(::cordl_internals::intptr_t ptr) ;

/// @brief Method get_isDone addr 0x2b59548 size 0x3c virtual false final false
 bool get_isDone() ;

/// @brief Method get_progress addr 0x2b5962c size 0x3c virtual false final false
 float_t get_progress() ;

/// @brief Method set_priority addr 0x2b59668 size 0x44 virtual false final false
 void set_priority(int32_t value) ;

/// @brief Method get_allowSceneActivation addr 0x2b596ac size 0x3c virtual false final false
 bool get_allowSceneActivation() ;

/// @brief Method set_allowSceneActivation addr 0x2b596e8 size 0x44 virtual false final false
 void set_allowSceneActivation(bool value) ;

// Ctor Parameters []
explicit AsyncOperation() ;

/// @brief Method .ctor addr 0x2b5972c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::AsyncOperation);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AsyncOperation, "UnityEngine", "AsyncOperation");
