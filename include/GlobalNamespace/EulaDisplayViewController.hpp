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
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TextPageScrollView
  class TextPageScrollView;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LocalizedTextAsset
  class LocalizedTextAsset;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EulaDisplayViewController
  class EulaDisplayViewController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EulaDisplayViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EulaDisplayViewController*, "", "EulaDisplayViewController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: EulaDisplayViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class EulaDisplayViewController : public ::HMUI::ViewController {
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
    // [HeaderAttribute] Offset: 0x125AE18
    // private HMUI.TextPageScrollView _textPageScrollView
    // Size: 0x8
    // Offset: 0x70
    ::HMUI::TextPageScrollView* textPageScrollView;
    // Field size check
    static_assert(sizeof(::HMUI::TextPageScrollView*) == 0x8);
    // private LocalizedTextAsset _localizedTextAsset
    // Size: 0x8
    // Offset: 0x78
    ::GlobalNamespace::LocalizedTextAsset* localizedTextAsset;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LocalizedTextAsset*) == 0x8);
    public:
    // Get instance field reference: private HMUI.TextPageScrollView _textPageScrollView
    ::HMUI::TextPageScrollView*& dyn__textPageScrollView();
    // Get instance field reference: private LocalizedTextAsset _localizedTextAsset
    ::GlobalNamespace::LocalizedTextAsset*& dyn__localizedTextAsset();
    // public System.Void .ctor()
    // Offset: 0x1386510
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EulaDisplayViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EulaDisplayViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EulaDisplayViewController*, creationType>()));
    }
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x13864BC
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
  }; // EulaDisplayViewController
  #pragma pack(pop)
  static check_size<sizeof(EulaDisplayViewController), 120 + sizeof(::GlobalNamespace::LocalizedTextAsset*)> __GlobalNamespace_EulaDisplayViewControllerSizeCheck;
  static_assert(sizeof(EulaDisplayViewController) == 0x80);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EulaDisplayViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::EulaDisplayViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EulaDisplayViewController::*)(bool, bool, bool)>(&GlobalNamespace::EulaDisplayViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EulaDisplayViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
