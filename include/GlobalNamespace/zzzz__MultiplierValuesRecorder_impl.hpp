#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__MultiplierValuesRecorder_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__IScoreController_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MultiplierValuesRecorder__MultiplierValue._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__MultiplierValuesRecorder__MultiplierValue::*)(int32_t, float_t)>(&::GlobalNamespace::____GlobalNamespace__MultiplierValuesRecorder__MultiplierValue::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21082fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplierValuesRecorder__MultiplierValue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "multiplier", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "time", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__MultiplierValuesRecorder__MultiplierValue::____GlobalNamespace__MultiplierValuesRecorder__MultiplierValue(int32_t multiplier, float_t time) noexcept : ::bs_hook::ValueTypeWrapper() {this->multiplier = multiplier;
this->time = time;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MultiplierValuesRecorder__MultiplierValue::__set_multiplier(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__MultiplierValuesRecorder__MultiplierValue::__get_multiplier() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MultiplierValuesRecorder__MultiplierValue::__set_time(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__MultiplierValuesRecorder__MultiplierValue::__get_time() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__MultiplierValuesRecorder__MultiplierValue::_ctor(int32_t multiplier, float_t time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MultiplierValuesRecorder__MultiplierValue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, multiplier, time);
}
//  Writing Method size for method: ::GlobalNamespace::MultiplierValuesRecorder.get_multiplierValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__MultiplierValuesRecorder__MultiplierValue> (::GlobalNamespace::MultiplierValuesRecorder::*)()>(&::GlobalNamespace::MultiplierValuesRecorder::get_multiplierValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2108000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplierValuesRecorder>::get(),
                            "get_multiplierValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplierValuesRecorder.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplierValuesRecorder::*)()>(&::GlobalNamespace::MultiplierValuesRecorder::Start)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2108008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplierValuesRecorder>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplierValuesRecorder.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplierValuesRecorder::*)()>(&::GlobalNamespace::MultiplierValuesRecorder::OnDestroy)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x21080f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplierValuesRecorder>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplierValuesRecorder.HandleScoreControllerMultiplierDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplierValuesRecorder::*)(int32_t, float_t)>(&::GlobalNamespace::MultiplierValuesRecorder::HandleScoreControllerMultiplierDidChange)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2108200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplierValuesRecorder>::get(),
                            "HandleScoreControllerMultiplierDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplierValuesRecorder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplierValuesRecorder::*)()>(&::GlobalNamespace::MultiplierValuesRecorder::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2108308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplierValuesRecorder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::MultiplierValuesRecorder::__set__scoreController(::GlobalNamespace::IScoreController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IScoreController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IScoreController>(value));
}
constexpr ::GlobalNamespace::IScoreController ::GlobalNamespace::MultiplierValuesRecorder::__get__scoreController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IScoreController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplierValuesRecorder::__set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AudioTimeSyncController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::AudioTimeSyncController>(value));
}
constexpr ::GlobalNamespace::AudioTimeSyncController ::GlobalNamespace::MultiplierValuesRecorder::__get__audioTimeSyncController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AudioTimeSyncController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplierValuesRecorder::__set__multiplierValues(::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__MultiplierValuesRecorder__MultiplierValue> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__MultiplierValuesRecorder__MultiplierValue>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__MultiplierValuesRecorder__MultiplierValue>>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__MultiplierValuesRecorder__MultiplierValue> ::GlobalNamespace::MultiplierValuesRecorder::__get__multiplierValues() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__MultiplierValuesRecorder__MultiplierValue>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__MultiplierValuesRecorder__MultiplierValue> ::GlobalNamespace::MultiplierValuesRecorder::get_multiplierValues()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplierValuesRecorder>::get(),
                            "get_multiplierValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__MultiplierValuesRecorder__MultiplierValue>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MultiplierValuesRecorder::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplierValuesRecorder>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MultiplierValuesRecorder::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplierValuesRecorder>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MultiplierValuesRecorder::HandleScoreControllerMultiplierDidChange(int32_t multiplier, float_t multiplierProgress)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplierValuesRecorder>::get(),
                            "HandleScoreControllerMultiplierDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, multiplier, multiplierProgress);
}
// Ctor Parameters []
 ::GlobalNamespace::MultiplierValuesRecorder::MultiplierValuesRecorder()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<MultiplierValuesRecorder>())) {}
 void ::GlobalNamespace::MultiplierValuesRecorder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplierValuesRecorder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
