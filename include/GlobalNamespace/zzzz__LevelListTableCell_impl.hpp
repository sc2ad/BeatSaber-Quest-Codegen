#pragma once
#include "HMUI/zzzz__TableCell_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__LevelListTableCell_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
#include "HMUI/zzzz__SelectableCell_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19::*)()>(&::GlobalNamespace::____GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19::MoveNext)> {
  constexpr static std::size_t size = 0xa50;
  constexpr static std::size_t addrs = 0x21255ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2125ffc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LevelListTableCell", modifiers: "", def_value: Some("csnull") }, CppParam { name: "level", ty: "::GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "isFavorite", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isPromoted", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isUpdated", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19::____GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::LevelListTableCell __4__this, ::GlobalNamespace::IPreviewBeatmapLevel level, bool isFavorite, bool isPromoted, bool isUpdated, ::System::Threading::CancellationToken _cancellationToken_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->level = level;
this->isFavorite = isFavorite;
this->isPromoted = isPromoted;
this->isUpdated = isUpdated;
this->_cancellationToken_5__2 = _cancellationToken_5__2;
this->__u__1 = __u__1;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19::__set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ::GlobalNamespace::____GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19::__set___4__this(::GlobalNamespace::LevelListTableCell value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LevelListTableCell, 0x28>(this->__instance, std::forward<::GlobalNamespace::LevelListTableCell>(value));
}
constexpr ::GlobalNamespace::LevelListTableCell ::GlobalNamespace::____GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LevelListTableCell, 0x28>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19::__set_level(::GlobalNamespace::IPreviewBeatmapLevel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IPreviewBeatmapLevel, 0x30>(this->__instance, std::forward<::GlobalNamespace::IPreviewBeatmapLevel>(value));
}
constexpr ::GlobalNamespace::IPreviewBeatmapLevel ::GlobalNamespace::____GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19::__get_level() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPreviewBeatmapLevel, 0x30>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19::__set_isFavorite(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19::__get_isFavorite() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19::__set_isPromoted(bool value)  {
::cordl_internals::setInstanceField<bool, 0x39>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19::__get_isPromoted() const {
return ::cordl_internals::getInstanceField<bool, 0x39>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19::__set_isUpdated(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3a>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19::__get_isUpdated() const {
return ::cordl_internals::getInstanceField<bool, 0x3a>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19::__set__cancellationToken_5__2(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x40>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::GlobalNamespace::____GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19::__get__cancellationToken_5__2() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x40>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite>, 0x48>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite> ::GlobalNamespace::____GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite>, 0x48>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LevelListTableCell___SetDataFromLevelAsync_d__19>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__LevelListTableCell___RefreshAvailabilityAsync_d__24.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__LevelListTableCell___RefreshAvailabilityAsync_d__24::*)()>(&::GlobalNamespace::____GlobalNamespace__LevelListTableCell___RefreshAvailabilityAsync_d__24::MoveNext)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x2126008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LevelListTableCell___RefreshAvailabilityAsync_d__24>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__LevelListTableCell___RefreshAvailabilityAsync_d__24.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__LevelListTableCell___RefreshAvailabilityAsync_d__24::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__LevelListTableCell___RefreshAvailabilityAsync_d__24::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2126400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LevelListTableCell___RefreshAvailabilityAsync_d__24>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__LevelListTableCell___RefreshAvailabilityAsync_d__24::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LevelListTableCell", modifiers: "", def_value: Some("csnull") }, CppParam { name: "levelID", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "contentModel", ty: "::GlobalNamespace::AdditionalContentModel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__LevelListTableCell___RefreshAvailabilityAsync_d__24::____GlobalNamespace__LevelListTableCell___RefreshAvailabilityAsync_d__24(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::LevelListTableCell __4__this, ::StringW levelID, ::GlobalNamespace::AdditionalContentModel contentModel, ::System::Threading::CancellationToken _cancellationToken_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->levelID = levelID;
this->contentModel = contentModel;
this->_cancellationToken_5__2 = _cancellationToken_5__2;
this->__u__1 = __u__1;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LevelListTableCell___RefreshAvailabilityAsync_d__24::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__LevelListTableCell___RefreshAvailabilityAsync_d__24::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LevelListTableCell___RefreshAvailabilityAsync_d__24::__set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ::GlobalNamespace::____GlobalNamespace__LevelListTableCell___RefreshAvailabilityAsync_d__24::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LevelListTableCell___RefreshAvailabilityAsync_d__24::__set___4__this(::GlobalNamespace::LevelListTableCell value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LevelListTableCell, 0x28>(this->__instance, std::forward<::GlobalNamespace::LevelListTableCell>(value));
}
constexpr ::GlobalNamespace::LevelListTableCell ::GlobalNamespace::____GlobalNamespace__LevelListTableCell___RefreshAvailabilityAsync_d__24::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LevelListTableCell, 0x28>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LevelListTableCell___RefreshAvailabilityAsync_d__24::__set_levelID(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__LevelListTableCell___RefreshAvailabilityAsync_d__24::__get_levelID() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LevelListTableCell___RefreshAvailabilityAsync_d__24::__set_contentModel(::GlobalNamespace::AdditionalContentModel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AdditionalContentModel, 0x38>(this->__instance, std::forward<::GlobalNamespace::AdditionalContentModel>(value));
}
constexpr ::GlobalNamespace::AdditionalContentModel ::GlobalNamespace::____GlobalNamespace__LevelListTableCell___RefreshAvailabilityAsync_d__24::__get_contentModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AdditionalContentModel, 0x38>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LevelListTableCell___RefreshAvailabilityAsync_d__24::__set__cancellationToken_5__2(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x40>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::GlobalNamespace::____GlobalNamespace__LevelListTableCell___RefreshAvailabilityAsync_d__24::__get__cancellationToken_5__2() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x40>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LevelListTableCell___RefreshAvailabilityAsync_d__24::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>, 0x48>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> ::GlobalNamespace::____GlobalNamespace__LevelListTableCell___RefreshAvailabilityAsync_d__24::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>, 0x48>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__LevelListTableCell___RefreshAvailabilityAsync_d__24::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LevelListTableCell___RefreshAvailabilityAsync_d__24>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__LevelListTableCell___RefreshAvailabilityAsync_d__24::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__LevelListTableCell___RefreshAvailabilityAsync_d__24>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::LevelListTableCell.SetDataFromLevelAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelListTableCell::*)(::GlobalNamespace::IPreviewBeatmapLevel, bool, bool, bool)>(&::GlobalNamespace::LevelListTableCell::SetDataFromLevelAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x212532c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelListTableCell>::get(),
                            "SetDataFromLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelListTableCell.SelectionDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelListTableCell::*)(::HMUI::____HMUI__SelectableCell__TransitionType)>(&::GlobalNamespace::LevelListTableCell::SelectionDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21253ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::LevelListTableCell),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelListTableCell>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelListTableCell.HighlightDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelListTableCell::*)(::HMUI::____HMUI__SelectableCell__TransitionType)>(&::GlobalNamespace::LevelListTableCell::HighlightDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21254b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::LevelListTableCell),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelListTableCell>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelListTableCell.RefreshVisuals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelListTableCell::*)()>(&::GlobalNamespace::LevelListTableCell::RefreshVisuals)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x21253f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelListTableCell>::get(),
                            "RefreshVisuals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelListTableCell.WasPreparedForReuse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelListTableCell::*)()>(&::GlobalNamespace::LevelListTableCell::WasPreparedForReuse)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21254b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::LevelListTableCell),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelListTableCell>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelListTableCell.RefreshAvailabilityAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelListTableCell::*)(::GlobalNamespace::AdditionalContentModel, ::StringW)>(&::GlobalNamespace::LevelListTableCell::RefreshAvailabilityAsync)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x21254f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelListTableCell>::get(),
                            "RefreshAvailabilityAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AdditionalContentModel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelListTableCell.CancelAsyncOperations
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelListTableCell::*)()>(&::GlobalNamespace::LevelListTableCell::CancelAsyncOperations)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x21254bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelListTableCell>::get(),
                            "CancelAsyncOperations",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelListTableCell._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelListTableCell::*)()>(&::GlobalNamespace::LevelListTableCell::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x212559c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelListTableCell>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::LevelListTableCell::__set__backgroundImage(::UnityEngine::UI::Image value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Image, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::Image>(value));
}
constexpr ::UnityEngine::UI::Image ::GlobalNamespace::LevelListTableCell::__get__backgroundImage() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Image, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LevelListTableCell::__set__canvasGroup(::UnityEngine::CanvasGroup value)  {
::cordl_internals::setInstanceField<::UnityEngine::CanvasGroup, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::CanvasGroup>(value));
}
constexpr ::UnityEngine::CanvasGroup ::GlobalNamespace::LevelListTableCell::__get__canvasGroup() const {
return ::cordl_internals::getInstanceField<::UnityEngine::CanvasGroup, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LevelListTableCell::__set__coverImage(::UnityEngine::UI::Image value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Image, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::Image>(value));
}
constexpr ::UnityEngine::UI::Image ::GlobalNamespace::LevelListTableCell::__get__coverImage() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Image, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LevelListTableCell::__set__songNameText(::TMPro::TextMeshProUGUI value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TextMeshProUGUI>(value));
}
constexpr ::TMPro::TextMeshProUGUI ::GlobalNamespace::LevelListTableCell::__get__songNameText() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LevelListTableCell::__set__songAuthorText(::TMPro::TextMeshProUGUI value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TextMeshProUGUI>(value));
}
constexpr ::TMPro::TextMeshProUGUI ::GlobalNamespace::LevelListTableCell::__get__songAuthorText() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LevelListTableCell::__set__favoritesBadgeImage(::UnityEngine::UI::Image value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Image, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::Image>(value));
}
constexpr ::UnityEngine::UI::Image ::GlobalNamespace::LevelListTableCell::__get__favoritesBadgeImage() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Image, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LevelListTableCell::__set__songDurationText(::TMPro::TextMeshProUGUI value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TextMeshProUGUI>(value));
}
constexpr ::TMPro::TextMeshProUGUI ::GlobalNamespace::LevelListTableCell::__get__songDurationText() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LevelListTableCell::__set__songBpmText(::TMPro::TextMeshProUGUI value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TextMeshProUGUI>(value));
}
constexpr ::TMPro::TextMeshProUGUI ::GlobalNamespace::LevelListTableCell::__get__songBpmText() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LevelListTableCell::__set__highlightBackgroundColor(::UnityEngine::Color value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color ::GlobalNamespace::LevelListTableCell::__get__highlightBackgroundColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LevelListTableCell::__set__selectedBackgroundColor(::UnityEngine::Color value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color ::GlobalNamespace::LevelListTableCell::__get__selectedBackgroundColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LevelListTableCell::__set__selectedAndHighlightedBackgroundColor(::UnityEngine::Color value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color ::GlobalNamespace::LevelListTableCell::__get__selectedAndHighlightedBackgroundColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LevelListTableCell::__set__notOwnedAlpha(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::LevelListTableCell::__get__notOwnedAlpha() const {
return ::cordl_internals::getInstanceField<float_t, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LevelListTableCell::__set__promoBadgeGo(::UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::GameObject>(value));
}
constexpr ::UnityEngine::GameObject ::GlobalNamespace::LevelListTableCell::__get__promoBadgeGo() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LevelListTableCell::__set__updatedBadgeGo(::UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::GameObject>(value));
}
constexpr ::UnityEngine::GameObject ::GlobalNamespace::LevelListTableCell::__get__updatedBadgeGo() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LevelListTableCell::__set__refreshingAvailabilityCancellationTokenSource(::System::Threading::CancellationTokenSource value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationTokenSource, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::CancellationTokenSource>(value));
}
constexpr ::System::Threading::CancellationTokenSource ::GlobalNamespace::LevelListTableCell::__get__refreshingAvailabilityCancellationTokenSource() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationTokenSource, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LevelListTableCell::__set__settingDataCancellationTokenSource(::System::Threading::CancellationTokenSource value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationTokenSource, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::CancellationTokenSource>(value));
}
constexpr ::System::Threading::CancellationTokenSource ::GlobalNamespace::LevelListTableCell::__get__settingDataCancellationTokenSource() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationTokenSource, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LevelListTableCell::__set__notOwned(bool value)  {
::cordl_internals::setInstanceField<bool, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::LevelListTableCell::__get__notOwned() const {
return ::cordl_internals::getInstanceField<bool, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LevelListTableCell::__set__refreshingAvailabilityLevelID(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::LevelListTableCell::__get__refreshingAvailabilityLevelID() const {
return ::cordl_internals::getInstanceField<::StringW, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LevelListTableCell::__set__settingDataFromLevelId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x100>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::LevelListTableCell::__get__settingDataFromLevelId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x100>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::LevelListTableCell::SetDataFromLevelAsync(::GlobalNamespace::IPreviewBeatmapLevel level, bool isFavorite, bool isPromoted, bool isUpdated)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelListTableCell>::get(),
                            "SetDataFromLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, level, isFavorite, isPromoted, isUpdated);
}
 void ::GlobalNamespace::LevelListTableCell::SelectionDidChange(::HMUI::____HMUI__SelectableCell__TransitionType transitionType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelListTableCell>::get(),
                            "SelectionDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::____HMUI__SelectableCell__TransitionType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, transitionType);
}
 void ::GlobalNamespace::LevelListTableCell::HighlightDidChange(::HMUI::____HMUI__SelectableCell__TransitionType transitionType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelListTableCell>::get(),
                            "HighlightDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::____HMUI__SelectableCell__TransitionType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, transitionType);
}
 void ::GlobalNamespace::LevelListTableCell::RefreshVisuals()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelListTableCell>::get(),
                            "RefreshVisuals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::LevelListTableCell::WasPreparedForReuse()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelListTableCell>::get(),
                            "WasPreparedForReuse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::LevelListTableCell::RefreshAvailabilityAsync(::GlobalNamespace::AdditionalContentModel contentModel, ::StringW levelID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelListTableCell>::get(),
                            "RefreshAvailabilityAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AdditionalContentModel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, contentModel, levelID);
}
 void ::GlobalNamespace::LevelListTableCell::CancelAsyncOperations()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelListTableCell>::get(),
                            "CancelAsyncOperations",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::LevelListTableCell::LevelListTableCell()  : ::HMUI::TableCell(THROW_UNLESS(::il2cpp_utils::New<LevelListTableCell>())) {}
 void ::GlobalNamespace::LevelListTableCell::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelListTableCell>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
