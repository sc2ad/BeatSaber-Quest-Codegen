#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__INoteControllerNoteDidDissolveEvent_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnMovementData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnMovementData_def.hpp"
#include "GlobalNamespace/zzzz__INoteControllerNoteDidFinishJumpEvent_def.hpp"
#include "GlobalNamespace/zzzz__INoteControllerNoteWasMissedEvent_def.hpp"
#include "GlobalNamespace/zzzz__INoteControllerNoteDidStartJumpEvent_def.hpp"
#include "GlobalNamespace/zzzz__SliderData_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleData_def.hpp"
#include "GlobalNamespace/zzzz__SliderController_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapObjectController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnMovementData_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleController_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__ISliderDidFinishJumpEvent_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfo_def.hpp"
#include "GlobalNamespace/zzzz__INoteControllerNoteWasCutEvent_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "GlobalNamespace/zzzz__ISliderDidDissolveEvent_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapObjectSpawner_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x22357b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate::*)(GlobalNamespace::NoteController, ByRef<GlobalNamespace::NoteCutInfo>)>(&GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x22358e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate::*)(GlobalNamespace::NoteController, ByRef<GlobalNamespace::NoteCutInfo>, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x22358fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate::*)(ByRef<GlobalNamespace::NoteCutInfo>, System::IAsyncResult)>(&GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2235990;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate>(object, method))) {}
 void GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate::Invoke(GlobalNamespace::NoteController noteController, ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::NoteCutInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteController, noteCutInfo);
}
 System::IAsyncResult GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate::BeginInvoke(GlobalNamespace::NoteController noteController, ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::NoteCutInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, noteController, noteCutInfo, callback, object);
}
 void GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate::EndInvoke(ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo, System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::NoteCutInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteCutInfo, result);
}
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.add_noteWasAddedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(System::Action_3<GlobalNamespace::NoteData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData,float_t>)>(&GlobalNamespace::BeatmapObjectManager::add_noteWasAddedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x223338c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "add_noteWasAddedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_3<GlobalNamespace::NoteData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData,float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.remove_noteWasAddedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(System::Action_3<GlobalNamespace::NoteData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData,float_t>)>(&GlobalNamespace::BeatmapObjectManager::remove_noteWasAddedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x223343c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "remove_noteWasAddedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_3<GlobalNamespace::NoteData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData,float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.add_noteWasSpawnedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(System::Action_1<GlobalNamespace::NoteController>)>(&GlobalNamespace::BeatmapObjectManager::add_noteWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x222d5bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "add_noteWasSpawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::NoteController>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.remove_noteWasSpawnedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(System::Action_1<GlobalNamespace::NoteController>)>(&GlobalNamespace::BeatmapObjectManager::remove_noteWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x222d6f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "remove_noteWasSpawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::NoteController>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.add_noteWasDespawnedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(System::Action_1<GlobalNamespace::NoteController>)>(&GlobalNamespace::BeatmapObjectManager::add_noteWasDespawnedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22334ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "add_noteWasDespawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::NoteController>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.remove_noteWasDespawnedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(System::Action_1<GlobalNamespace::NoteController>)>(&GlobalNamespace::BeatmapObjectManager::remove_noteWasDespawnedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x223359c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "remove_noteWasDespawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::NoteController>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.add_noteWasMissedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(System::Action_1<GlobalNamespace::NoteController>)>(&GlobalNamespace::BeatmapObjectManager::add_noteWasMissedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x223364c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "add_noteWasMissedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::NoteController>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.remove_noteWasMissedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(System::Action_1<GlobalNamespace::NoteController>)>(&GlobalNamespace::BeatmapObjectManager::remove_noteWasMissedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22336fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "remove_noteWasMissedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::NoteController>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.add_noteWasCutEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate)>(&GlobalNamespace::BeatmapObjectManager::add_noteWasCutEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x22337ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "add_noteWasCutEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.remove_noteWasCutEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate)>(&GlobalNamespace::BeatmapObjectManager::remove_noteWasCutEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2233848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "remove_noteWasCutEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.add_noteDidStartJumpEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(System::Action_1<GlobalNamespace::NoteController>)>(&GlobalNamespace::BeatmapObjectManager::add_noteDidStartJumpEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22338e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "add_noteDidStartJumpEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::NoteController>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.remove_noteDidStartJumpEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(System::Action_1<GlobalNamespace::NoteController>)>(&GlobalNamespace::BeatmapObjectManager::remove_noteDidStartJumpEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2233994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "remove_noteDidStartJumpEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::NoteController>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.add_obstacleWasAddedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(System::Action_3<GlobalNamespace::ObstacleData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData,float_t>)>(&GlobalNamespace::BeatmapObjectManager::add_obstacleWasAddedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2233a44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "add_obstacleWasAddedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_3<GlobalNamespace::ObstacleData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData,float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.remove_obstacleWasAddedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(System::Action_3<GlobalNamespace::ObstacleData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData,float_t>)>(&GlobalNamespace::BeatmapObjectManager::remove_obstacleWasAddedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2233af4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "remove_obstacleWasAddedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_3<GlobalNamespace::ObstacleData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData,float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.add_obstacleWasSpawnedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(System::Action_1<GlobalNamespace::ObstacleController>)>(&GlobalNamespace::BeatmapObjectManager::add_obstacleWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2233ba4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "add_obstacleWasSpawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::ObstacleController>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.remove_obstacleWasSpawnedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(System::Action_1<GlobalNamespace::ObstacleController>)>(&GlobalNamespace::BeatmapObjectManager::remove_obstacleWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2233c54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "remove_obstacleWasSpawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::ObstacleController>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.add_obstacleWasDespawnedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(System::Action_1<GlobalNamespace::ObstacleController>)>(&GlobalNamespace::BeatmapObjectManager::add_obstacleWasDespawnedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2233d04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "add_obstacleWasDespawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::ObstacleController>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.remove_obstacleWasDespawnedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(System::Action_1<GlobalNamespace::ObstacleController>)>(&GlobalNamespace::BeatmapObjectManager::remove_obstacleWasDespawnedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2233db4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "remove_obstacleWasDespawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::ObstacleController>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.add_obstacleDidPassThreeQuartersOfMove2Event
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(System::Action_1<GlobalNamespace::ObstacleController>)>(&GlobalNamespace::BeatmapObjectManager::add_obstacleDidPassThreeQuartersOfMove2Event)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2233e64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "add_obstacleDidPassThreeQuartersOfMove2Event",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::ObstacleController>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.remove_obstacleDidPassThreeQuartersOfMove2Event
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(System::Action_1<GlobalNamespace::ObstacleController>)>(&GlobalNamespace::BeatmapObjectManager::remove_obstacleDidPassThreeQuartersOfMove2Event)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2233f14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "remove_obstacleDidPassThreeQuartersOfMove2Event",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::ObstacleController>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.add_obstacleDidPassAvoidedMarkEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(System::Action_1<GlobalNamespace::ObstacleController>)>(&GlobalNamespace::BeatmapObjectManager::add_obstacleDidPassAvoidedMarkEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x223288c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "add_obstacleDidPassAvoidedMarkEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::ObstacleController>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.remove_obstacleDidPassAvoidedMarkEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(System::Action_1<GlobalNamespace::ObstacleController>)>(&GlobalNamespace::BeatmapObjectManager::remove_obstacleDidPassAvoidedMarkEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2232b28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "remove_obstacleDidPassAvoidedMarkEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::ObstacleController>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.add_sliderWasAddedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(System::Action_3<GlobalNamespace::SliderData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData,float_t>)>(&GlobalNamespace::BeatmapObjectManager::add_sliderWasAddedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2233fc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "add_sliderWasAddedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_3<GlobalNamespace::SliderData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData,float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.remove_sliderWasAddedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(System::Action_3<GlobalNamespace::SliderData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData,float_t>)>(&GlobalNamespace::BeatmapObjectManager::remove_sliderWasAddedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2234074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "remove_sliderWasAddedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_3<GlobalNamespace::SliderData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData,float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.add_sliderWasSpawnedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(System::Action_1<GlobalNamespace::SliderController>)>(&GlobalNamespace::BeatmapObjectManager::add_sliderWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2234124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "add_sliderWasSpawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::SliderController>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.remove_sliderWasSpawnedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(System::Action_1<GlobalNamespace::SliderController>)>(&GlobalNamespace::BeatmapObjectManager::remove_sliderWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22341d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "remove_sliderWasSpawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::SliderController>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.add_sliderWasDespawnedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(System::Action_1<GlobalNamespace::SliderController>)>(&GlobalNamespace::BeatmapObjectManager::add_sliderWasDespawnedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2234284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "add_sliderWasDespawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::SliderController>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.remove_sliderWasDespawnedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(System::Action_1<GlobalNamespace::SliderController>)>(&GlobalNamespace::BeatmapObjectManager::remove_sliderWasDespawnedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2234334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "remove_sliderWasDespawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::SliderController>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.add_didHideAllBeatmapObjectsEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(System::Action_1<bool>)>(&GlobalNamespace::BeatmapObjectManager::add_didHideAllBeatmapObjectsEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22343e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "add_didHideAllBeatmapObjectsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.remove_didHideAllBeatmapObjectsEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(System::Action_1<bool>)>(&GlobalNamespace::BeatmapObjectManager::remove_didHideAllBeatmapObjectsEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2234494;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "remove_didHideAllBeatmapObjectsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.get_activeObstacleControllers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<GlobalNamespace::ObstacleController> (GlobalNamespace::BeatmapObjectManager::*)()>(&GlobalNamespace::BeatmapObjectManager::get_activeObstacleControllers)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BeatmapObjectManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.ProcessObstacleData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(GlobalNamespace::ObstacleData, ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData>, float_t)>(&GlobalNamespace::BeatmapObjectManager::ProcessObstacleData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BeatmapObjectManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.ProcessNoteData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(GlobalNamespace::NoteData, ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData>, float_t, bool)>(&GlobalNamespace::BeatmapObjectManager::ProcessNoteData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BeatmapObjectManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.ProcessSliderData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(GlobalNamespace::SliderData, ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData>, float_t)>(&GlobalNamespace::BeatmapObjectManager::ProcessSliderData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BeatmapObjectManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.DespawnInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(GlobalNamespace::NoteController)>(&GlobalNamespace::BeatmapObjectManager::DespawnInternal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BeatmapObjectManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.DespawnInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(GlobalNamespace::ObstacleController)>(&GlobalNamespace::BeatmapObjectManager::DespawnInternal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BeatmapObjectManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.DespawnInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(GlobalNamespace::SliderController)>(&GlobalNamespace::BeatmapObjectManager::DespawnInternal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BeatmapObjectManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.get_spawnHidden
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BeatmapObjectManager::*)()>(&GlobalNamespace::BeatmapObjectManager::get_spawnHidden)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2234544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "get_spawnHidden",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.set_spawnHidden
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(bool)>(&GlobalNamespace::BeatmapObjectManager::set_spawnHidden)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x223454c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "set_spawnHidden",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.AddSpawnedObstacleController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(GlobalNamespace::ObstacleController, GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData, float_t)>(&GlobalNamespace::BeatmapObjectManager::AddSpawnedObstacleController)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x222e63c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "AddSpawnedObstacleController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ObstacleController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.AddSpawnedNoteController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(GlobalNamespace::NoteController, GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData, float_t)>(&GlobalNamespace::BeatmapObjectManager::AddSpawnedNoteController)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x222ec24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "AddSpawnedNoteController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.AddSpawnedSliderController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(GlobalNamespace::SliderController, GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData, float_t)>(&GlobalNamespace::BeatmapObjectManager::AddSpawnedSliderController)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x222faac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "AddSpawnedSliderController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SliderController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.SetNoteControllerEventCallbacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(GlobalNamespace::NoteController)>(&GlobalNamespace::BeatmapObjectManager::SetNoteControllerEventCallbacks)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x22346b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "SetNoteControllerEventCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteController>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.RemoveNoteControllerEventCallbacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(GlobalNamespace::NoteController)>(&GlobalNamespace::BeatmapObjectManager::RemoveNoteControllerEventCallbacks)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x2234a68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "RemoveNoteControllerEventCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteController>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.SetSliderNoteControllerEventCallbacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(GlobalNamespace::SliderController)>(&GlobalNamespace::BeatmapObjectManager::SetSliderNoteControllerEventCallbacks)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2234944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "SetSliderNoteControllerEventCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SliderController>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.RemoveSliderNoteControllerEventCallbacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(GlobalNamespace::SliderController)>(&GlobalNamespace::BeatmapObjectManager::RemoveSliderNoteControllerEventCallbacks)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2234d08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "RemoveSliderNoteControllerEventCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SliderController>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.SetObstacleEventCallbacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(GlobalNamespace::ObstacleController)>(&GlobalNamespace::BeatmapObjectManager::SetObstacleEventCallbacks)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2234558;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "SetObstacleEventCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ObstacleController>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.RemoveObstacleEventCallbacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(GlobalNamespace::ObstacleController)>(&GlobalNamespace::BeatmapObjectManager::RemoveObstacleEventCallbacks)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2234e34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "RemoveObstacleEventCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ObstacleController>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.Despawn
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(GlobalNamespace::NoteController)>(&GlobalNamespace::BeatmapObjectManager::Despawn)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2234f94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "Despawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteController>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.Despawn
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(GlobalNamespace::ObstacleController)>(&GlobalNamespace::BeatmapObjectManager::Despawn)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2235038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "Despawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ObstacleController>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.Despawn
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(GlobalNamespace::SliderController)>(&GlobalNamespace::BeatmapObjectManager::Despawn)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x22350dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "Despawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SliderController>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.HandleNoteControllerNoteDidStartJump
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(GlobalNamespace::NoteController)>(&GlobalNamespace::BeatmapObjectManager::HandleNoteControllerNoteDidStartJump)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2235180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "HandleNoteControllerNoteDidStartJump",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteController>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.HandleNoteControllerNoteWasMissed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(GlobalNamespace::NoteController)>(&GlobalNamespace::BeatmapObjectManager::HandleNoteControllerNoteWasMissed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x223519c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "HandleNoteControllerNoteWasMissed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteController>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.HandleNoteControllerNoteDidFinishJump
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(GlobalNamespace::NoteController)>(&GlobalNamespace::BeatmapObjectManager::HandleNoteControllerNoteDidFinishJump)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22351b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "HandleNoteControllerNoteDidFinishJump",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteController>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.HandleNoteControllerNoteDidDissolve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(GlobalNamespace::NoteController)>(&GlobalNamespace::BeatmapObjectManager::HandleNoteControllerNoteDidDissolve)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22351bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "HandleNoteControllerNoteDidDissolve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteController>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.HandleNoteControllerNoteWasCut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(GlobalNamespace::NoteController, ByRef<GlobalNamespace::NoteCutInfo>)>(&GlobalNamespace::BeatmapObjectManager::HandleNoteControllerNoteWasCut)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x22351c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "HandleNoteControllerNoteWasCut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::NoteCutInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.HandleObstaclePassedThreeQuartersOfMove2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(GlobalNamespace::ObstacleController)>(&GlobalNamespace::BeatmapObjectManager::HandleObstaclePassedThreeQuartersOfMove2)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2235200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "HandleObstaclePassedThreeQuartersOfMove2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ObstacleController>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.HandleObstaclePassedAvoidedMark
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(GlobalNamespace::ObstacleController)>(&GlobalNamespace::BeatmapObjectManager::HandleObstaclePassedAvoidedMark)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x223521c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "HandleObstaclePassedAvoidedMark",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ObstacleController>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.HandleObstacleFinishedMovement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(GlobalNamespace::ObstacleController)>(&GlobalNamespace::BeatmapObjectManager::HandleObstacleFinishedMovement)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2235238;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "HandleObstacleFinishedMovement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ObstacleController>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.HandleObstacleDidDissolve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(GlobalNamespace::ObstacleController)>(&GlobalNamespace::BeatmapObjectManager::HandleObstacleDidDissolve)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x223523c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "HandleObstacleDidDissolve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ObstacleController>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.HandleSliderDidFinishJump
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(GlobalNamespace::SliderController)>(&GlobalNamespace::BeatmapObjectManager::HandleSliderDidFinishJump)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2235240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "HandleSliderDidFinishJump",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SliderController>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.HandleSliderDidDissolve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(GlobalNamespace::SliderController)>(&GlobalNamespace::BeatmapObjectManager::HandleSliderDidDissolve)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2235244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "HandleSliderDidDissolve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SliderController>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.DissolveAllObjects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)()>(&GlobalNamespace::BeatmapObjectManager::DissolveAllObjects)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x2235248;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "DissolveAllObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.HideAllBeatmapObjects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(bool)>(&GlobalNamespace::BeatmapObjectManager::HideAllBeatmapObjects)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x223540c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "HideAllBeatmapObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.PauseAllBeatmapObjects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(bool)>(&GlobalNamespace::BeatmapObjectManager::PauseAllBeatmapObjects)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x22355fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "PauseAllBeatmapObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)()>(&GlobalNamespace::BeatmapObjectManager::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x222fcec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectManager.INoteControllerNoteWasCutEvent_HandleNoteControllerNoteWasCut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectManager::*)(GlobalNamespace::NoteController, ByRef<GlobalNamespace::NoteCutInfo>)>(&GlobalNamespace::BeatmapObjectManager::INoteControllerNoteWasCutEvent_HandleNoteControllerNoteWasCut)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22357b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "INoteControllerNoteWasCutEvent.HandleNoteControllerNoteWasCut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::NoteCutInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IBeatmapObjectSpawner
constexpr  GlobalNamespace::BeatmapObjectManager::operator GlobalNamespace::IBeatmapObjectSpawner() const noexcept {
return GlobalNamespace::IBeatmapObjectSpawner(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::INoteControllerNoteDidStartJumpEvent
constexpr  GlobalNamespace::BeatmapObjectManager::operator GlobalNamespace::INoteControllerNoteDidStartJumpEvent() const noexcept {
return GlobalNamespace::INoteControllerNoteDidStartJumpEvent(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::INoteControllerNoteDidFinishJumpEvent
constexpr  GlobalNamespace::BeatmapObjectManager::operator GlobalNamespace::INoteControllerNoteDidFinishJumpEvent() const noexcept {
return GlobalNamespace::INoteControllerNoteDidFinishJumpEvent(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::INoteControllerNoteWasCutEvent
constexpr  GlobalNamespace::BeatmapObjectManager::operator GlobalNamespace::INoteControllerNoteWasCutEvent() const noexcept {
return GlobalNamespace::INoteControllerNoteWasCutEvent(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::INoteControllerNoteWasMissedEvent
constexpr  GlobalNamespace::BeatmapObjectManager::operator GlobalNamespace::INoteControllerNoteWasMissedEvent() const noexcept {
return GlobalNamespace::INoteControllerNoteWasMissedEvent(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::INoteControllerNoteDidDissolveEvent
constexpr  GlobalNamespace::BeatmapObjectManager::operator GlobalNamespace::INoteControllerNoteDidDissolveEvent() const noexcept {
return GlobalNamespace::INoteControllerNoteDidDissolveEvent(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::ISliderDidFinishJumpEvent
constexpr  GlobalNamespace::BeatmapObjectManager::operator GlobalNamespace::ISliderDidFinishJumpEvent() const noexcept {
return GlobalNamespace::ISliderDidFinishJumpEvent(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::ISliderDidDissolveEvent
constexpr  GlobalNamespace::BeatmapObjectManager::operator GlobalNamespace::ISliderDidDissolveEvent() const noexcept {
return GlobalNamespace::ISliderDidDissolveEvent(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapObjectManager::__set_noteWasAddedEvent(System::Action_3<GlobalNamespace::NoteData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData,float_t> value)  {
::cordl_internals::setInstanceField<System::Action_3<GlobalNamespace::NoteData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData,float_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_3<GlobalNamespace::NoteData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData,float_t>>(value));
}
constexpr System::Action_3<GlobalNamespace::NoteData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData,float_t> GlobalNamespace::BeatmapObjectManager::__get_noteWasAddedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_3<GlobalNamespace::NoteData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData,float_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapObjectManager::__set_noteWasSpawnedEvent(System::Action_1<GlobalNamespace::NoteController> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::NoteController>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::NoteController>>(value));
}
constexpr System::Action_1<GlobalNamespace::NoteController> GlobalNamespace::BeatmapObjectManager::__get_noteWasSpawnedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::NoteController>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapObjectManager::__set_noteWasDespawnedEvent(System::Action_1<GlobalNamespace::NoteController> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::NoteController>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::NoteController>>(value));
}
constexpr System::Action_1<GlobalNamespace::NoteController> GlobalNamespace::BeatmapObjectManager::__get_noteWasDespawnedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::NoteController>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapObjectManager::__set_noteWasMissedEvent(System::Action_1<GlobalNamespace::NoteController> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::NoteController>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::NoteController>>(value));
}
constexpr System::Action_1<GlobalNamespace::NoteController> GlobalNamespace::BeatmapObjectManager::__get_noteWasMissedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::NoteController>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapObjectManager::__set_noteWasCutEvent(GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate>(value));
}
constexpr GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate GlobalNamespace::BeatmapObjectManager::__get_noteWasCutEvent() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapObjectManager::__set_noteDidStartJumpEvent(System::Action_1<GlobalNamespace::NoteController> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::NoteController>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::NoteController>>(value));
}
constexpr System::Action_1<GlobalNamespace::NoteController> GlobalNamespace::BeatmapObjectManager::__get_noteDidStartJumpEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::NoteController>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapObjectManager::__set_obstacleWasAddedEvent(System::Action_3<GlobalNamespace::ObstacleData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData,float_t> value)  {
::cordl_internals::setInstanceField<System::Action_3<GlobalNamespace::ObstacleData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData,float_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_3<GlobalNamespace::ObstacleData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData,float_t>>(value));
}
constexpr System::Action_3<GlobalNamespace::ObstacleData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData,float_t> GlobalNamespace::BeatmapObjectManager::__get_obstacleWasAddedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_3<GlobalNamespace::ObstacleData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData,float_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapObjectManager::__set_obstacleWasSpawnedEvent(System::Action_1<GlobalNamespace::ObstacleController> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::ObstacleController>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::ObstacleController>>(value));
}
constexpr System::Action_1<GlobalNamespace::ObstacleController> GlobalNamespace::BeatmapObjectManager::__get_obstacleWasSpawnedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::ObstacleController>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapObjectManager::__set_obstacleWasDespawnedEvent(System::Action_1<GlobalNamespace::ObstacleController> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::ObstacleController>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::ObstacleController>>(value));
}
constexpr System::Action_1<GlobalNamespace::ObstacleController> GlobalNamespace::BeatmapObjectManager::__get_obstacleWasDespawnedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::ObstacleController>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapObjectManager::__set_obstacleDidPassThreeQuartersOfMove2Event(System::Action_1<GlobalNamespace::ObstacleController> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::ObstacleController>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::ObstacleController>>(value));
}
constexpr System::Action_1<GlobalNamespace::ObstacleController> GlobalNamespace::BeatmapObjectManager::__get_obstacleDidPassThreeQuartersOfMove2Event() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::ObstacleController>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapObjectManager::__set_obstacleDidPassAvoidedMarkEvent(System::Action_1<GlobalNamespace::ObstacleController> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::ObstacleController>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::ObstacleController>>(value));
}
constexpr System::Action_1<GlobalNamespace::ObstacleController> GlobalNamespace::BeatmapObjectManager::__get_obstacleDidPassAvoidedMarkEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::ObstacleController>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapObjectManager::__set_sliderWasAddedEvent(System::Action_3<GlobalNamespace::SliderData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData,float_t> value)  {
::cordl_internals::setInstanceField<System::Action_3<GlobalNamespace::SliderData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData,float_t>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_3<GlobalNamespace::SliderData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData,float_t>>(value));
}
constexpr System::Action_3<GlobalNamespace::SliderData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData,float_t> GlobalNamespace::BeatmapObjectManager::__get_sliderWasAddedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_3<GlobalNamespace::SliderData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData,float_t>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapObjectManager::__set_sliderWasSpawnedEvent(System::Action_1<GlobalNamespace::SliderController> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::SliderController>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::SliderController>>(value));
}
constexpr System::Action_1<GlobalNamespace::SliderController> GlobalNamespace::BeatmapObjectManager::__get_sliderWasSpawnedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::SliderController>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapObjectManager::__set_sliderWasDespawnedEvent(System::Action_1<GlobalNamespace::SliderController> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::SliderController>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::SliderController>>(value));
}
constexpr System::Action_1<GlobalNamespace::SliderController> GlobalNamespace::BeatmapObjectManager::__get_sliderWasDespawnedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::SliderController>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapObjectManager::__set_didHideAllBeatmapObjectsEvent(System::Action_1<bool> value)  {
::cordl_internals::setInstanceField<System::Action_1<bool>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<bool>>(value));
}
constexpr System::Action_1<bool> GlobalNamespace::BeatmapObjectManager::__get_didHideAllBeatmapObjectsEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<bool>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapObjectManager::__set__allBeatmapObjects(System::Collections::Generic::List_1<GlobalNamespace::IBeatmapObjectController> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::IBeatmapObjectController>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::IBeatmapObjectController>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::IBeatmapObjectController> GlobalNamespace::BeatmapObjectManager::__get__allBeatmapObjects() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::IBeatmapObjectController>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapObjectManager::__set__spawnHidden_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::BeatmapObjectManager::__get__spawnHidden_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::BeatmapObjectManager::add_noteWasAddedEvent(System::Action_3<GlobalNamespace::NoteData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData,float_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "add_noteWasAddedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_3<GlobalNamespace::NoteData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData,float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BeatmapObjectManager::remove_noteWasAddedEvent(System::Action_3<GlobalNamespace::NoteData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData,float_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "remove_noteWasAddedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_3<GlobalNamespace::NoteData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData,float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BeatmapObjectManager::add_noteWasSpawnedEvent(System::Action_1<GlobalNamespace::NoteController> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "add_noteWasSpawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::NoteController>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BeatmapObjectManager::remove_noteWasSpawnedEvent(System::Action_1<GlobalNamespace::NoteController> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "remove_noteWasSpawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::NoteController>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BeatmapObjectManager::add_noteWasDespawnedEvent(System::Action_1<GlobalNamespace::NoteController> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "add_noteWasDespawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::NoteController>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BeatmapObjectManager::remove_noteWasDespawnedEvent(System::Action_1<GlobalNamespace::NoteController> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "remove_noteWasDespawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::NoteController>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BeatmapObjectManager::add_noteWasMissedEvent(System::Action_1<GlobalNamespace::NoteController> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "add_noteWasMissedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::NoteController>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BeatmapObjectManager::remove_noteWasMissedEvent(System::Action_1<GlobalNamespace::NoteController> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "remove_noteWasMissedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::NoteController>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BeatmapObjectManager::add_noteWasCutEvent(GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "add_noteWasCutEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BeatmapObjectManager::remove_noteWasCutEvent(GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "remove_noteWasCutEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BeatmapObjectManager::add_noteDidStartJumpEvent(System::Action_1<GlobalNamespace::NoteController> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "add_noteDidStartJumpEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::NoteController>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BeatmapObjectManager::remove_noteDidStartJumpEvent(System::Action_1<GlobalNamespace::NoteController> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "remove_noteDidStartJumpEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::NoteController>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BeatmapObjectManager::add_obstacleWasAddedEvent(System::Action_3<GlobalNamespace::ObstacleData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData,float_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "add_obstacleWasAddedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_3<GlobalNamespace::ObstacleData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData,float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BeatmapObjectManager::remove_obstacleWasAddedEvent(System::Action_3<GlobalNamespace::ObstacleData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData,float_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "remove_obstacleWasAddedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_3<GlobalNamespace::ObstacleData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData,float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BeatmapObjectManager::add_obstacleWasSpawnedEvent(System::Action_1<GlobalNamespace::ObstacleController> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "add_obstacleWasSpawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::ObstacleController>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BeatmapObjectManager::remove_obstacleWasSpawnedEvent(System::Action_1<GlobalNamespace::ObstacleController> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "remove_obstacleWasSpawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::ObstacleController>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BeatmapObjectManager::add_obstacleWasDespawnedEvent(System::Action_1<GlobalNamespace::ObstacleController> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "add_obstacleWasDespawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::ObstacleController>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BeatmapObjectManager::remove_obstacleWasDespawnedEvent(System::Action_1<GlobalNamespace::ObstacleController> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "remove_obstacleWasDespawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::ObstacleController>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BeatmapObjectManager::add_obstacleDidPassThreeQuartersOfMove2Event(System::Action_1<GlobalNamespace::ObstacleController> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "add_obstacleDidPassThreeQuartersOfMove2Event",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::ObstacleController>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BeatmapObjectManager::remove_obstacleDidPassThreeQuartersOfMove2Event(System::Action_1<GlobalNamespace::ObstacleController> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "remove_obstacleDidPassThreeQuartersOfMove2Event",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::ObstacleController>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BeatmapObjectManager::add_obstacleDidPassAvoidedMarkEvent(System::Action_1<GlobalNamespace::ObstacleController> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "add_obstacleDidPassAvoidedMarkEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::ObstacleController>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BeatmapObjectManager::remove_obstacleDidPassAvoidedMarkEvent(System::Action_1<GlobalNamespace::ObstacleController> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "remove_obstacleDidPassAvoidedMarkEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::ObstacleController>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BeatmapObjectManager::add_sliderWasAddedEvent(System::Action_3<GlobalNamespace::SliderData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData,float_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "add_sliderWasAddedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_3<GlobalNamespace::SliderData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData,float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BeatmapObjectManager::remove_sliderWasAddedEvent(System::Action_3<GlobalNamespace::SliderData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData,float_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "remove_sliderWasAddedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_3<GlobalNamespace::SliderData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData,float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BeatmapObjectManager::add_sliderWasSpawnedEvent(System::Action_1<GlobalNamespace::SliderController> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "add_sliderWasSpawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::SliderController>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BeatmapObjectManager::remove_sliderWasSpawnedEvent(System::Action_1<GlobalNamespace::SliderController> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "remove_sliderWasSpawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::SliderController>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BeatmapObjectManager::add_sliderWasDespawnedEvent(System::Action_1<GlobalNamespace::SliderController> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "add_sliderWasDespawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::SliderController>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BeatmapObjectManager::remove_sliderWasDespawnedEvent(System::Action_1<GlobalNamespace::SliderController> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "remove_sliderWasDespawnedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::SliderController>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BeatmapObjectManager::add_didHideAllBeatmapObjectsEvent(System::Action_1<bool> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "add_didHideAllBeatmapObjectsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BeatmapObjectManager::remove_didHideAllBeatmapObjectsEvent(System::Action_1<bool> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "remove_didHideAllBeatmapObjectsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Collections::Generic::List_1<GlobalNamespace::ObstacleController> GlobalNamespace::BeatmapObjectManager::get_activeObstacleControllers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "get_activeObstacleControllers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<GlobalNamespace::ObstacleController>, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BeatmapObjectManager::ProcessObstacleData(GlobalNamespace::ObstacleData obstacleData, ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData> obstacleSpawnData, float_t rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "ProcessObstacleData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ObstacleData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obstacleData, obstacleSpawnData, rotation);
}
 void GlobalNamespace::BeatmapObjectManager::ProcessNoteData(GlobalNamespace::NoteData noteData, ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData> noteSpawnData, float_t rotation, bool forceIsFirstNoteBehaviour)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "ProcessNoteData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteData, noteSpawnData, rotation, forceIsFirstNoteBehaviour);
}
 void GlobalNamespace::BeatmapObjectManager::ProcessSliderData(GlobalNamespace::SliderData sliderData, ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData> sliderSpawnData, float_t rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "ProcessSliderData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SliderData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sliderData, sliderSpawnData, rotation);
}
 void GlobalNamespace::BeatmapObjectManager::DespawnInternal(GlobalNamespace::NoteController noteController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "DespawnInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteController);
}
 void GlobalNamespace::BeatmapObjectManager::DespawnInternal(GlobalNamespace::ObstacleController obstacleController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "DespawnInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ObstacleController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obstacleController);
}
 void GlobalNamespace::BeatmapObjectManager::DespawnInternal(GlobalNamespace::SliderController sliderNoteController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "DespawnInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SliderController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sliderNoteController);
}
 bool GlobalNamespace::BeatmapObjectManager::get_spawnHidden()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "get_spawnHidden",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BeatmapObjectManager::set_spawnHidden(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "set_spawnHidden",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::BeatmapObjectManager::AddSpawnedObstacleController(GlobalNamespace::ObstacleController obstacleController, GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData obstacleSpawnData, float_t rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "AddSpawnedObstacleController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ObstacleController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obstacleController, obstacleSpawnData, rotation);
}
 void GlobalNamespace::BeatmapObjectManager::AddSpawnedNoteController(GlobalNamespace::NoteController noteController, GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData noteSpawnData, float_t rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "AddSpawnedNoteController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteController, noteSpawnData, rotation);
}
 void GlobalNamespace::BeatmapObjectManager::AddSpawnedSliderController(GlobalNamespace::SliderController sliderController, GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData sliderSpawnData, float_t rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "AddSpawnedSliderController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SliderController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sliderController, sliderSpawnData, rotation);
}
 void GlobalNamespace::BeatmapObjectManager::SetNoteControllerEventCallbacks(GlobalNamespace::NoteController noteController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "SetNoteControllerEventCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteController);
}
 void GlobalNamespace::BeatmapObjectManager::RemoveNoteControllerEventCallbacks(GlobalNamespace::NoteController noteController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "RemoveNoteControllerEventCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteController);
}
 void GlobalNamespace::BeatmapObjectManager::SetSliderNoteControllerEventCallbacks(GlobalNamespace::SliderController sliderNoteController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "SetSliderNoteControllerEventCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SliderController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sliderNoteController);
}
 void GlobalNamespace::BeatmapObjectManager::RemoveSliderNoteControllerEventCallbacks(GlobalNamespace::SliderController sliderNoteController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "RemoveSliderNoteControllerEventCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SliderController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sliderNoteController);
}
 void GlobalNamespace::BeatmapObjectManager::SetObstacleEventCallbacks(GlobalNamespace::ObstacleController obstacleController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "SetObstacleEventCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ObstacleController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obstacleController);
}
 void GlobalNamespace::BeatmapObjectManager::RemoveObstacleEventCallbacks(GlobalNamespace::ObstacleController obstacleController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "RemoveObstacleEventCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ObstacleController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obstacleController);
}
 void GlobalNamespace::BeatmapObjectManager::Despawn(GlobalNamespace::NoteController noteController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "Despawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteController);
}
 void GlobalNamespace::BeatmapObjectManager::Despawn(GlobalNamespace::ObstacleController obstacleController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "Despawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ObstacleController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obstacleController);
}
 void GlobalNamespace::BeatmapObjectManager::Despawn(GlobalNamespace::SliderController sliderNoteController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "Despawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SliderController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sliderNoteController);
}
 void GlobalNamespace::BeatmapObjectManager::HandleNoteControllerNoteDidStartJump(GlobalNamespace::NoteController noteController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "HandleNoteControllerNoteDidStartJump",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteController);
}
 void GlobalNamespace::BeatmapObjectManager::HandleNoteControllerNoteWasMissed(GlobalNamespace::NoteController noteController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "HandleNoteControllerNoteWasMissed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteController);
}
 void GlobalNamespace::BeatmapObjectManager::HandleNoteControllerNoteDidFinishJump(GlobalNamespace::NoteController noteController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "HandleNoteControllerNoteDidFinishJump",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteController);
}
 void GlobalNamespace::BeatmapObjectManager::HandleNoteControllerNoteDidDissolve(GlobalNamespace::NoteController noteController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "HandleNoteControllerNoteDidDissolve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteController);
}
 void GlobalNamespace::BeatmapObjectManager::HandleNoteControllerNoteWasCut(GlobalNamespace::NoteController noteController, ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "HandleNoteControllerNoteWasCut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::NoteCutInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteController, noteCutInfo);
}
 void GlobalNamespace::BeatmapObjectManager::HandleObstaclePassedThreeQuartersOfMove2(GlobalNamespace::ObstacleController obstacleController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "HandleObstaclePassedThreeQuartersOfMove2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ObstacleController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obstacleController);
}
 void GlobalNamespace::BeatmapObjectManager::HandleObstaclePassedAvoidedMark(GlobalNamespace::ObstacleController obstacleController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "HandleObstaclePassedAvoidedMark",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ObstacleController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obstacleController);
}
 void GlobalNamespace::BeatmapObjectManager::HandleObstacleFinishedMovement(GlobalNamespace::ObstacleController obstacleController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "HandleObstacleFinishedMovement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ObstacleController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obstacleController);
}
 void GlobalNamespace::BeatmapObjectManager::HandleObstacleDidDissolve(GlobalNamespace::ObstacleController obstacleController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "HandleObstacleDidDissolve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ObstacleController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obstacleController);
}
 void GlobalNamespace::BeatmapObjectManager::HandleSliderDidFinishJump(GlobalNamespace::SliderController sliderController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "HandleSliderDidFinishJump",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SliderController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sliderController);
}
 void GlobalNamespace::BeatmapObjectManager::HandleSliderDidDissolve(GlobalNamespace::SliderController sliderController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "HandleSliderDidDissolve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SliderController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sliderController);
}
 void GlobalNamespace::BeatmapObjectManager::DissolveAllObjects()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "DissolveAllObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BeatmapObjectManager::HideAllBeatmapObjects(bool hide)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "HideAllBeatmapObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, hide);
}
 void GlobalNamespace::BeatmapObjectManager::PauseAllBeatmapObjects(bool pause)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "PauseAllBeatmapObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pause);
}
// Ctor Parameters []
 GlobalNamespace::BeatmapObjectManager::BeatmapObjectManager()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BeatmapObjectManager>())) {}
 void GlobalNamespace::BeatmapObjectManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BeatmapObjectManager::INoteControllerNoteWasCutEvent_HandleNoteControllerNoteWasCut(GlobalNamespace::NoteController noteController, ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectManager>::get(),
                            "INoteControllerNoteWasCutEvent.HandleNoteControllerNoteWasCut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::NoteCutInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteController, noteCutInfo);
}
