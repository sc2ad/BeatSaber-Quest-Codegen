// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
  // Forward declaring type: ParticleSystem
  class ParticleSystem;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionObjectiveChecker
  class MissionObjectiveChecker;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MissionObjectiveGameUIView
  class MissionObjectiveGameUIView;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MissionObjectiveGameUIView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionObjectiveGameUIView*, "", "MissionObjectiveGameUIView");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: MissionObjectiveGameUIView
  // [TokenAttribute] Offset: FFFFFFFF
  class MissionObjectiveGameUIView : public ::UnityEngine::MonoBehaviour {
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
    // private UnityEngine.Sprite _notFailedIcon
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Sprite* notFailedIcon;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _failedIcon
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Sprite* failedIcon;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _notClearedIcon
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Sprite* notClearedIcon;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _clearedIcon
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Sprite* clearedIcon;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.UI.Image _resultIcon
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::UI::Image* resultIcon;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.Color _finalClearIconColor
    // Size: 0x10
    // Offset: 0x40
    ::UnityEngine::Color finalClearIconColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _finalFailIconColor
    // Size: 0x10
    // Offset: 0x50
    ::UnityEngine::Color finalFailIconColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _nonFinalIconColor
    // Size: 0x10
    // Offset: 0x60
    ::UnityEngine::Color nonFinalIconColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.ParticleSystem _clearedPS
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::ParticleSystem* clearedPS;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystem*) == 0x8);
    // private System.Int32 _numberOfParticles
    // Size: 0x4
    // Offset: 0x78
    int numberOfParticles;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: numberOfParticles and: nameText
    char __padding9[0x4] = {};
    // [SpaceAttribute] Offset: 0x125248C
    // private TMPro.TextMeshProUGUI _nameText
    // Size: 0x8
    // Offset: 0x80
    ::TMPro::TextMeshProUGUI* nameText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _valueText
    // Size: 0x8
    // Offset: 0x88
    ::TMPro::TextMeshProUGUI* valueText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _conditionText
    // Size: 0x8
    // Offset: 0x90
    ::TMPro::TextMeshProUGUI* conditionText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private MissionObjectiveChecker _missionObjectiveChecker
    // Size: 0x8
    // Offset: 0x98
    ::GlobalNamespace::MissionObjectiveChecker* missionObjectiveChecker;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MissionObjectiveChecker*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Sprite _notFailedIcon
    ::UnityEngine::Sprite*& dyn__notFailedIcon();
    // Get instance field reference: private UnityEngine.Sprite _failedIcon
    ::UnityEngine::Sprite*& dyn__failedIcon();
    // Get instance field reference: private UnityEngine.Sprite _notClearedIcon
    ::UnityEngine::Sprite*& dyn__notClearedIcon();
    // Get instance field reference: private UnityEngine.Sprite _clearedIcon
    ::UnityEngine::Sprite*& dyn__clearedIcon();
    // Get instance field reference: private UnityEngine.UI.Image _resultIcon
    ::UnityEngine::UI::Image*& dyn__resultIcon();
    // Get instance field reference: private UnityEngine.Color _finalClearIconColor
    ::UnityEngine::Color& dyn__finalClearIconColor();
    // Get instance field reference: private UnityEngine.Color _finalFailIconColor
    ::UnityEngine::Color& dyn__finalFailIconColor();
    // Get instance field reference: private UnityEngine.Color _nonFinalIconColor
    ::UnityEngine::Color& dyn__nonFinalIconColor();
    // Get instance field reference: private UnityEngine.ParticleSystem _clearedPS
    ::UnityEngine::ParticleSystem*& dyn__clearedPS();
    // Get instance field reference: private System.Int32 _numberOfParticles
    int& dyn__numberOfParticles();
    // Get instance field reference: private TMPro.TextMeshProUGUI _nameText
    ::TMPro::TextMeshProUGUI*& dyn__nameText();
    // Get instance field reference: private TMPro.TextMeshProUGUI _valueText
    ::TMPro::TextMeshProUGUI*& dyn__valueText();
    // Get instance field reference: private TMPro.TextMeshProUGUI _conditionText
    ::TMPro::TextMeshProUGUI*& dyn__conditionText();
    // Get instance field reference: private MissionObjectiveChecker _missionObjectiveChecker
    ::GlobalNamespace::MissionObjectiveChecker*& dyn__missionObjectiveChecker();
    // public System.Void SetMissionObjectiveChecker(MissionObjectiveChecker missionObjectiveChecker)
    // Offset: 0x130BD60
    void SetMissionObjectiveChecker(::GlobalNamespace::MissionObjectiveChecker* missionObjectiveChecker);
    // private System.Void HandleMissionObjectiveStatusDidChange(MissionObjectiveChecker missionObjectiveChecker)
    // Offset: 0x130C10C
    void HandleMissionObjectiveStatusDidChange(::GlobalNamespace::MissionObjectiveChecker* missionObjectiveChecker);
    // private System.Void HandleMissionObjectiveCheckedValueDidChange(MissionObjectiveChecker missionObjectiveChecker)
    // Offset: 0x130C110
    void HandleMissionObjectiveCheckedValueDidChange(::GlobalNamespace::MissionObjectiveChecker* missionObjectiveChecker);
    // private System.Void RefreshIcon()
    // Offset: 0x130BF9C
    void RefreshIcon();
    // private System.Void RefreshValue()
    // Offset: 0x130C0B0
    void RefreshValue();
    // public System.Void .ctor()
    // Offset: 0x130C114
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionObjectiveGameUIView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MissionObjectiveGameUIView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionObjectiveGameUIView*, creationType>()));
    }
  }; // MissionObjectiveGameUIView
  #pragma pack(pop)
  static check_size<sizeof(MissionObjectiveGameUIView), 152 + sizeof(::GlobalNamespace::MissionObjectiveChecker*)> __GlobalNamespace_MissionObjectiveGameUIViewSizeCheck;
  static_assert(sizeof(MissionObjectiveGameUIView) == 0xA0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveGameUIView::SetMissionObjectiveChecker
// Il2CppName: SetMissionObjectiveChecker
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveGameUIView::*)(::GlobalNamespace::MissionObjectiveChecker*)>(&GlobalNamespace::MissionObjectiveGameUIView::SetMissionObjectiveChecker)> {
  static const MethodInfo* get() {
    static auto* missionObjectiveChecker = &::il2cpp_utils::GetClassFromName("", "MissionObjectiveChecker")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveGameUIView*), "SetMissionObjectiveChecker", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{missionObjectiveChecker});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveGameUIView::HandleMissionObjectiveStatusDidChange
// Il2CppName: HandleMissionObjectiveStatusDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveGameUIView::*)(::GlobalNamespace::MissionObjectiveChecker*)>(&GlobalNamespace::MissionObjectiveGameUIView::HandleMissionObjectiveStatusDidChange)> {
  static const MethodInfo* get() {
    static auto* missionObjectiveChecker = &::il2cpp_utils::GetClassFromName("", "MissionObjectiveChecker")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveGameUIView*), "HandleMissionObjectiveStatusDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{missionObjectiveChecker});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveGameUIView::HandleMissionObjectiveCheckedValueDidChange
// Il2CppName: HandleMissionObjectiveCheckedValueDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveGameUIView::*)(::GlobalNamespace::MissionObjectiveChecker*)>(&GlobalNamespace::MissionObjectiveGameUIView::HandleMissionObjectiveCheckedValueDidChange)> {
  static const MethodInfo* get() {
    static auto* missionObjectiveChecker = &::il2cpp_utils::GetClassFromName("", "MissionObjectiveChecker")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveGameUIView*), "HandleMissionObjectiveCheckedValueDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{missionObjectiveChecker});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveGameUIView::RefreshIcon
// Il2CppName: RefreshIcon
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveGameUIView::*)()>(&GlobalNamespace::MissionObjectiveGameUIView::RefreshIcon)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveGameUIView*), "RefreshIcon", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveGameUIView::RefreshValue
// Il2CppName: RefreshValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectiveGameUIView::*)()>(&GlobalNamespace::MissionObjectiveGameUIView::RefreshValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectiveGameUIView*), "RefreshValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectiveGameUIView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
