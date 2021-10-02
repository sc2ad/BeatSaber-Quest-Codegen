// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.BaseInputModule
#include "UnityEngine/EventSystems/BaseInputModule.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: UnityEngine.EventSystems.PointerEventData
#include "UnityEngine/EventSystems/PointerEventData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Skipping declaration: BaseEventData because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector2 because it is already included!
  // Forward declaring type: Touch
  struct Touch;
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.PointerInputModule
  // [TokenAttribute] Offset: FFFFFFFF
  class PointerInputModule : public UnityEngine::EventSystems::BaseInputModule {
    public:
    // Nested type: UnityEngine::EventSystems::PointerInputModule::ButtonState
    class ButtonState;
    // Nested type: UnityEngine::EventSystems::PointerInputModule::MouseState
    class MouseState;
    // Nested type: UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData
    class MouseButtonEventData;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // protected System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> m_PointerData
    // Size: 0x8
    // Offset: 0x48
    System::Collections::Generic::Dictionary_2<int, UnityEngine::EventSystems::PointerEventData*>* m_PointerData;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<int, UnityEngine::EventSystems::PointerEventData*>*) == 0x8);
    // private readonly UnityEngine.EventSystems.PointerInputModule/UnityEngine.EventSystems.MouseState m_MouseState
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::EventSystems::PointerInputModule::MouseState* m_MouseState;
    // Field size check
    static_assert(sizeof(UnityEngine::EventSystems::PointerInputModule::MouseState*) == 0x8);
    public:
    // static field const value: static public System.Int32 kMouseLeftId
    static constexpr const int kMouseLeftId = -1;
    // Get static field: static public System.Int32 kMouseLeftId
    static int _get_kMouseLeftId();
    // Set static field: static public System.Int32 kMouseLeftId
    static void _set_kMouseLeftId(int value);
    // static field const value: static public System.Int32 kMouseRightId
    static constexpr const int kMouseRightId = -2;
    // Get static field: static public System.Int32 kMouseRightId
    static int _get_kMouseRightId();
    // Set static field: static public System.Int32 kMouseRightId
    static void _set_kMouseRightId(int value);
    // static field const value: static public System.Int32 kMouseMiddleId
    static constexpr const int kMouseMiddleId = -3;
    // Get static field: static public System.Int32 kMouseMiddleId
    static int _get_kMouseMiddleId();
    // Set static field: static public System.Int32 kMouseMiddleId
    static void _set_kMouseMiddleId(int value);
    // static field const value: static public System.Int32 kFakeTouchesId
    static constexpr const int kFakeTouchesId = -4;
    // Get static field: static public System.Int32 kFakeTouchesId
    static int _get_kFakeTouchesId();
    // Set static field: static public System.Int32 kFakeTouchesId
    static void _set_kFakeTouchesId(int value);
    // Get instance field reference: protected System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> m_PointerData
    System::Collections::Generic::Dictionary_2<int, UnityEngine::EventSystems::PointerEventData*>*& dyn_m_PointerData();
    // Get instance field reference: private readonly UnityEngine.EventSystems.PointerInputModule/UnityEngine.EventSystems.MouseState m_MouseState
    UnityEngine::EventSystems::PointerInputModule::MouseState*& dyn_m_MouseState();
    // protected System.Boolean GetPointerData(System.Int32 id, out UnityEngine.EventSystems.PointerEventData data, System.Boolean create)
    // Offset: 0x15F3B84
    bool GetPointerData(int id, ByRef<UnityEngine::EventSystems::PointerEventData*> data, bool create);
    // protected System.Void RemovePointerData(UnityEngine.EventSystems.PointerEventData data)
    // Offset: 0x15F3C64
    void RemovePointerData(UnityEngine::EventSystems::PointerEventData* data);
    // protected UnityEngine.EventSystems.PointerEventData GetTouchPointerEventData(UnityEngine.Touch input, out System.Boolean pressed, out System.Boolean released)
    // Offset: 0x15F3CD0
    UnityEngine::EventSystems::PointerEventData* GetTouchPointerEventData(UnityEngine::Touch input, ByRef<bool> pressed, ByRef<bool> released);
    // protected System.Void CopyFromTo(UnityEngine.EventSystems.PointerEventData from, UnityEngine.EventSystems.PointerEventData to)
    // Offset: 0x15F3F74
    void CopyFromTo(UnityEngine::EventSystems::PointerEventData* from, UnityEngine::EventSystems::PointerEventData* to);
    // protected UnityEngine.EventSystems.PointerEventData/UnityEngine.EventSystems.FramePressState StateForMouseButton(System.Int32 buttonId)
    // Offset: 0x15F3FD0
    UnityEngine::EventSystems::PointerEventData::FramePressState StateForMouseButton(int buttonId);
    // protected UnityEngine.EventSystems.PointerInputModule/UnityEngine.EventSystems.MouseState GetMousePointerEventData()
    // Offset: 0x15F4058
    UnityEngine::EventSystems::PointerInputModule::MouseState* GetMousePointerEventData();
    // protected UnityEngine.EventSystems.PointerInputModule/UnityEngine.EventSystems.MouseState GetMousePointerEventData(System.Int32 id)
    // Offset: 0x15F406C
    UnityEngine::EventSystems::PointerInputModule::MouseState* GetMousePointerEventData(int id);
    // protected UnityEngine.EventSystems.PointerEventData GetLastPointerEventData(System.Int32 id)
    // Offset: 0x15F43D4
    UnityEngine::EventSystems::PointerEventData* GetLastPointerEventData(int id);
    // static private System.Boolean ShouldStartDrag(UnityEngine.Vector2 pressPos, UnityEngine.Vector2 currentPos, System.Single threshold, System.Boolean useDragThreshold)
    // Offset: 0x15F4400
    static bool ShouldStartDrag(UnityEngine::Vector2 pressPos, UnityEngine::Vector2 currentPos, float threshold, bool useDragThreshold);
    // protected System.Void ProcessMove(UnityEngine.EventSystems.PointerEventData pointerEvent)
    // Offset: 0x15F44D0
    void ProcessMove(UnityEngine::EventSystems::PointerEventData* pointerEvent);
    // protected System.Void ProcessDrag(UnityEngine.EventSystems.PointerEventData pointerEvent)
    // Offset: 0x15F4510
    void ProcessDrag(UnityEngine::EventSystems::PointerEventData* pointerEvent);
    // protected System.Void ClearSelection()
    // Offset: 0x15F4890
    void ClearSelection();
    // protected System.Void DeselectIfSelectionChanged(UnityEngine.GameObject currentOverGo, UnityEngine.EventSystems.BaseEventData pointerEvent)
    // Offset: 0x15F4BC4
    void DeselectIfSelectionChanged(UnityEngine::GameObject* currentOverGo, UnityEngine::EventSystems::BaseEventData* pointerEvent);
    // protected System.Void .ctor()
    // Offset: 0x15F4CB0
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Void BaseInputModule::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PointerInputModule* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::EventSystems::PointerInputModule::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PointerInputModule*, creationType>()));
    }
    // public override System.Boolean IsPointerOverGameObject(System.Int32 pointerId)
    // Offset: 0x15F47E4
    // Implemented from: UnityEngine.EventSystems.BaseInputModule
    // Base method: System.Boolean BaseInputModule::IsPointerOverGameObject(System.Int32 pointerId)
    bool IsPointerOverGameObject(int pointerId);
    // public override System.String ToString()
    // Offset: 0x15F49E0
    // Implemented from: UnityEngine.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.EventSystems.PointerInputModule
  #pragma pack(pop)
  static check_size<sizeof(PointerInputModule), 80 + sizeof(UnityEngine::EventSystems::PointerInputModule::MouseState*)> __UnityEngine_EventSystems_PointerInputModuleSizeCheck;
  static_assert(sizeof(PointerInputModule) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::PointerInputModule*, "UnityEngine.EventSystems", "PointerInputModule");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::EventSystems::PointerInputModule::GetPointerData
// Il2CppName: GetPointerData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::PointerInputModule::*)(int, ByRef<UnityEngine::EventSystems::PointerEventData*>, bool)>(&UnityEngine::EventSystems::PointerInputModule::GetPointerData)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->this_arg;
    static auto* create = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::PointerInputModule*), "GetPointerData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id, data, create});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::PointerInputModule::RemovePointerData
// Il2CppName: RemovePointerData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::PointerInputModule::*)(UnityEngine::EventSystems::PointerEventData*)>(&UnityEngine::EventSystems::PointerInputModule::RemovePointerData)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::PointerInputModule*), "RemovePointerData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::PointerInputModule::GetTouchPointerEventData
// Il2CppName: GetTouchPointerEventData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::EventSystems::PointerEventData* (UnityEngine::EventSystems::PointerInputModule::*)(UnityEngine::Touch, ByRef<bool>, ByRef<bool>)>(&UnityEngine::EventSystems::PointerInputModule::GetTouchPointerEventData)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("UnityEngine", "Touch")->byval_arg;
    static auto* pressed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    static auto* released = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::PointerInputModule*), "GetTouchPointerEventData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, pressed, released});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::PointerInputModule::CopyFromTo
// Il2CppName: CopyFromTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::PointerInputModule::*)(UnityEngine::EventSystems::PointerEventData*, UnityEngine::EventSystems::PointerEventData*)>(&UnityEngine::EventSystems::PointerInputModule::CopyFromTo)> {
  static const MethodInfo* get() {
    static auto* from = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    static auto* to = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::PointerInputModule*), "CopyFromTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{from, to});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::PointerInputModule::StateForMouseButton
// Il2CppName: StateForMouseButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::EventSystems::PointerEventData::FramePressState (UnityEngine::EventSystems::PointerInputModule::*)(int)>(&UnityEngine::EventSystems::PointerInputModule::StateForMouseButton)> {
  static const MethodInfo* get() {
    static auto* buttonId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::PointerInputModule*), "StateForMouseButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buttonId});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::PointerInputModule::GetMousePointerEventData
// Il2CppName: GetMousePointerEventData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::EventSystems::PointerInputModule::MouseState* (UnityEngine::EventSystems::PointerInputModule::*)()>(&UnityEngine::EventSystems::PointerInputModule::GetMousePointerEventData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::PointerInputModule*), "GetMousePointerEventData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::PointerInputModule::GetMousePointerEventData
// Il2CppName: GetMousePointerEventData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::EventSystems::PointerInputModule::MouseState* (UnityEngine::EventSystems::PointerInputModule::*)(int)>(&UnityEngine::EventSystems::PointerInputModule::GetMousePointerEventData)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::PointerInputModule*), "GetMousePointerEventData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::PointerInputModule::GetLastPointerEventData
// Il2CppName: GetLastPointerEventData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::EventSystems::PointerEventData* (UnityEngine::EventSystems::PointerInputModule::*)(int)>(&UnityEngine::EventSystems::PointerInputModule::GetLastPointerEventData)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::PointerInputModule*), "GetLastPointerEventData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::PointerInputModule::ShouldStartDrag
// Il2CppName: ShouldStartDrag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Vector2, UnityEngine::Vector2, float, bool)>(&UnityEngine::EventSystems::PointerInputModule::ShouldStartDrag)> {
  static const MethodInfo* get() {
    static auto* pressPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* currentPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* threshold = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* useDragThreshold = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::PointerInputModule*), "ShouldStartDrag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pressPos, currentPos, threshold, useDragThreshold});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::PointerInputModule::ProcessMove
// Il2CppName: ProcessMove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::PointerInputModule::*)(UnityEngine::EventSystems::PointerEventData*)>(&UnityEngine::EventSystems::PointerInputModule::ProcessMove)> {
  static const MethodInfo* get() {
    static auto* pointerEvent = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::PointerInputModule*), "ProcessMove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerEvent});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::PointerInputModule::ProcessDrag
// Il2CppName: ProcessDrag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::PointerInputModule::*)(UnityEngine::EventSystems::PointerEventData*)>(&UnityEngine::EventSystems::PointerInputModule::ProcessDrag)> {
  static const MethodInfo* get() {
    static auto* pointerEvent = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::PointerInputModule*), "ProcessDrag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerEvent});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::PointerInputModule::ClearSelection
// Il2CppName: ClearSelection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::PointerInputModule::*)()>(&UnityEngine::EventSystems::PointerInputModule::ClearSelection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::PointerInputModule*), "ClearSelection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::PointerInputModule::DeselectIfSelectionChanged
// Il2CppName: DeselectIfSelectionChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::PointerInputModule::*)(UnityEngine::GameObject*, UnityEngine::EventSystems::BaseEventData*)>(&UnityEngine::EventSystems::PointerInputModule::DeselectIfSelectionChanged)> {
  static const MethodInfo* get() {
    static auto* currentOverGo = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* pointerEvent = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "BaseEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::PointerInputModule*), "DeselectIfSelectionChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentOverGo, pointerEvent});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::PointerInputModule::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::EventSystems::PointerInputModule::IsPointerOverGameObject
// Il2CppName: IsPointerOverGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::PointerInputModule::*)(int)>(&UnityEngine::EventSystems::PointerInputModule::IsPointerOverGameObject)> {
  static const MethodInfo* get() {
    static auto* pointerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::PointerInputModule*), "IsPointerOverGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerId});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::PointerInputModule::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::EventSystems::PointerInputModule::*)()>(&UnityEngine::EventSystems::PointerInputModule::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::PointerInputModule*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
