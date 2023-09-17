#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_impl.hpp"
namespace {
#include "UnityEngine/Timeline/zzzz__AnimationPlayableAsset_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
#include "UnityEngine/Timeline/zzzz__IPropertyCollector_def.hpp"
#include "UnityEngine/Timeline/zzzz__ITimelineClipAsset_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBinding_def.hpp"
#include "UnityEngine/Timeline/zzzz__MatchTargetFields_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/Timeline/zzzz__ClipCaps_def.hpp"
#include "UnityEngine/Timeline/zzzz__IPropertyPreview_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/Timeline/zzzz__AppliedOffsetMode_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset__LoopMode::____UnityEngine__Timeline__AnimationPlayableAsset__LoopMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset__LoopMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset__LoopMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset__LoopMode  ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset__LoopMode::UseSourceAsset{0};
constexpr ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset__LoopMode  ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset__LoopMode::On{1};
constexpr ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset__LoopMode  ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset__LoopMode::Off{2};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset__Versions::____UnityEngine__Timeline__AnimationPlayableAsset__Versions(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset__Versions::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset__Versions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset__Versions  ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset__Versions::Initial{0};
constexpr ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset__Versions  ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset__Versions::RotationAsEuler{1};
//  Writing Method size for method: ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset__AnimationPlayableAssetUpgrade.ConvertRotationToEuler
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Timeline::AnimationPlayableAsset)>(&::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset__AnimationPlayableAssetUpgrade::ConvertRotationToEuler)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2ab7c14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset__AnimationPlayableAssetUpgrade>::get(),
                            "ConvertRotationToEuler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::AnimationPlayableAsset>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset__AnimationPlayableAssetUpgrade::ConvertRotationToEuler(::UnityEngine::Timeline::AnimationPlayableAsset asset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset__AnimationPlayableAssetUpgrade>::get(),
                            "ConvertRotationToEuler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::AnimationPlayableAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asset);
}
//  Writing Method size for method: ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45::*)(int32_t)>(&::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2ab73b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45::*)()>(&::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ab7db0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45::*)()>(&::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45::MoveNext)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2ab7db4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45.System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableBinding (::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45::*)()>(&::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45::System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2ab7e44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45>::get(),
                            "System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45::*)()>(&::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2ab7e54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45::*)()>(&::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2ab7e94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45.System_Collections_Generic_IEnumerable_UnityEngine_Playables_PlayableBinding__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding> (::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45::*)()>(&::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45::System_Collections_Generic_IEnumerable_UnityEngine_Playables_PlayableBinding__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2ab7ef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45>::get(),
                            "System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator (::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45::*)()>(&::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ab7f98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>
constexpr  ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>() const noexcept {
return ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr  ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45::operator ::System::Collections::IEnumerable() const noexcept {
return ::System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>
constexpr  ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>() const noexcept {
return ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr  ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45::operator ::System::Collections::IEnumerator() const noexcept {
return ::System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::IDisposable
constexpr  ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45::__set___2__current(::UnityEngine::Playables::PlayableBinding value)  {
::cordl_internals::setInstanceField<::UnityEngine::Playables::PlayableBinding, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Playables::PlayableBinding>(value));
}
constexpr ::UnityEngine::Playables::PlayableBinding ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45::__get___2__current() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Playables::PlayableBinding, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45::__set___l__initialThreadId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45::__set___4__this(::UnityEngine::Timeline::AnimationPlayableAsset value)  {
::cordl_internals::setInstanceField<::UnityEngine::Timeline::AnimationPlayableAsset, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Timeline::AnimationPlayableAsset>(value));
}
constexpr ::UnityEngine::Timeline::AnimationPlayableAsset ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45::__get___4__this() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Timeline::AnimationPlayableAsset, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45>(__1__state))) {}
 void ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Playables::PlayableBinding ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45::System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45>::get(),
                            "System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableBinding, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding> ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45::System_Collections_Generic_IEnumerable_UnityEngine_Playables_PlayableBinding__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45>::get(),
                            "System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::IEnumerator ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset___get_outputs_d__45>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.get_position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Timeline::AnimationPlayableAsset::*)()>(&::UnityEngine::Timeline::AnimationPlayableAsset::get_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ab6f88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "get_position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.set_position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationPlayableAsset::*)(::UnityEngine::Vector3)>(&::UnityEngine::Timeline::AnimationPlayableAsset::set_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ab6f94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "set_position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.get_rotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::UnityEngine::Timeline::AnimationPlayableAsset::*)()>(&::UnityEngine::Timeline::AnimationPlayableAsset::get_rotation)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2ab6fa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "get_rotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.set_rotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationPlayableAsset::*)(::UnityEngine::Quaternion)>(&::UnityEngine::Timeline::AnimationPlayableAsset::set_rotation)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2ab6fc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "set_rotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.get_eulerAngles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Timeline::AnimationPlayableAsset::*)()>(&::UnityEngine::Timeline::AnimationPlayableAsset::get_eulerAngles)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ab7000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "get_eulerAngles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.set_eulerAngles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationPlayableAsset::*)(::UnityEngine::Vector3)>(&::UnityEngine::Timeline::AnimationPlayableAsset::set_eulerAngles)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ab700c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "set_eulerAngles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.get_useTrackMatchFields
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::AnimationPlayableAsset::*)()>(&::UnityEngine::Timeline::AnimationPlayableAsset::get_useTrackMatchFields)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ab7018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "get_useTrackMatchFields",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.set_useTrackMatchFields
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationPlayableAsset::*)(bool)>(&::UnityEngine::Timeline::AnimationPlayableAsset::set_useTrackMatchFields)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ab7020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "set_useTrackMatchFields",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.get_matchTargetFields
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::MatchTargetFields (::UnityEngine::Timeline::AnimationPlayableAsset::*)()>(&::UnityEngine::Timeline::AnimationPlayableAsset::get_matchTargetFields)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ab702c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "get_matchTargetFields",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.set_matchTargetFields
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationPlayableAsset::*)(::UnityEngine::Timeline::MatchTargetFields)>(&::UnityEngine::Timeline::AnimationPlayableAsset::set_matchTargetFields)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ab7034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "set_matchTargetFields",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::MatchTargetFields>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.get_removeStartOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::AnimationPlayableAsset::*)()>(&::UnityEngine::Timeline::AnimationPlayableAsset::get_removeStartOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ab703c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "get_removeStartOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.set_removeStartOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationPlayableAsset::*)(bool)>(&::UnityEngine::Timeline::AnimationPlayableAsset::set_removeStartOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ab7044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "set_removeStartOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.get_applyFootIK
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::AnimationPlayableAsset::*)()>(&::UnityEngine::Timeline::AnimationPlayableAsset::get_applyFootIK)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ab7050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "get_applyFootIK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.set_applyFootIK
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationPlayableAsset::*)(bool)>(&::UnityEngine::Timeline::AnimationPlayableAsset::set_applyFootIK)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ab7058;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "set_applyFootIK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.get_loop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset__LoopMode (::UnityEngine::Timeline::AnimationPlayableAsset::*)()>(&::UnityEngine::Timeline::AnimationPlayableAsset::get_loop)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ab7064;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "get_loop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.set_loop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationPlayableAsset::*)(::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset__LoopMode)>(&::UnityEngine::Timeline::AnimationPlayableAsset::set_loop)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ab706c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "set_loop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset__LoopMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.get_hasRootTransforms
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::AnimationPlayableAsset::*)()>(&::UnityEngine::Timeline::AnimationPlayableAsset::get_hasRootTransforms)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2ab7074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "get_hasRootTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.get_appliedOffsetMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::AppliedOffsetMode (::UnityEngine::Timeline::AnimationPlayableAsset::*)()>(&::UnityEngine::Timeline::AnimationPlayableAsset::get_appliedOffsetMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ab71e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "get_appliedOffsetMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.set_appliedOffsetMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationPlayableAsset::*)(::UnityEngine::Timeline::AppliedOffsetMode)>(&::UnityEngine::Timeline::AnimationPlayableAsset::set_appliedOffsetMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ab71ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "set_appliedOffsetMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::AppliedOffsetMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.get_clip
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationClip (::UnityEngine::Timeline::AnimationPlayableAsset::*)()>(&::UnityEngine::Timeline::AnimationPlayableAsset::get_clip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ab71f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "get_clip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.set_clip
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationPlayableAsset::*)(::UnityEngine::AnimationClip)>(&::UnityEngine::Timeline::AnimationPlayableAsset::set_clip)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2ab71fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "set_clip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationClip>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.get_duration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::Timeline::AnimationPlayableAsset::*)()>(&::UnityEngine::Timeline::AnimationPlayableAsset::get_duration)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2ab72bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Timeline::AnimationPlayableAsset),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.get_outputs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding> (::UnityEngine::Timeline::AnimationPlayableAsset::*)()>(&::UnityEngine::Timeline::AnimationPlayableAsset::get_outputs)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2ab7340;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Timeline::AnimationPlayableAsset),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.CreatePlayable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::AnimationPlayableAsset::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject)>(&::UnityEngine::Timeline::AnimationPlayableAsset::CreatePlayable)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2ab73ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Timeline::AnimationPlayableAsset),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.CreatePlayable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::AnimationClip, ::UnityEngine::Vector3, ::UnityEngine::Vector3, bool, ::UnityEngine::Timeline::AppliedOffsetMode, bool, ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset__LoopMode)>(&::UnityEngine::Timeline::AnimationPlayableAsset::CreatePlayable)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x2ab74c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "CreatePlayable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationClip>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::AppliedOffsetMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset__LoopMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.ShouldApplyOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Timeline::AppliedOffsetMode, ::UnityEngine::AnimationClip)>(&::UnityEngine::Timeline::AnimationPlayableAsset::ShouldApplyOffset)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2ab78ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "ShouldApplyOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::AppliedOffsetMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationClip>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.ShouldApplyScaleRemove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Timeline::AppliedOffsetMode)>(&::UnityEngine::Timeline::AnimationPlayableAsset::ShouldApplyScaleRemove)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2ab788c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "ShouldApplyScaleRemove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::AppliedOffsetMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.get_clipCaps
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::ClipCaps (::UnityEngine::Timeline::AnimationPlayableAsset::*)()>(&::UnityEngine::Timeline::AnimationPlayableAsset::get_clipCaps)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ab7920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "get_clipCaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.ResetOffsets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationPlayableAsset::*)()>(&::UnityEngine::Timeline::AnimationPlayableAsset::ResetOffsets)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2ab7a08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "ResetOffsets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.GatherProperties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationPlayableAsset::*)(::UnityEngine::Playables::PlayableDirector, ::UnityEngine::Timeline::IPropertyCollector)>(&::UnityEngine::Timeline::AnimationPlayableAsset::GatherProperties)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2ab7a74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "GatherProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableDirector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::IPropertyCollector>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.HasRootTransforms
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::AnimationClip)>(&::UnityEngine::Timeline::AnimationPlayableAsset::HasRootTransforms)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2ab7118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "HasRootTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationClip>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationPlayableAsset::*)()>(&::UnityEngine::Timeline::AnimationPlayableAsset::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2ab7b20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationPlayableAsset::*)()>(&::UnityEngine::Timeline::AnimationPlayableAsset::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2ab7b80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset.OnUpgradeFromVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationPlayableAsset::*)(int32_t)>(&::UnityEngine::Timeline::AnimationPlayableAsset::OnUpgradeFromVersion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2ab7c04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "OnUpgradeFromVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationPlayableAsset._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationPlayableAsset::*)()>(&::UnityEngine::Timeline::AnimationPlayableAsset::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2ab7c60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::UnityEngine::Timeline::ITimelineClipAsset
constexpr  ::UnityEngine::Timeline::AnimationPlayableAsset::operator ::UnityEngine::Timeline::ITimelineClipAsset() const noexcept {
return ::UnityEngine::Timeline::ITimelineClipAsset(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::UnityEngine::Timeline::IPropertyPreview
constexpr  ::UnityEngine::Timeline::AnimationPlayableAsset::operator ::UnityEngine::Timeline::IPropertyPreview() const noexcept {
return ::UnityEngine::Timeline::IPropertyPreview(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::UnityEngine::ISerializationCallbackReceiver
constexpr  ::UnityEngine::Timeline::AnimationPlayableAsset::operator ::UnityEngine::ISerializationCallbackReceiver() const noexcept {
return ::UnityEngine::ISerializationCallbackReceiver(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::Timeline::AnimationPlayableAsset::__set_m_Clip(::UnityEngine::AnimationClip value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationClip, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::AnimationClip>(value));
}
constexpr ::UnityEngine::AnimationClip ::UnityEngine::Timeline::AnimationPlayableAsset::__get_m_Clip() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::Timeline::AnimationPlayableAsset::__set_m_Position(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::UnityEngine::Timeline::AnimationPlayableAsset::__get_m_Position() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::Timeline::AnimationPlayableAsset::__set_m_EulerAngles(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::UnityEngine::Timeline::AnimationPlayableAsset::__get_m_EulerAngles() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::Timeline::AnimationPlayableAsset::__set_m_UseTrackMatchFields(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::Timeline::AnimationPlayableAsset::__get_m_UseTrackMatchFields() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::Timeline::AnimationPlayableAsset::__set_m_MatchTargetFields(::UnityEngine::Timeline::MatchTargetFields value)  {
::cordl_internals::setInstanceField<::UnityEngine::Timeline::MatchTargetFields, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Timeline::MatchTargetFields>(value));
}
constexpr ::UnityEngine::Timeline::MatchTargetFields ::UnityEngine::Timeline::AnimationPlayableAsset::__get_m_MatchTargetFields() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Timeline::MatchTargetFields, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::Timeline::AnimationPlayableAsset::__set_m_RemoveStartOffset(bool value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::Timeline::AnimationPlayableAsset::__get_m_RemoveStartOffset() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::Timeline::AnimationPlayableAsset::__set_m_ApplyFootIK(bool value)  {
::cordl_internals::setInstanceField<bool, 0x41>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::Timeline::AnimationPlayableAsset::__get_m_ApplyFootIK() const {
return ::cordl_internals::getInstanceField<bool, 0x41>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::Timeline::AnimationPlayableAsset::__set_m_Loop(::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset__LoopMode value)  {
::cordl_internals::setInstanceField<::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset__LoopMode, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset__LoopMode>(value));
}
constexpr ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset__LoopMode ::UnityEngine::Timeline::AnimationPlayableAsset::__get_m_Loop() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset__LoopMode, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::Timeline::AnimationPlayableAsset::__set__appliedOffsetMode_k__BackingField(::UnityEngine::Timeline::AppliedOffsetMode value)  {
::cordl_internals::setInstanceField<::UnityEngine::Timeline::AppliedOffsetMode, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Timeline::AppliedOffsetMode>(value));
}
constexpr ::UnityEngine::Timeline::AppliedOffsetMode ::UnityEngine::Timeline::AnimationPlayableAsset::__get__appliedOffsetMode_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Timeline::AppliedOffsetMode, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::UnityEngine::Timeline::AnimationPlayableAsset::__set_k_LatestVersion(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "k_LatestVersion", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get>(std::forward<int32_t>(value));
}
 int32_t ::UnityEngine::Timeline::AnimationPlayableAsset::__get_k_LatestVersion()  {
return ::cordl_internals::getStaticField<int32_t, "k_LatestVersion", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get>();
}
constexpr void ::UnityEngine::Timeline::AnimationPlayableAsset::__set_m_Version(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Timeline::AnimationPlayableAsset::__get_m_Version() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::Timeline::AnimationPlayableAsset::__set_m_Rotation(::UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion ::UnityEngine::Timeline::AnimationPlayableAsset::__get_m_Rotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::UnityEngine::Vector3 ::UnityEngine::Timeline::AnimationPlayableAsset::get_position()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "get_position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::Timeline::AnimationPlayableAsset::set_position(::UnityEngine::Vector3 value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "set_position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::Quaternion ::UnityEngine::Timeline::AnimationPlayableAsset::get_rotation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "get_rotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::Timeline::AnimationPlayableAsset::set_rotation(::UnityEngine::Quaternion value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "set_rotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::Vector3 ::UnityEngine::Timeline::AnimationPlayableAsset::get_eulerAngles()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "get_eulerAngles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::Timeline::AnimationPlayableAsset::set_eulerAngles(::UnityEngine::Vector3 value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "set_eulerAngles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::UnityEngine::Timeline::AnimationPlayableAsset::get_useTrackMatchFields()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "get_useTrackMatchFields",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::Timeline::AnimationPlayableAsset::set_useTrackMatchFields(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "set_useTrackMatchFields",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::Timeline::MatchTargetFields ::UnityEngine::Timeline::AnimationPlayableAsset::get_matchTargetFields()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "get_matchTargetFields",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::MatchTargetFields, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::Timeline::AnimationPlayableAsset::set_matchTargetFields(::UnityEngine::Timeline::MatchTargetFields value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "set_matchTargetFields",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::MatchTargetFields>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::UnityEngine::Timeline::AnimationPlayableAsset::get_removeStartOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "get_removeStartOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::Timeline::AnimationPlayableAsset::set_removeStartOffset(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "set_removeStartOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::UnityEngine::Timeline::AnimationPlayableAsset::get_applyFootIK()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "get_applyFootIK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::Timeline::AnimationPlayableAsset::set_applyFootIK(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "set_applyFootIK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset__LoopMode ::UnityEngine::Timeline::AnimationPlayableAsset::get_loop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "get_loop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset__LoopMode, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::Timeline::AnimationPlayableAsset::set_loop(::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset__LoopMode value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "set_loop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset__LoopMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::UnityEngine::Timeline::AnimationPlayableAsset::get_hasRootTransforms()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "get_hasRootTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Timeline::AppliedOffsetMode ::UnityEngine::Timeline::AnimationPlayableAsset::get_appliedOffsetMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "get_appliedOffsetMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::AppliedOffsetMode, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::Timeline::AnimationPlayableAsset::set_appliedOffsetMode(::UnityEngine::Timeline::AppliedOffsetMode value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "set_appliedOffsetMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::AppliedOffsetMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::AnimationClip ::UnityEngine::Timeline::AnimationPlayableAsset::get_clip()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "get_clip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationClip, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::Timeline::AnimationPlayableAsset::set_clip(::UnityEngine::AnimationClip value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "set_clip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationClip>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 double_t ::UnityEngine::Timeline::AnimationPlayableAsset::get_duration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "get_duration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding> ::UnityEngine::Timeline::AnimationPlayableAsset::get_outputs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "get_outputs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Playables::Playable ::UnityEngine::Timeline::AnimationPlayableAsset::CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject go)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "CreatePlayable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(const_cast<void*>(instance), ___internal_method, graph, go);
}
 ::UnityEngine::Playables::Playable ::UnityEngine::Timeline::AnimationPlayableAsset::CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::AnimationClip clip, ::UnityEngine::Vector3 positionOffset, ::UnityEngine::Vector3 eulerOffset, bool removeStartOffset, ::UnityEngine::Timeline::AppliedOffsetMode mode, bool applyFootIK, ::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset__LoopMode loop)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "CreatePlayable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationClip>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::AppliedOffsetMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::____UnityEngine__Timeline__AnimationPlayableAsset__LoopMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(nullptr, ___internal_method, graph, clip, positionOffset, eulerOffset, removeStartOffset, mode, applyFootIK, loop);
}
 bool ::UnityEngine::Timeline::AnimationPlayableAsset::ShouldApplyOffset(::UnityEngine::Timeline::AppliedOffsetMode mode, ::UnityEngine::AnimationClip clip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "ShouldApplyOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::AppliedOffsetMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationClip>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, mode, clip);
}
 bool ::UnityEngine::Timeline::AnimationPlayableAsset::ShouldApplyScaleRemove(::UnityEngine::Timeline::AppliedOffsetMode mode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "ShouldApplyScaleRemove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::AppliedOffsetMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, mode);
}
 ::UnityEngine::Timeline::ClipCaps ::UnityEngine::Timeline::AnimationPlayableAsset::get_clipCaps()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "get_clipCaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::ClipCaps, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::Timeline::AnimationPlayableAsset::ResetOffsets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "ResetOffsets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::Timeline::AnimationPlayableAsset::GatherProperties(::UnityEngine::Playables::PlayableDirector director, ::UnityEngine::Timeline::IPropertyCollector driver)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "GatherProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableDirector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::IPropertyCollector>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, director, driver);
}
 bool ::UnityEngine::Timeline::AnimationPlayableAsset::HasRootTransforms(::UnityEngine::AnimationClip clip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "HasRootTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationClip>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, clip);
}
 void ::UnityEngine::Timeline::AnimationPlayableAsset::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::Timeline::AnimationPlayableAsset::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::Timeline::AnimationPlayableAsset::OnUpgradeFromVersion(int32_t oldVersion)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            "OnUpgradeFromVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, oldVersion);
}
// Ctor Parameters []
 ::UnityEngine::Timeline::AnimationPlayableAsset::AnimationPlayableAsset()  : ::UnityEngine::Playables::PlayableAsset(THROW_UNLESS(::il2cpp_utils::New<AnimationPlayableAsset>())) {}
 void ::UnityEngine::Timeline::AnimationPlayableAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationPlayableAsset>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
