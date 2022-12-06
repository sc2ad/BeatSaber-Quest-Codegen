// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.OpenVR
#include "OVR/OpenVR/OpenVR.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: CVRSystem
  class CVRSystem;
  // Forward declaring type: CVRChaperone
  class CVRChaperone;
  // Forward declaring type: CVRChaperoneSetup
  class CVRChaperoneSetup;
  // Forward declaring type: CVRCompositor
  class CVRCompositor;
  // Forward declaring type: CVROverlay
  class CVROverlay;
  // Forward declaring type: CVRRenderModels
  class CVRRenderModels;
  // Forward declaring type: CVRExtendedDisplay
  class CVRExtendedDisplay;
  // Forward declaring type: CVRSettings
  class CVRSettings;
  // Forward declaring type: CVRApplications
  class CVRApplications;
  // Forward declaring type: CVRScreenshots
  class CVRScreenshots;
  // Forward declaring type: CVRTrackedCamera
  class CVRTrackedCamera;
  // Forward declaring type: CVRInput
  class CVRInput;
  // Forward declaring type: CVRSpatialAnchors
  class CVRSpatialAnchors;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OVR::OpenVR::OpenVR::COpenVRContext);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::OpenVR::COpenVRContext*, "OVR.OpenVR", "OpenVR/COpenVRContext");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.OpenVR/OVR.OpenVR.COpenVRContext
  // [TokenAttribute] Offset: FFFFFFFF
  class OpenVR::COpenVRContext : public ::Il2CppObject {
    public:
    public:
    // private OVR.OpenVR.CVRSystem m_pVRSystem
    // Size: 0x8
    // Offset: 0x10
    ::OVR::OpenVR::CVRSystem* m_pVRSystem;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::CVRSystem*) == 0x8);
    // private OVR.OpenVR.CVRChaperone m_pVRChaperone
    // Size: 0x8
    // Offset: 0x18
    ::OVR::OpenVR::CVRChaperone* m_pVRChaperone;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::CVRChaperone*) == 0x8);
    // private OVR.OpenVR.CVRChaperoneSetup m_pVRChaperoneSetup
    // Size: 0x8
    // Offset: 0x20
    ::OVR::OpenVR::CVRChaperoneSetup* m_pVRChaperoneSetup;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::CVRChaperoneSetup*) == 0x8);
    // private OVR.OpenVR.CVRCompositor m_pVRCompositor
    // Size: 0x8
    // Offset: 0x28
    ::OVR::OpenVR::CVRCompositor* m_pVRCompositor;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::CVRCompositor*) == 0x8);
    // private OVR.OpenVR.CVROverlay m_pVROverlay
    // Size: 0x8
    // Offset: 0x30
    ::OVR::OpenVR::CVROverlay* m_pVROverlay;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::CVROverlay*) == 0x8);
    // private OVR.OpenVR.CVRRenderModels m_pVRRenderModels
    // Size: 0x8
    // Offset: 0x38
    ::OVR::OpenVR::CVRRenderModels* m_pVRRenderModels;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::CVRRenderModels*) == 0x8);
    // private OVR.OpenVR.CVRExtendedDisplay m_pVRExtendedDisplay
    // Size: 0x8
    // Offset: 0x40
    ::OVR::OpenVR::CVRExtendedDisplay* m_pVRExtendedDisplay;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::CVRExtendedDisplay*) == 0x8);
    // private OVR.OpenVR.CVRSettings m_pVRSettings
    // Size: 0x8
    // Offset: 0x48
    ::OVR::OpenVR::CVRSettings* m_pVRSettings;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::CVRSettings*) == 0x8);
    // private OVR.OpenVR.CVRApplications m_pVRApplications
    // Size: 0x8
    // Offset: 0x50
    ::OVR::OpenVR::CVRApplications* m_pVRApplications;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::CVRApplications*) == 0x8);
    // private OVR.OpenVR.CVRScreenshots m_pVRScreenshots
    // Size: 0x8
    // Offset: 0x58
    ::OVR::OpenVR::CVRScreenshots* m_pVRScreenshots;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::CVRScreenshots*) == 0x8);
    // private OVR.OpenVR.CVRTrackedCamera m_pVRTrackedCamera
    // Size: 0x8
    // Offset: 0x60
    ::OVR::OpenVR::CVRTrackedCamera* m_pVRTrackedCamera;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::CVRTrackedCamera*) == 0x8);
    // private OVR.OpenVR.CVRInput m_pVRInput
    // Size: 0x8
    // Offset: 0x68
    ::OVR::OpenVR::CVRInput* m_pVRInput;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::CVRInput*) == 0x8);
    // private OVR.OpenVR.CVRSpatialAnchors m_pVRSpatialAnchors
    // Size: 0x8
    // Offset: 0x70
    ::OVR::OpenVR::CVRSpatialAnchors* m_pVRSpatialAnchors;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::CVRSpatialAnchors*) == 0x8);
    public:
    // Get instance field reference: private OVR.OpenVR.CVRSystem m_pVRSystem
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::CVRSystem*& dyn_m_pVRSystem();
    // Get instance field reference: private OVR.OpenVR.CVRChaperone m_pVRChaperone
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::CVRChaperone*& dyn_m_pVRChaperone();
    // Get instance field reference: private OVR.OpenVR.CVRChaperoneSetup m_pVRChaperoneSetup
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::CVRChaperoneSetup*& dyn_m_pVRChaperoneSetup();
    // Get instance field reference: private OVR.OpenVR.CVRCompositor m_pVRCompositor
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::CVRCompositor*& dyn_m_pVRCompositor();
    // Get instance field reference: private OVR.OpenVR.CVROverlay m_pVROverlay
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::CVROverlay*& dyn_m_pVROverlay();
    // Get instance field reference: private OVR.OpenVR.CVRRenderModels m_pVRRenderModels
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::CVRRenderModels*& dyn_m_pVRRenderModels();
    // Get instance field reference: private OVR.OpenVR.CVRExtendedDisplay m_pVRExtendedDisplay
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::CVRExtendedDisplay*& dyn_m_pVRExtendedDisplay();
    // Get instance field reference: private OVR.OpenVR.CVRSettings m_pVRSettings
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::CVRSettings*& dyn_m_pVRSettings();
    // Get instance field reference: private OVR.OpenVR.CVRApplications m_pVRApplications
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::CVRApplications*& dyn_m_pVRApplications();
    // Get instance field reference: private OVR.OpenVR.CVRScreenshots m_pVRScreenshots
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::CVRScreenshots*& dyn_m_pVRScreenshots();
    // Get instance field reference: private OVR.OpenVR.CVRTrackedCamera m_pVRTrackedCamera
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::CVRTrackedCamera*& dyn_m_pVRTrackedCamera();
    // Get instance field reference: private OVR.OpenVR.CVRInput m_pVRInput
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::CVRInput*& dyn_m_pVRInput();
    // Get instance field reference: private OVR.OpenVR.CVRSpatialAnchors m_pVRSpatialAnchors
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::CVRSpatialAnchors*& dyn_m_pVRSpatialAnchors();
    // public System.Void .ctor()
    // Offset: 0x1692E80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OpenVR::COpenVRContext* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::OpenVR::COpenVRContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OpenVR::COpenVRContext*, creationType>()));
    }
    // public System.Void Clear()
    // Offset: 0x1694020
    void Clear();
    // private System.Void CheckClear()
    // Offset: 0x16940A8
    void CheckClear();
    // public OVR.OpenVR.CVRSystem VRSystem()
    // Offset: 0x1692F18
    ::OVR::OpenVR::CVRSystem* VRSystem();
    // public OVR.OpenVR.CVRChaperone VRChaperone()
    // Offset: 0x1693040
    ::OVR::OpenVR::CVRChaperone* VRChaperone();
    // public OVR.OpenVR.CVRChaperoneSetup VRChaperoneSetup()
    // Offset: 0x1693168
    ::OVR::OpenVR::CVRChaperoneSetup* VRChaperoneSetup();
    // public OVR.OpenVR.CVRCompositor VRCompositor()
    // Offset: 0x1693290
    ::OVR::OpenVR::CVRCompositor* VRCompositor();
    // public OVR.OpenVR.CVROverlay VROverlay()
    // Offset: 0x16933B8
    ::OVR::OpenVR::CVROverlay* VROverlay();
    // public OVR.OpenVR.CVRRenderModels VRRenderModels()
    // Offset: 0x16934E0
    ::OVR::OpenVR::CVRRenderModels* VRRenderModels();
    // public OVR.OpenVR.CVRExtendedDisplay VRExtendedDisplay()
    // Offset: 0x1693608
    ::OVR::OpenVR::CVRExtendedDisplay* VRExtendedDisplay();
    // public OVR.OpenVR.CVRSettings VRSettings()
    // Offset: 0x1693730
    ::OVR::OpenVR::CVRSettings* VRSettings();
    // public OVR.OpenVR.CVRApplications VRApplications()
    // Offset: 0x1693858
    ::OVR::OpenVR::CVRApplications* VRApplications();
    // public OVR.OpenVR.CVRScreenshots VRScreenshots()
    // Offset: 0x1693980
    ::OVR::OpenVR::CVRScreenshots* VRScreenshots();
    // public OVR.OpenVR.CVRTrackedCamera VRTrackedCamera()
    // Offset: 0x1693AA8
    ::OVR::OpenVR::CVRTrackedCamera* VRTrackedCamera();
    // public OVR.OpenVR.CVRInput VRInput()
    // Offset: 0x1693BD0
    ::OVR::OpenVR::CVRInput* VRInput();
    // public OVR.OpenVR.CVRSpatialAnchors VRSpatialAnchors()
    // Offset: 0x1693CF8
    ::OVR::OpenVR::CVRSpatialAnchors* VRSpatialAnchors();
  }; // OVR.OpenVR.OpenVR/OVR.OpenVR.COpenVRContext
  #pragma pack(pop)
  static check_size<sizeof(OpenVR::COpenVRContext), 112 + sizeof(::OVR::OpenVR::CVRSpatialAnchors*)> __OVR_OpenVR_OpenVR_COpenVRContextSizeCheck;
  static_assert(sizeof(OpenVR::COpenVRContext) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::OpenVR::COpenVRContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::OpenVR::COpenVRContext::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OpenVR::COpenVRContext::*)()>(&OVR::OpenVR::OpenVR::COpenVRContext::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::OpenVR::COpenVRContext*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::OpenVR::COpenVRContext::CheckClear
// Il2CppName: CheckClear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::OpenVR::COpenVRContext::*)()>(&OVR::OpenVR::OpenVR::COpenVRContext::CheckClear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::OpenVR::COpenVRContext*), "CheckClear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::OpenVR::COpenVRContext::VRSystem
// Il2CppName: VRSystem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::CVRSystem* (OVR::OpenVR::OpenVR::COpenVRContext::*)()>(&OVR::OpenVR::OpenVR::COpenVRContext::VRSystem)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::OpenVR::COpenVRContext*), "VRSystem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::OpenVR::COpenVRContext::VRChaperone
// Il2CppName: VRChaperone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::CVRChaperone* (OVR::OpenVR::OpenVR::COpenVRContext::*)()>(&OVR::OpenVR::OpenVR::COpenVRContext::VRChaperone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::OpenVR::COpenVRContext*), "VRChaperone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::OpenVR::COpenVRContext::VRChaperoneSetup
// Il2CppName: VRChaperoneSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::CVRChaperoneSetup* (OVR::OpenVR::OpenVR::COpenVRContext::*)()>(&OVR::OpenVR::OpenVR::COpenVRContext::VRChaperoneSetup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::OpenVR::COpenVRContext*), "VRChaperoneSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::OpenVR::COpenVRContext::VRCompositor
// Il2CppName: VRCompositor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::CVRCompositor* (OVR::OpenVR::OpenVR::COpenVRContext::*)()>(&OVR::OpenVR::OpenVR::COpenVRContext::VRCompositor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::OpenVR::COpenVRContext*), "VRCompositor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::OpenVR::COpenVRContext::VROverlay
// Il2CppName: VROverlay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::CVROverlay* (OVR::OpenVR::OpenVR::COpenVRContext::*)()>(&OVR::OpenVR::OpenVR::COpenVRContext::VROverlay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::OpenVR::COpenVRContext*), "VROverlay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::OpenVR::COpenVRContext::VRRenderModels
// Il2CppName: VRRenderModels
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::CVRRenderModels* (OVR::OpenVR::OpenVR::COpenVRContext::*)()>(&OVR::OpenVR::OpenVR::COpenVRContext::VRRenderModels)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::OpenVR::COpenVRContext*), "VRRenderModels", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::OpenVR::COpenVRContext::VRExtendedDisplay
// Il2CppName: VRExtendedDisplay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::CVRExtendedDisplay* (OVR::OpenVR::OpenVR::COpenVRContext::*)()>(&OVR::OpenVR::OpenVR::COpenVRContext::VRExtendedDisplay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::OpenVR::COpenVRContext*), "VRExtendedDisplay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::OpenVR::COpenVRContext::VRSettings
// Il2CppName: VRSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::CVRSettings* (OVR::OpenVR::OpenVR::COpenVRContext::*)()>(&OVR::OpenVR::OpenVR::COpenVRContext::VRSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::OpenVR::COpenVRContext*), "VRSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::OpenVR::COpenVRContext::VRApplications
// Il2CppName: VRApplications
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::CVRApplications* (OVR::OpenVR::OpenVR::COpenVRContext::*)()>(&OVR::OpenVR::OpenVR::COpenVRContext::VRApplications)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::OpenVR::COpenVRContext*), "VRApplications", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::OpenVR::COpenVRContext::VRScreenshots
// Il2CppName: VRScreenshots
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::CVRScreenshots* (OVR::OpenVR::OpenVR::COpenVRContext::*)()>(&OVR::OpenVR::OpenVR::COpenVRContext::VRScreenshots)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::OpenVR::COpenVRContext*), "VRScreenshots", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::OpenVR::COpenVRContext::VRTrackedCamera
// Il2CppName: VRTrackedCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::CVRTrackedCamera* (OVR::OpenVR::OpenVR::COpenVRContext::*)()>(&OVR::OpenVR::OpenVR::COpenVRContext::VRTrackedCamera)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::OpenVR::COpenVRContext*), "VRTrackedCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::OpenVR::COpenVRContext::VRInput
// Il2CppName: VRInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::CVRInput* (OVR::OpenVR::OpenVR::COpenVRContext::*)()>(&OVR::OpenVR::OpenVR::COpenVRContext::VRInput)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::OpenVR::COpenVRContext*), "VRInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::OpenVR::COpenVRContext::VRSpatialAnchors
// Il2CppName: VRSpatialAnchors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::CVRSpatialAnchors* (OVR::OpenVR::OpenVR::COpenVRContext::*)()>(&OVR::OpenVR::OpenVR::COpenVRContext::VRSpatialAnchors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::OpenVR::COpenVRContext*), "VRSpatialAnchors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
