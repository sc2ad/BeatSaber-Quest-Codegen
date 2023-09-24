#pragma once
#include "HMUI/zzzz__CurvedCanvasSettingsHelper_def.hpp"
#include "HMUI/zzzz__CurvedCanvasSettings_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: HMUI::CurvedCanvasSettingsHelper.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::CurvedCanvasSettingsHelper::*)()>(&HMUI::CurvedCanvasSettingsHelper::Reset)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1fa8960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::CurvedCanvasSettingsHelper>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::CurvedCanvasSettingsHelper.GetCurvedCanvasSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::CurvedCanvasSettings (HMUI::CurvedCanvasSettingsHelper::*)(UnityEngine::Canvas)>(&HMUI::CurvedCanvasSettingsHelper::GetCurvedCanvasSettings)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x1fa8974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::CurvedCanvasSettingsHelper>::get(),
                            "GetCurvedCanvasSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Canvas>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::CurvedCanvasSettingsHelper.GetCurvedCanvasSettingsForCanvas
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::CurvedCanvasSettings (*)(UnityEngine::Canvas)>(&HMUI::CurvedCanvasSettingsHelper::GetCurvedCanvasSettingsForCanvas)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1fa8b60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::CurvedCanvasSettingsHelper>::get(),
                            "GetCurvedCanvasSettingsForCanvas",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Canvas>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::CurvedCanvasSettingsHelper._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::CurvedCanvasSettingsHelper::*)()>(&HMUI::CurvedCanvasSettingsHelper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fa8c70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::CurvedCanvasSettingsHelper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::CurvedCanvasSettingsHelper::__set__cachedCanvas(UnityEngine::Canvas value)  {
::cordl_internals::setInstanceField<UnityEngine::Canvas, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Canvas>(value));
}
constexpr UnityEngine::Canvas HMUI::CurvedCanvasSettingsHelper::__get__cachedCanvas() const {
return ::cordl_internals::getInstanceField<UnityEngine::Canvas, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::CurvedCanvasSettingsHelper::__set__cachedCanvasIsRootCanvas(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HMUI::CurvedCanvasSettingsHelper::__get__cachedCanvasIsRootCanvas() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::CurvedCanvasSettingsHelper::__set__curvedCanvasSettings(HMUI::CurvedCanvasSettings value)  {
::cordl_internals::setInstanceField<HMUI::CurvedCanvasSettings, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HMUI::CurvedCanvasSettings>(value));
}
constexpr HMUI::CurvedCanvasSettings HMUI::CurvedCanvasSettingsHelper::__get__curvedCanvasSettings() const {
return ::cordl_internals::getInstanceField<HMUI::CurvedCanvasSettings, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::CurvedCanvasSettingsHelper::__set__hasCachedData(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HMUI::CurvedCanvasSettingsHelper::__get__hasCachedData() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void HMUI::CurvedCanvasSettingsHelper::__set__curvedCanvasCache(System::Collections::Generic::Dictionary_2<UnityEngine::Canvas,HMUI::CurvedCanvasSettings> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<UnityEngine::Canvas,HMUI::CurvedCanvasSettings>, "_curvedCanvasCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::CurvedCanvasSettingsHelper>::get>(std::forward<System::Collections::Generic::Dictionary_2<UnityEngine::Canvas,HMUI::CurvedCanvasSettings>>(value));
}
 System::Collections::Generic::Dictionary_2<UnityEngine::Canvas,HMUI::CurvedCanvasSettings> HMUI::CurvedCanvasSettingsHelper::__get__curvedCanvasCache()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<UnityEngine::Canvas,HMUI::CurvedCanvasSettings>, "_curvedCanvasCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::CurvedCanvasSettingsHelper>::get>();
}
 void HMUI::CurvedCanvasSettingsHelper::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::CurvedCanvasSettingsHelper>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 HMUI::CurvedCanvasSettings HMUI::CurvedCanvasSettingsHelper::GetCurvedCanvasSettings(UnityEngine::Canvas canvas)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::CurvedCanvasSettingsHelper>::get(),
                            "GetCurvedCanvasSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Canvas>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HMUI::CurvedCanvasSettings, false>(const_cast<void*>(instance), ___internal_method, canvas);
}
 HMUI::CurvedCanvasSettings HMUI::CurvedCanvasSettingsHelper::GetCurvedCanvasSettingsForCanvas(UnityEngine::Canvas canvas)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::CurvedCanvasSettingsHelper>::get(),
                            "GetCurvedCanvasSettingsForCanvas",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Canvas>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HMUI::CurvedCanvasSettings, false>(nullptr, ___internal_method, canvas);
}
 HMUI::CurvedCanvasSettingsHelper HMUI::CurvedCanvasSettingsHelper::New_ctor()  {
HMUI::CurvedCanvasSettingsHelper o{THROW_UNLESS(::il2cpp_utils::New<HMUI::CurvedCanvasSettingsHelper>())};
return o;
}
 void HMUI::CurvedCanvasSettingsHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::CurvedCanvasSettingsHelper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
