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
  // Forward declaring type: Signal
  class Signal;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SignalOnUIButtonClick
  class SignalOnUIButtonClick;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SignalOnUIButtonClick);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SignalOnUIButtonClick*, "", "SignalOnUIButtonClick");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: SignalOnUIButtonClick
  // [TokenAttribute] Offset: FFFFFFFF
  class SignalOnUIButtonClick : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // [SignalSenderAttribute] Offset: 0x10E91F8
    // private Signal _buttonClickedSignal
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::Signal* buttonClickedSignal;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Signal*) == 0x8);
    // private UnityEngine.UI.Button _button
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::UI::Button* button;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private Signal _buttonClickedSignal
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::Signal*& dyn__buttonClickedSignal();
    // Get instance field reference: private UnityEngine.UI.Button _button
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn__button();
    // public System.Void .ctor()
    // Offset: 0x2AC397C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SignalOnUIButtonClick* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SignalOnUIButtonClick::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SignalOnUIButtonClick*, creationType>()));
    }
    // private System.Void OnReset()
    // Offset: 0x2AC37B0
    void OnReset();
    // protected System.Void Start()
    // Offset: 0x2AC3808
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x2AC38A0
    void OnDestroy();
  }; // SignalOnUIButtonClick
  #pragma pack(pop)
  static check_size<sizeof(SignalOnUIButtonClick), 32 + sizeof(::UnityEngine::UI::Button*)> __GlobalNamespace_SignalOnUIButtonClickSizeCheck;
  static_assert(sizeof(SignalOnUIButtonClick) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SignalOnUIButtonClick::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SignalOnUIButtonClick::OnReset
// Il2CppName: OnReset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SignalOnUIButtonClick::*)()>(&GlobalNamespace::SignalOnUIButtonClick::OnReset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SignalOnUIButtonClick*), "OnReset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SignalOnUIButtonClick::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SignalOnUIButtonClick::*)()>(&GlobalNamespace::SignalOnUIButtonClick::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SignalOnUIButtonClick*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SignalOnUIButtonClick::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SignalOnUIButtonClick::*)()>(&GlobalNamespace::SignalOnUIButtonClick::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SignalOnUIButtonClick*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
