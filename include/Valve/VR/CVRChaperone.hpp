// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRChaperone
#include "Valve/VR/IVRChaperone.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: ChaperoneCalibrationState
  struct ChaperoneCalibrationState;
  // Forward declaring type: HmdQuad_t
  struct HmdQuad_t;
  // Forward declaring type: HmdColor_t
  struct HmdColor_t;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Forward declaring type: CVRChaperone
  class CVRChaperone;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Valve::VR::CVRChaperone);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::CVRChaperone*, "Valve.VR", "CVRChaperone");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.CVRChaperone
  // [TokenAttribute] Offset: FFFFFFFF
  class CVRChaperone : public ::Il2CppObject {
    public:
    public:
    // private Valve.VR.IVRChaperone FnTable
    // Size: 0x40
    // Offset: 0x10
    ::Valve::VR::IVRChaperone FnTable;
    // Field size check
    static_assert(sizeof(::Valve::VR::IVRChaperone) == 0x40);
    public:
    // Creating conversion operator: operator ::Valve::VR::IVRChaperone
    constexpr operator ::Valve::VR::IVRChaperone() const noexcept {
      return FnTable;
    }
    // Get instance field reference: private Valve.VR.IVRChaperone FnTable
    [[deprecated("Use field access instead!")]] ::Valve::VR::IVRChaperone& dyn_FnTable();
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x1C71588
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRChaperone* New_ctor(::System::IntPtr pInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::CVRChaperone::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRChaperone*, creationType>(pInterface)));
    }
    // public Valve.VR.ChaperoneCalibrationState GetCalibrationState()
    // Offset: 0x1C71690
    ::Valve::VR::ChaperoneCalibrationState GetCalibrationState();
    // public System.Boolean GetPlayAreaSize(ref System.Single pSizeX, ref System.Single pSizeZ)
    // Offset: 0x1C718BC
    bool GetPlayAreaSize(ByRef<float> pSizeX, ByRef<float> pSizeZ);
    // public System.Boolean GetPlayAreaRect(ref Valve.VR.HmdQuad_t rect)
    // Offset: 0x1C71B54
    bool GetPlayAreaRect(ByRef<::Valve::VR::HmdQuad_t> rect);
    // public System.Void ReloadInfo()
    // Offset: 0x1C71DCC
    void ReloadInfo();
    // public System.Void SetSceneColor(Valve.VR.HmdColor_t color)
    // Offset: 0x1C71FF0
    void SetSceneColor(::Valve::VR::HmdColor_t color);
    // public System.Void GetBoundsColor(ref Valve.VR.HmdColor_t pOutputColorArray, System.Int32 nNumOutputColors, System.Single flCollisionBoundsFadeDistance, ref Valve.VR.HmdColor_t pOutputCameraColor)
    // Offset: 0x1C722B8
    void GetBoundsColor(ByRef<::Valve::VR::HmdColor_t> pOutputColorArray, int nNumOutputColors, float flCollisionBoundsFadeDistance, ByRef<::Valve::VR::HmdColor_t> pOutputCameraColor);
    // public System.Boolean AreBoundsVisible()
    // Offset: 0x1C72580
    bool AreBoundsVisible();
    // public System.Void ForceBoundsVisible(System.Boolean bForce)
    // Offset: 0x1C727B0
    void ForceBoundsVisible(bool bForce);
  }; // Valve.VR.CVRChaperone
  #pragma pack(pop)
  static check_size<sizeof(CVRChaperone), 16 + sizeof(::Valve::VR::IVRChaperone)> __Valve_VR_CVRChaperoneSizeCheck;
  static_assert(sizeof(CVRChaperone) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::CVRChaperone::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::CVRChaperone::GetCalibrationState
// Il2CppName: GetCalibrationState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::ChaperoneCalibrationState (Valve::VR::CVRChaperone::*)()>(&Valve::VR::CVRChaperone::GetCalibrationState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRChaperone*), "GetCalibrationState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRChaperone::GetPlayAreaSize
// Il2CppName: GetPlayAreaSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::CVRChaperone::*)(ByRef<float>, ByRef<float>)>(&Valve::VR::CVRChaperone::GetPlayAreaSize)> {
  static const MethodInfo* get() {
    static auto* pSizeX = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* pSizeZ = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRChaperone*), "GetPlayAreaSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pSizeX, pSizeZ});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRChaperone::GetPlayAreaRect
// Il2CppName: GetPlayAreaRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::CVRChaperone::*)(ByRef<::Valve::VR::HmdQuad_t>)>(&Valve::VR::CVRChaperone::GetPlayAreaRect)> {
  static const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("Valve.VR", "HmdQuad_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRChaperone*), "GetPlayAreaRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRChaperone::ReloadInfo
// Il2CppName: ReloadInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::CVRChaperone::*)()>(&Valve::VR::CVRChaperone::ReloadInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRChaperone*), "ReloadInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRChaperone::SetSceneColor
// Il2CppName: SetSceneColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::CVRChaperone::*)(::Valve::VR::HmdColor_t)>(&Valve::VR::CVRChaperone::SetSceneColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("Valve.VR", "HmdColor_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRChaperone*), "SetSceneColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRChaperone::GetBoundsColor
// Il2CppName: GetBoundsColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::CVRChaperone::*)(ByRef<::Valve::VR::HmdColor_t>, int, float, ByRef<::Valve::VR::HmdColor_t>)>(&Valve::VR::CVRChaperone::GetBoundsColor)> {
  static const MethodInfo* get() {
    static auto* pOutputColorArray = &::il2cpp_utils::GetClassFromName("Valve.VR", "HmdColor_t")->this_arg;
    static auto* nNumOutputColors = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* flCollisionBoundsFadeDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* pOutputCameraColor = &::il2cpp_utils::GetClassFromName("Valve.VR", "HmdColor_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRChaperone*), "GetBoundsColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pOutputColorArray, nNumOutputColors, flCollisionBoundsFadeDistance, pOutputCameraColor});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRChaperone::AreBoundsVisible
// Il2CppName: AreBoundsVisible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::CVRChaperone::*)()>(&Valve::VR::CVRChaperone::AreBoundsVisible)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRChaperone*), "AreBoundsVisible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRChaperone::ForceBoundsVisible
// Il2CppName: ForceBoundsVisible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::CVRChaperone::*)(bool)>(&Valve::VR::CVRChaperone::ForceBoundsVisible)> {
  static const MethodInfo* get() {
    static auto* bForce = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRChaperone*), "ForceBoundsVisible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bForce});
  }
};
