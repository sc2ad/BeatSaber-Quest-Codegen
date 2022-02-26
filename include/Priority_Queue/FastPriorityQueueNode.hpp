// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Priority_Queue
namespace Priority_Queue {
  // Forward declaring type: FastPriorityQueueNode
  class FastPriorityQueueNode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Priority_Queue::FastPriorityQueueNode);
DEFINE_IL2CPP_ARG_TYPE(::Priority_Queue::FastPriorityQueueNode*, "Priority_Queue", "FastPriorityQueueNode");
// Type namespace: Priority_Queue
namespace Priority_Queue {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Priority_Queue.FastPriorityQueueNode
  // [TokenAttribute] Offset: FFFFFFFF
  class FastPriorityQueueNode : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Single <Priority>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    float Priority;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 <QueueIndex>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    int QueueIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Single <Priority>k__BackingField
    float& dyn_$Priority$k__BackingField();
    // Get instance field reference: private System.Int32 <QueueIndex>k__BackingField
    int& dyn_$QueueIndex$k__BackingField();
    // public System.Single get_Priority()
    // Offset: 0x13EA57C
    float get_Priority();
    // protected internal System.Void set_Priority(System.Single value)
    // Offset: 0x13EA584
    void set_Priority(float value);
    // public System.Int32 get_QueueIndex()
    // Offset: 0x13EA58C
    int get_QueueIndex();
    // System.Void set_QueueIndex(System.Int32 value)
    // Offset: 0x13EA594
    void set_QueueIndex(int value);
    // public System.Void .ctor()
    // Offset: 0x13EA59C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FastPriorityQueueNode* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Priority_Queue::FastPriorityQueueNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FastPriorityQueueNode*, creationType>()));
    }
  }; // Priority_Queue.FastPriorityQueueNode
  #pragma pack(pop)
  static check_size<sizeof(FastPriorityQueueNode), 20 + sizeof(int)> __Priority_Queue_FastPriorityQueueNodeSizeCheck;
  static_assert(sizeof(FastPriorityQueueNode) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Priority_Queue::FastPriorityQueueNode::get_Priority
// Il2CppName: get_Priority
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Priority_Queue::FastPriorityQueueNode::*)()>(&Priority_Queue::FastPriorityQueueNode::get_Priority)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Priority_Queue::FastPriorityQueueNode*), "get_Priority", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Priority_Queue::FastPriorityQueueNode::set_Priority
// Il2CppName: set_Priority
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Priority_Queue::FastPriorityQueueNode::*)(float)>(&Priority_Queue::FastPriorityQueueNode::set_Priority)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Priority_Queue::FastPriorityQueueNode*), "set_Priority", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Priority_Queue::FastPriorityQueueNode::get_QueueIndex
// Il2CppName: get_QueueIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Priority_Queue::FastPriorityQueueNode::*)()>(&Priority_Queue::FastPriorityQueueNode::get_QueueIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Priority_Queue::FastPriorityQueueNode*), "get_QueueIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Priority_Queue::FastPriorityQueueNode::set_QueueIndex
// Il2CppName: set_QueueIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Priority_Queue::FastPriorityQueueNode::*)(int)>(&Priority_Queue::FastPriorityQueueNode::set_QueueIndex)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Priority_Queue::FastPriorityQueueNode*), "set_QueueIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Priority_Queue::FastPriorityQueueNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
