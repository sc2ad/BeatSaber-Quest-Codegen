#pragma once
#include "HMUI/zzzz__SelectableCell_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__AnnotatedBeatmapLevelCollectionCell_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "HMUI/zzzz__ImageView_def.hpp"
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__IAnnotatedBeatmapLevelCollection_def.hpp"
#include "HMUI/zzzz__SelectableCell_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22::*)()>(&::GlobalNamespace::____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22::MoveNext)> {
  constexpr static std::size_t size = 0xd04;
  constexpr static std::size_t addrs = 0x21219f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21226fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell", modifiers: "", def_value: Some("csnull") }, CppParam { name: "contentModel", ty: "::GlobalNamespace::AdditionalContentModel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_numberOfOwnedLevels_5__3", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_error_5__4", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap4", ty: "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::IPreviewBeatmapLevel>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22::____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell __4__this, ::GlobalNamespace::AdditionalContentModel contentModel, ::System::Threading::CancellationToken _cancellationToken_5__2, int32_t _numberOfOwnedLevels_5__3, bool _error_5__4, ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::IPreviewBeatmapLevel> __7__wrap4, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->contentModel = contentModel;
this->_cancellationToken_5__2 = _cancellationToken_5__2;
this->_numberOfOwnedLevels_5__3 = _numberOfOwnedLevels_5__3;
this->_error_5__4 = _error_5__4;
this->__7__wrap4 = __7__wrap4;
this->__u__1 = __u__1;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22::__set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ::GlobalNamespace::____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22::__set___4__this(::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell, 0x28>(this->__instance, std::forward<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell>(value));
}
constexpr ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell ::GlobalNamespace::____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell, 0x28>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22::__set_contentModel(::GlobalNamespace::AdditionalContentModel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AdditionalContentModel, 0x30>(this->__instance, std::forward<::GlobalNamespace::AdditionalContentModel>(value));
}
constexpr ::GlobalNamespace::AdditionalContentModel ::GlobalNamespace::____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22::__get_contentModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AdditionalContentModel, 0x30>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22::__set__cancellationToken_5__2(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x38>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::GlobalNamespace::____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22::__get__cancellationToken_5__2() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x38>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22::__set__numberOfOwnedLevels_5__3(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22::__get__numberOfOwnedLevels_5__3() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22::__set__error_5__4(bool value)  {
::cordl_internals::setInstanceField<bool, 0x44>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22::__get__error_5__4() const {
return ::cordl_internals::getInstanceField<bool, 0x44>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22::__set___7__wrap4(::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::IPreviewBeatmapLevel> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::IPreviewBeatmapLevel>, 0x48>(this->__instance, std::forward<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::IPreviewBeatmapLevel>>(value));
}
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::IPreviewBeatmapLevel> ::GlobalNamespace::____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22::__get___7__wrap4() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::IPreviewBeatmapLevel>, 0x48>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>, 0x50>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> ::GlobalNamespace::____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>, 0x50>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__22>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell.get_cellIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::*)()>(&::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::get_cellIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21213d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell>::get(),
                            "get_cellIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell.set_cellIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::*)(int32_t)>(&::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::set_cellIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21213dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell>::get(),
                            "set_cellIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell.SetData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::*)(::GlobalNamespace::IAnnotatedBeatmapLevelCollection, bool, bool)>(&::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::SetData)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x21213e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAnnotatedBeatmapLevelCollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell.InternalToggle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::*)()>(&::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::InternalToggle)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2121800;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell.SelectionDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::*)(::HMUI::____HMUI__SelectableCell__TransitionType)>(&::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::SelectionDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2121824;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell.HighlightDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::*)(::HMUI::____HMUI__SelectableCell__TransitionType)>(&::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::HighlightDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2121914;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell.RefreshVisuals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::*)()>(&::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::RefreshVisuals)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2121828;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell>::get(),
                            "RefreshVisuals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell.GetInfoText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::*)(::StringW, int32_t, int32_t)>(&::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::GetInfoText)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x21216cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell>::get(),
                            "GetInfoText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell.RefreshAvailabilityAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::*)(::GlobalNamespace::AdditionalContentModel)>(&::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::RefreshAvailabilityAsync)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2121918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell>::get(),
                            "RefreshAvailabilityAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AdditionalContentModel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell.SetDownloadIconVisible
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::*)(bool)>(&::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::SetDownloadIconVisible)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x21217bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell>::get(),
                            "SetDownloadIconVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell.CancelAsyncOperations
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::*)()>(&::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::CancelAsyncOperations)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x21219bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell>::get(),
                            "CancelAsyncOperations",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::*)()>(&::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21219d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__set__infoText(::TMPro::TextMeshProUGUI value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TextMeshProUGUI>(value));
}
constexpr ::TMPro::TextMeshProUGUI ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__get__infoText() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__set__coverImage(::HMUI::ImageView value)  {
::cordl_internals::setInstanceField<::HMUI::ImageView, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::ImageView>(value));
}
constexpr ::HMUI::ImageView ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__get__coverImage() const {
return ::cordl_internals::getInstanceField<::HMUI::ImageView, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__set__selectionImage(::HMUI::ImageView value)  {
::cordl_internals::setInstanceField<::HMUI::ImageView, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::ImageView>(value));
}
constexpr ::HMUI::ImageView ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__get__selectionImage() const {
return ::cordl_internals::getInstanceField<::HMUI::ImageView, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__set__downloadIconObject(::UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::GameObject>(value));
}
constexpr ::UnityEngine::GameObject ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__get__downloadIconObject() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__set__newBadgeObject(::UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::GameObject>(value));
}
constexpr ::UnityEngine::GameObject ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__get__newBadgeObject() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__set__updatedBadgeObject(::UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::GameObject>(value));
}
constexpr ::UnityEngine::GameObject ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__get__updatedBadgeObject() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__set__selectedColor0(::UnityEngine::Color value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__get__selectedColor0() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__set__selectedColor1(::UnityEngine::Color value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__get__selectedColor1() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__set__highlightedColor0(::UnityEngine::Color value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__get__highlightedColor0() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__set__highlightedColor1(::UnityEngine::Color value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__get__highlightedColor1() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__set__cellIndex_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__get__cellIndex_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__set__annotatedBeatmapLevelCollection(::GlobalNamespace::IAnnotatedBeatmapLevelCollection value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IAnnotatedBeatmapLevelCollection, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IAnnotatedBeatmapLevelCollection>(value));
}
constexpr ::GlobalNamespace::IAnnotatedBeatmapLevelCollection ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__get__annotatedBeatmapLevelCollection() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IAnnotatedBeatmapLevelCollection, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__set__cancellationTokenSource(::System::Threading::CancellationTokenSource value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationTokenSource, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::CancellationTokenSource>(value));
}
constexpr ::System::Threading::CancellationTokenSource ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::__get__cancellationTokenSource() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationTokenSource, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 int32_t ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::get_cellIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell>::get(),
                            "get_cellIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::set_cellIndex(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell>::get(),
                            "set_cellIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::SetData(::GlobalNamespace::IAnnotatedBeatmapLevelCollection annotatedBeatmapLevelCollection, bool isPromoted, bool isUpdated)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAnnotatedBeatmapLevelCollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, annotatedBeatmapLevelCollection, isPromoted, isUpdated);
}
 void ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::InternalToggle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell>::get(),
                            "InternalToggle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::SelectionDidChange(::HMUI::____HMUI__SelectableCell__TransitionType transitionType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell>::get(),
                            "SelectionDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::____HMUI__SelectableCell__TransitionType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, transitionType);
}
 void ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::HighlightDidChange(::HMUI::____HMUI__SelectableCell__TransitionType transitionType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell>::get(),
                            "HighlightDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::____HMUI__SelectableCell__TransitionType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, transitionType);
}
 void ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::RefreshVisuals()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell>::get(),
                            "RefreshVisuals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param purchased: int32_t (default: -1)
 ::StringW ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::GetInfoText(::StringW name, int32_t songs, int32_t purchased)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell>::get(),
                            "GetInfoText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, name, songs, purchased);
}
 void ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::RefreshAvailabilityAsync(::GlobalNamespace::AdditionalContentModel contentModel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell>::get(),
                            "RefreshAvailabilityAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AdditionalContentModel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, contentModel);
}
 void ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::SetDownloadIconVisible(bool visible)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell>::get(),
                            "SetDownloadIconVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, visible);
}
 void ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::CancelAsyncOperations()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell>::get(),
                            "CancelAsyncOperations",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::AnnotatedBeatmapLevelCollectionCell()  : ::HMUI::SelectableCell(THROW_UNLESS(::il2cpp_utils::New<AnnotatedBeatmapLevelCollectionCell>())) {}
 void ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
