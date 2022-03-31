// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: CallbacksInTime
  class CallbacksInTime;
  // Forward declaring type: IReadonlyBeatmapData
  class IReadonlyBeatmapData;
  // Forward declaring type: BeatmapDataItem
  class BeatmapDataItem;
  // Forward declaring type: BeatmapDataCallbackWrapper
  class BeatmapDataCallbackWrapper;
  // Forward declaring type: BeatmapDataCallback`1<T>
  template<typename T>
  class BeatmapDataCallback_1;
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: LinkedListNode`1<T>
  template<typename T>
  class LinkedListNode_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCallbacksController
  class BeatmapCallbacksController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapCallbacksController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCallbacksController*, "", "BeatmapCallbacksController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2E
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapCallbacksController
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapCallbacksController : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    // Nested type: ::GlobalNamespace::BeatmapCallbacksController::InitData
    class InitData;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private readonly System.Collections.Generic.Dictionary`2<System.Single,CallbacksInTime> _callbacksInTimes
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::Dictionary_2<float, ::GlobalNamespace::CallbacksInTime*>* callbacksInTimes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<float, ::GlobalNamespace::CallbacksInTime*>*) == 0x8);
    // private readonly IReadonlyBeatmapData _beatmapData
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::IReadonlyBeatmapData* beatmapData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IReadonlyBeatmapData*) == 0x8);
    // private readonly System.Single _startFilterTime
    // Size: 0x4
    // Offset: 0x20
    float startFilterTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _prevSongTime
    // Size: 0x4
    // Offset: 0x24
    float prevSongTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _songTime
    // Size: 0x4
    // Offset: 0x28
    float songTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _sendCallbacksOnBeatmapDataChangeChange
    // Size: 0x1
    // Offset: 0x2C
    bool sendCallbacksOnBeatmapDataChangeChange;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _processingCallbacks
    // Size: 0x1
    // Offset: 0x2D
    bool processingCallbacks;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<System.Single,CallbacksInTime> _callbacksInTimes
    ::System::Collections::Generic::Dictionary_2<float, ::GlobalNamespace::CallbacksInTime*>*& dyn__callbacksInTimes();
    // Get instance field reference: private readonly IReadonlyBeatmapData _beatmapData
    ::GlobalNamespace::IReadonlyBeatmapData*& dyn__beatmapData();
    // Get instance field reference: private readonly System.Single _startFilterTime
    float& dyn__startFilterTime();
    // Get instance field reference: private System.Single _prevSongTime
    float& dyn__prevSongTime();
    // Get instance field reference: private System.Single _songTime
    float& dyn__songTime();
    // Get instance field reference: private System.Boolean _sendCallbacksOnBeatmapDataChangeChange
    bool& dyn__sendCallbacksOnBeatmapDataChangeChange();
    // Get instance field reference: private System.Boolean _processingCallbacks
    bool& dyn__processingCallbacks();
    // public System.Boolean get_sendCallbacksOnBeatmapDataChange()
    // Offset: 0x1363BEC
    bool get_sendCallbacksOnBeatmapDataChange();
    // public System.Void set_sendCallbacksOnBeatmapDataChange(System.Boolean value)
    // Offset: 0x1363BF4
    void set_sendCallbacksOnBeatmapDataChange(bool value);
    // public System.Single get_songTime()
    // Offset: 0x1363C00
    float get_songTime();
    // public System.Void .ctor(BeatmapCallbacksController/InitData initData)
    // Offset: 0x1363C08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapCallbacksController* New_ctor(::GlobalNamespace::BeatmapCallbacksController::InitData* initData) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapCallbacksController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapCallbacksController*, creationType>(initData)));
    }
    // public System.Void Dispose()
    // Offset: 0x1363E8C
    void Dispose();
    // public System.Void ManualUpdate(System.Single songTime)
    // Offset: 0x13640D4
    void ManualUpdate(float songTime);
    // public BeatmapDataCallbackWrapper AddBeatmapCallback(System.Single aheadTime, BeatmapDataCallback`1<T> callback)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    ::GlobalNamespace::BeatmapDataCallbackWrapper* AddBeatmapCallback(float aheadTime, ::GlobalNamespace::BeatmapDataCallback_1<T>* callback) {
      static_assert(std::is_convertible_v<T, ::GlobalNamespace::BeatmapDataItem*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapCallbacksController::AddBeatmapCallback");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AddBeatmapCallback", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(aheadTime), ::il2cpp_utils::ExtractType(callback)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::GlobalNamespace::BeatmapDataCallbackWrapper*, false>(this, ___generic__method, aheadTime, callback);
    }
    // public BeatmapDataCallbackWrapper AddBeatmapCallback(BeatmapDataCallback`1<T> callback)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    ::GlobalNamespace::BeatmapDataCallbackWrapper* AddBeatmapCallback(::GlobalNamespace::BeatmapDataCallback_1<T>* callback) {
      static_assert(std::is_convertible_v<T, ::GlobalNamespace::BeatmapDataItem*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapCallbacksController::AddBeatmapCallback");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AddBeatmapCallback", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(callback)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::GlobalNamespace::BeatmapDataCallbackWrapper*, false>(this, ___generic__method, callback);
    }
    // public BeatmapDataCallbackWrapper AddBeatmapCallback(BeatmapDataCallback`1<T> callback, params System.Int32[] beatmapDataSubtypeIdentifiers)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    ::GlobalNamespace::BeatmapDataCallbackWrapper* AddBeatmapCallback(::GlobalNamespace::BeatmapDataCallback_1<T>* callback, ::ArrayW<int> beatmapDataSubtypeIdentifiers) {
      static_assert(std::is_convertible_v<T, ::GlobalNamespace::BeatmapDataItem*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapCallbacksController::AddBeatmapCallback");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AddBeatmapCallback", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(callback), ::il2cpp_utils::ExtractType(beatmapDataSubtypeIdentifiers)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::GlobalNamespace::BeatmapDataCallbackWrapper*, false>(this, ___generic__method, callback, beatmapDataSubtypeIdentifiers);
    }
    // public BeatmapDataCallbackWrapper AddBeatmapCallback(System.Single aheadTime, BeatmapDataCallback`1<T> callback, params System.Int32[] beatmapDataSubtypeIdentifiers)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    ::GlobalNamespace::BeatmapDataCallbackWrapper* AddBeatmapCallback(float aheadTime, ::GlobalNamespace::BeatmapDataCallback_1<T>* callback, ::ArrayW<int> beatmapDataSubtypeIdentifiers) {
      static_assert(std::is_convertible_v<T, ::GlobalNamespace::BeatmapDataItem*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapCallbacksController::AddBeatmapCallback");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AddBeatmapCallback", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(aheadTime), ::il2cpp_utils::ExtractType(callback), ::il2cpp_utils::ExtractType(beatmapDataSubtypeIdentifiers)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::GlobalNamespace::BeatmapDataCallbackWrapper*, false>(this, ___generic__method, aheadTime, callback, beatmapDataSubtypeIdentifiers);
    }
    // public System.Void RemoveBeatmapCallback(BeatmapDataCallbackWrapper callbackWrapper)
    // Offset: 0x135C748
    void RemoveBeatmapCallback(::GlobalNamespace::BeatmapDataCallbackWrapper* callbackWrapper);
    // public System.Void TriggerBeatmapEvent(BeatmapEventData beatmapEventData)
    // Offset: 0x13644A4
    void TriggerBeatmapEvent(::GlobalNamespace::BeatmapEventData* beatmapEventData);
    // private System.Void HandleBeatmapEventDataWasInserted(BeatmapEventData beatmapEventData, System.Collections.Generic.LinkedListNode`1<BeatmapDataItem> node)
    // Offset: 0x13645B4
    void HandleBeatmapEventDataWasInserted(::GlobalNamespace::BeatmapEventData* beatmapEventData, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* node);
    // private System.Void HandleBeatmapEventDataWillBeRemoved(BeatmapEventData beatmapEventDataToRemove, System.Collections.Generic.LinkedListNode`1<BeatmapDataItem> nodeToRemove)
    // Offset: 0x1364918
    void HandleBeatmapEventDataWillBeRemoved(::GlobalNamespace::BeatmapEventData* beatmapEventDataToRemove, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* nodeToRemove);
    // private System.Void HandleBeatmapEventDataWasRemoved(BeatmapEventData beatmapEventData)
    // Offset: 0x1364B1C
    void HandleBeatmapEventDataWasRemoved(::GlobalNamespace::BeatmapEventData* beatmapEventData);
  }; // BeatmapCallbacksController
  #pragma pack(pop)
  static check_size<sizeof(BeatmapCallbacksController), 45 + sizeof(bool)> __GlobalNamespace_BeatmapCallbacksControllerSizeCheck;
  static_assert(sizeof(BeatmapCallbacksController) == 0x2E);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCallbacksController::get_sendCallbacksOnBeatmapDataChange
// Il2CppName: get_sendCallbacksOnBeatmapDataChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BeatmapCallbacksController::*)()>(&GlobalNamespace::BeatmapCallbacksController::get_sendCallbacksOnBeatmapDataChange)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCallbacksController*), "get_sendCallbacksOnBeatmapDataChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCallbacksController::set_sendCallbacksOnBeatmapDataChange
// Il2CppName: set_sendCallbacksOnBeatmapDataChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCallbacksController::*)(bool)>(&GlobalNamespace::BeatmapCallbacksController::set_sendCallbacksOnBeatmapDataChange)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCallbacksController*), "set_sendCallbacksOnBeatmapDataChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCallbacksController::get_songTime
// Il2CppName: get_songTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BeatmapCallbacksController::*)()>(&GlobalNamespace::BeatmapCallbacksController::get_songTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCallbacksController*), "get_songTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCallbacksController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCallbacksController::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCallbacksController::*)()>(&GlobalNamespace::BeatmapCallbacksController::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCallbacksController*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCallbacksController::ManualUpdate
// Il2CppName: ManualUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCallbacksController::*)(float)>(&GlobalNamespace::BeatmapCallbacksController::ManualUpdate)> {
  static const MethodInfo* get() {
    static auto* songTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCallbacksController*), "ManualUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{songTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCallbacksController::AddBeatmapCallback
// Il2CppName: AddBeatmapCallback
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCallbacksController::AddBeatmapCallback
// Il2CppName: AddBeatmapCallback
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCallbacksController::AddBeatmapCallback
// Il2CppName: AddBeatmapCallback
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCallbacksController::AddBeatmapCallback
// Il2CppName: AddBeatmapCallback
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCallbacksController::RemoveBeatmapCallback
// Il2CppName: RemoveBeatmapCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCallbacksController::*)(::GlobalNamespace::BeatmapDataCallbackWrapper*)>(&GlobalNamespace::BeatmapCallbacksController::RemoveBeatmapCallback)> {
  static const MethodInfo* get() {
    static auto* callbackWrapper = &::il2cpp_utils::GetClassFromName("", "BeatmapDataCallbackWrapper")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCallbacksController*), "RemoveBeatmapCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callbackWrapper});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCallbacksController::TriggerBeatmapEvent
// Il2CppName: TriggerBeatmapEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCallbacksController::*)(::GlobalNamespace::BeatmapEventData*)>(&GlobalNamespace::BeatmapCallbacksController::TriggerBeatmapEvent)> {
  static const MethodInfo* get() {
    static auto* beatmapEventData = &::il2cpp_utils::GetClassFromName("", "BeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCallbacksController*), "TriggerBeatmapEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapEventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCallbacksController::HandleBeatmapEventDataWasInserted
// Il2CppName: HandleBeatmapEventDataWasInserted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCallbacksController::*)(::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*)>(&GlobalNamespace::BeatmapCallbacksController::HandleBeatmapEventDataWasInserted)> {
  static const MethodInfo* get() {
    static auto* beatmapEventData = &::il2cpp_utils::GetClassFromName("", "BeatmapEventData")->byval_arg;
    static auto* node = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "LinkedListNode`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapDataItem")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCallbacksController*), "HandleBeatmapEventDataWasInserted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapEventData, node});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCallbacksController::HandleBeatmapEventDataWillBeRemoved
// Il2CppName: HandleBeatmapEventDataWillBeRemoved
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCallbacksController::*)(::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*)>(&GlobalNamespace::BeatmapCallbacksController::HandleBeatmapEventDataWillBeRemoved)> {
  static const MethodInfo* get() {
    static auto* beatmapEventDataToRemove = &::il2cpp_utils::GetClassFromName("", "BeatmapEventData")->byval_arg;
    static auto* nodeToRemove = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "LinkedListNode`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapDataItem")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCallbacksController*), "HandleBeatmapEventDataWillBeRemoved", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapEventDataToRemove, nodeToRemove});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCallbacksController::HandleBeatmapEventDataWasRemoved
// Il2CppName: HandleBeatmapEventDataWasRemoved
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapCallbacksController::*)(::GlobalNamespace::BeatmapEventData*)>(&GlobalNamespace::BeatmapCallbacksController::HandleBeatmapEventDataWasRemoved)> {
  static const MethodInfo* get() {
    static auto* beatmapEventData = &::il2cpp_utils::GetClassFromName("", "BeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCallbacksController*), "HandleBeatmapEventDataWasRemoved", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapEventData});
  }
};
