// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: OVRInput/RawButton
#include "GlobalNamespace/OVRInput_RawButton.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1D
  #pragma pack(push, 1)
  // Autogenerated type: OVRMonoscopic
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRMonoscopic : public UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public OVRInput/RawButton toggleButton
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::OVRInput::RawButton toggleButton;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRInput::RawButton) == 0x4);
    // private System.Boolean monoscopic
    // Size: 0x1
    // Offset: 0x1C
    bool monoscopic;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: public OVRInput/RawButton toggleButton
    GlobalNamespace::OVRInput::RawButton& dyn_toggleButton();
    // Get instance field reference: private System.Boolean monoscopic
    bool& dyn_monoscopic();
    // private System.Void Update()
    // Offset: 0x1465C8C
    void Update();
    // public System.Void .ctor()
    // Offset: 0x1465DA0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRMonoscopic* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRMonoscopic::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRMonoscopic*, creationType>()));
    }
  }; // OVRMonoscopic
  #pragma pack(pop)
  static check_size<sizeof(OVRMonoscopic), 28 + sizeof(bool)> __GlobalNamespace_OVRMonoscopicSizeCheck;
  static_assert(sizeof(OVRMonoscopic) == 0x1D);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRMonoscopic*, "", "OVRMonoscopic");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRMonoscopic::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRMonoscopic::*)()>(&GlobalNamespace::OVRMonoscopic::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRMonoscopic*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRMonoscopic::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
