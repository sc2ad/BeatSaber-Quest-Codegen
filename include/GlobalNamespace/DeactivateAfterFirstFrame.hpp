// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: DeactivateAfterFirstFrame
  class DeactivateAfterFirstFrame;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DeactivateAfterFirstFrame);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DeactivateAfterFirstFrame*, "", "DeactivateAfterFirstFrame");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: DeactivateAfterFirstFrame
  // [TokenAttribute] Offset: FFFFFFFF
  class DeactivateAfterFirstFrame : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::DeactivateAfterFirstFrame::$Start$d__0
    class $Start$d__0;
    // public System.Void .ctor()
    // Offset: 0x147DB9C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DeactivateAfterFirstFrame* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DeactivateAfterFirstFrame::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DeactivateAfterFirstFrame*, creationType>()));
    }
    // protected System.Collections.IEnumerator Start()
    // Offset: 0x147DB00
    ::System::Collections::IEnumerator* Start();
  }; // DeactivateAfterFirstFrame
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DeactivateAfterFirstFrame::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::DeactivateAfterFirstFrame::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::DeactivateAfterFirstFrame::*)()>(&GlobalNamespace::DeactivateAfterFirstFrame::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DeactivateAfterFirstFrame*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
