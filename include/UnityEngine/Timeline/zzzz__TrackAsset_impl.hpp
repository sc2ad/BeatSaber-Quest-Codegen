#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_impl.hpp"
namespace {
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackBindingTypeAttribute_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayableAsset_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineAsset_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
#include "UnityEngine/Timeline/zzzz__RuntimeElement_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBinding_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "UnityEngine/Timeline/zzzz__MarkerList_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineClip_def.hpp"
#include "UnityEngine/Timeline/zzzz__DiscreteTime_def.hpp"
#include "UnityEngine/Timeline/zzzz__IPropertyCollector_def.hpp"
#include "UnityEngine/Timeline/zzzz__ICurvesOwner_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/Timeline/zzzz__IMarker_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Timeline/zzzz__IntervalTree_1_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/Timeline/zzzz__IPropertyPreview_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset__Versions::____UnityEngine__Timeline__TrackAsset__Versions(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset__Versions::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset__Versions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset__Versions  ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset__Versions::Initial{0};
constexpr ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset__Versions  ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset__Versions::RotationAsEuler{1};
constexpr ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset__Versions  ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset__Versions::RootMotionUpgrade{2};
constexpr ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset__Versions  ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset__Versions::AnimatedTrackProperties{3};
//  Writing Method size for method: ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset__TransientBuildData.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset__TransientBuildData (*)()>(&::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset__TransientBuildData::Create)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2ac8ba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset__TransientBuildData>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset__TransientBuildData.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset__TransientBuildData::*)()>(&::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset__TransientBuildData::Clear)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2ac66a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset__TransientBuildData>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "trackList", ty: "::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "clipList", ty: "::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "markerList", ty: "::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker>", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset__TransientBuildData::____UnityEngine__Timeline__TrackAsset__TransientBuildData(::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset> trackList, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip> clipList, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker> markerList) noexcept : ::bs_hook::ValueTypeWrapper() {this->trackList = trackList;
this->clipList = clipList;
this->markerList = markerList;
}
constexpr void ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset__TransientBuildData::__set_trackList(::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset>, 0x0>(this->__instance, std::forward<::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset>>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset> ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset__TransientBuildData::__get_trackList() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset>, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset__TransientBuildData::__set_clipList(::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip>, 0x8>(this->__instance, std::forward<::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip>>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip> ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset__TransientBuildData::__get_clipList() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip>, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset__TransientBuildData::__set_markerList(::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker>, 0x10>(this->__instance, std::forward<::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker>>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker> ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset__TransientBuildData::__get_markerList() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker>, 0x10>(this->__instance);
}
 ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset__TransientBuildData ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset__TransientBuildData::Create()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset__TransientBuildData>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset__TransientBuildData, false>(nullptr, ___internal_method);
}
 void ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset__TransientBuildData::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset__TransientBuildData>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65::*)(int32_t)>(&::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2ac36b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65::*)()>(&::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ac8cac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65::*)()>(&::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65::MoveNext)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x2ac8cb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65.System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableBinding (::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65::*)()>(&::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65::System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2ac8ef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65>::get(),
                            "System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65::*)()>(&::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2ac8f04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65::*)()>(&::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2ac8f44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65.System_Collections_Generic_IEnumerable_UnityEngine_Playables_PlayableBinding__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding> (::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65::*)()>(&::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65::System_Collections_Generic_IEnumerable_UnityEngine_Playables_PlayableBinding__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2ac8fa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65>::get(),
                            "System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator (::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65::*)()>(&::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ac9048;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>
constexpr  ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>() const noexcept {
return ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr  ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65::operator ::System::Collections::IEnumerable() const noexcept {
return ::System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>
constexpr  ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>() const noexcept {
return ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr  ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65::operator ::System::Collections::IEnumerator() const noexcept {
return ::System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::IDisposable
constexpr  ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65::__set___2__current(::UnityEngine::Playables::PlayableBinding value)  {
::cordl_internals::setInstanceField<::UnityEngine::Playables::PlayableBinding, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Playables::PlayableBinding>(value));
}
constexpr ::UnityEngine::Playables::PlayableBinding ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65::__get___2__current() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Playables::PlayableBinding, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65::__set___l__initialThreadId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65::__set___4__this(::UnityEngine::Timeline::TrackAsset value)  {
::cordl_internals::setInstanceField<::UnityEngine::Timeline::TrackAsset, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Timeline::TrackAsset>(value));
}
constexpr ::UnityEngine::Timeline::TrackAsset ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65::__get___4__this() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Timeline::TrackAsset, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__Timeline__TrackAsset___get_outputs_d__65>(__1__state))) {}
 void ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Playables::PlayableBinding ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65::System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65>::get(),
                            "System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableBinding, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding> ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65::System_Collections_Generic_IEnumerable_UnityEngine_Playables_PlayableBinding__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65>::get(),
                            "System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::IEnumerator ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset___get_outputs_d__65>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset____c::*)()>(&::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ac90b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset____c._SortClips_b__121_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset____c::*)(::UnityEngine::Timeline::TimelineClip, ::UnityEngine::Timeline::TimelineClip)>(&::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset____c::_SortClips_b__121_0)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2ac90b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset____c>::get(),
                            "<SortClips>b__121_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimelineClip>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimelineClip>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset____c::__set___9(::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset____c value)  {
::cordl_internals::setStaticField<::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset____c>::get>(std::forward<::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset____c>(value));
}
 ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset____c ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset____c::__get___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset____c>::get>();
}
 void ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset____c::__set___9__121_0(::System::Comparison_1<::UnityEngine::Timeline::TimelineClip> value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::UnityEngine::Timeline::TimelineClip>, "<>9__121_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset____c>::get>(std::forward<::System::Comparison_1<::UnityEngine::Timeline::TimelineClip>>(value));
}
 ::System::Comparison_1<::UnityEngine::Timeline::TimelineClip> ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset____c::__get___9__121_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityEngine::Timeline::TimelineClip>, "<>9__121_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset____c>::get>();
}
// Ctor Parameters []
 ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset____c::____UnityEngine__Timeline__TrackAsset____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__Timeline__TrackAsset____c>())) {}
 void ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset____c::_SortClips_b__121_0(::UnityEngine::Timeline::TimelineClip clip1, ::UnityEngine::Timeline::TimelineClip clip2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset____c>::get(),
                            "<SortClips>b__121_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimelineClip>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimelineClip>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, clip1, clip2);
}
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.OnBeforeTrackSerialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::OnBeforeTrackSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ac29a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Timeline::TrackAsset),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.OnAfterTrackDeserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::OnAfterTrackDeserialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ac29a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Timeline::TrackAsset),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.OnUpgradeFromVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(int32_t)>(&::UnityEngine::Timeline::TrackAsset::OnUpgradeFromVersion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ac29ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Timeline::TrackAsset),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2ac29b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x2ac2b0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.UpgradeToLatestVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::UpgradeToLatestVersion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ac2f50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "UpgradeToLatestVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.add_OnClipPlayableCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_3<::UnityEngine::Timeline::TimelineClip,::UnityEngine::GameObject,::UnityEngine::Playables::Playable>)>(&::UnityEngine::Timeline::TrackAsset::add_OnClipPlayableCreate)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2ac2f70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "add_OnClipPlayableCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::UnityEngine::Timeline::TimelineClip,::UnityEngine::GameObject,::UnityEngine::Playables::Playable>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.remove_OnClipPlayableCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_3<::UnityEngine::Timeline::TimelineClip,::UnityEngine::GameObject,::UnityEngine::Playables::Playable>)>(&::UnityEngine::Timeline::TrackAsset::remove_OnClipPlayableCreate)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2ac3064;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "remove_OnClipPlayableCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::UnityEngine::Timeline::TimelineClip,::UnityEngine::GameObject,::UnityEngine::Playables::Playable>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.add_OnTrackAnimationPlayableCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_3<::UnityEngine::Timeline::TrackAsset,::UnityEngine::GameObject,::UnityEngine::Playables::Playable>)>(&::UnityEngine::Timeline::TrackAsset::add_OnTrackAnimationPlayableCreate)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2ac3158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "add_OnTrackAnimationPlayableCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::UnityEngine::Timeline::TrackAsset,::UnityEngine::GameObject,::UnityEngine::Playables::Playable>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.remove_OnTrackAnimationPlayableCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_3<::UnityEngine::Timeline::TrackAsset,::UnityEngine::GameObject,::UnityEngine::Playables::Playable>)>(&::UnityEngine::Timeline::TrackAsset::remove_OnTrackAnimationPlayableCreate)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2ac324c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "remove_OnTrackAnimationPlayableCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::UnityEngine::Timeline::TrackAsset,::UnityEngine::GameObject,::UnityEngine::Playables::Playable>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_start)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2ac3340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "get_start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_end
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_end)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2ac0a64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "get_end",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_duration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_duration)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2ac34ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "get_duration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_muted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_muted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ac3514;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "get_muted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.set_muted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(bool)>(&::UnityEngine::Timeline::TrackAsset::set_muted)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ac351c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "set_muted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_mutedInHierarchy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_mutedInHierarchy)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2ac0738;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "get_mutedInHierarchy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_timelineAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::TimelineAsset (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_timelineAsset)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2ac0e34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "get_timelineAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_parent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableAsset (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_parent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ac3528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "get_parent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.set_parent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Playables::PlayableAsset)>(&::UnityEngine::Timeline::TrackAsset::set_parent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ac3530;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "set_parent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableAsset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GetClips
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip> (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::GetClips)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2abc2fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "GetClips",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_clips
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Timeline::TimelineClip> (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_clips)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2ab8730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "get_clips",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_isEmpty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_isEmpty)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2ac3538;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Timeline::TrackAsset),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_hasClips
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_hasClips)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2ab63f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "get_hasClips",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_hasCurves
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_hasCurves)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2ac35a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "get_hasCurves",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_isSubTrack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_isSubTrack)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2ab9064;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "get_isSubTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_outputs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding> (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_outputs)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2ac3638;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Timeline::TrackAsset),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GetChildTracks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset> (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::GetChildTracks)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2abac28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "GetChildTracks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_customPlayableTypename
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_customPlayableTypename)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ac38f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "get_customPlayableTypename",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.set_customPlayableTypename
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(::StringW)>(&::UnityEngine::Timeline::TrackAsset::set_customPlayableTypename)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ac38f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "set_customPlayableTypename",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_curves
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationClip (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_curves)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ac3900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "get_curves",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.set_curves
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::AnimationClip)>(&::UnityEngine::Timeline::TrackAsset::set_curves)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ac3908;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "set_curves",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationClip>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.UnityEngine_Timeline_ICurvesOwner_get_defaultCurvesName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::UnityEngine_Timeline_ICurvesOwner_get_defaultCurvesName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2ac3910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "UnityEngine.Timeline.ICurvesOwner.get_defaultCurvesName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.UnityEngine_Timeline_ICurvesOwner_get_asset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::UnityEngine_Timeline_ICurvesOwner_get_asset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ac3950;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "UnityEngine.Timeline.ICurvesOwner.get_asset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.UnityEngine_Timeline_ICurvesOwner_get_assetOwner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::UnityEngine_Timeline_ICurvesOwner_get_assetOwner)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ac3954;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "UnityEngine.Timeline.ICurvesOwner.get_assetOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.UnityEngine_Timeline_ICurvesOwner_get_targetTrack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::TrackAsset (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::UnityEngine_Timeline_ICurvesOwner_get_targetTrack)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ac3958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "UnityEngine.Timeline.ICurvesOwner.get_targetTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_subTracksObjects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject> (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_subTracksObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ac395c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "get_subTracksObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_locked
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_locked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ac3964;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "get_locked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.set_locked
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(bool)>(&::UnityEngine::Timeline::TrackAsset::set_locked)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ac396c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "set_locked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_lockedInHierarchy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_lockedInHierarchy)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2ac3978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "get_lockedInHierarchy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_supportsNotifications
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_supportsNotifications)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2ac3b04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "get_supportsNotifications",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.__internalAwake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::__internalAwake)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2ac3bb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "__internalAwake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreateCurves
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(::StringW)>(&::UnityEngine::Timeline::TrackAsset::CreateCurves)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2ac3c84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "CreateCurves",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreateTrackMixer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject, int32_t)>(&::UnityEngine::Timeline::TrackAsset::CreateTrackMixer)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2ac3d38;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Timeline::TrackAsset),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreatePlayable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject)>(&::UnityEngine::Timeline::TrackAsset::CreatePlayable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2ac3da8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "CreatePlayable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreateDefaultClip
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::TimelineClip (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::CreateDefaultClip)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x2ac3df8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "CreateDefaultClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.DeleteClip
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Timeline::TimelineClip)>(&::UnityEngine::Timeline::TrackAsset::DeleteClip)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2ac40f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "DeleteClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimelineClip>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreateMarker
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::IMarker (::UnityEngine::Timeline::TrackAsset::*)(::System::Type, double_t)>(&::UnityEngine::Timeline::TrackAsset::CreateMarker)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ac4208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "CreateMarker",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.DeleteMarker
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Timeline::IMarker)>(&::UnityEngine::Timeline::TrackAsset::DeleteMarker)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ac4514;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "DeleteMarker",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::IMarker>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GetMarkers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker> (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::GetMarkers)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2ac2f54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "GetMarkers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GetMarkerCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::GetMarkerCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ac3630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "GetMarkerCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GetMarker
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::IMarker (::UnityEngine::Timeline::TrackAsset::*)(int32_t)>(&::UnityEngine::Timeline::TrackAsset::GetMarker)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ac4768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "GetMarker",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreateClip
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::TimelineClip (::UnityEngine::Timeline::TrackAsset::*)(::System::Type)>(&::UnityEngine::Timeline::TrackAsset::CreateClip)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2ac47d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "CreateClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreateAndAddNewClipOfType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::TimelineClip (::UnityEngine::Timeline::TrackAsset::*)(::System::Type)>(&::UnityEngine::Timeline::TrackAsset::CreateAndAddNewClipOfType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2ac40c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "CreateAndAddNewClipOfType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreateClipOfType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::TimelineClip (::UnityEngine::Timeline::TrackAsset::*)(::System::Type)>(&::UnityEngine::Timeline::TrackAsset::CreateClipOfType)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x2ac4b80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "CreateClipOfType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreateClipFromPlayableAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::TimelineClip (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Playables::IPlayableAsset)>(&::UnityEngine::Timeline::TrackAsset::CreateClipFromPlayableAsset)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x2ac5000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "CreateClipFromPlayableAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::IPlayableAsset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreateClipFromAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::TimelineClip (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::ScriptableObject)>(&::UnityEngine::Timeline::TrackAsset::CreateClipFromAsset)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x2ac4d60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "CreateClipFromAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScriptableObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GetMarkersRaw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ScriptableObject> (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::GetMarkersRaw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ac54e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "GetMarkersRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.ClearMarkers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::ClearMarkers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ac54e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "ClearMarkers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.AddMarker
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::ScriptableObject)>(&::UnityEngine::Timeline::TrackAsset::AddMarker)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ac5560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "AddMarker",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScriptableObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.DeleteMarkerRaw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::ScriptableObject)>(&::UnityEngine::Timeline::TrackAsset::DeleteMarkerRaw)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2ac5654;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "DeleteMarkerRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScriptableObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GetTimeRangeHash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::GetTimeRangeHash)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x2ac5748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "GetTimeRangeHash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.AddClip
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Timeline::TimelineClip)>(&::UnityEngine::Timeline::TrackAsset::AddClip)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2abd2bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "AddClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimelineClip>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreateNotificationsPlayable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::Playable, ::UnityEngine::GameObject, ::UnityEngine::Playables::Playable)>(&::UnityEngine::Timeline::TrackAsset::CreateNotificationsPlayable)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x2ac5a5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "CreateNotificationsPlayable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreatePlayableGraph
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement>, ::UnityEngine::Playables::Playable)>(&::UnityEngine::Timeline::TrackAsset::CreatePlayableGraph)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x2ac60ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "CreatePlayableGraph",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CompileClips
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject, ::System::Collections::Generic::IList_1<::UnityEngine::Timeline::TimelineClip>, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement>)>(&::UnityEngine::Timeline::TrackAsset::CompileClips)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x2ac6780;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Timeline::TrackAsset),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GatherCompilableTracks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(::System::Collections::Generic::IList_1<::UnityEngine::Timeline::TrackAsset>)>(&::UnityEngine::Timeline::TrackAsset::GatherCompilableTracks)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x2ac6d04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "GatherCompilableTracks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Timeline::TrackAsset>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GatherNotifications
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker>)>(&::UnityEngine::Timeline::TrackAsset::GatherNotifications)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x2ac5d2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "GatherNotifications",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreateMixerPlayableGraph
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement>)>(&::UnityEngine::Timeline::TrackAsset::CreateMixerPlayableGraph)> {
  constexpr static std::size_t size = 0x5a8;
  constexpr static std::size_t addrs = 0x2ac710c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Timeline::TrackAsset),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.ConfigureTrackAnimation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement>, ::UnityEngine::GameObject, ::UnityEngine::Playables::Playable)>(&::UnityEngine::Timeline::TrackAsset::ConfigureTrackAnimation)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2ac6ba8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "ConfigureTrackAnimation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.SortClips
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::SortClips)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2ac76b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "SortClips",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.ClearClipsInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::ClearClipsInternal)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2ac77dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "ClearClipsInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.ClearSubTracksInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::ClearSubTracksInternal)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2ac7854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "ClearSubTracksInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.OnClipMove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::OnClipMove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2abcf40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "OnClipMove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreateNewClipContainerInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::TimelineClip (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::CreateNewClipContainerInternal)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x2ac5284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "CreateNewClipContainerInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.AddChild
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Timeline::TrackAsset)>(&::UnityEngine::Timeline::TrackAsset::AddChild)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2ac1da4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "AddChild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TrackAsset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.MoveLastTrackBefore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Timeline::TrackAsset)>(&::UnityEngine::Timeline::TrackAsset::MoveLastTrackBefore)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x2ac78cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "MoveLastTrackBefore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TrackAsset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.RemoveSubTrack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Timeline::TrackAsset)>(&::UnityEngine::Timeline::TrackAsset::RemoveSubTrack)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2ac0060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "RemoveSubTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TrackAsset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.RemoveClip
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Timeline::TimelineClip)>(&::UnityEngine::Timeline::TrackAsset::RemoveClip)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2abd25c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "RemoveClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimelineClip>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GetEvaluationTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(ByRef<double_t>, ByRef<double_t>)>(&::UnityEngine::Timeline::TrackAsset::GetEvaluationTime)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x2abb6f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Timeline::TrackAsset),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GetSequenceTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(ByRef<double_t>, ByRef<double_t>)>(&::UnityEngine::Timeline::TrackAsset::GetSequenceTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2abba4c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Timeline::TrackAsset),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GatherProperties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Playables::PlayableDirector, ::UnityEngine::Timeline::IPropertyCollector)>(&::UnityEngine::Timeline::TrackAsset::GatherProperties)> {
  constexpr static std::size_t size = 0x6d4;
  constexpr static std::size_t addrs = 0x2ac7ad8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Timeline::TrackAsset),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GetGameObjectBinding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Playables::PlayableDirector)>(&::UnityEngine::Timeline::TrackAsset::GetGameObjectBinding)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2ab66e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "GetGameObjectBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableDirector>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.ValidateClipType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)(::System::Type)>(&::UnityEngine::Timeline::TrackAsset::ValidateClipType)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x2ac4900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "ValidateClipType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.OnCreateClip
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Timeline::TimelineClip)>(&::UnityEngine::Timeline::TrackAsset::OnCreateClip)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ab68ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Timeline::TrackAsset),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.UpdateDuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::UpdateDuration)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2ac33a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "UpdateDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CalculateItemsHash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::CalculateItemsHash)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2ab934c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Timeline::TrackAsset),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreatePlayable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject, ::UnityEngine::Timeline::TimelineClip)>(&::UnityEngine::Timeline::TrackAsset::CreatePlayable)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x2ac8314;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Timeline::TrackAsset),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.Invalidate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::Invalidate)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2ac2ec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "Invalidate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GetNotificationDuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::GetNotificationDuration)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2abba5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "GetNotificationDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CanCompileClips
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::CanCompileClips)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2ab6448;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Timeline::TrackAsset),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CanCreateTrackMixer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::CanCreateTrackMixer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2ac85b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Timeline::TrackAsset),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.IsCompilable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::IsCompilable)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x2ac85c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "IsCompilable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.UpdateChildTrackCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::UpdateChildTrackCache)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x2ac36e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "UpdateChildTrackCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.Hash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::Hash)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2ac8994;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Timeline::TrackAsset),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GetClipsHash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::GetClipsHash)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x2ac81ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "GetClipsHash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GetAnimationClipHash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::AnimationClip)>(&::UnityEngine::Timeline::TrackAsset::GetAnimationClipHash)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2ab9260;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "GetAnimationClipHash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationClip>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.HasNotifications
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::HasNotifications)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2ac7abc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "HasNotifications",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CanCompileNotifications
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::CanCompileNotifications)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2ac70d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "CanCompileNotifications",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CanCreateMixerRecursive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::CanCreateMixerRecursive)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x2ac636c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "CanCreateMixerRecursive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2ab690c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::UnityEngine::ISerializationCallbackReceiver
constexpr  ::UnityEngine::Timeline::TrackAsset::operator ::UnityEngine::ISerializationCallbackReceiver() const noexcept {
return ::UnityEngine::ISerializationCallbackReceiver(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::UnityEngine::Timeline::IPropertyPreview
constexpr  ::UnityEngine::Timeline::TrackAsset::operator ::UnityEngine::Timeline::IPropertyPreview() const noexcept {
return ::UnityEngine::Timeline::IPropertyPreview(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::UnityEngine::Timeline::ICurvesOwner
constexpr  ::UnityEngine::Timeline::TrackAsset::operator ::UnityEngine::Timeline::ICurvesOwner() const noexcept {
return ::UnityEngine::Timeline::ICurvesOwner(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::Timeline::TrackAsset::__set_m_Version(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Timeline::TrackAsset::__get_m_Version() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::Timeline::TrackAsset::__set_m_AnimClip(::UnityEngine::AnimationClip value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationClip, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::AnimationClip>(value));
}
constexpr ::UnityEngine::AnimationClip ::UnityEngine::Timeline::TrackAsset::__get_m_AnimClip() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::UnityEngine::Timeline::TrackAsset::__set_s_BuildData(::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset__TransientBuildData value)  {
::cordl_internals::setStaticField<::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset__TransientBuildData, "s_BuildData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get>(std::forward<::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset__TransientBuildData>(value));
}
 ::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset__TransientBuildData ::UnityEngine::Timeline::TrackAsset::__get_s_BuildData()  {
return ::cordl_internals::getStaticField<::UnityEngine::Timeline::____UnityEngine__Timeline__TrackAsset__TransientBuildData, "s_BuildData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get>();
}
 void ::UnityEngine::Timeline::TrackAsset::__set_OnClipPlayableCreate(::System::Action_3<::UnityEngine::Timeline::TimelineClip,::UnityEngine::GameObject,::UnityEngine::Playables::Playable> value)  {
::cordl_internals::setStaticField<::System::Action_3<::UnityEngine::Timeline::TimelineClip,::UnityEngine::GameObject,::UnityEngine::Playables::Playable>, "OnClipPlayableCreate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get>(std::forward<::System::Action_3<::UnityEngine::Timeline::TimelineClip,::UnityEngine::GameObject,::UnityEngine::Playables::Playable>>(value));
}
 ::System::Action_3<::UnityEngine::Timeline::TimelineClip,::UnityEngine::GameObject,::UnityEngine::Playables::Playable> ::UnityEngine::Timeline::TrackAsset::__get_OnClipPlayableCreate()  {
return ::cordl_internals::getStaticField<::System::Action_3<::UnityEngine::Timeline::TimelineClip,::UnityEngine::GameObject,::UnityEngine::Playables::Playable>, "OnClipPlayableCreate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get>();
}
 void ::UnityEngine::Timeline::TrackAsset::__set_OnTrackAnimationPlayableCreate(::System::Action_3<::UnityEngine::Timeline::TrackAsset,::UnityEngine::GameObject,::UnityEngine::Playables::Playable> value)  {
::cordl_internals::setStaticField<::System::Action_3<::UnityEngine::Timeline::TrackAsset,::UnityEngine::GameObject,::UnityEngine::Playables::Playable>, "OnTrackAnimationPlayableCreate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get>(std::forward<::System::Action_3<::UnityEngine::Timeline::TrackAsset,::UnityEngine::GameObject,::UnityEngine::Playables::Playable>>(value));
}
 ::System::Action_3<::UnityEngine::Timeline::TrackAsset,::UnityEngine::GameObject,::UnityEngine::Playables::Playable> ::UnityEngine::Timeline::TrackAsset::__get_OnTrackAnimationPlayableCreate()  {
return ::cordl_internals::getStaticField<::System::Action_3<::UnityEngine::Timeline::TrackAsset,::UnityEngine::GameObject,::UnityEngine::Playables::Playable>, "OnTrackAnimationPlayableCreate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get>();
}
constexpr void ::UnityEngine::Timeline::TrackAsset::__set_m_Locked(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::Timeline::TrackAsset::__get_m_Locked() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::Timeline::TrackAsset::__set_m_Muted(bool value)  {
::cordl_internals::setInstanceField<bool, 0x29>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::Timeline::TrackAsset::__get_m_Muted() const {
return ::cordl_internals::getInstanceField<bool, 0x29>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::Timeline::TrackAsset::__set_m_CustomPlayableFullTypename(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::Timeline::TrackAsset::__get_m_CustomPlayableFullTypename() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::Timeline::TrackAsset::__set_m_Curves(::UnityEngine::AnimationClip value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationClip, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::AnimationClip>(value));
}
constexpr ::UnityEngine::AnimationClip ::UnityEngine::Timeline::TrackAsset::__get_m_Curves() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::Timeline::TrackAsset::__set_m_Parent(::UnityEngine::Playables::PlayableAsset value)  {
::cordl_internals::setInstanceField<::UnityEngine::Playables::PlayableAsset, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Playables::PlayableAsset>(value));
}
constexpr ::UnityEngine::Playables::PlayableAsset ::UnityEngine::Timeline::TrackAsset::__get_m_Parent() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Playables::PlayableAsset, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::Timeline::TrackAsset::__set_m_Children(::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject>>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject> ::UnityEngine::Timeline::TrackAsset::__get_m_Children() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::Timeline::TrackAsset::__set_m_ItemsHash(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Timeline::TrackAsset::__get_m_ItemsHash() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::Timeline::TrackAsset::__set_m_ClipsCache(::ArrayW<::UnityEngine::Timeline::TimelineClip> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Timeline::TimelineClip>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::Timeline::TimelineClip>>(value));
}
constexpr ::ArrayW<::UnityEngine::Timeline::TimelineClip> ::UnityEngine::Timeline::TrackAsset::__get_m_ClipsCache() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Timeline::TimelineClip>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::Timeline::TrackAsset::__set_m_Start(::UnityEngine::Timeline::DiscreteTime value)  {
::cordl_internals::setInstanceField<::UnityEngine::Timeline::DiscreteTime, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Timeline::DiscreteTime>(value));
}
constexpr ::UnityEngine::Timeline::DiscreteTime ::UnityEngine::Timeline::TrackAsset::__get_m_Start() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Timeline::DiscreteTime, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::Timeline::TrackAsset::__set_m_End(::UnityEngine::Timeline::DiscreteTime value)  {
::cordl_internals::setInstanceField<::UnityEngine::Timeline::DiscreteTime, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Timeline::DiscreteTime>(value));
}
constexpr ::UnityEngine::Timeline::DiscreteTime ::UnityEngine::Timeline::TrackAsset::__get_m_End() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Timeline::DiscreteTime, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::Timeline::TrackAsset::__set_m_CacheSorted(bool value)  {
::cordl_internals::setInstanceField<bool, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::Timeline::TrackAsset::__get_m_CacheSorted() const {
return ::cordl_internals::getInstanceField<bool, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::Timeline::TrackAsset::__set_m_SupportsNotifications(::System::Nullable_1<bool> value)  {
::cordl_internals::setInstanceField<::System::Nullable_1<bool>, 0x71>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Nullable_1<bool>>(value));
}
constexpr ::System::Nullable_1<bool> ::UnityEngine::Timeline::TrackAsset::__get_m_SupportsNotifications() const {
return ::cordl_internals::getInstanceField<::System::Nullable_1<bool>, 0x71>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::UnityEngine::Timeline::TrackAsset::__set_s_EmptyCache(::ArrayW<::UnityEngine::Timeline::TrackAsset> value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Timeline::TrackAsset>, "s_EmptyCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get>(std::forward<::ArrayW<::UnityEngine::Timeline::TrackAsset>>(value));
}
 ::ArrayW<::UnityEngine::Timeline::TrackAsset> ::UnityEngine::Timeline::TrackAsset::__get_s_EmptyCache()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Timeline::TrackAsset>, "s_EmptyCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get>();
}
constexpr void ::UnityEngine::Timeline::TrackAsset::__set_m_ChildTrackCache(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset>>(value));
}
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset> ::UnityEngine::Timeline::TrackAsset::__get_m_ChildTrackCache() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::UnityEngine::Timeline::TrackAsset::__set_s_TrackBindingTypeAttributeCache(::System::Collections::Generic::Dictionary_2<::System::Type,::UnityEngine::Timeline::TrackBindingTypeAttribute> value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type,::UnityEngine::Timeline::TrackBindingTypeAttribute>, "s_TrackBindingTypeAttributeCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Type,::UnityEngine::Timeline::TrackBindingTypeAttribute>>(value));
}
 ::System::Collections::Generic::Dictionary_2<::System::Type,::UnityEngine::Timeline::TrackBindingTypeAttribute> ::UnityEngine::Timeline::TrackAsset::__get_s_TrackBindingTypeAttributeCache()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type,::UnityEngine::Timeline::TrackBindingTypeAttribute>, "s_TrackBindingTypeAttributeCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get>();
}
constexpr void ::UnityEngine::Timeline::TrackAsset::__set_m_Clips(::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip>>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip> ::UnityEngine::Timeline::TrackAsset::__get_m_Clips() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::Timeline::TrackAsset::__set_m_Markers(::UnityEngine::Timeline::MarkerList value)  {
::cordl_internals::setInstanceField<::UnityEngine::Timeline::MarkerList, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Timeline::MarkerList>(value));
}
constexpr ::UnityEngine::Timeline::MarkerList ::UnityEngine::Timeline::TrackAsset::__get_m_Markers() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Timeline::MarkerList, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::UnityEngine::Timeline::TrackAsset::OnBeforeTrackSerialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "OnBeforeTrackSerialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::Timeline::TrackAsset::OnAfterTrackDeserialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "OnAfterTrackDeserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::Timeline::TrackAsset::OnUpgradeFromVersion(int32_t oldVersion)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "OnUpgradeFromVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, oldVersion);
}
 void ::UnityEngine::Timeline::TrackAsset::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::Timeline::TrackAsset::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::Timeline::TrackAsset::UpgradeToLatestVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "UpgradeToLatestVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::Timeline::TrackAsset::add_OnClipPlayableCreate(::System::Action_3<::UnityEngine::Timeline::TimelineClip,::UnityEngine::GameObject,::UnityEngine::Playables::Playable> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "add_OnClipPlayableCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::UnityEngine::Timeline::TimelineClip,::UnityEngine::GameObject,::UnityEngine::Playables::Playable>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::UnityEngine::Timeline::TrackAsset::remove_OnClipPlayableCreate(::System::Action_3<::UnityEngine::Timeline::TimelineClip,::UnityEngine::GameObject,::UnityEngine::Playables::Playable> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "remove_OnClipPlayableCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::UnityEngine::Timeline::TimelineClip,::UnityEngine::GameObject,::UnityEngine::Playables::Playable>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::UnityEngine::Timeline::TrackAsset::add_OnTrackAnimationPlayableCreate(::System::Action_3<::UnityEngine::Timeline::TrackAsset,::UnityEngine::GameObject,::UnityEngine::Playables::Playable> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "add_OnTrackAnimationPlayableCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::UnityEngine::Timeline::TrackAsset,::UnityEngine::GameObject,::UnityEngine::Playables::Playable>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::UnityEngine::Timeline::TrackAsset::remove_OnTrackAnimationPlayableCreate(::System::Action_3<::UnityEngine::Timeline::TrackAsset,::UnityEngine::GameObject,::UnityEngine::Playables::Playable> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "remove_OnTrackAnimationPlayableCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::UnityEngine::Timeline::TrackAsset,::UnityEngine::GameObject,::UnityEngine::Playables::Playable>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 double_t ::UnityEngine::Timeline::TrackAsset::get_start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "get_start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(instance), ___internal_method);
}
 double_t ::UnityEngine::Timeline::TrackAsset::get_end()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "get_end",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(instance), ___internal_method);
}
 double_t ::UnityEngine::Timeline::TrackAsset::get_duration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "get_duration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::Timeline::TrackAsset::get_muted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "get_muted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::Timeline::TrackAsset::set_muted(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "set_muted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::UnityEngine::Timeline::TrackAsset::get_mutedInHierarchy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "get_mutedInHierarchy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Timeline::TimelineAsset ::UnityEngine::Timeline::TrackAsset::get_timelineAsset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "get_timelineAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TimelineAsset, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Playables::PlayableAsset ::UnityEngine::Timeline::TrackAsset::get_parent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "get_parent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableAsset, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::Timeline::TrackAsset::set_parent(::UnityEngine::Playables::PlayableAsset value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "set_parent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip> ::UnityEngine::Timeline::TrackAsset::GetClips()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "GetClips",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::UnityEngine::Timeline::TimelineClip> ::UnityEngine::Timeline::TrackAsset::get_clips()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "get_clips",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Timeline::TimelineClip>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::Timeline::TrackAsset::get_isEmpty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "get_isEmpty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::Timeline::TrackAsset::get_hasClips()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "get_hasClips",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::Timeline::TrackAsset::get_hasCurves()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "get_hasCurves",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::Timeline::TrackAsset::get_isSubTrack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "get_isSubTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding> ::UnityEngine::Timeline::TrackAsset::get_outputs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "get_outputs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset> ::UnityEngine::Timeline::TrackAsset::GetChildTracks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "GetChildTracks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::UnityEngine::Timeline::TrackAsset::get_customPlayableTypename()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "get_customPlayableTypename",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::Timeline::TrackAsset::set_customPlayableTypename(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "set_customPlayableTypename",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::AnimationClip ::UnityEngine::Timeline::TrackAsset::get_curves()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "get_curves",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationClip, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::Timeline::TrackAsset::set_curves(::UnityEngine::AnimationClip value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "set_curves",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationClip>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW ::UnityEngine::Timeline::TrackAsset::UnityEngine_Timeline_ICurvesOwner_get_defaultCurvesName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "UnityEngine.Timeline.ICurvesOwner.get_defaultCurvesName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Object ::UnityEngine::Timeline::TrackAsset::UnityEngine_Timeline_ICurvesOwner_get_asset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "UnityEngine.Timeline.ICurvesOwner.get_asset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Object, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Object ::UnityEngine::Timeline::TrackAsset::UnityEngine_Timeline_ICurvesOwner_get_assetOwner()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "UnityEngine.Timeline.ICurvesOwner.get_assetOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Object, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Timeline::TrackAsset ::UnityEngine::Timeline::TrackAsset::UnityEngine_Timeline_ICurvesOwner_get_targetTrack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "UnityEngine.Timeline.ICurvesOwner.get_targetTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TrackAsset, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject> ::UnityEngine::Timeline::TrackAsset::get_subTracksObjects()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "get_subTracksObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::Timeline::TrackAsset::get_locked()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "get_locked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::Timeline::TrackAsset::set_locked(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "set_locked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::UnityEngine::Timeline::TrackAsset::get_lockedInHierarchy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "get_lockedInHierarchy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::Timeline::TrackAsset::get_supportsNotifications()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "get_supportsNotifications",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::Timeline::TrackAsset::__internalAwake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "__internalAwake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::Timeline::TrackAsset::CreateCurves(::StringW curvesClipName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "CreateCurves",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, curvesClipName);
}
 ::UnityEngine::Playables::Playable ::UnityEngine::Timeline::TrackAsset::CreateTrackMixer(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject go, int32_t inputCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "CreateTrackMixer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(const_cast<void*>(instance), ___internal_method, graph, go, inputCount);
}
 ::UnityEngine::Playables::Playable ::UnityEngine::Timeline::TrackAsset::CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject go)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "CreatePlayable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(const_cast<void*>(instance), ___internal_method, graph, go);
}
 ::UnityEngine::Timeline::TimelineClip ::UnityEngine::Timeline::TrackAsset::CreateDefaultClip()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "CreateDefaultClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TimelineClip, false>(const_cast<void*>(instance), ___internal_method);
}
template<typename T>
 ::UnityEngine::Timeline::TimelineClip ::UnityEngine::Timeline::TrackAsset::CreateClip()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                        "CreateClip",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TimelineClip, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::Timeline::TrackAsset::DeleteClip(::UnityEngine::Timeline::TimelineClip clip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "DeleteClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimelineClip>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, clip);
}
 ::UnityEngine::Timeline::IMarker ::UnityEngine::Timeline::TrackAsset::CreateMarker(::System::Type type, double_t time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "CreateMarker",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::IMarker, false>(const_cast<void*>(instance), ___internal_method, type, time);
}
template<typename T>
 T ::UnityEngine::Timeline::TrackAsset::CreateMarker(double_t time)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                        "CreateMarker",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method, time);
}
 bool ::UnityEngine::Timeline::TrackAsset::DeleteMarker(::UnityEngine::Timeline::IMarker marker)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "DeleteMarker",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::IMarker>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, marker);
}
 ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker> ::UnityEngine::Timeline::TrackAsset::GetMarkers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "GetMarkers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker>, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::UnityEngine::Timeline::TrackAsset::GetMarkerCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "GetMarkerCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Timeline::IMarker ::UnityEngine::Timeline::TrackAsset::GetMarker(int32_t idx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "GetMarker",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::IMarker, false>(const_cast<void*>(instance), ___internal_method, idx);
}
 ::UnityEngine::Timeline::TimelineClip ::UnityEngine::Timeline::TrackAsset::CreateClip(::System::Type requestedType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "CreateClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TimelineClip, false>(const_cast<void*>(instance), ___internal_method, requestedType);
}
 ::UnityEngine::Timeline::TimelineClip ::UnityEngine::Timeline::TrackAsset::CreateAndAddNewClipOfType(::System::Type requestedType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "CreateAndAddNewClipOfType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TimelineClip, false>(const_cast<void*>(instance), ___internal_method, requestedType);
}
 ::UnityEngine::Timeline::TimelineClip ::UnityEngine::Timeline::TrackAsset::CreateClipOfType(::System::Type requestedType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "CreateClipOfType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TimelineClip, false>(const_cast<void*>(instance), ___internal_method, requestedType);
}
 ::UnityEngine::Timeline::TimelineClip ::UnityEngine::Timeline::TrackAsset::CreateClipFromPlayableAsset(::UnityEngine::Playables::IPlayableAsset asset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "CreateClipFromPlayableAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::IPlayableAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TimelineClip, false>(const_cast<void*>(instance), ___internal_method, asset);
}
 ::UnityEngine::Timeline::TimelineClip ::UnityEngine::Timeline::TrackAsset::CreateClipFromAsset(::UnityEngine::ScriptableObject playableAsset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "CreateClipFromAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScriptableObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TimelineClip, false>(const_cast<void*>(instance), ___internal_method, playableAsset);
}
 ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ScriptableObject> ::UnityEngine::Timeline::TrackAsset::GetMarkersRaw()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "GetMarkersRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ScriptableObject>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::Timeline::TrackAsset::ClearMarkers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "ClearMarkers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::Timeline::TrackAsset::AddMarker(::UnityEngine::ScriptableObject e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "AddMarker",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScriptableObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, e);
}
 bool ::UnityEngine::Timeline::TrackAsset::DeleteMarkerRaw(::UnityEngine::ScriptableObject marker)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "DeleteMarkerRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScriptableObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, marker);
}
 int32_t ::UnityEngine::Timeline::TrackAsset::GetTimeRangeHash()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "GetTimeRangeHash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::Timeline::TrackAsset::AddClip(::UnityEngine::Timeline::TimelineClip newClip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "AddClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimelineClip>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newClip);
}
 ::UnityEngine::Playables::Playable ::UnityEngine::Timeline::TrackAsset::CreateNotificationsPlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Playables::Playable mixerPlayable, ::UnityEngine::GameObject go, ::UnityEngine::Playables::Playable timelinePlayable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "CreateNotificationsPlayable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(const_cast<void*>(instance), ___internal_method, graph, mixerPlayable, go, timelinePlayable);
}
 ::UnityEngine::Playables::Playable ::UnityEngine::Timeline::TrackAsset::CreatePlayableGraph(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject go, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement> tree, ::UnityEngine::Playables::Playable timelinePlayable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "CreatePlayableGraph",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(const_cast<void*>(instance), ___internal_method, graph, go, tree, timelinePlayable);
}
 ::UnityEngine::Playables::Playable ::UnityEngine::Timeline::TrackAsset::CompileClips(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject go, ::System::Collections::Generic::IList_1<::UnityEngine::Timeline::TimelineClip> timelineClips, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement> tree)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "CompileClips",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Timeline::TimelineClip>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(const_cast<void*>(instance), ___internal_method, graph, go, timelineClips, tree);
}
 void ::UnityEngine::Timeline::TrackAsset::GatherCompilableTracks(::System::Collections::Generic::IList_1<::UnityEngine::Timeline::TrackAsset> tracks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "GatherCompilableTracks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Timeline::TrackAsset>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tracks);
}
 void ::UnityEngine::Timeline::TrackAsset::GatherNotifications(::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker> markers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "GatherNotifications",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, markers);
}
 ::UnityEngine::Playables::Playable ::UnityEngine::Timeline::TrackAsset::CreateMixerPlayableGraph(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject go, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement> tree)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "CreateMixerPlayableGraph",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(const_cast<void*>(instance), ___internal_method, graph, go, tree);
}
 void ::UnityEngine::Timeline::TrackAsset::ConfigureTrackAnimation(::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement> tree, ::UnityEngine::GameObject go, ::UnityEngine::Playables::Playable blend)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "ConfigureTrackAnimation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tree, go, blend);
}
 void ::UnityEngine::Timeline::TrackAsset::SortClips()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "SortClips",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::Timeline::TrackAsset::ClearClipsInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "ClearClipsInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::Timeline::TrackAsset::ClearSubTracksInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "ClearSubTracksInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::Timeline::TrackAsset::OnClipMove()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "OnClipMove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Timeline::TimelineClip ::UnityEngine::Timeline::TrackAsset::CreateNewClipContainerInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "CreateNewClipContainerInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TimelineClip, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::Timeline::TrackAsset::AddChild(::UnityEngine::Timeline::TrackAsset child)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "AddChild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TrackAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, child);
}
 void ::UnityEngine::Timeline::TrackAsset::MoveLastTrackBefore(::UnityEngine::Timeline::TrackAsset asset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "MoveLastTrackBefore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TrackAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, asset);
}
 bool ::UnityEngine::Timeline::TrackAsset::RemoveSubTrack(::UnityEngine::Timeline::TrackAsset child)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "RemoveSubTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TrackAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, child);
}
 void ::UnityEngine::Timeline::TrackAsset::RemoveClip(::UnityEngine::Timeline::TimelineClip clip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "RemoveClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimelineClip>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, clip);
}
 void ::UnityEngine::Timeline::TrackAsset::GetEvaluationTime(ByRef<double_t> outStart, ByRef<double_t> outDuration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "GetEvaluationTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<double_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<double_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, outStart, outDuration);
}
 void ::UnityEngine::Timeline::TrackAsset::GetSequenceTime(ByRef<double_t> outStart, ByRef<double_t> outDuration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "GetSequenceTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<double_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<double_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, outStart, outDuration);
}
 void ::UnityEngine::Timeline::TrackAsset::GatherProperties(::UnityEngine::Playables::PlayableDirector director, ::UnityEngine::Timeline::IPropertyCollector driver)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "GatherProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableDirector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::IPropertyCollector>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, director, driver);
}
 ::UnityEngine::GameObject ::UnityEngine::Timeline::TrackAsset::GetGameObjectBinding(::UnityEngine::Playables::PlayableDirector director)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "GetGameObjectBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableDirector>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject, false>(const_cast<void*>(instance), ___internal_method, director);
}
 bool ::UnityEngine::Timeline::TrackAsset::ValidateClipType(::System::Type clipType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "ValidateClipType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, clipType);
}
 void ::UnityEngine::Timeline::TrackAsset::OnCreateClip(::UnityEngine::Timeline::TimelineClip clip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "OnCreateClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimelineClip>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, clip);
}
 void ::UnityEngine::Timeline::TrackAsset::UpdateDuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "UpdateDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::UnityEngine::Timeline::TrackAsset::CalculateItemsHash()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "CalculateItemsHash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Playables::Playable ::UnityEngine::Timeline::TrackAsset::CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject gameObject, ::UnityEngine::Timeline::TimelineClip clip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "CreatePlayable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimelineClip>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(const_cast<void*>(instance), ___internal_method, graph, gameObject, clip);
}
 void ::UnityEngine::Timeline::TrackAsset::Invalidate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "Invalidate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 double_t ::UnityEngine::Timeline::TrackAsset::GetNotificationDuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "GetNotificationDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::Timeline::TrackAsset::CanCompileClips()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "CanCompileClips",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::Timeline::TrackAsset::CanCreateTrackMixer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "CanCreateTrackMixer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::Timeline::TrackAsset::IsCompilable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "IsCompilable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::Timeline::TrackAsset::UpdateChildTrackCache()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "UpdateChildTrackCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::UnityEngine::Timeline::TrackAsset::Hash()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "Hash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::UnityEngine::Timeline::TrackAsset::GetClipsHash()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "GetClipsHash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::UnityEngine::Timeline::TrackAsset::GetAnimationClipHash(::UnityEngine::AnimationClip clip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "GetAnimationClipHash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationClip>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, clip);
}
 bool ::UnityEngine::Timeline::TrackAsset::HasNotifications()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "HasNotifications",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::Timeline::TrackAsset::CanCompileNotifications()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "CanCompileNotifications",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::Timeline::TrackAsset::CanCreateMixerRecursive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            "CanCreateMixerRecursive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::UnityEngine::Timeline::TrackAsset::TrackAsset()  : ::UnityEngine::Playables::PlayableAsset(THROW_UNLESS(::il2cpp_utils::New<TrackAsset>())) {}
 void ::UnityEngine::Timeline::TrackAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
