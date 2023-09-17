#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__ComponentSingleton_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedList_1;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
namespace System {
class Delegate;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class DelayedActionManager;
}
namespace UnityEngine::ResourceManagement::Util {
struct ____UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo;
}
// Type: ::DelegateInfo
namespace UnityEngine::ResourceManagement::Util {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14248))
// CS Name: UnityEngine.ResourceManagement.Util.DelayedActionManager::DelegateInfo
struct CORDL_TYPE ____UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Id", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Delegate", ty: "::System::Delegate", modifiers: "", def_value: None }, CppParam { name: "m_Target", ty: "::ArrayW<::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }, CppParam { name: "_InvocationTime_k__BackingField", ty: "float_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo(int32_t m_Id, ::System::Delegate m_Delegate, ::ArrayW<::bs_hook::Il2CppWrapperType> m_Target, float_t _InvocationTime_k__BackingField) noexcept;


                    constexpr ____UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo(____UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo const&) = default;
                    constexpr ____UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo(____UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo&&) = default;
                    constexpr ____UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo& operator=(____UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo& operator=(____UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static int32_t __declspec(property(get=__get_s_Id, put=__set_s_Id))  s_Id;

static void __set_s_Id(int32_t value) ;

static int32_t __get_s_Id() ;

 int32_t __declspec(property(get=__get_m_Id, put=__set_m_Id))  m_Id;

constexpr void __set_m_Id(int32_t value) ;

constexpr int32_t __get_m_Id() const;

 ::System::Delegate __declspec(property(get=__get_m_Delegate, put=__set_m_Delegate))  m_Delegate;

constexpr void __set_m_Delegate(::System::Delegate value) ;

constexpr ::System::Delegate __get_m_Delegate() const;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_m_Target, put=__set_m_Target))  m_Target;

constexpr void __set_m_Target(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get_m_Target() const;

 float_t __declspec(property(get=__get__InvocationTime_k__BackingField, put=__set__InvocationTime_k__BackingField))  _InvocationTime_k__BackingField;

constexpr void __set__InvocationTime_k__BackingField(float_t value) ;

constexpr float_t __get__InvocationTime_k__BackingField() const;


// Properties

 float_t __declspec(property(get=get_InvocationTime, put=set_InvocationTime))  InvocationTime;


// Methods

/// @brief Method .ctor addr 0x2a38e6c size 0x80 virtual false final false
 void _ctor(::System::Delegate d, float_t invocationTime, ::ArrayW<::bs_hook::Il2CppWrapperType> p) ;

/// @brief Method get_InvocationTime addr 0x2a3985c size 0x8 virtual false final false
 float_t get_InvocationTime() ;

/// @brief Method set_InvocationTime addr 0x2a39864 size 0x8 virtual false final false
 void set_InvocationTime(float_t value) ;

/// @brief Method ToString addr 0x2a3986c size 0x430 virtual true final false
 ::StringW ToString() ;

/// @brief Method Invoke addr 0x2a39470 size 0x17c virtual false final false
 void Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::Util
// Type: UnityEngine.ResourceManagement.Util::DelayedActionManager
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14247)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14247), inst: 1025 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14249))
// CS Name: UnityEngine.ResourceManagement.Util.DelayedActionManager
class CORDL_TYPE DelayedActionManager : public ::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager> {
public:
// Declarations
using DelegateInfo = ::UnityEngine::ResourceManagement::Util::____UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~DelayedActionManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "DelayedActionManager", modifiers: " const&", def_value: None }]
constexpr DelayedActionManager(DelayedActionManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DelayedActionManager", modifiers: "&&", def_value: None }]
constexpr DelayedActionManager(DelayedActionManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DelayedActionManager(void* ptr) noexcept : ::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<::UnityEngine::ResourceManagement::Util::DelayedActionManager>(ptr) {
}


  constexpr DelayedActionManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DelayedActionManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DelayedActionManager& operator=(DelayedActionManager&& o) noexcept = default;
  constexpr DelayedActionManager& operator=(DelayedActionManager const& o) noexcept = default;
                


// Fields

 ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::____UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo>> __declspec(property(get=__get_m_Actions, put=__set_m_Actions))  m_Actions;

constexpr void __set_m_Actions(::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::____UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo>> value) ;

constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::____UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo>> __get_m_Actions() const;

 ::System::Collections::Generic::LinkedList_1<::UnityEngine::ResourceManagement::Util::____UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> __declspec(property(get=__get_m_DelayedActions, put=__set_m_DelayedActions))  m_DelayedActions;

constexpr void __set_m_DelayedActions(::System::Collections::Generic::LinkedList_1<::UnityEngine::ResourceManagement::Util::____UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> value) ;

constexpr ::System::Collections::Generic::LinkedList_1<::UnityEngine::ResourceManagement::Util::____UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> __get_m_DelayedActions() const;

 ::System::Collections::Generic::Stack_1<::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::____UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo>> __declspec(property(get=__get_m_NodeCache, put=__set_m_NodeCache))  m_NodeCache;

constexpr void __set_m_NodeCache(::System::Collections::Generic::Stack_1<::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::____UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo>> value) ;

constexpr ::System::Collections::Generic::Stack_1<::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::____UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo>> __get_m_NodeCache() const;

 int32_t __declspec(property(get=__get_m_CollectionIndex, put=__set_m_CollectionIndex))  m_CollectionIndex;

constexpr void __set_m_CollectionIndex(int32_t value) ;

constexpr int32_t __get_m_CollectionIndex() const;

 bool __declspec(property(get=__get_m_DestroyOnCompletion, put=__set_m_DestroyOnCompletion))  m_DestroyOnCompletion;

constexpr void __set_m_DestroyOnCompletion(bool value) ;

constexpr bool __get_m_DestroyOnCompletion() const;


// Properties

static bool __declspec(property(get=get_IsActive))  IsActive;


// Methods

/// @brief Method GetNode addr 0x2a389f8 size 0xfc virtual false final false
 ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::____UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> GetNode(ByRef<::UnityEngine::ResourceManagement::Util::____UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo> del) ;

/// @brief Method Clear addr 0x2a38af4 size 0x74 virtual false final false
static void Clear() ;

/// @brief Method DestroyWhenComplete addr 0x2a38b68 size 0xc virtual false final false
 void DestroyWhenComplete() ;

/// @brief Method AddAction addr 0x2a38b74 size 0x74 virtual false final false
static void AddAction(::System::Delegate action, float_t delay, ::ArrayW<::bs_hook::Il2CppWrapperType> parameters) ;

/// @brief Method AddActionInternal addr 0x2a38be8 size 0x284 virtual false final false
 void AddActionInternal(::System::Delegate action, float_t delay, ::ArrayW<::bs_hook::Il2CppWrapperType> parameters) ;

/// @brief Method get_IsActive addr 0x2a38eec size 0x114 virtual false final false
static bool get_IsActive() ;

/// @brief Method Wait addr 0x2a39000 size 0x130 virtual false final false
static bool Wait(float_t timeout, float_t timeAdvanceAmount) ;

/// @brief Method LateUpdate addr 0x2a39454 size 0x1c virtual false final false
 void LateUpdate() ;

/// @brief Method InternalLateUpdate addr 0x2a39130 size 0x324 virtual false final false
 void InternalLateUpdate(float_t t) ;

/// @brief Method OnApplicationQuit addr 0x2a395ec size 0xb4 virtual false final false
 void OnApplicationQuit() ;

// Ctor Parameters []
explicit DelayedActionManager() ;

/// @brief Method .ctor addr 0x2a396a0 size 0x1bc virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::Util
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::DelayedActionManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::DelayedActionManager, "UnityEngine.ResourceManagement.Util", "DelayedActionManager");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::____UnityEngine__ResourceManagement__Util__DelayedActionManager__DelegateInfo, "UnityEngine.ResourceManagement.Util", "DelayedActionManager/DelegateInfo");
