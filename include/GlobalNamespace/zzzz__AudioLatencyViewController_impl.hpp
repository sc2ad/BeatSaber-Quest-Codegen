#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__AudioLatencyViewController_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
#include "GlobalNamespace/zzzz__FloatSO_def.hpp"
#include "GlobalNamespace/zzzz__SongPreviewPlayer_def.hpp"
#include "HMUI/zzzz__ToggleBinder_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "GlobalNamespace/zzzz__BoolSO_def.hpp"
#include "GlobalNamespace/zzzz__VisualMetronome_def.hpp"
#include "HMUI/zzzz__RangeValuesTextSlider_def.hpp"
//  Writing Method size for method: GlobalNamespace::AudioLatencyViewController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioLatencyViewController::*)(bool, bool, bool)>(&GlobalNamespace::AudioLatencyViewController::DidActivate)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x2154ed0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::AudioLatencyViewController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioLatencyViewController>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AudioLatencyViewController.DidDeactivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioLatencyViewController::*)(bool, bool)>(&GlobalNamespace::AudioLatencyViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21551e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::AudioLatencyViewController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioLatencyViewController>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AudioLatencyViewController.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioLatencyViewController::*)()>(&GlobalNamespace::AudioLatencyViewController::OnDestroy)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2155208;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::AudioLatencyViewController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioLatencyViewController>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AudioLatencyViewController.SliderValueDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioLatencyViewController::*)(HMUI::RangeValuesTextSlider, float_t)>(&GlobalNamespace::AudioLatencyViewController::SliderValueDidChange)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x21552ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioLatencyViewController>::get(),
                            "SliderValueDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::RangeValuesTextSlider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AudioLatencyViewController.HandleOverrideAudioLatencyToggleValueChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioLatencyViewController::*)(bool)>(&GlobalNamespace::AudioLatencyViewController::HandleOverrideAudioLatencyToggleValueChanged)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2155360;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioLatencyViewController>::get(),
                            "HandleOverrideAudioLatencyToggleValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AudioLatencyViewController.RefreshVisuals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioLatencyViewController::*)(bool)>(&GlobalNamespace::AudioLatencyViewController::RefreshVisuals)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x21550f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioLatencyViewController>::get(),
                            "RefreshVisuals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AudioLatencyViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioLatencyViewController::*)()>(&GlobalNamespace::AudioLatencyViewController::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x21553c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioLatencyViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::AudioLatencyViewController::__set__audioLatency(GlobalNamespace::FloatSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::FloatSO, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::FloatSO>(value));
}
constexpr GlobalNamespace::FloatSO GlobalNamespace::AudioLatencyViewController::__get__audioLatency() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::FloatSO, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AudioLatencyViewController::__set__overrideAudioLatency(GlobalNamespace::BoolSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BoolSO, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BoolSO>(value));
}
constexpr GlobalNamespace::BoolSO GlobalNamespace::AudioLatencyViewController::__get__overrideAudioLatency() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BoolSO, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AudioLatencyViewController::__set__setupCanvasGroup(UnityEngine::CanvasGroup value)  {
::cordl_internals::setInstanceField<UnityEngine::CanvasGroup, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::CanvasGroup>(value));
}
constexpr UnityEngine::CanvasGroup GlobalNamespace::AudioLatencyViewController::__get__setupCanvasGroup() const {
return ::cordl_internals::getInstanceField<UnityEngine::CanvasGroup, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AudioLatencyViewController::__set__overrideAudioLatencyToggle(UnityEngine::UI::Toggle value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Toggle, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Toggle>(value));
}
constexpr UnityEngine::UI::Toggle GlobalNamespace::AudioLatencyViewController::__get__overrideAudioLatencyToggle() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Toggle, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AudioLatencyViewController::__set__slider(HMUI::RangeValuesTextSlider value)  {
::cordl_internals::setInstanceField<HMUI::RangeValuesTextSlider, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HMUI::RangeValuesTextSlider>(value));
}
constexpr HMUI::RangeValuesTextSlider GlobalNamespace::AudioLatencyViewController::__get__slider() const {
return ::cordl_internals::getInstanceField<HMUI::RangeValuesTextSlider, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AudioLatencyViewController::__set__visualMetronome(GlobalNamespace::VisualMetronome value)  {
::cordl_internals::setInstanceField<GlobalNamespace::VisualMetronome, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::VisualMetronome>(value));
}
constexpr GlobalNamespace::VisualMetronome GlobalNamespace::AudioLatencyViewController::__get__visualMetronome() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::VisualMetronome, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AudioLatencyViewController::__set__disabledAlpha(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::AudioLatencyViewController::__get__disabledAlpha() const {
return ::cordl_internals::getInstanceField<float_t, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AudioLatencyViewController::__set__songPreviewPlayer(GlobalNamespace::SongPreviewPlayer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SongPreviewPlayer, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SongPreviewPlayer>(value));
}
constexpr GlobalNamespace::SongPreviewPlayer GlobalNamespace::AudioLatencyViewController::__get__songPreviewPlayer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SongPreviewPlayer, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AudioLatencyViewController::__set__toggleBinder(HMUI::ToggleBinder value)  {
::cordl_internals::setInstanceField<HMUI::ToggleBinder, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HMUI::ToggleBinder>(value));
}
constexpr HMUI::ToggleBinder GlobalNamespace::AudioLatencyViewController::__get__toggleBinder() const {
return ::cordl_internals::getInstanceField<HMUI::ToggleBinder, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::AudioLatencyViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioLatencyViewController>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
 void GlobalNamespace::AudioLatencyViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioLatencyViewController>::get(),
                            "DidDeactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
 void GlobalNamespace::AudioLatencyViewController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioLatencyViewController>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::AudioLatencyViewController::SliderValueDidChange(HMUI::RangeValuesTextSlider slider, float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioLatencyViewController>::get(),
                            "SliderValueDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::RangeValuesTextSlider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, slider, value);
}
 void GlobalNamespace::AudioLatencyViewController::HandleOverrideAudioLatencyToggleValueChanged(bool isOn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioLatencyViewController>::get(),
                            "HandleOverrideAudioLatencyToggleValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, isOn);
}
 void GlobalNamespace::AudioLatencyViewController::RefreshVisuals(bool overrideAudioLatencyIsEnabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioLatencyViewController>::get(),
                            "RefreshVisuals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, overrideAudioLatencyIsEnabled);
}
 GlobalNamespace::AudioLatencyViewController GlobalNamespace::AudioLatencyViewController::New_ctor()  {
GlobalNamespace::AudioLatencyViewController o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::AudioLatencyViewController>())};
return o;
}
 void GlobalNamespace::AudioLatencyViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioLatencyViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
