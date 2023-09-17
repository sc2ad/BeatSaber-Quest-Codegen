#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__DlcPromoPanelModel_def.hpp"
#include "GlobalNamespace/zzzz__DlcPromoPanelDataSO_def.hpp"
#include "GlobalNamespace/zzzz__IAnalyticsModel_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "System/zzzz__Random_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__DlcPromoPanelDataSO_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17::*)()>(&::GlobalNamespace::____GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17::MoveNext)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x21be878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21bece4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_newNotOwnedMusicPackPromoInfos_5__2", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__7__wrap2", ty: "::ArrayW<::GlobalNamespace::____GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__7__wrap3", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_packData_5__5", ty: "::GlobalNamespace::____GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17::____GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::DlcPromoPanelModel __4__this, ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo> _newNotOwnedMusicPackPromoInfos_5__2, ::ArrayW<::GlobalNamespace::____GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo> __7__wrap2, int32_t __7__wrap3, ::GlobalNamespace::____GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo _packData_5__5, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->_newNotOwnedMusicPackPromoInfos_5__2 = _newNotOwnedMusicPackPromoInfos_5__2;
this->__7__wrap2 = __7__wrap2;
this->__7__wrap3 = __7__wrap3;
this->_packData_5__5 = _packData_5__5;
this->__u__1 = __u__1;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17::__set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ::GlobalNamespace::____GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17::__set___4__this(::GlobalNamespace::DlcPromoPanelModel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::DlcPromoPanelModel, 0x28>(this->__instance, std::forward<::GlobalNamespace::DlcPromoPanelModel>(value));
}
constexpr ::GlobalNamespace::DlcPromoPanelModel ::GlobalNamespace::____GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::DlcPromoPanelModel, 0x28>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17::__set__newNotOwnedMusicPackPromoInfos_5__2(::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo>, 0x30>(this->__instance, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo>>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo> ::GlobalNamespace::____GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17::__get__newNotOwnedMusicPackPromoInfos_5__2() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo>, 0x30>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17::__set___7__wrap2(::ArrayW<::GlobalNamespace::____GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo>, 0x38>(this->__instance, std::forward<::ArrayW<::GlobalNamespace::____GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo> ::GlobalNamespace::____GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17::__get___7__wrap2() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo>, 0x38>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17::__set___7__wrap3(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17::__get___7__wrap3() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17::__set__packData_5__5(::GlobalNamespace::____GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo, 0x48>(this->__instance, std::forward<::GlobalNamespace::____GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo ::GlobalNamespace::____GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17::__get__packData_5__5() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo, 0x48>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>, 0x50>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> ::GlobalNamespace::____GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>, 0x50>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__DlcPromoPanelModel___UpdateNotOwnedPacksAsync_d__17>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.InitAfterPlatformWasInitialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(bool)>(&::GlobalNamespace::DlcPromoPanelModel::InitAfterPlatformWasInitialized)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x21bdb00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel>::get(),
                            "InitAfterPlatformWasInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.GetPackDataForMainMenuPromoBanner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::____GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo (::GlobalNamespace::DlcPromoPanelModel::*)(ByRef<bool>)>(&::GlobalNamespace::DlcPromoPanelModel::GetPackDataForMainMenuPromoBanner)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x21bdc84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel>::get(),
                            "GetPackDataForMainMenuPromoBanner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.MainMenuDlcPromoBannerWasShown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::GlobalNamespace::IBeatmapLevelPack, ::StringW)>(&::GlobalNamespace::DlcPromoPanelModel::MainMenuDlcPromoBannerWasShown)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x21bdeec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel>::get(),
                            "MainMenuDlcPromoBannerWasShown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.MainMenuDlcPromoBannerWasPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::GlobalNamespace::IBeatmapLevelPack, ::StringW)>(&::GlobalNamespace::DlcPromoPanelModel::MainMenuDlcPromoBannerWasPressed)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x21be190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel>::get(),
                            "MainMenuDlcPromoBannerWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.BuyLevelButtonWasPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::GlobalNamespace::IPreviewBeatmapLevel, ::StringW, ::StringW)>(&::GlobalNamespace::DlcPromoPanelModel::BuyLevelButtonWasPressed)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x21be2fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel>::get(),
                            "BuyLevelButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.BuyLevelButtonWasShown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::GlobalNamespace::IPreviewBeatmapLevel, ::StringW, ::StringW)>(&::GlobalNamespace::DlcPromoPanelModel::BuyLevelButtonWasShown)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x21be458;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel>::get(),
                            "BuyLevelButtonWasShown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.BuyPackButtonWasPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::GlobalNamespace::IBeatmapLevelPack, ::StringW, ::StringW)>(&::GlobalNamespace::DlcPromoPanelModel::BuyPackButtonWasPressed)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x21be5b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel>::get(),
                            "BuyPackButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.BuyPackButtonWasShown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)(::GlobalNamespace::IBeatmapLevelPack, ::StringW, ::StringW)>(&::GlobalNamespace::DlcPromoPanelModel::BuyPackButtonWasShown)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x21be710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel>::get(),
                            "BuyPackButtonWasShown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.GetExperimentEventData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::StringW> (::GlobalNamespace::DlcPromoPanelModel::*)(::StringW, ::StringW, ::StringW)>(&::GlobalNamespace::DlcPromoPanelModel::GetExperimentEventData)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x21be070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel>::get(),
                            "GetExperimentEventData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.UpdateNotOwnedPacksAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)()>(&::GlobalNamespace::DlcPromoPanelModel::UpdateNotOwnedPacksAsync)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x21bdbec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel>::get(),
                            "UpdateNotOwnedPacksAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel.HandleAdditionalContentModelDidInvalidateData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)()>(&::GlobalNamespace::DlcPromoPanelModel::HandleAdditionalContentModelDidInvalidateData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21be86c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel>::get(),
                            "HandleAdditionalContentModelDidInvalidateData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DlcPromoPanelModel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DlcPromoPanelModel::*)()>(&::GlobalNamespace::DlcPromoPanelModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21be870;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::DlcPromoPanelModel::__set__additionalContentModel(::GlobalNamespace::AdditionalContentModel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AdditionalContentModel, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::AdditionalContentModel>(value));
}
constexpr ::GlobalNamespace::AdditionalContentModel ::GlobalNamespace::DlcPromoPanelModel::__get__additionalContentModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AdditionalContentModel, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::DlcPromoPanelModel::__set__analyticsModel(::GlobalNamespace::IAnalyticsModel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IAnalyticsModel, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IAnalyticsModel>(value));
}
constexpr ::GlobalNamespace::IAnalyticsModel ::GlobalNamespace::DlcPromoPanelModel::__get__analyticsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IAnalyticsModel, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::DlcPromoPanelModel::__set__dlcPromoPanelData(::GlobalNamespace::DlcPromoPanelDataSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::DlcPromoPanelDataSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::DlcPromoPanelDataSO>(value));
}
constexpr ::GlobalNamespace::DlcPromoPanelDataSO ::GlobalNamespace::DlcPromoPanelModel::__get__dlcPromoPanelData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::DlcPromoPanelDataSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::DlcPromoPanelModel::__set__playerDataModel(::GlobalNamespace::PlayerDataModel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerDataModel, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::PlayerDataModel>(value));
}
constexpr ::GlobalNamespace::PlayerDataModel ::GlobalNamespace::DlcPromoPanelModel::__get__playerDataModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerDataModel, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::DlcPromoPanelModel::__set__notOwnedMusicPackPromoInfos(::ArrayW<::GlobalNamespace::____GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::____GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo> ::GlobalNamespace::DlcPromoPanelModel::__get__notOwnedMusicPackPromoInfos() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::DlcPromoPanelModel::__set__updatingNotOwnedPacks(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::DlcPromoPanelModel::__get__updatingNotOwnedPacks() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::DlcPromoPanelModel::__set__initialized(bool value)  {
::cordl_internals::setInstanceField<bool, 0x39>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::DlcPromoPanelModel::__get__initialized() const {
return ::cordl_internals::getInstanceField<bool, 0x39>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::DlcPromoPanelModel::__set__random(::System::Random value)  {
::cordl_internals::setInstanceField<::System::Random, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Random>(value));
}
constexpr ::System::Random ::GlobalNamespace::DlcPromoPanelModel::__get__random() const {
return ::cordl_internals::getInstanceField<::System::Random, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::DlcPromoPanelModel::InitAfterPlatformWasInitialized(bool force)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel>::get(),
                            "InitAfterPlatformWasInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, force);
}
 ::GlobalNamespace::____GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo ::GlobalNamespace::DlcPromoPanelModel::GetPackDataForMainMenuPromoBanner(ByRef<bool> owned)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel>::get(),
                            "GetPackDataForMainMenuPromoBanner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::____GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo, false>(const_cast<void*>(instance), ___internal_method, owned);
}
 void ::GlobalNamespace::DlcPromoPanelModel::MainMenuDlcPromoBannerWasShown(::GlobalNamespace::IBeatmapLevelPack promoPack, ::StringW customText)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel>::get(),
                            "MainMenuDlcPromoBannerWasShown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, promoPack, customText);
}
 void ::GlobalNamespace::DlcPromoPanelModel::MainMenuDlcPromoBannerWasPressed(::GlobalNamespace::IBeatmapLevelPack promoPack, ::StringW customText)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel>::get(),
                            "MainMenuDlcPromoBannerWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, promoPack, customText);
}
 void ::GlobalNamespace::DlcPromoPanelModel::BuyLevelButtonWasPressed(::GlobalNamespace::IPreviewBeatmapLevel level, ::StringW page, ::StringW customText)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel>::get(),
                            "BuyLevelButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, level, page, customText);
}
 void ::GlobalNamespace::DlcPromoPanelModel::BuyLevelButtonWasShown(::GlobalNamespace::IPreviewBeatmapLevel level, ::StringW page, ::StringW customText)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel>::get(),
                            "BuyLevelButtonWasShown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, level, page, customText);
}
 void ::GlobalNamespace::DlcPromoPanelModel::BuyPackButtonWasPressed(::GlobalNamespace::IBeatmapLevelPack pack, ::StringW page, ::StringW customText)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel>::get(),
                            "BuyPackButtonWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pack, page, customText);
}
 void ::GlobalNamespace::DlcPromoPanelModel::BuyPackButtonWasShown(::GlobalNamespace::IBeatmapLevelPack pack, ::StringW page, ::StringW customText)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel>::get(),
                            "BuyPackButtonWasShown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pack, page, customText);
}
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW> ::GlobalNamespace::DlcPromoPanelModel::GetExperimentEventData(::StringW itemId, ::StringW page, ::StringW customText)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel>::get(),
                            "GetExperimentEventData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>, false>(const_cast<void*>(instance), ___internal_method, itemId, page, customText);
}
 void ::GlobalNamespace::DlcPromoPanelModel::UpdateNotOwnedPacksAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel>::get(),
                            "UpdateNotOwnedPacksAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::DlcPromoPanelModel::HandleAdditionalContentModelDidInvalidateData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel>::get(),
                            "HandleAdditionalContentModelDidInvalidateData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::DlcPromoPanelModel::DlcPromoPanelModel()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<DlcPromoPanelModel>())) {}
 void ::GlobalNamespace::DlcPromoPanelModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DlcPromoPanelModel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
