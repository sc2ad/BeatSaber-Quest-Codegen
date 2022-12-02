// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ContainerViewController
#include "HMUI/ContainerViewController.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ViewController
  class ViewController;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::ContainerViewController::$AddViewControllerCoroutine$d__15);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ContainerViewController::$AddViewControllerCoroutine$d__15*, "HMUI", "ContainerViewController/<AddViewControllerCoroutine>d__15");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ContainerViewController/HMUI.<AddViewControllerCoroutine>d__15
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ContainerViewController::$AddViewControllerCoroutine$d__15 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public HMUI.ContainerViewController <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::HMUI::ContainerViewController* $$4__this;
    // Field size check
    static_assert(sizeof(::HMUI::ContainerViewController*) == 0x8);
    // public HMUI.ViewController newViewController
    // Size: 0x8
    // Offset: 0x28
    ::HMUI::ViewController* newViewController;
    // Field size check
    static_assert(sizeof(::HMUI::ViewController*) == 0x8);
    // public System.Boolean immediately
    // Size: 0x1
    // Offset: 0x30
    bool immediately;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: immediately and: animationLayouter
    char __padding4[0x7] = {};
    // public System.Action`2<System.Single,HMUI.ViewController[]> animationLayouter
    // Size: 0x8
    // Offset: 0x38
    ::System::Action_2<float, ::ArrayW<::HMUI::ViewController*>>* animationLayouter;
    // Field size check
    static_assert(sizeof(::System::Action_2<float, ::ArrayW<::HMUI::ViewController*>>*) == 0x8);
    // public System.Action finishedCallback
    // Size: 0x8
    // Offset: 0x40
    ::System::Action* finishedCallback;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private HMUI.ViewController[] <viewControllers>5__2
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<::HMUI::ViewController*> $viewControllers$5__2;
    // Field size check
    static_assert(sizeof(::ArrayW<::HMUI::ViewController*>) == 0x8);
    // private System.Single <transitionDuration>5__3
    // Size: 0x4
    // Offset: 0x50
    float $transitionDuration$5__3;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <elapsedTime>5__4
    // Size: 0x4
    // Offset: 0x54
    float $elapsedTime$5__4;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Creating interface conversion operator: i_Il2CppObject
    inline ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>* i_Il2CppObject() noexcept {
      return reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public HMUI.ContainerViewController <>4__this
    [[deprecated("Use field access instead!")]] ::HMUI::ContainerViewController*& dyn_$$4__this();
    // Get instance field reference: public HMUI.ViewController newViewController
    [[deprecated("Use field access instead!")]] ::HMUI::ViewController*& dyn_newViewController();
    // Get instance field reference: public System.Boolean immediately
    [[deprecated("Use field access instead!")]] bool& dyn_immediately();
    // Get instance field reference: public System.Action`2<System.Single,HMUI.ViewController[]> animationLayouter
    [[deprecated("Use field access instead!")]] ::System::Action_2<float, ::ArrayW<::HMUI::ViewController*>>*& dyn_animationLayouter();
    // Get instance field reference: public System.Action finishedCallback
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_finishedCallback();
    // Get instance field reference: private HMUI.ViewController[] <viewControllers>5__2
    [[deprecated("Use field access instead!")]] ::ArrayW<::HMUI::ViewController*>& dyn_$viewControllers$5__2();
    // Get instance field reference: private System.Single <transitionDuration>5__3
    [[deprecated("Use field access instead!")]] float& dyn_$transitionDuration$5__3();
    // Get instance field reference: private System.Single <elapsedTime>5__4
    [[deprecated("Use field access instead!")]] float& dyn_$elapsedTime$5__4();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x1747970
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x17479D8
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x17473A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContainerViewController::$AddViewControllerCoroutine$d__15* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::ContainerViewController::$AddViewControllerCoroutine$d__15::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContainerViewController::$AddViewControllerCoroutine$d__15*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x17477AC
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x17477B0
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1747978
    void System_Collections_IEnumerator_Reset();
  }; // HMUI.ContainerViewController/HMUI.<AddViewControllerCoroutine>d__15
  #pragma pack(pop)
  static check_size<sizeof(ContainerViewController::$AddViewControllerCoroutine$d__15), 84 + sizeof(float)> __HMUI_ContainerViewController_$AddViewControllerCoroutine$d__15SizeCheck;
  static_assert(sizeof(ContainerViewController::$AddViewControllerCoroutine$d__15) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::ContainerViewController::$AddViewControllerCoroutine$d__15::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (HMUI::ContainerViewController::$AddViewControllerCoroutine$d__15::*)()>(&HMUI::ContainerViewController::$AddViewControllerCoroutine$d__15::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ContainerViewController::$AddViewControllerCoroutine$d__15*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ContainerViewController::$AddViewControllerCoroutine$d__15::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (HMUI::ContainerViewController::$AddViewControllerCoroutine$d__15::*)()>(&HMUI::ContainerViewController::$AddViewControllerCoroutine$d__15::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ContainerViewController::$AddViewControllerCoroutine$d__15*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ContainerViewController::$AddViewControllerCoroutine$d__15::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::ContainerViewController::$AddViewControllerCoroutine$d__15::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ContainerViewController::$AddViewControllerCoroutine$d__15::*)()>(&HMUI::ContainerViewController::$AddViewControllerCoroutine$d__15::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ContainerViewController::$AddViewControllerCoroutine$d__15*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ContainerViewController::$AddViewControllerCoroutine$d__15::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HMUI::ContainerViewController::$AddViewControllerCoroutine$d__15::*)()>(&HMUI::ContainerViewController::$AddViewControllerCoroutine$d__15::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ContainerViewController::$AddViewControllerCoroutine$d__15*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ContainerViewController::$AddViewControllerCoroutine$d__15::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ContainerViewController::$AddViewControllerCoroutine$d__15::*)()>(&HMUI::ContainerViewController::$AddViewControllerCoroutine$d__15::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ContainerViewController::$AddViewControllerCoroutine$d__15*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
