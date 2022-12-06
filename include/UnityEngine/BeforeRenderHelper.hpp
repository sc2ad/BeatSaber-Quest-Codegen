// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction
  class UnityAction;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: BeforeRenderHelper
  class BeforeRenderHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::BeforeRenderHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::BeforeRenderHelper*, "UnityEngine", "BeforeRenderHelper");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.BeforeRenderHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class BeforeRenderHelper : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::BeforeRenderHelper::OrderBlock
    struct OrderBlock;
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.BeforeRenderHelper/UnityEngine.OrderBlock
    // [TokenAttribute] Offset: FFFFFFFF
    struct OrderBlock/*, public ::System::ValueType*/ {
      public:
      public:
      // System.Int32 order
      // Size: 0x4
      // Offset: 0x0
      int order;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Padding between fields: order and: callback
      char __padding0[0x4] = {};
      // UnityEngine.Events.UnityAction callback
      // Size: 0x8
      // Offset: 0x8
      ::UnityEngine::Events::UnityAction* callback;
      // Field size check
      static_assert(sizeof(::UnityEngine::Events::UnityAction*) == 0x8);
      public:
      // Creating value type constructor for type: OrderBlock
      constexpr OrderBlock(int order_ = {}, ::UnityEngine::Events::UnityAction* callback_ = {}) noexcept : order{order_}, callback{callback_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating interface conversion operator: i_ValueType
      inline ::System::ValueType* i_ValueType() noexcept {
        return reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: System.Int32 order
      [[deprecated("Use field access instead!")]] int& dyn_order();
      // Get instance field reference: UnityEngine.Events.UnityAction callback
      [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityAction*& dyn_callback();
    }; // UnityEngine.BeforeRenderHelper/UnityEngine.OrderBlock
    #pragma pack(pop)
    static check_size<sizeof(BeforeRenderHelper::OrderBlock), 8 + sizeof(::UnityEngine::Events::UnityAction*)> __UnityEngine_BeforeRenderHelper_OrderBlockSizeCheck;
    static_assert(sizeof(BeforeRenderHelper::OrderBlock) == 0x10);
    // Get static field: static private System.Collections.Generic.List`1<UnityEngine.BeforeRenderHelper/UnityEngine.OrderBlock> s_OrderBlocks
    static ::System::Collections::Generic::List_1<::UnityEngine::BeforeRenderHelper::OrderBlock>* _get_s_OrderBlocks();
    // Set static field: static private System.Collections.Generic.List`1<UnityEngine.BeforeRenderHelper/UnityEngine.OrderBlock> s_OrderBlocks
    static void _set_s_OrderBlocks(::System::Collections::Generic::List_1<::UnityEngine::BeforeRenderHelper::OrderBlock>* value);
    // static private System.Void .cctor()
    // Offset: 0x20251B4
    static void _cctor();
    // static private System.Int32 GetUpdateOrder(UnityEngine.Events.UnityAction callback)
    // Offset: 0x2024E94
    static int GetUpdateOrder(::UnityEngine::Events::UnityAction* callback);
    // static public System.Void RegisterCallback(UnityEngine.Events.UnityAction callback)
    // Offset: 0x2022CA0
    static void RegisterCallback(::UnityEngine::Events::UnityAction* callback);
    // static public System.Void UnregisterCallback(UnityEngine.Events.UnityAction callback)
    // Offset: 0x2023040
    static void UnregisterCallback(::UnityEngine::Events::UnityAction* callback);
    // static public System.Void Invoke()
    // Offset: 0x2023700
    static void Invoke();
  }; // UnityEngine.BeforeRenderHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::BeforeRenderHelper::OrderBlock, "UnityEngine", "BeforeRenderHelper/OrderBlock");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::BeforeRenderHelper::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::BeforeRenderHelper::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BeforeRenderHelper*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::BeforeRenderHelper::GetUpdateOrder
// Il2CppName: GetUpdateOrder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::Events::UnityAction*)>(&UnityEngine::BeforeRenderHelper::GetUpdateOrder)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("UnityEngine.Events", "UnityAction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BeforeRenderHelper*), "GetUpdateOrder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback});
  }
};
// Writing MetadataGetter for method: UnityEngine::BeforeRenderHelper::RegisterCallback
// Il2CppName: RegisterCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Events::UnityAction*)>(&UnityEngine::BeforeRenderHelper::RegisterCallback)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("UnityEngine.Events", "UnityAction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BeforeRenderHelper*), "RegisterCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback});
  }
};
// Writing MetadataGetter for method: UnityEngine::BeforeRenderHelper::UnregisterCallback
// Il2CppName: UnregisterCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Events::UnityAction*)>(&UnityEngine::BeforeRenderHelper::UnregisterCallback)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("UnityEngine.Events", "UnityAction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BeforeRenderHelper*), "UnregisterCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback});
  }
};
// Writing MetadataGetter for method: UnityEngine::BeforeRenderHelper::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::BeforeRenderHelper::Invoke)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BeforeRenderHelper*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
