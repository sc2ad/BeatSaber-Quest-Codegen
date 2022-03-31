// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CustomYieldInstruction
  class CustomYieldInstruction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::CustomYieldInstruction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CustomYieldInstruction*, "UnityEngine", "CustomYieldInstruction");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.CustomYieldInstruction
  // [TokenAttribute] Offset: FFFFFFFF
  class CustomYieldInstruction : public ::Il2CppObject/*, public ::System::Collections::IEnumerator*/ {
    public:
    // Creating interface conversion operator: operator ::System::Collections::IEnumerator
    operator ::System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<::System::Collections::IEnumerator*>(this);
    }
    // public System.Boolean get_keepWaiting()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_keepWaiting();
    // public System.Object get_Current()
    // Offset: 0x1F2E950
    ::Il2CppObject* get_Current();
    // public System.Boolean MoveNext()
    // Offset: 0x1F2E958
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x1F2E964
    void Reset();
    // protected System.Void .ctor()
    // Offset: 0x1F2E968
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomYieldInstruction* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::CustomYieldInstruction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomYieldInstruction*, creationType>()));
    }
  }; // UnityEngine.CustomYieldInstruction
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::CustomYieldInstruction::get_keepWaiting
// Il2CppName: get_keepWaiting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::CustomYieldInstruction::*)()>(&UnityEngine::CustomYieldInstruction::get_keepWaiting)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CustomYieldInstruction*), "get_keepWaiting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CustomYieldInstruction::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::CustomYieldInstruction::*)()>(&UnityEngine::CustomYieldInstruction::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CustomYieldInstruction*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CustomYieldInstruction::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::CustomYieldInstruction::*)()>(&UnityEngine::CustomYieldInstruction::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CustomYieldInstruction*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CustomYieldInstruction::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CustomYieldInstruction::*)()>(&UnityEngine::CustomYieldInstruction::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CustomYieldInstruction*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::CustomYieldInstruction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
