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
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: LinkedList`1<T>
  template<typename T>
  class LinkedList_1;
  // Forward declaring type: LinkedListNode`1<T>
  template<typename T>
  class LinkedListNode_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.Util
namespace UnityEngine::ResourceManagement::Util {
  // Forward declaring type: LinkedListNodeCache`1<T>
  template<typename T>
  class LinkedListNodeCache_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1, "UnityEngine.ResourceManagement.Util", "LinkedListNodeCache`1");
// Type namespace: UnityEngine.ResourceManagement.Util
namespace UnityEngine::ResourceManagement::Util {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.ResourceManagement.Util.LinkedListNodeCache`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class LinkedListNodeCache_1 : public ::Il2CppObject {
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
    // private System.Int32 m_NodesCreated
    // Size: 0x4
    // Offset: 0x0
    int m_NodesCreated;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Collections.Generic.LinkedList`1<T> m_NodeCache
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::LinkedList_1<T>* m_NodeCache;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::LinkedList_1<T>*) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 m_NodesCreated
    int& dyn_m_NodesCreated() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1::dyn_m_NodesCreated");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_NodesCreated"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.LinkedList`1<T> m_NodeCache
    ::System::Collections::Generic::LinkedList_1<T>*& dyn_m_NodeCache() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1::dyn_m_NodeCache");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_NodeCache"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::LinkedList_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // System.Int32 get_CreatedNodeCount()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_CreatedNodeCount() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1::get_CreatedNodeCount");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_CreatedNodeCount", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // System.Int32 get_CachedNodeCount()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_CachedNodeCount() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1::get_CachedNodeCount");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_CachedNodeCount", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public System.Collections.Generic.LinkedListNode`1<T> Acquire(T val)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::LinkedListNode_1<T>* Acquire(T val) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1::Acquire");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Acquire", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(val)})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::LinkedListNode_1<T>*, false>(this, ___internal__method, val);
    }
    // public System.Void Release(System.Collections.Generic.LinkedListNode`1<T> node)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Release(::System::Collections::Generic::LinkedListNode_1<T>* node) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1::Release");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Release", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(node)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, node);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LinkedListNodeCache_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LinkedListNodeCache_1<T>*, creationType>()));
    }
  }; // UnityEngine.ResourceManagement.Util.LinkedListNodeCache`1
  // Could not write size check! Type: UnityEngine.ResourceManagement.Util.LinkedListNodeCache`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
