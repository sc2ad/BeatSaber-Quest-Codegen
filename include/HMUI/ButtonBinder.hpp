// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Tuple`2<T1, T2>
  template<typename T1, typename T2>
  class Tuple_2;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction
  class UnityAction;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::ButtonBinder);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ButtonBinder*, "HMUI", "ButtonBinder");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ButtonBinder
  // [TokenAttribute] Offset: FFFFFFFF
  class ButtonBinder : public ::Il2CppObject {
    public:
    public:
    // private System.Collections.Generic.List`1<System.Tuple`2<UnityEngine.UI.Button,UnityEngine.Events.UnityAction>> _bindings
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::UI::Button*, ::UnityEngine::Events::UnityAction*>*>* bindings;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::UI::Button*, ::UnityEngine::Events::UnityAction*>*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::UI::Button*, ::UnityEngine::Events::UnityAction*>*>*
    constexpr operator ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::UI::Button*, ::UnityEngine::Events::UnityAction*>*>*() const noexcept {
      return bindings;
    }
    // Get instance field reference: private System.Collections.Generic.List`1<System.Tuple`2<UnityEngine.UI.Button,UnityEngine.Events.UnityAction>> _bindings
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::UI::Button*, ::UnityEngine::Events::UnityAction*>*>*& dyn__bindings();
    // public System.Void .ctor()
    // Offset: 0x1744514
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ButtonBinder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::ButtonBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ButtonBinder*, creationType>()));
    }
    // public System.Void .ctor(UnityEngine.UI.Button button, System.Action action)
    // Offset: 0x17445A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ButtonBinder* New_ctor(::UnityEngine::UI::Button* button, ::System::Action* action) {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::ButtonBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ButtonBinder*, creationType>(button, action)));
    }
    // public System.Void .ctor(System.Collections.Generic.List`1<System.Tuple`2<UnityEngine.UI.Button,System.Action>> bindingData)
    // Offset: 0x174469C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ButtonBinder* New_ctor(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::UI::Button*, ::System::Action*>*>* bindingData) {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::ButtonBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ButtonBinder*, creationType>(bindingData)));
    }
    // private System.Void Init()
    // Offset: 0x174453C
    void Init();
    // public System.Void AddBindings(System.Collections.Generic.List`1<System.Tuple`2<UnityEngine.UI.Button,System.Action>> bindingData)
    // Offset: 0x17446D4
    void AddBindings(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::UI::Button*, ::System::Action*>*>* bindingData);
    // public System.Void AddBinding(UnityEngine.UI.Button button, System.Action action)
    // Offset: 0x17445EC
    void AddBinding(::UnityEngine::UI::Button* button, ::System::Action* action);
    // public System.Void ClearBindings()
    // Offset: 0x17447DC
    void ClearBindings();
  }; // HMUI.ButtonBinder
  #pragma pack(pop)
  static check_size<sizeof(ButtonBinder), 16 + sizeof(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::UI::Button*, ::UnityEngine::Events::UnityAction*>*>*)> __HMUI_ButtonBinderSizeCheck;
  static_assert(sizeof(ButtonBinder) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::ButtonBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::ButtonBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::ButtonBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::ButtonBinder::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ButtonBinder::*)()>(&HMUI::ButtonBinder::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ButtonBinder*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ButtonBinder::AddBindings
// Il2CppName: AddBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ButtonBinder::*)(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::UI::Button*, ::System::Action*>*>*)>(&HMUI::ButtonBinder::AddBindings)> {
  static const MethodInfo* get() {
    static auto* bindingData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Tuple`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Button"), ::il2cpp_utils::GetClassFromName("System", "Action")})})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ButtonBinder*), "AddBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bindingData});
  }
};
// Writing MetadataGetter for method: HMUI::ButtonBinder::AddBinding
// Il2CppName: AddBinding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ButtonBinder::*)(::UnityEngine::UI::Button*, ::System::Action*)>(&HMUI::ButtonBinder::AddBinding)> {
  static const MethodInfo* get() {
    static auto* button = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Button")->byval_arg;
    static auto* action = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ButtonBinder*), "AddBinding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{button, action});
  }
};
// Writing MetadataGetter for method: HMUI::ButtonBinder::ClearBindings
// Il2CppName: ClearBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ButtonBinder::*)()>(&HMUI::ButtonBinder::ClearBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ButtonBinder*), "ClearBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
