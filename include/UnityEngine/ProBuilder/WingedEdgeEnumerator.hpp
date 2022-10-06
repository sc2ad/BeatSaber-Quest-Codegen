// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: WingedEdge
  class WingedEdge;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: WingedEdgeEnumerator
  class WingedEdgeEnumerator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::WingedEdgeEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::WingedEdgeEnumerator*, "UnityEngine.ProBuilder", "WingedEdgeEnumerator");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.WingedEdgeEnumerator
  // [TokenAttribute] Offset: FFFFFFFF
  class WingedEdgeEnumerator : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::WingedEdge*>*/ {
    public:
    public:
    // private UnityEngine.ProBuilder.WingedEdge m_Start
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::ProBuilder::WingedEdge* m_Start;
    // Field size check
    static_assert(sizeof(::UnityEngine::ProBuilder::WingedEdge*) == 0x8);
    // private UnityEngine.ProBuilder.WingedEdge m_Current
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::ProBuilder::WingedEdge* m_Current;
    // Field size check
    static_assert(sizeof(::UnityEngine::ProBuilder::WingedEdge*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::WingedEdge*>
    operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::WingedEdge*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::WingedEdge*>*>(this);
    }
    // Creating interface conversion operator: i_WingedEdge
    inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::WingedEdge*>* i_WingedEdge() noexcept {
      return reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::WingedEdge*>*>(this);
    }
    // Get instance field reference: private UnityEngine.ProBuilder.WingedEdge m_Start
    [[deprecated("Use field access instead!")]] ::UnityEngine::ProBuilder::WingedEdge*& dyn_m_Start();
    // Get instance field reference: private UnityEngine.ProBuilder.WingedEdge m_Current
    [[deprecated("Use field access instead!")]] ::UnityEngine::ProBuilder::WingedEdge*& dyn_m_Current();
    // public UnityEngine.ProBuilder.WingedEdge get_Current()
    // Offset: 0x29D69CC
    ::UnityEngine::ProBuilder::WingedEdge* get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x29E2C28
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(UnityEngine.ProBuilder.WingedEdge start)
    // Offset: 0x29D69A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WingedEdgeEnumerator* New_ctor(::UnityEngine::ProBuilder::WingedEdge* start) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::WingedEdgeEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WingedEdgeEnumerator*, creationType>(start)));
    }
    // public System.Boolean MoveNext()
    // Offset: 0x29D6CAC
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x29E2C20
    void Reset();
    // public System.Void Dispose()
    // Offset: 0x29E2C6C
    void Dispose();
  }; // UnityEngine.ProBuilder.WingedEdgeEnumerator
  #pragma pack(pop)
  static check_size<sizeof(WingedEdgeEnumerator), 24 + sizeof(::UnityEngine::ProBuilder::WingedEdge*)> __UnityEngine_ProBuilder_WingedEdgeEnumeratorSizeCheck;
  static_assert(sizeof(WingedEdgeEnumerator) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdgeEnumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::WingedEdge* (UnityEngine::ProBuilder::WingedEdgeEnumerator::*)()>(&UnityEngine::ProBuilder::WingedEdgeEnumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::WingedEdgeEnumerator*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdgeEnumerator::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::ProBuilder::WingedEdgeEnumerator::*)()>(&UnityEngine::ProBuilder::WingedEdgeEnumerator::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::WingedEdgeEnumerator*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdgeEnumerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdgeEnumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::WingedEdgeEnumerator::*)()>(&UnityEngine::ProBuilder::WingedEdgeEnumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::WingedEdgeEnumerator*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdgeEnumerator::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::WingedEdgeEnumerator::*)()>(&UnityEngine::ProBuilder::WingedEdgeEnumerator::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::WingedEdgeEnumerator*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdgeEnumerator::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::WingedEdgeEnumerator::*)()>(&UnityEngine::ProBuilder::WingedEdgeEnumerator::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::WingedEdgeEnumerator*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
