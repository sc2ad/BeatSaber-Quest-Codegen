// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.XR.XRNode
#include "UnityEngine/XR/XRNode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BoolSO
  class BoolSO;
  // Forward declaring type: IVRPlatformHelper
  class IVRPlatformHelper;
}
// Forward declaring namespace: Libraries::HM::HMLib::VR
namespace Libraries::HM::HMLib::VR {
  // Forward declaring type: HapticPresetSO
  class HapticPresetSO;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: HapticFeedbackController
  class HapticFeedbackController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::HapticFeedbackController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HapticFeedbackController*, "", "HapticFeedbackController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: HapticFeedbackController
  // [TokenAttribute] Offset: FFFFFFFF
  class HapticFeedbackController : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::HapticFeedbackController::RumbleData
    class RumbleData;
    public:
    // private BoolSO _controllersRumbleEnabled
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::BoolSO* controllersRumbleEnabled;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BoolSO*) == 0x8);
    // private Libraries.HM.HMLib.VR.HapticPresetSO _continuousRumblePreset
    // Size: 0x8
    // Offset: 0x20
    ::Libraries::HM::HMLib::VR::HapticPresetSO* continuousRumblePreset;
    // Field size check
    static_assert(sizeof(::Libraries::HM::HMLib::VR::HapticPresetSO*) == 0x8);
    // [InjectAttribute] Offset: 0x10E9340
    // private readonly IVRPlatformHelper _vrPlatformHelper
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::IVRPlatformHelper* vrPlatformHelper;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IVRPlatformHelper*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<UnityEngine.XR.XRNode,System.Collections.Generic.Dictionary`2<System.Object,HapticFeedbackController/RumbleData>> _rumblesByNode
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::System::Collections::Generic::Dictionary_2<::Il2CppObject*, ::GlobalNamespace::HapticFeedbackController::RumbleData*>*>* rumblesByNode;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::System::Collections::Generic::Dictionary_2<::Il2CppObject*, ::GlobalNamespace::HapticFeedbackController::RumbleData*>*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kContinuousRumbleFrameDuration
    static constexpr const float kContinuousRumbleFrameDuration = 0.016666668;
    // Get static field: static private System.Single kContinuousRumbleFrameDuration
    static float _get_kContinuousRumbleFrameDuration();
    // Set static field: static private System.Single kContinuousRumbleFrameDuration
    static void _set_kContinuousRumbleFrameDuration(float value);
    // Get instance field reference: private BoolSO _controllersRumbleEnabled
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BoolSO*& dyn__controllersRumbleEnabled();
    // Get instance field reference: private Libraries.HM.HMLib.VR.HapticPresetSO _continuousRumblePreset
    [[deprecated("Use field access instead!")]] ::Libraries::HM::HMLib::VR::HapticPresetSO*& dyn__continuousRumblePreset();
    // Get instance field reference: private readonly IVRPlatformHelper _vrPlatformHelper
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IVRPlatformHelper*& dyn__vrPlatformHelper();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<UnityEngine.XR.XRNode,System.Collections.Generic.Dictionary`2<System.Object,HapticFeedbackController/RumbleData>> _rumblesByNode
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::System::Collections::Generic::Dictionary_2<::Il2CppObject*, ::GlobalNamespace::HapticFeedbackController::RumbleData*>*>*& dyn__rumblesByNode();
    // public Libraries.HM.HMLib.VR.HapticPresetSO get_continuousRumblePreset()
    // Offset: 0x1601EAC
    ::Libraries::HM::HMLib::VR::HapticPresetSO* get_continuousRumblePreset();
    // public System.Void .ctor()
    // Offset: 0x1602570
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HapticFeedbackController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::HapticFeedbackController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HapticFeedbackController*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x1601EB4
    void Awake();
    // public System.Void PlayHapticFeedback(UnityEngine.XR.XRNode node, Libraries.HM.HMLib.VR.HapticPresetSO hapticPreset)
    // Offset: 0x1601F7C
    void PlayHapticFeedback(::UnityEngine::XR::XRNode node, ::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset);
    // private System.Void LateUpdate()
    // Offset: 0x1602160
    void LateUpdate();
    // private System.Void UpdateRumbles()
    // Offset: 0x1602164
    void UpdateRumbles();
    // private HapticFeedbackController/RumbleData GetRumble(UnityEngine.XR.XRNode node, System.Object preset)
    // Offset: 0x1602064
    ::GlobalNamespace::HapticFeedbackController::RumbleData* GetRumble(::UnityEngine::XR::XRNode node, ::Il2CppObject* preset);
  }; // HapticFeedbackController
  #pragma pack(pop)
  static check_size<sizeof(HapticFeedbackController), 48 + sizeof(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::System::Collections::Generic::Dictionary_2<::Il2CppObject*, ::GlobalNamespace::HapticFeedbackController::RumbleData*>*>*)> __GlobalNamespace_HapticFeedbackControllerSizeCheck;
  static_assert(sizeof(HapticFeedbackController) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HapticFeedbackController::get_continuousRumblePreset
// Il2CppName: get_continuousRumblePreset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Libraries::HM::HMLib::VR::HapticPresetSO* (GlobalNamespace::HapticFeedbackController::*)()>(&GlobalNamespace::HapticFeedbackController::get_continuousRumblePreset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HapticFeedbackController*), "get_continuousRumblePreset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HapticFeedbackController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::HapticFeedbackController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HapticFeedbackController::*)()>(&GlobalNamespace::HapticFeedbackController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HapticFeedbackController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HapticFeedbackController::PlayHapticFeedback
// Il2CppName: PlayHapticFeedback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HapticFeedbackController::*)(::UnityEngine::XR::XRNode, ::Libraries::HM::HMLib::VR::HapticPresetSO*)>(&GlobalNamespace::HapticFeedbackController::PlayHapticFeedback)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRNode")->byval_arg;
    static auto* hapticPreset = &::il2cpp_utils::GetClassFromName("Libraries.HM.HMLib.VR", "HapticPresetSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HapticFeedbackController*), "PlayHapticFeedback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node, hapticPreset});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HapticFeedbackController::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HapticFeedbackController::*)()>(&GlobalNamespace::HapticFeedbackController::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HapticFeedbackController*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HapticFeedbackController::UpdateRumbles
// Il2CppName: UpdateRumbles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HapticFeedbackController::*)()>(&GlobalNamespace::HapticFeedbackController::UpdateRumbles)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HapticFeedbackController*), "UpdateRumbles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HapticFeedbackController::GetRumble
// Il2CppName: GetRumble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::HapticFeedbackController::RumbleData* (GlobalNamespace::HapticFeedbackController::*)(::UnityEngine::XR::XRNode, ::Il2CppObject*)>(&GlobalNamespace::HapticFeedbackController::GetRumble)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRNode")->byval_arg;
    static auto* preset = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HapticFeedbackController*), "GetRumble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node, preset});
  }
};
