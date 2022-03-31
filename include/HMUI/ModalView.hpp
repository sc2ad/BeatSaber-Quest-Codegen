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
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: PanelAnimationSO
  class PanelAnimationSO;
  // Forward declaring type: ViewController
  class ViewController;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Canvas
  class Canvas;
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Forward declaring type: ModalView
  class ModalView;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::ModalView);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ModalView*, "HMUI", "ModalView");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x6C
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ModalView
  // [TokenAttribute] Offset: FFFFFFFF
  class ModalView : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::HMUI::ModalView::$$c__DisplayClass17_0
    class $$c__DisplayClass17_0;
    // Nested type: ::HMUI::ModalView::$$c__DisplayClass21_0
    class $$c__DisplayClass21_0;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private HMUI.PanelAnimationSO _presentPanelAnimations
    // Size: 0x8
    // Offset: 0x18
    ::HMUI::PanelAnimationSO* presentPanelAnimations;
    // Field size check
    static_assert(sizeof(::HMUI::PanelAnimationSO*) == 0x8);
    // private HMUI.PanelAnimationSO _dismissPanelAnimation
    // Size: 0x8
    // Offset: 0x20
    ::HMUI::PanelAnimationSO* dismissPanelAnimation;
    // Field size check
    static_assert(sizeof(::HMUI::PanelAnimationSO*) == 0x8);
    // private System.Boolean _animateParentCanvas
    // Size: 0x1
    // Offset: 0x28
    bool animateParentCanvas;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: animateParentCanvas and: container
    char __padding2[0x7] = {};
    // [InjectAttribute] Offset: 0x123BC44
    // private readonly Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x30
    ::Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(::Zenject::DiContainer*) == 0x8);
    // private System.Action blockerClickedEvent
    // Size: 0x8
    // Offset: 0x38
    ::System::Action* blockerClickedEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private UnityEngine.Transform _previousParent
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Transform* previousParent;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Boolean _isShown
    // Size: 0x1
    // Offset: 0x48
    bool isShown;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _viewIsValid
    // Size: 0x1
    // Offset: 0x49
    bool viewIsValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: viewIsValid and: mainCanvas
    char __padding7[0x6] = {};
    // private UnityEngine.Canvas _mainCanvas
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::Canvas* mainCanvas;
    // Field size check
    static_assert(sizeof(::UnityEngine::Canvas*) == 0x8);
    // private UnityEngine.CanvasGroup _parentCanvasGroup
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::CanvasGroup* parentCanvasGroup;
    // Field size check
    static_assert(sizeof(::UnityEngine::CanvasGroup*) == 0x8);
    // private UnityEngine.GameObject _blockerGO
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::GameObject* blockerGO;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private System.Int32 _test
    // Size: 0x4
    // Offset: 0x68
    int test;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private HMUI.PanelAnimationSO _presentPanelAnimations
    ::HMUI::PanelAnimationSO*& dyn__presentPanelAnimations();
    // Get instance field reference: private HMUI.PanelAnimationSO _dismissPanelAnimation
    ::HMUI::PanelAnimationSO*& dyn__dismissPanelAnimation();
    // Get instance field reference: private System.Boolean _animateParentCanvas
    bool& dyn__animateParentCanvas();
    // Get instance field reference: private readonly Zenject.DiContainer _container
    ::Zenject::DiContainer*& dyn__container();
    // Get instance field reference: private System.Action blockerClickedEvent
    ::System::Action*& dyn_blockerClickedEvent();
    // Get instance field reference: private UnityEngine.Transform _previousParent
    ::UnityEngine::Transform*& dyn__previousParent();
    // Get instance field reference: private System.Boolean _isShown
    bool& dyn__isShown();
    // Get instance field reference: private System.Boolean _viewIsValid
    bool& dyn__viewIsValid();
    // Get instance field reference: private UnityEngine.Canvas _mainCanvas
    ::UnityEngine::Canvas*& dyn__mainCanvas();
    // Get instance field reference: private UnityEngine.CanvasGroup _parentCanvasGroup
    ::UnityEngine::CanvasGroup*& dyn__parentCanvasGroup();
    // Get instance field reference: private UnityEngine.GameObject _blockerGO
    ::UnityEngine::GameObject*& dyn__blockerGO();
    // Get instance field reference: private System.Int32 _test
    int& dyn__test();
    // public System.Void add_blockerClickedEvent(System.Action value)
    // Offset: 0x1683670
    void add_blockerClickedEvent(::System::Action* value);
    // public System.Void remove_blockerClickedEvent(System.Action value)
    // Offset: 0x1683714
    void remove_blockerClickedEvent(::System::Action* value);
    // private System.Void OnDisable()
    // Offset: 0x16837B8
    void OnDisable();
    // private System.Void OnDestroy()
    // Offset: 0x168399C
    void OnDestroy();
    // private System.Void SetupView(UnityEngine.Transform screenTransform)
    // Offset: 0x1683A4C
    void SetupView(::UnityEngine::Transform* screenTransform);
    // public System.Void Hide(System.Boolean animated, System.Action finishedCallback)
    // Offset: 0x16837C4
    void Hide(bool animated, ::System::Action* finishedCallback);
    // public System.Void Show(System.Boolean animated, System.Boolean moveToCenter, System.Action finishedCallback)
    // Offset: 0x1683D8C
    void Show(bool animated, bool moveToCenter, ::System::Action* finishedCallback);
    // private UnityEngine.GameObject CreateBlocker()
    // Offset: 0x1684280
    ::UnityEngine::GameObject* CreateBlocker();
    // private System.Void HandleBlockerButtonClicked()
    // Offset: 0x1684668
    void HandleBlockerButtonClicked();
    // private System.Void HandleParentViewControllerDidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x168467C
    void HandleParentViewControllerDidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // static private UnityEngine.Transform GetModalRootTransform(UnityEngine.Transform transform, out UnityEngine.Canvas canvas, out HMUI.ViewController viewController)
    // Offset: 0x1684194
    static ::UnityEngine::Transform* GetModalRootTransform(::UnityEngine::Transform* transform, ByRef<::UnityEngine::Canvas*> canvas, ByRef<::HMUI::ViewController*> viewController);
    // public System.Void .ctor()
    // Offset: 0x1684744
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ModalView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::ModalView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ModalView*, creationType>()));
    }
  }; // HMUI.ModalView
  #pragma pack(pop)
  static check_size<sizeof(ModalView), 104 + sizeof(int)> __HMUI_ModalViewSizeCheck;
  static_assert(sizeof(ModalView) == 0x6C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::ModalView::add_blockerClickedEvent
// Il2CppName: add_blockerClickedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ModalView::*)(::System::Action*)>(&HMUI::ModalView::add_blockerClickedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ModalView*), "add_blockerClickedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::ModalView::remove_blockerClickedEvent
// Il2CppName: remove_blockerClickedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ModalView::*)(::System::Action*)>(&HMUI::ModalView::remove_blockerClickedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ModalView*), "remove_blockerClickedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::ModalView::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ModalView::*)()>(&HMUI::ModalView::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ModalView*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ModalView::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ModalView::*)()>(&HMUI::ModalView::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ModalView*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ModalView::SetupView
// Il2CppName: SetupView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ModalView::*)(::UnityEngine::Transform*)>(&HMUI::ModalView::SetupView)> {
  static const MethodInfo* get() {
    static auto* screenTransform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ModalView*), "SetupView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{screenTransform});
  }
};
// Writing MetadataGetter for method: HMUI::ModalView::Hide
// Il2CppName: Hide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ModalView::*)(bool, ::System::Action*)>(&HMUI::ModalView::Hide)> {
  static const MethodInfo* get() {
    static auto* animated = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* finishedCallback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ModalView*), "Hide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animated, finishedCallback});
  }
};
// Writing MetadataGetter for method: HMUI::ModalView::Show
// Il2CppName: Show
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ModalView::*)(bool, bool, ::System::Action*)>(&HMUI::ModalView::Show)> {
  static const MethodInfo* get() {
    static auto* animated = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* moveToCenter = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* finishedCallback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ModalView*), "Show", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animated, moveToCenter, finishedCallback});
  }
};
// Writing MetadataGetter for method: HMUI::ModalView::CreateBlocker
// Il2CppName: CreateBlocker
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (HMUI::ModalView::*)()>(&HMUI::ModalView::CreateBlocker)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ModalView*), "CreateBlocker", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ModalView::HandleBlockerButtonClicked
// Il2CppName: HandleBlockerButtonClicked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ModalView::*)()>(&HMUI::ModalView::HandleBlockerButtonClicked)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ModalView*), "HandleBlockerButtonClicked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ModalView::HandleParentViewControllerDidDeactivate
// Il2CppName: HandleParentViewControllerDidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ModalView::*)(bool, bool)>(&HMUI::ModalView::HandleParentViewControllerDidDeactivate)> {
  static const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ModalView*), "HandleParentViewControllerDidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, screenSystemDisabling});
  }
};
// Writing MetadataGetter for method: HMUI::ModalView::GetModalRootTransform
// Il2CppName: GetModalRootTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (*)(::UnityEngine::Transform*, ByRef<::UnityEngine::Canvas*>, ByRef<::HMUI::ViewController*>)>(&HMUI::ModalView::GetModalRootTransform)> {
  static const MethodInfo* get() {
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* canvas = &::il2cpp_utils::GetClassFromName("UnityEngine", "Canvas")->this_arg;
    static auto* viewController = &::il2cpp_utils::GetClassFromName("HMUI", "ViewController")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ModalView*), "GetModalRootTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transform, canvas, viewController});
  }
};
// Writing MetadataGetter for method: HMUI::ModalView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
