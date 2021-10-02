// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: SaberType
#include "GlobalNamespace/SaberType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ParticleSystem
  class ParticleSystem;
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
  // Forward declaring type: Collider
  class Collider;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorManager
  class ColorManager;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x69
  #pragma pack(push, 1)
  // Autogenerated type: IntroTutorialRing
  // [TokenAttribute] Offset: FFFFFFFF
  class IntroTutorialRing : public UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private UnityEngine.UI.Image[] _progressImages
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<UnityEngine::UI::Image*> progressImages;
    // Field size check
    static_assert(sizeof(::ArrayW<UnityEngine::UI::Image*>) == 0x8);
    // private SaberType _saberType
    // Size: 0x4
    // Offset: 0x20
    GlobalNamespace::SaberType saberType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberType) == 0x4);
    // Padding between fields: saberType and: particleSystem
    char __padding1[0x4] = {};
    // private UnityEngine.ParticleSystem _particleSystem
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::ParticleSystem* particleSystem;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem*) == 0x8);
    // private UnityEngine.CanvasGroup _canvasGroup
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::CanvasGroup* canvasGroup;
    // Field size check
    static_assert(sizeof(UnityEngine::CanvasGroup*) == 0x8);
    // private System.Single _activationDuration
    // Size: 0x4
    // Offset: 0x38
    float activationDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: activationDuration and: ringGLowImages
    char __padding4[0x4] = {};
    // private UnityEngine.UI.Image[] _ringGLowImages
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<UnityEngine::UI::Image*> ringGLowImages;
    // Field size check
    static_assert(sizeof(::ArrayW<UnityEngine::UI::Image*>) == 0x8);
    // [InjectAttribute] Offset: 0xF0B194
    // private readonly ColorManager _colorManager
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::ColorManager* colorManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorManager*) == 0x8);
    // private System.Boolean _highlighted
    // Size: 0x1
    // Offset: 0x50
    bool highlighted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: highlighted and: emitNextParticleTimer
    char __padding7[0x3] = {};
    // private System.Single _emitNextParticleTimer
    // Size: 0x4
    // Offset: 0x54
    float emitNextParticleTimer;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _activationProgress
    // Size: 0x4
    // Offset: 0x58
    float activationProgress;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: activationProgress and: sabersInside
    char __padding9[0x4] = {};
    // private readonly System.Collections.Generic.HashSet`1<SaberType> _sabersInside
    // Size: 0x8
    // Offset: 0x60
    System::Collections::Generic::HashSet_1<GlobalNamespace::SaberType>* sabersInside;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<GlobalNamespace::SaberType>*) == 0x8);
    // private System.Boolean _sabersInsideAfterOnEnable
    // Size: 0x1
    // Offset: 0x68
    bool sabersInsideAfterOnEnable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.UI.Image[] _progressImages
    ::ArrayW<UnityEngine::UI::Image*>& dyn__progressImages();
    // Get instance field reference: private SaberType _saberType
    GlobalNamespace::SaberType& dyn__saberType();
    // Get instance field reference: private UnityEngine.ParticleSystem _particleSystem
    UnityEngine::ParticleSystem*& dyn__particleSystem();
    // Get instance field reference: private UnityEngine.CanvasGroup _canvasGroup
    UnityEngine::CanvasGroup*& dyn__canvasGroup();
    // Get instance field reference: private System.Single _activationDuration
    float& dyn__activationDuration();
    // Get instance field reference: private UnityEngine.UI.Image[] _ringGLowImages
    ::ArrayW<UnityEngine::UI::Image*>& dyn__ringGLowImages();
    // Get instance field reference: private readonly ColorManager _colorManager
    GlobalNamespace::ColorManager*& dyn__colorManager();
    // Get instance field reference: private System.Boolean _highlighted
    bool& dyn__highlighted();
    // Get instance field reference: private System.Single _emitNextParticleTimer
    float& dyn__emitNextParticleTimer();
    // Get instance field reference: private System.Single _activationProgress
    float& dyn__activationProgress();
    // Get instance field reference: private readonly System.Collections.Generic.HashSet`1<SaberType> _sabersInside
    System::Collections::Generic::HashSet_1<GlobalNamespace::SaberType>*& dyn__sabersInside();
    // Get instance field reference: private System.Boolean _sabersInsideAfterOnEnable
    bool& dyn__sabersInsideAfterOnEnable();
    // public System.Void set_alpha(System.Single value)
    // Offset: 0x114847C
    void set_alpha(float value);
    // public System.Boolean get_fullyActivated()
    // Offset: 0x11481F8
    bool get_fullyActivated();
    // public SaberType get_saberType()
    // Offset: 0x1148644
    GlobalNamespace::SaberType get_saberType();
    // public System.Void set_saberType(SaberType value)
    // Offset: 0x114864C
    void set_saberType(GlobalNamespace::SaberType value);
    // protected System.Void Start()
    // Offset: 0x1148654
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x11486EC
    void OnEnable();
    // protected System.Void Update()
    // Offset: 0x1148744
    void Update();
    // private System.Void SetProgressImagesfillAmount(System.Single fillAmount)
    // Offset: 0x11488B4
    void SetProgressImagesfillAmount(float fillAmount);
    // private System.Void OnTriggerEnter(UnityEngine.Collider other)
    // Offset: 0x1148930
    void OnTriggerEnter(UnityEngine::Collider* other);
    // private System.Void OnTriggerExit(UnityEngine.Collider other)
    // Offset: 0x1148A34
    void OnTriggerExit(UnityEngine::Collider* other);
    // private System.Void OnTriggerStay(UnityEngine.Collider other)
    // Offset: 0x1148B38
    void OnTriggerStay(UnityEngine::Collider* other);
    // public System.Void .ctor()
    // Offset: 0x1148C48
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IntroTutorialRing* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::IntroTutorialRing::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IntroTutorialRing*, creationType>()));
    }
  }; // IntroTutorialRing
  #pragma pack(pop)
  static check_size<sizeof(IntroTutorialRing), 104 + sizeof(bool)> __GlobalNamespace_IntroTutorialRingSizeCheck;
  static_assert(sizeof(IntroTutorialRing) == 0x69);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IntroTutorialRing*, "", "IntroTutorialRing");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IntroTutorialRing::set_alpha
// Il2CppName: set_alpha
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IntroTutorialRing::*)(float)>(&GlobalNamespace::IntroTutorialRing::set_alpha)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IntroTutorialRing*), "set_alpha", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IntroTutorialRing::get_fullyActivated
// Il2CppName: get_fullyActivated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::IntroTutorialRing::*)()>(&GlobalNamespace::IntroTutorialRing::get_fullyActivated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IntroTutorialRing*), "get_fullyActivated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IntroTutorialRing::get_saberType
// Il2CppName: get_saberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::SaberType (GlobalNamespace::IntroTutorialRing::*)()>(&GlobalNamespace::IntroTutorialRing::get_saberType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IntroTutorialRing*), "get_saberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IntroTutorialRing::set_saberType
// Il2CppName: set_saberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IntroTutorialRing::*)(GlobalNamespace::SaberType)>(&GlobalNamespace::IntroTutorialRing::set_saberType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "SaberType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IntroTutorialRing*), "set_saberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IntroTutorialRing::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IntroTutorialRing::*)()>(&GlobalNamespace::IntroTutorialRing::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IntroTutorialRing*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IntroTutorialRing::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IntroTutorialRing::*)()>(&GlobalNamespace::IntroTutorialRing::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IntroTutorialRing*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IntroTutorialRing::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IntroTutorialRing::*)()>(&GlobalNamespace::IntroTutorialRing::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IntroTutorialRing*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IntroTutorialRing::SetProgressImagesfillAmount
// Il2CppName: SetProgressImagesfillAmount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IntroTutorialRing::*)(float)>(&GlobalNamespace::IntroTutorialRing::SetProgressImagesfillAmount)> {
  static const MethodInfo* get() {
    static auto* fillAmount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IntroTutorialRing*), "SetProgressImagesfillAmount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fillAmount});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IntroTutorialRing::OnTriggerEnter
// Il2CppName: OnTriggerEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IntroTutorialRing::*)(UnityEngine::Collider*)>(&GlobalNamespace::IntroTutorialRing::OnTriggerEnter)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IntroTutorialRing*), "OnTriggerEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IntroTutorialRing::OnTriggerExit
// Il2CppName: OnTriggerExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IntroTutorialRing::*)(UnityEngine::Collider*)>(&GlobalNamespace::IntroTutorialRing::OnTriggerExit)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IntroTutorialRing*), "OnTriggerExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IntroTutorialRing::OnTriggerStay
// Il2CppName: OnTriggerStay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IntroTutorialRing::*)(UnityEngine::Collider*)>(&GlobalNamespace::IntroTutorialRing::OnTriggerStay)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IntroTutorialRing*), "OnTriggerStay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IntroTutorialRing::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
