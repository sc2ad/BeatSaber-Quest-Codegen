// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: HealthWarningDisplayViewController
  class HealthWarningDisplayViewController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::HealthWarningDisplayViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HealthWarningDisplayViewController*, "", "HealthWarningDisplayViewController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x81
  #pragma pack(push, 1)
  // Autogenerated type: HealthWarningDisplayViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class HealthWarningDisplayViewController : public ::HMUI::ViewController {
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
    // [HeaderAttribute] Offset: 0x124BE10
    // private TMPro.TextMeshProUGUI _healthAndSafetyTextMesh
    // Size: 0x8
    // Offset: 0x70
    ::TMPro::TextMeshProUGUI* healthAndSafetyTextMesh;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // [LocalizationKeyAttribute] Offset: 0x124BE5C
    // private System.String _healthAndSafetyFullLocalizationKey
    // Size: 0x8
    // Offset: 0x78
    ::StringW healthAndSafetyFullLocalizationKey;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean _showShortHealthAndSafety
    // Size: 0x1
    // Offset: 0x80
    bool showShortHealthAndSafety;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private TMPro.TextMeshProUGUI _healthAndSafetyTextMesh
    ::TMPro::TextMeshProUGUI*& dyn__healthAndSafetyTextMesh();
    // Get instance field reference: private System.String _healthAndSafetyFullLocalizationKey
    ::StringW& dyn__healthAndSafetyFullLocalizationKey();
    // Get instance field reference: private System.Boolean _showShortHealthAndSafety
    bool& dyn__showShortHealthAndSafety();
    // public System.Void .ctor()
    // Offset: 0x13A9F54
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HealthWarningDisplayViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::HealthWarningDisplayViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HealthWarningDisplayViewController*, creationType>()));
    }
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x13A9F0C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
  }; // HealthWarningDisplayViewController
  #pragma pack(pop)
  static check_size<sizeof(HealthWarningDisplayViewController), 128 + sizeof(bool)> __GlobalNamespace_HealthWarningDisplayViewControllerSizeCheck;
  static_assert(sizeof(HealthWarningDisplayViewController) == 0x81);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningDisplayViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::HealthWarningDisplayViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HealthWarningDisplayViewController::*)(bool, bool, bool)>(&GlobalNamespace::HealthWarningDisplayViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HealthWarningDisplayViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
