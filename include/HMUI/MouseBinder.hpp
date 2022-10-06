// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction
  class UnityAction;
  // Forward declaring type: UnityAction`1<T0>
  template<typename T0>
  class UnityAction_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Tuple`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Tuple_3;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: ButtonType because it is already included!
  // Skipping declaration: MouseEventType because it is already included!
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Forward declaring type: MouseBinder
  class MouseBinder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::MouseBinder);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::MouseBinder*, "HMUI", "MouseBinder");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.MouseBinder
  // [TokenAttribute] Offset: FFFFFFFF
  class MouseBinder : public ::Il2CppObject {
    public:
    // Nested type: ::HMUI::MouseBinder::MouseEventType
    struct MouseEventType;
    // Nested type: ::HMUI::MouseBinder::ButtonType
    struct ButtonType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: HMUI.MouseBinder/HMUI.MouseEventType
    // [TokenAttribute] Offset: FFFFFFFF
    struct MouseEventType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: MouseEventType
      constexpr MouseEventType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating interface conversion operator: i_Enum
      inline ::System::Enum* i_Enum() noexcept {
        return reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public HMUI.MouseBinder/HMUI.MouseEventType ButtonDown
      static constexpr const int ButtonDown = 0;
      // Get static field: static public HMUI.MouseBinder/HMUI.MouseEventType ButtonDown
      static ::HMUI::MouseBinder::MouseEventType _get_ButtonDown();
      // Set static field: static public HMUI.MouseBinder/HMUI.MouseEventType ButtonDown
      static void _set_ButtonDown(::HMUI::MouseBinder::MouseEventType value);
      // static field const value: static public HMUI.MouseBinder/HMUI.MouseEventType ButtonUp
      static constexpr const int ButtonUp = 1;
      // Get static field: static public HMUI.MouseBinder/HMUI.MouseEventType ButtonUp
      static ::HMUI::MouseBinder::MouseEventType _get_ButtonUp();
      // Set static field: static public HMUI.MouseBinder/HMUI.MouseEventType ButtonUp
      static void _set_ButtonUp(::HMUI::MouseBinder::MouseEventType value);
      // static field const value: static public HMUI.MouseBinder/HMUI.MouseEventType ButtonPress
      static constexpr const int ButtonPress = 2;
      // Get static field: static public HMUI.MouseBinder/HMUI.MouseEventType ButtonPress
      static ::HMUI::MouseBinder::MouseEventType _get_ButtonPress();
      // Set static field: static public HMUI.MouseBinder/HMUI.MouseEventType ButtonPress
      static void _set_ButtonPress(::HMUI::MouseBinder::MouseEventType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // HMUI.MouseBinder/HMUI.MouseEventType
    #pragma pack(pop)
    static check_size<sizeof(MouseBinder::MouseEventType), 0 + sizeof(int)> __HMUI_MouseBinder_MouseEventTypeSizeCheck;
    static_assert(sizeof(MouseBinder::MouseEventType) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: HMUI.MouseBinder/HMUI.ButtonType
    // [TokenAttribute] Offset: FFFFFFFF
    struct ButtonType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: ButtonType
      constexpr ButtonType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating interface conversion operator: i_Enum
      inline ::System::Enum* i_Enum() noexcept {
        return reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public HMUI.MouseBinder/HMUI.ButtonType Primary
      static constexpr const int Primary = 0;
      // Get static field: static public HMUI.MouseBinder/HMUI.ButtonType Primary
      static ::HMUI::MouseBinder::ButtonType _get_Primary();
      // Set static field: static public HMUI.MouseBinder/HMUI.ButtonType Primary
      static void _set_Primary(::HMUI::MouseBinder::ButtonType value);
      // static field const value: static public HMUI.MouseBinder/HMUI.ButtonType Secondary
      static constexpr const int Secondary = 1;
      // Get static field: static public HMUI.MouseBinder/HMUI.ButtonType Secondary
      static ::HMUI::MouseBinder::ButtonType _get_Secondary();
      // Set static field: static public HMUI.MouseBinder/HMUI.ButtonType Secondary
      static void _set_Secondary(::HMUI::MouseBinder::ButtonType value);
      // static field const value: static public HMUI.MouseBinder/HMUI.ButtonType Middle
      static constexpr const int Middle = 2;
      // Get static field: static public HMUI.MouseBinder/HMUI.ButtonType Middle
      static ::HMUI::MouseBinder::ButtonType _get_Middle();
      // Set static field: static public HMUI.MouseBinder/HMUI.ButtonType Middle
      static void _set_Middle(::HMUI::MouseBinder::ButtonType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // HMUI.MouseBinder/HMUI.ButtonType
    #pragma pack(pop)
    static check_size<sizeof(MouseBinder::ButtonType), 0 + sizeof(int)> __HMUI_MouseBinder_ButtonTypeSizeCheck;
    static_assert(sizeof(MouseBinder::ButtonType) == 0x4);
    public:
    // private System.Boolean <enabled>k__BackingField
    // Size: 0x1
    // Offset: 0x10
    bool enabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: enabled and: scrollBindings
    char __padding0[0x7] = {};
    // private System.Collections.Generic.List`1<UnityEngine.Events.UnityAction`1<System.Single>> _scrollBindings
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float>*>* scrollBindings;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float>*>*) == 0x8);
    // private System.Collections.Generic.List`1<System.Tuple`3<HMUI.MouseBinder/HMUI.ButtonType,HMUI.MouseBinder/HMUI.MouseEventType,UnityEngine.Events.UnityAction>> _buttonBindings
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::System::Tuple_3<::HMUI::MouseBinder::ButtonType, ::HMUI::MouseBinder::MouseEventType, ::UnityEngine::Events::UnityAction*>*>* buttonBindings;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::Tuple_3<::HMUI::MouseBinder::ButtonType, ::HMUI::MouseBinder::MouseEventType, ::UnityEngine::Events::UnityAction*>*>*) == 0x8);
    public:
    // Get instance field reference: private System.Boolean <enabled>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$enabled$k__BackingField();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.Events.UnityAction`1<System.Single>> _scrollBindings
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Events::UnityAction_1<float>*>*& dyn__scrollBindings();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Tuple`3<HMUI.MouseBinder/HMUI.ButtonType,HMUI.MouseBinder/HMUI.MouseEventType,UnityEngine.Events.UnityAction>> _buttonBindings
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::System::Tuple_3<::HMUI::MouseBinder::ButtonType, ::HMUI::MouseBinder::MouseEventType, ::UnityEngine::Events::UnityAction*>*>*& dyn__buttonBindings();
    // public System.Boolean get_enabled()
    // Offset: 0x16DD950
    bool get_enabled();
    // public System.Void set_enabled(System.Boolean value)
    // Offset: 0x16DD958
    void set_enabled(bool value);
    // public System.Void .ctor()
    // Offset: 0x16DD964
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MouseBinder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::MouseBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MouseBinder*, creationType>()));
    }
    // private System.Void Init()
    // Offset: 0x16DD98C
    void Init();
    // public System.Void AddScrollBindings(System.Collections.Generic.List`1<System.Action`1<System.Single>> bindingData)
    // Offset: 0x16DDA24
    void AddScrollBindings(::System::Collections::Generic::List_1<::System::Action_1<float>*>* bindingData);
    // public System.Void AddScrollBinding(System.Action`1<System.Single> action)
    // Offset: 0x16DDB1C
    void AddScrollBinding(::System::Action_1<float>* action);
    // public System.Void AddButtonBindings(System.Collections.Generic.List`1<System.Tuple`3<HMUI.MouseBinder/HMUI.ButtonType,HMUI.MouseBinder/HMUI.MouseEventType,UnityEngine.Events.UnityAction>> bindingData)
    // Offset: 0x16DDBBC
    void AddButtonBindings(::System::Collections::Generic::List_1<::System::Tuple_3<::HMUI::MouseBinder::ButtonType, ::HMUI::MouseBinder::MouseEventType, ::UnityEngine::Events::UnityAction*>*>* bindingData);
    // public System.Void AddButtonBinding(HMUI.MouseBinder/HMUI.ButtonType buttonType, HMUI.MouseBinder/HMUI.MouseEventType keyBindingType, UnityEngine.Events.UnityAction action)
    // Offset: 0x16DDCC8
    void AddButtonBinding(::HMUI::MouseBinder::ButtonType buttonType, ::HMUI::MouseBinder::MouseEventType keyBindingType, ::UnityEngine::Events::UnityAction* action);
    // public System.Void ClearBindings()
    // Offset: 0x16DDDA0
    void ClearBindings();
    // public System.Void ManualUpdate()
    // Offset: 0x16DDE00
    void ManualUpdate();
  }; // HMUI.MouseBinder
  #pragma pack(pop)
  static check_size<sizeof(MouseBinder), 32 + sizeof(::System::Collections::Generic::List_1<::System::Tuple_3<::HMUI::MouseBinder::ButtonType, ::HMUI::MouseBinder::MouseEventType, ::UnityEngine::Events::UnityAction*>*>*)> __HMUI_MouseBinderSizeCheck;
  static_assert(sizeof(MouseBinder) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HMUI::MouseBinder::ButtonType, "HMUI", "MouseBinder/ButtonType");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HMUI::MouseBinder::MouseEventType, "HMUI", "MouseBinder/MouseEventType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::MouseBinder::get_enabled
// Il2CppName: get_enabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HMUI::MouseBinder::*)()>(&HMUI::MouseBinder::get_enabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::MouseBinder*), "get_enabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::MouseBinder::set_enabled
// Il2CppName: set_enabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::MouseBinder::*)(bool)>(&HMUI::MouseBinder::set_enabled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::MouseBinder*), "set_enabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::MouseBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::MouseBinder::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::MouseBinder::*)()>(&HMUI::MouseBinder::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::MouseBinder*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::MouseBinder::AddScrollBindings
// Il2CppName: AddScrollBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::MouseBinder::*)(::System::Collections::Generic::List_1<::System::Action_1<float>*>*)>(&HMUI::MouseBinder::AddScrollBindings)> {
  static const MethodInfo* get() {
    static auto* bindingData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::MouseBinder*), "AddScrollBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bindingData});
  }
};
// Writing MetadataGetter for method: HMUI::MouseBinder::AddScrollBinding
// Il2CppName: AddScrollBinding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::MouseBinder::*)(::System::Action_1<float>*)>(&HMUI::MouseBinder::AddScrollBinding)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::MouseBinder*), "AddScrollBinding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action});
  }
};
// Writing MetadataGetter for method: HMUI::MouseBinder::AddButtonBindings
// Il2CppName: AddButtonBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::MouseBinder::*)(::System::Collections::Generic::List_1<::System::Tuple_3<::HMUI::MouseBinder::ButtonType, ::HMUI::MouseBinder::MouseEventType, ::UnityEngine::Events::UnityAction*>*>*)>(&HMUI::MouseBinder::AddButtonBindings)> {
  static const MethodInfo* get() {
    static auto* bindingData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Tuple`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "MouseBinder/ButtonType"), ::il2cpp_utils::GetClassFromName("HMUI", "MouseBinder/MouseEventType"), ::il2cpp_utils::GetClassFromName("UnityEngine.Events", "UnityAction")})})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::MouseBinder*), "AddButtonBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bindingData});
  }
};
// Writing MetadataGetter for method: HMUI::MouseBinder::AddButtonBinding
// Il2CppName: AddButtonBinding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::MouseBinder::*)(::HMUI::MouseBinder::ButtonType, ::HMUI::MouseBinder::MouseEventType, ::UnityEngine::Events::UnityAction*)>(&HMUI::MouseBinder::AddButtonBinding)> {
  static const MethodInfo* get() {
    static auto* buttonType = &::il2cpp_utils::GetClassFromName("HMUI", "MouseBinder/ButtonType")->byval_arg;
    static auto* keyBindingType = &::il2cpp_utils::GetClassFromName("HMUI", "MouseBinder/MouseEventType")->byval_arg;
    static auto* action = &::il2cpp_utils::GetClassFromName("UnityEngine.Events", "UnityAction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::MouseBinder*), "AddButtonBinding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buttonType, keyBindingType, action});
  }
};
// Writing MetadataGetter for method: HMUI::MouseBinder::ClearBindings
// Il2CppName: ClearBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::MouseBinder::*)()>(&HMUI::MouseBinder::ClearBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::MouseBinder*), "ClearBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::MouseBinder::ManualUpdate
// Il2CppName: ManualUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::MouseBinder::*)()>(&HMUI::MouseBinder::ManualUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::MouseBinder*), "ManualUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
