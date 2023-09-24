#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__StandardLevelDetailView_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerData_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultySegmentedControlController_def.hpp"
#include "GlobalNamespace/zzzz__LevelBar_def.hpp"
#include "HMUI/zzzz__ToggleBinder_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__LevelParamsPanel_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelDetailView_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSegmentedControlController_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapDataBasicInfo_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34::*)()>(&GlobalNamespace::GlobalNamespace__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34::MoveNext)> {
  constexpr static std::size_t size = 0x584;
  constexpr static std::size_t addrs = 0x2190424;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21909a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::StandardLevelDetailView", modifiers: "", def_value: Some("csnull") }, CppParam { name: "selectedDifficultyBeatmap", ty: "GlobalNamespace::IDifficultyBeatmap", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapDataBasicInfo>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34::GlobalNamespace__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, GlobalNamespace::StandardLevelDetailView __4__this, GlobalNamespace::IDifficultyBeatmap selectedDifficultyBeatmap, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapDataBasicInfo> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->selectedDifficultyBeatmap = selectedDifficultyBeatmap;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34::__set___t__builder(System::Runtime::CompilerServices::AsyncVoidMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncVoidMethodBuilder GlobalNamespace::GlobalNamespace__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34::__set___4__this(GlobalNamespace::StandardLevelDetailView value)  {
::cordl_internals::setInstanceField<GlobalNamespace::StandardLevelDetailView, 0x28>(this->__instance, std::forward<GlobalNamespace::StandardLevelDetailView>(value));
}
constexpr GlobalNamespace::StandardLevelDetailView GlobalNamespace::GlobalNamespace__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::StandardLevelDetailView, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34::__set_selectedDifficultyBeatmap(GlobalNamespace::IDifficultyBeatmap value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IDifficultyBeatmap, 0x30>(this->__instance, std::forward<GlobalNamespace::IDifficultyBeatmap>(value));
}
constexpr GlobalNamespace::IDifficultyBeatmap GlobalNamespace::GlobalNamespace__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34::__get_selectedDifficultyBeatmap() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IDifficultyBeatmap, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapDataBasicInfo> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapDataBasicInfo>, 0x38>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapDataBasicInfo>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapDataBasicInfo> GlobalNamespace::GlobalNamespace__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapDataBasicInfo>, 0x38>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::StandardLevelDetailView.add_didChangeDifficultyBeatmapEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelDetailView::*)(System::Action_2<GlobalNamespace::StandardLevelDetailView,GlobalNamespace::IDifficultyBeatmap>)>(&GlobalNamespace::StandardLevelDetailView::add_didChangeDifficultyBeatmapEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x218f6dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelDetailView>::get(),
                            "add_didChangeDifficultyBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::StandardLevelDetailView,GlobalNamespace::IDifficultyBeatmap>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandardLevelDetailView.remove_didChangeDifficultyBeatmapEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelDetailView::*)(System::Action_2<GlobalNamespace::StandardLevelDetailView,GlobalNamespace::IDifficultyBeatmap>)>(&GlobalNamespace::StandardLevelDetailView::remove_didChangeDifficultyBeatmapEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x218f78c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelDetailView>::get(),
                            "remove_didChangeDifficultyBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::StandardLevelDetailView,GlobalNamespace::IDifficultyBeatmap>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandardLevelDetailView.add_didFavoriteToggleChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelDetailView::*)(System::Action_2<GlobalNamespace::StandardLevelDetailView,UnityEngine::UI::Toggle>)>(&GlobalNamespace::StandardLevelDetailView::add_didFavoriteToggleChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x218f83c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelDetailView>::get(),
                            "add_didFavoriteToggleChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::StandardLevelDetailView,UnityEngine::UI::Toggle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandardLevelDetailView.remove_didFavoriteToggleChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelDetailView::*)(System::Action_2<GlobalNamespace::StandardLevelDetailView,UnityEngine::UI::Toggle>)>(&GlobalNamespace::StandardLevelDetailView::remove_didFavoriteToggleChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x218f8ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelDetailView>::get(),
                            "remove_didFavoriteToggleChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::StandardLevelDetailView,UnityEngine::UI::Toggle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandardLevelDetailView.get_selectedDifficultyBeatmap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IDifficultyBeatmap (GlobalNamespace::StandardLevelDetailView::*)()>(&GlobalNamespace::StandardLevelDetailView::get_selectedDifficultyBeatmap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x218f99c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelDetailView>::get(),
                            "get_selectedDifficultyBeatmap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandardLevelDetailView.get_actionButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::Button (GlobalNamespace::StandardLevelDetailView::*)()>(&GlobalNamespace::StandardLevelDetailView::get_actionButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x218f9a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelDetailView>::get(),
                            "get_actionButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandardLevelDetailView.set_actionButtonText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelDetailView::*)(::StringW)>(&GlobalNamespace::StandardLevelDetailView::set_actionButtonText)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x218f9ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelDetailView>::get(),
                            "set_actionButtonText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandardLevelDetailView.get_practiceButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::Button (GlobalNamespace::StandardLevelDetailView::*)()>(&GlobalNamespace::StandardLevelDetailView::get_practiceButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x218f9d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelDetailView>::get(),
                            "get_practiceButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandardLevelDetailView.set_hidePracticeButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelDetailView::*)(bool)>(&GlobalNamespace::StandardLevelDetailView::set_hidePracticeButton)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x218f9d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelDetailView>::get(),
                            "set_hidePracticeButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandardLevelDetailView.SetContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelDetailView::*)(GlobalNamespace::IBeatmapLevel, GlobalNamespace::BeatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO, GlobalNamespace::PlayerData)>(&GlobalNamespace::StandardLevelDetailView::SetContent)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x218fa0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelDetailView>::get(),
                            "SetContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCharacteristicSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandardLevelDetailView.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelDetailView::*)()>(&GlobalNamespace::StandardLevelDetailView::Awake)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x218fe9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelDetailView>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandardLevelDetailView.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelDetailView::*)()>(&GlobalNamespace::StandardLevelDetailView::OnDestroy)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2190020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelDetailView>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandardLevelDetailView.HandleBeatmapDifficultySegmentedControlControllerDidSelectDifficulty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelDetailView::*)(GlobalNamespace::BeatmapDifficultySegmentedControlController, GlobalNamespace::BeatmapDifficulty)>(&GlobalNamespace::StandardLevelDetailView::HandleBeatmapDifficultySegmentedControlControllerDidSelectDifficulty)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2190198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelDetailView>::get(),
                            "HandleBeatmapDifficultySegmentedControlControllerDidSelectDifficulty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapDifficultySegmentedControlController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapDifficulty>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandardLevelDetailView.HandleBeatmapCharacteristicSegmentedControlControllerDidSelectBeatmapCharacteristic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelDetailView::*)(GlobalNamespace::BeatmapCharacteristicSegmentedControlController, GlobalNamespace::BeatmapCharacteristicSO)>(&GlobalNamespace::StandardLevelDetailView::HandleBeatmapCharacteristicSegmentedControlControllerDidSelectBeatmapCharacteristic)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x21901d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelDetailView>::get(),
                            "HandleBeatmapCharacteristicSegmentedControlControllerDidSelectBeatmapCharacteristic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCharacteristicSegmentedControlController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCharacteristicSO>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandardLevelDetailView.RefreshContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelDetailView::*)()>(&GlobalNamespace::StandardLevelDetailView::RefreshContent)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x218fd14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelDetailView>::get(),
                            "RefreshContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandardLevelDetailView.SetContentForBeatmapDataAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelDetailView::*)(GlobalNamespace::IDifficultyBeatmap)>(&GlobalNamespace::StandardLevelDetailView::SetContentForBeatmapDataAsync)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2190354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelDetailView>::get(),
                            "SetContentForBeatmapDataAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDifficultyBeatmap>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandardLevelDetailView.ClearContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelDetailView::*)()>(&GlobalNamespace::StandardLevelDetailView::ClearContent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21903f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelDetailView>::get(),
                            "ClearContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandardLevelDetailView._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelDetailView::*)()>(&GlobalNamespace::StandardLevelDetailView::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21903f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelDetailView>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandardLevelDetailView._Awake_b__29_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelDetailView::*)(bool)>(&GlobalNamespace::StandardLevelDetailView::_Awake_b__29_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2190400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelDetailView>::get(),
                            "<Awake>b__29_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::StandardLevelDetailView::__set__actionButton(UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Button, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Button>(value));
}
constexpr UnityEngine::UI::Button GlobalNamespace::StandardLevelDetailView::__get__actionButton() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Button, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::StandardLevelDetailView::__set__actionButtonText(TMPro::TextMeshProUGUI value)  {
::cordl_internals::setInstanceField<TMPro::TextMeshProUGUI, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TMPro::TextMeshProUGUI>(value));
}
constexpr TMPro::TextMeshProUGUI GlobalNamespace::StandardLevelDetailView::__get__actionButtonText() const {
return ::cordl_internals::getInstanceField<TMPro::TextMeshProUGUI, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::StandardLevelDetailView::__set__practiceButton(UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Button, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Button>(value));
}
constexpr UnityEngine::UI::Button GlobalNamespace::StandardLevelDetailView::__get__practiceButton() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Button, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::StandardLevelDetailView::__set__levelBar(GlobalNamespace::LevelBar value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LevelBar, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LevelBar>(value));
}
constexpr GlobalNamespace::LevelBar GlobalNamespace::StandardLevelDetailView::__get__levelBar() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LevelBar, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::StandardLevelDetailView::__set__levelParamsPanel(GlobalNamespace::LevelParamsPanel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LevelParamsPanel, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LevelParamsPanel>(value));
}
constexpr GlobalNamespace::LevelParamsPanel GlobalNamespace::StandardLevelDetailView::__get__levelParamsPanel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LevelParamsPanel, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::StandardLevelDetailView::__set__beatmapDifficultySegmentedControlController(GlobalNamespace::BeatmapDifficultySegmentedControlController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapDifficultySegmentedControlController, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapDifficultySegmentedControlController>(value));
}
constexpr GlobalNamespace::BeatmapDifficultySegmentedControlController GlobalNamespace::StandardLevelDetailView::__get__beatmapDifficultySegmentedControlController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapDifficultySegmentedControlController, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::StandardLevelDetailView::__set__beatmapCharacteristicSegmentedControlController(GlobalNamespace::BeatmapCharacteristicSegmentedControlController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapCharacteristicSegmentedControlController, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapCharacteristicSegmentedControlController>(value));
}
constexpr GlobalNamespace::BeatmapCharacteristicSegmentedControlController GlobalNamespace::StandardLevelDetailView::__get__beatmapCharacteristicSegmentedControlController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapCharacteristicSegmentedControlController, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::StandardLevelDetailView::__set__favoriteToggle(UnityEngine::UI::Toggle value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Toggle, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Toggle>(value));
}
constexpr UnityEngine::UI::Toggle GlobalNamespace::StandardLevelDetailView::__get__favoriteToggle() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Toggle, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::StandardLevelDetailView::__set_didChangeDifficultyBeatmapEvent(System::Action_2<GlobalNamespace::StandardLevelDetailView,GlobalNamespace::IDifficultyBeatmap> value)  {
::cordl_internals::setInstanceField<System::Action_2<GlobalNamespace::StandardLevelDetailView,GlobalNamespace::IDifficultyBeatmap>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<GlobalNamespace::StandardLevelDetailView,GlobalNamespace::IDifficultyBeatmap>>(value));
}
constexpr System::Action_2<GlobalNamespace::StandardLevelDetailView,GlobalNamespace::IDifficultyBeatmap> GlobalNamespace::StandardLevelDetailView::__get_didChangeDifficultyBeatmapEvent() const {
return ::cordl_internals::getInstanceField<System::Action_2<GlobalNamespace::StandardLevelDetailView,GlobalNamespace::IDifficultyBeatmap>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::StandardLevelDetailView::__set_didFavoriteToggleChangeEvent(System::Action_2<GlobalNamespace::StandardLevelDetailView,UnityEngine::UI::Toggle> value)  {
::cordl_internals::setInstanceField<System::Action_2<GlobalNamespace::StandardLevelDetailView,UnityEngine::UI::Toggle>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<GlobalNamespace::StandardLevelDetailView,UnityEngine::UI::Toggle>>(value));
}
constexpr System::Action_2<GlobalNamespace::StandardLevelDetailView,UnityEngine::UI::Toggle> GlobalNamespace::StandardLevelDetailView::__get_didFavoriteToggleChangeEvent() const {
return ::cordl_internals::getInstanceField<System::Action_2<GlobalNamespace::StandardLevelDetailView,UnityEngine::UI::Toggle>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::StandardLevelDetailView::__set__level(GlobalNamespace::IBeatmapLevel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IBeatmapLevel, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IBeatmapLevel>(value));
}
constexpr GlobalNamespace::IBeatmapLevel GlobalNamespace::StandardLevelDetailView::__get__level() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IBeatmapLevel, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::StandardLevelDetailView::__set__playerData(GlobalNamespace::PlayerData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PlayerData, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PlayerData>(value));
}
constexpr GlobalNamespace::PlayerData GlobalNamespace::StandardLevelDetailView::__get__playerData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PlayerData, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::StandardLevelDetailView::__set__selectedDifficultyBeatmap(GlobalNamespace::IDifficultyBeatmap value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IDifficultyBeatmap, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IDifficultyBeatmap>(value));
}
constexpr GlobalNamespace::IDifficultyBeatmap GlobalNamespace::StandardLevelDetailView::__get__selectedDifficultyBeatmap() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IDifficultyBeatmap, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::StandardLevelDetailView::__set__toggleBinder(HMUI::ToggleBinder value)  {
::cordl_internals::setInstanceField<HMUI::ToggleBinder, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HMUI::ToggleBinder>(value));
}
constexpr HMUI::ToggleBinder GlobalNamespace::StandardLevelDetailView::__get__toggleBinder() const {
return ::cordl_internals::getInstanceField<HMUI::ToggleBinder, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::StandardLevelDetailView::add_didChangeDifficultyBeatmapEvent(System::Action_2<GlobalNamespace::StandardLevelDetailView,GlobalNamespace::IDifficultyBeatmap> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelDetailView>::get(),
                            "add_didChangeDifficultyBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::StandardLevelDetailView,GlobalNamespace::IDifficultyBeatmap>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::StandardLevelDetailView::remove_didChangeDifficultyBeatmapEvent(System::Action_2<GlobalNamespace::StandardLevelDetailView,GlobalNamespace::IDifficultyBeatmap> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelDetailView>::get(),
                            "remove_didChangeDifficultyBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::StandardLevelDetailView,GlobalNamespace::IDifficultyBeatmap>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::StandardLevelDetailView::add_didFavoriteToggleChangeEvent(System::Action_2<GlobalNamespace::StandardLevelDetailView,UnityEngine::UI::Toggle> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelDetailView>::get(),
                            "add_didFavoriteToggleChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::StandardLevelDetailView,UnityEngine::UI::Toggle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::StandardLevelDetailView::remove_didFavoriteToggleChangeEvent(System::Action_2<GlobalNamespace::StandardLevelDetailView,UnityEngine::UI::Toggle> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelDetailView>::get(),
                            "remove_didFavoriteToggleChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::StandardLevelDetailView,UnityEngine::UI::Toggle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 GlobalNamespace::IDifficultyBeatmap GlobalNamespace::StandardLevelDetailView::get_selectedDifficultyBeatmap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelDetailView>::get(),
                            "get_selectedDifficultyBeatmap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::IDifficultyBeatmap, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::UI::Button GlobalNamespace::StandardLevelDetailView::get_actionButton()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelDetailView>::get(),
                            "get_actionButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::Button, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::StandardLevelDetailView::set_actionButtonText(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelDetailView>::get(),
                            "set_actionButtonText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UI::Button GlobalNamespace::StandardLevelDetailView::get_practiceButton()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelDetailView>::get(),
                            "get_practiceButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::Button, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::StandardLevelDetailView::set_hidePracticeButton(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelDetailView>::get(),
                            "set_hidePracticeButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::StandardLevelDetailView::SetContent(GlobalNamespace::IBeatmapLevel level, GlobalNamespace::BeatmapDifficulty defaultDifficulty, GlobalNamespace::BeatmapCharacteristicSO defaultBeatmapCharacteristic, GlobalNamespace::PlayerData playerData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelDetailView>::get(),
                            "SetContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapDifficulty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCharacteristicSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, level, defaultDifficulty, defaultBeatmapCharacteristic, playerData);
}
 void GlobalNamespace::StandardLevelDetailView::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelDetailView>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::StandardLevelDetailView::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelDetailView>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::StandardLevelDetailView::HandleBeatmapDifficultySegmentedControlControllerDidSelectDifficulty(GlobalNamespace::BeatmapDifficultySegmentedControlController controller, GlobalNamespace::BeatmapDifficulty difficulty)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelDetailView>::get(),
                            "HandleBeatmapDifficultySegmentedControlControllerDidSelectDifficulty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapDifficultySegmentedControlController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapDifficulty>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, controller, difficulty);
}
 void GlobalNamespace::StandardLevelDetailView::HandleBeatmapCharacteristicSegmentedControlControllerDidSelectBeatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSegmentedControlController controller, GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelDetailView>::get(),
                            "HandleBeatmapCharacteristicSegmentedControlControllerDidSelectBeatmapCharacteristic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCharacteristicSegmentedControlController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCharacteristicSO>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, controller, beatmapCharacteristic);
}
 void GlobalNamespace::StandardLevelDetailView::RefreshContent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelDetailView>::get(),
                            "RefreshContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::StandardLevelDetailView::SetContentForBeatmapDataAsync(GlobalNamespace::IDifficultyBeatmap selectedDifficultyBeatmap)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelDetailView>::get(),
                            "SetContentForBeatmapDataAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDifficultyBeatmap>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, selectedDifficultyBeatmap);
}
 void GlobalNamespace::StandardLevelDetailView::ClearContent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelDetailView>::get(),
                            "ClearContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::StandardLevelDetailView GlobalNamespace::StandardLevelDetailView::New_ctor()  {
GlobalNamespace::StandardLevelDetailView o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::StandardLevelDetailView>())};
return o;
}
 void GlobalNamespace::StandardLevelDetailView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelDetailView>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::StandardLevelDetailView::_Awake_b__29_0(bool on)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelDetailView>::get(),
                            "<Awake>b__29_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, on);
}
