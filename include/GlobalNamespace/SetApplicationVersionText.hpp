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
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SetApplicationVersionText
  class SetApplicationVersionText;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SetApplicationVersionText);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SetApplicationVersionText*, "", "SetApplicationVersionText");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: SetApplicationVersionText
  // [TokenAttribute] Offset: FFFFFFFF
  class SetApplicationVersionText : public ::UnityEngine::MonoBehaviour {
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
    // private TMPro.TextMeshPro _versionText
    // Size: 0x8
    // Offset: 0x18
    ::TMPro::TextMeshPro* versionText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshPro*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private TMPro.TextMeshPro _versionText
    ::TMPro::TextMeshPro*& dyn__versionText();
    // protected System.Void Start()
    // Offset: 0x1429E00
    void Start();
    // public System.Void .ctor()
    // Offset: 0x1429E38
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SetApplicationVersionText* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SetApplicationVersionText::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SetApplicationVersionText*, creationType>()));
    }
  }; // SetApplicationVersionText
  #pragma pack(pop)
  static check_size<sizeof(SetApplicationVersionText), 24 + sizeof(::TMPro::TextMeshPro*)> __GlobalNamespace_SetApplicationVersionTextSizeCheck;
  static_assert(sizeof(SetApplicationVersionText) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SetApplicationVersionText::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SetApplicationVersionText::*)()>(&GlobalNamespace::SetApplicationVersionText::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SetApplicationVersionText*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SetApplicationVersionText::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
