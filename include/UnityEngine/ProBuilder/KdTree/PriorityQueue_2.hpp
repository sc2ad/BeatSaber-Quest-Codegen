// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.KdTree.ItemPriority`2
#include "UnityEngine/ProBuilder/KdTree/ItemPriority_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::KdTree
namespace UnityEngine::ProBuilder::KdTree {
  // Forward declaring type: ITypeMath`1<T>
  template<typename T>
  class ITypeMath_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.KdTree
namespace UnityEngine::ProBuilder::KdTree {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.ProBuilder.KdTree.PriorityQueue`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TItem, typename TPriority>
  class PriorityQueue_2 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private UnityEngine.ProBuilder.KdTree.ITypeMath`1<TPriority> priorityMath
    // Size: 0x8
    // Offset: 0x0
    UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>* priorityMath;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>*) == 0x8);
    // private UnityEngine.ProBuilder.KdTree.ItemPriority`2<TItem,TPriority>[] queue
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem, TPriority>> queue;
    // Field size check
    static_assert(sizeof(::ArrayW<UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem, TPriority>>) == 0x8);
    // private System.Int32 capacity
    // Size: 0x4
    // Offset: 0x0
    int capacity;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 count
    // Size: 0x4
    // Offset: 0x0
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Autogenerated instance field getter
    // Get instance field: private UnityEngine.ProBuilder.KdTree.ITypeMath`1<TPriority> priorityMath
    UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>*& dyn_priorityMath() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::PriorityQueue_2::dyn_priorityMath");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "priorityMath"))->offset;
      return *reinterpret_cast<UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private UnityEngine.ProBuilder.KdTree.ItemPriority`2<TItem,TPriority>[] queue
    ::ArrayW<UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem, TPriority>>& dyn_queue() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::PriorityQueue_2::dyn_queue");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "queue"))->offset;
      return *reinterpret_cast<::ArrayW<UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem, TPriority>>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 capacity
    int& dyn_capacity() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::PriorityQueue_2::dyn_capacity");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "capacity"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 count
    int& dyn_count() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::PriorityQueue_2::dyn_count");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "count"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFF
    int get_Count() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::PriorityQueue_2::get_Count");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Count", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<int, false>(___instance_arg, ___internal__method);
    }
    // public System.Void .ctor(System.Int32 capacity, UnityEngine.ProBuilder.KdTree.ITypeMath`1<TPriority> priorityMath)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PriorityQueue_2<TItem, TPriority>* New_ctor(int capacity, UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>* priorityMath) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::PriorityQueue_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PriorityQueue_2<TItem, TPriority>*, creationType>(capacity, priorityMath)));
    }
    // private System.Void ExpandCapacity()
    // Offset: 0xFFFFFFFF
    void ExpandCapacity() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::PriorityQueue_2::ExpandCapacity");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ExpandCapacity", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method);
    }
    // public System.Void Enqueue(TItem item, TPriority priority)
    // Offset: 0xFFFFFFFF
    void Enqueue(TItem item, TPriority priority) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::PriorityQueue_2::Enqueue");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Enqueue", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item), ::il2cpp_utils::ExtractType(priority)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, item, priority);
    }
    // public TItem Dequeue()
    // Offset: 0xFFFFFFFF
    TItem Dequeue() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::PriorityQueue_2::Dequeue");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Dequeue", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<TItem, false>(___instance_arg, ___internal__method);
    }
    // private System.Void ReorderItem(System.Int32 index, System.Int32 direction)
    // Offset: 0xFFFFFFFF
    void ReorderItem(int index, int direction) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::PriorityQueue_2::ReorderItem");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ReorderItem", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index), ::il2cpp_utils::ExtractType(direction)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, index, direction);
    }
    // public TPriority GetHighestPriority()
    // Offset: 0xFFFFFFFF
    TPriority GetHighestPriority() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::PriorityQueue_2::GetHighestPriority");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetHighestPriority", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<TPriority, false>(___instance_arg, ___internal__method);
    }
  }; // UnityEngine.ProBuilder.KdTree.PriorityQueue`2
  // Could not write size check! Type: UnityEngine.ProBuilder.KdTree.PriorityQueue`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::ProBuilder::KdTree::PriorityQueue_2, "UnityEngine.ProBuilder.KdTree", "PriorityQueue`2");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
